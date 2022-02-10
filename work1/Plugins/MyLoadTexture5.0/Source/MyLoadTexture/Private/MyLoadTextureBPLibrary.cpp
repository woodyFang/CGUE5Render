// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyLoadTextureBPLibrary.h"
#include "MyLoadTexture.h"

UMyLoadTextureBPLibrary::UMyLoadTextureBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}




bool UMyLoadTextureBPLibrary::MyLoadTexture(TArray<FLinearColor>& OutColor, UTexture2D* InMyTexture, EMyLoadTextureType::Type InLoadType)
{
	if (InMyTexture == nullptr)
		return false;

	//TextureCompressionSettings OldCompressionSettings = InMyTexture->CompressionSettings.GetValue();
	//TextureMipGenSettings OldMipGenSettings = InMyTexture->MipGenSettings.GetValue();
	//bool OldSRGB = InMyTexture->SRGB;

	//InMyTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	//InMyTexture->MipGenSettings = TEnumAsByte<enum TextureMipGenSettings>(TextureMipGenSettings::TMGS_NoMipmaps);

	//InMyTexture->SRGB = false;
	//InMyTexture->UpdateResource();

	const FColor* FormatedImageData = (const FColor*)(InMyTexture->GetPlatformData()->Mips[0].BulkData.LockReadOnly());

	if(FormatedImageData == nullptr)
		return false;

	FIntPoint WH = InMyTexture->GetImportedSize();
	switch (InLoadType)
	{
		case EMyLoadTextureType::SRGB:
			for (int32 Y = 0; Y < WH.Y; ++Y)
			{
				for (int32 X = 0; X < WH.X; ++X)
				{
					//读出来的颜色是图片的sRGB颜色，也就是伽马空间的颜色
					FColor PixelColor = FormatedImageData[Y * WH.X + X];

					//伽马空间颜色变为了线性空间颜色
					FLinearColor linearColor(PixelColor);
					OutColor.Add(FVector(linearColor));
				}
			}
			break;
		case EMyLoadTextureType::Linear:
			for (int32 Y = 0; Y < WH.Y; ++Y)
			{
				for (int32 X = 0; X < WH.X; ++X)
				{
					//读出来的颜色是线性空间颜色
					FColor PixelColor = FormatedImageData[Y * WH.X + X];

					//除以255转换到[0,1]
					FLinearColor LinCol(FVector(PixelColor.R / 255.f));
					OutColor.Add(LinCol);
				}
			}
			break;
		case EMyLoadTextureType::Normal:
			for (int32 Y = 0; Y < WH.Y; ++Y)
			{
				for (int32 X = 0; X < WH.X; ++X)
				{
					//读出来的颜色是线性空间颜色
					FColor PixelColor = FormatedImageData[Y * WH.X + X];

					//除以255转换到了[0,1]，乘以2减去FVector(1.f)解压了法线
					//LinCol = LinCol / 255.f *2 -FVector(1.f);
					FLinearColor LinCol(PixelColor.R / 127.5f - 1.f, PixelColor.G / 127.5f - 1.f, PixelColor.B / 127.5f - 1.f);
					OutColor.Add(LinCol);
				}
			}
			break;
	}
	InMyTexture->PlatformData->Mips[0].BulkData.Unlock();

	//InMyTexture->CompressionSettings = OldCompressionSettings;
	//InMyTexture->MipGenSettings = OldMipGenSettings;
	//InMyTexture->SRGB = OldSRGB;
	//InMyTexture->UpdateResource();

	return true;
}













