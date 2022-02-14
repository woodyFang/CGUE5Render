// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyLoadTexture/Public/MyLoadTextureBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLoadTextureBPLibrary() {}
// Cross Module References
	MYLOADTEXTURE_API UEnum* Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType();
	UPackage* Z_Construct_UPackage__Script_MyLoadTexture();
	MYLOADTEXTURE_API UClass* Z_Construct_UClass_UMyLoadTextureBPLibrary_NoRegister();
	MYLOADTEXTURE_API UClass* Z_Construct_UClass_UMyLoadTextureBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EMyLoadTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType, Z_Construct_UPackage__Script_MyLoadTexture(), TEXT("EMyLoadTextureType"));
		}
		return Singleton;
	}
	template<> MYLOADTEXTURE_API UEnum* StaticEnum<EMyLoadTextureType::Type>()
	{
		return EMyLoadTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMyLoadTextureType(EMyLoadTextureType_StaticEnum, TEXT("/Script/MyLoadTexture"), TEXT("EMyLoadTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType_Hash() { return 2940277316U; }
	UEnum* Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyLoadTexture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMyLoadTextureType"), 0, Get_Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMyLoadTextureType::SRGB", (int64)EMyLoadTextureType::SRGB },
				{ "EMyLoadTextureType::Linear", (int64)EMyLoadTextureType::Linear },
				{ "EMyLoadTextureType::Normal", (int64)EMyLoadTextureType::Normal },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*///UENUM(BlueprintType)\n//namespace ESimulationQuery\n//{\n//\x09""enum Type\n//\x09{\n//\x09\x09None = 0 UMETA(Hidden),\n//\x09\x09/*Instances overlap with collision*/\n//\x09\x09""CollisionOverlap = 1,\n//\x09\x09/*Instances overlap with shade*/\n//\x09\x09ShadeOverlap = 2,\n//\x09\x09/*any overlap*/\n//\x09\x09""AnyOverlap = 3\n//\x09};\n//}\n" },
				{ "Linear.Name", "EMyLoadTextureType::Linear" },
				{ "ModuleRelativePath", "Public/MyLoadTextureBPLibrary.h" },
				{ "Normal.Name", "EMyLoadTextureType::Normal" },
				{ "SRGB.Name", "EMyLoadTextureType::SRGB" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n//UENUM(BlueprintType)\n//namespace ESimulationQuery\n//{\n//     enum Type\n//     {\n//             None = 0 UMETA(Hidden),\n//             Instances overlap with collision\n//             CollisionOverlap = 1,\n//             Instances overlap with shade\n//             ShadeOverlap = 2,\n//             any overlap\n//             AnyOverlap = 3\n//     };\n//}" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyLoadTexture,
				nullptr,
				"EMyLoadTextureType",
				"EMyLoadTextureType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UMyLoadTextureBPLibrary::execMyLoadTexture)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutColor);
		P_GET_OBJECT(UTexture2D,Z_Param_InMyTexture);
		P_GET_PROPERTY(FByteProperty,Z_Param_InLoadType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyLoadTextureBPLibrary::MyLoadTexture(Z_Param_Out_OutColor,Z_Param_InMyTexture,EMyLoadTextureType::Type(Z_Param_InLoadType));
		P_NATIVE_END;
	}
	void UMyLoadTextureBPLibrary::StaticRegisterNativesUMyLoadTextureBPLibrary()
	{
		UClass* Class = UMyLoadTextureBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyLoadTexture", &UMyLoadTextureBPLibrary::execMyLoadTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics
	{
		struct MyLoadTextureBPLibrary_eventMyLoadTexture_Parms
		{
			TArray<FLinearColor> OutColor;
			UTexture2D* InMyTexture;
			TEnumAsByte<EMyLoadTextureType::Type> InLoadType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMyTexture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InLoadType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_OutColor_Inner = { "OutColor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLoadTextureBPLibrary_eventMyLoadTexture_Parms, OutColor), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_InMyTexture = { "InMyTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLoadTextureBPLibrary_eventMyLoadTexture_Parms, InMyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_InLoadType = { "InLoadType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLoadTextureBPLibrary_eventMyLoadTexture_Parms, InLoadType), Z_Construct_UEnum_MyLoadTexture_EMyLoadTextureType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyLoadTextureBPLibrary_eventMyLoadTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyLoadTextureBPLibrary_eventMyLoadTexture_Parms), &Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_OutColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_OutColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_InMyTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_InLoadType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyLoadTextureTesting" },
		{ "ModuleRelativePath", "Public/MyLoadTextureBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyLoadTextureBPLibrary, nullptr, "MyLoadTexture", nullptr, nullptr, sizeof(MyLoadTextureBPLibrary_eventMyLoadTexture_Parms), Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyLoadTextureBPLibrary_NoRegister()
	{
		return UMyLoadTextureBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyLoadTexture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyLoadTextureBPLibrary_MyLoadTexture, "MyLoadTexture" }, // 2428870010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyLoadTextureBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MyLoadTextureBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLoadTextureBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::ClassParams = {
		&UMyLoadTextureBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLoadTextureBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyLoadTextureBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyLoadTextureBPLibrary, 3070717402);
	template<> MYLOADTEXTURE_API UClass* StaticClass<UMyLoadTextureBPLibrary>()
	{
		return UMyLoadTextureBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyLoadTextureBPLibrary(Z_Construct_UClass_UMyLoadTextureBPLibrary, &UMyLoadTextureBPLibrary::StaticClass, TEXT("/Script/MyLoadTexture"), TEXT("UMyLoadTextureBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLoadTextureBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
