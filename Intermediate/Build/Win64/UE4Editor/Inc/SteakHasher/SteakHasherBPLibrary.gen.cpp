// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteakHasher/Public/SteakHasherBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteakHasherBPLibrary() {}
// Cross Module References
	STEAKHASHER_API UClass* Z_Construct_UClass_USteakHasherBPLibrary_NoRegister();
	STEAKHASHER_API UClass* Z_Construct_UClass_USteakHasherBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SteakHasher();
// End Cross Module References
	DEFINE_FUNCTION(USteakHasherBPLibrary::execSteakHasherCityHash64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HashedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=USteakHasherBPLibrary::SteakHasherCityHash64(Z_Param_HashedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteakHasherBPLibrary::execSteakHasherCityHash32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HashedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteakHasherBPLibrary::SteakHasherCityHash32(Z_Param_HashedString);
		P_NATIVE_END;
	}
	void USteakHasherBPLibrary::StaticRegisterNativesUSteakHasherBPLibrary()
	{
		UClass* Class = USteakHasherBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SteakHasherCityHash32", &USteakHasherBPLibrary::execSteakHasherCityHash32 },
			{ "SteakHasherCityHash64", &USteakHasherBPLibrary::execSteakHasherCityHash64 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics
	{
		struct SteakHasherBPLibrary_eventSteakHasherCityHash32_Parms
		{
			FString HashedString;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HashedString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteakHasherBPLibrary_eventSteakHasherCityHash32_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::NewProp_HashedString = { "HashedString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteakHasherBPLibrary_eventSteakHasherCityHash32_Parms, HashedString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::NewProp_HashedString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::Function_MetaDataParams[] = {
		{ "Category", "CityHashing" },
		{ "DisplayName", "CityHash32" },
		{ "Keywords", "Hash function for a byte array. Most useful in 32-bit binaries." },
		{ "ModuleRelativePath", "Public/SteakHasherBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteakHasherBPLibrary, nullptr, "SteakHasherCityHash32", nullptr, nullptr, sizeof(SteakHasherBPLibrary_eventSteakHasherCityHash32_Parms), Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics
	{
		struct SteakHasherBPLibrary_eventSteakHasherCityHash64_Parms
		{
			FString HashedString;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HashedString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteakHasherBPLibrary_eventSteakHasherCityHash64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::NewProp_HashedString = { "HashedString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteakHasherBPLibrary_eventSteakHasherCityHash64_Parms, HashedString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::NewProp_HashedString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::Function_MetaDataParams[] = {
		{ "Category", "CityHashing" },
		{ "DisplayName", "CityHash64" },
		{ "Keywords", "Hash function for a byte array." },
		{ "ModuleRelativePath", "Public/SteakHasherBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteakHasherBPLibrary, nullptr, "SteakHasherCityHash64", nullptr, nullptr, sizeof(SteakHasherBPLibrary_eventSteakHasherCityHash64_Parms), Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteakHasherBPLibrary_NoRegister()
	{
		return USteakHasherBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USteakHasherBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteakHasherBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteakHasher,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteakHasherBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash32, "SteakHasherCityHash32" }, // 3400020300
		{ &Z_Construct_UFunction_USteakHasherBPLibrary_SteakHasherCityHash64, "SteakHasherCityHash64" }, // 860682634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteakHasherBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "SteakHasherBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SteakHasherBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteakHasherBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteakHasherBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteakHasherBPLibrary_Statics::ClassParams = {
		&USteakHasherBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteakHasherBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteakHasherBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteakHasherBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteakHasherBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteakHasherBPLibrary, 2434038274);
	template<> STEAKHASHER_API UClass* StaticClass<USteakHasherBPLibrary>()
	{
		return USteakHasherBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteakHasherBPLibrary(Z_Construct_UClass_USteakHasherBPLibrary, &USteakHasherBPLibrary::StaticClass, TEXT("/Script/SteakHasher"), TEXT("USteakHasherBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteakHasherBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
