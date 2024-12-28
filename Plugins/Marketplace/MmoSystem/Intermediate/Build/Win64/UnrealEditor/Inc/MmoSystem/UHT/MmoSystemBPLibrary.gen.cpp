// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/MmoSystemBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMmoSystemBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMmoSystemBPLibrary();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMmoSystemBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMmoSystemBPLibrary Function MmoSystemSampleFunction
struct Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics
{
	struct MmoSystemBPLibrary_eventMmoSystemSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MmoSystemTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "MmoSystem sample test testing" },
		{ "ModuleRelativePath", "MmoSystemBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MmoSystemBPLibrary_eventMmoSystemSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MmoSystemBPLibrary_eventMmoSystemSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMmoSystemBPLibrary, nullptr, "MmoSystemSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::MmoSystemBPLibrary_eventMmoSystemSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::MmoSystemBPLibrary_eventMmoSystemSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMmoSystemBPLibrary::execMmoSystemSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMmoSystemBPLibrary::MmoSystemSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UMmoSystemBPLibrary Function MmoSystemSampleFunction

// Begin Class UMmoSystemBPLibrary
void UMmoSystemBPLibrary::StaticRegisterNativesUMmoSystemBPLibrary()
{
	UClass* Class = UMmoSystemBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MmoSystemSampleFunction", &UMmoSystemBPLibrary::execMmoSystemSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMmoSystemBPLibrary);
UClass* Z_Construct_UClass_UMmoSystemBPLibrary_NoRegister()
{
	return UMmoSystemBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UMmoSystemBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "MmoSystemBPLibrary.h" },
		{ "ModuleRelativePath", "MmoSystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMmoSystemBPLibrary_MmoSystemSampleFunction, "MmoSystemSampleFunction" }, // 1848670412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMmoSystemBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMmoSystemBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMmoSystemBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMmoSystemBPLibrary_Statics::ClassParams = {
	&UMmoSystemBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMmoSystemBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMmoSystemBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMmoSystemBPLibrary()
{
	if (!Z_Registration_Info_UClass_UMmoSystemBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMmoSystemBPLibrary.OuterSingleton, Z_Construct_UClass_UMmoSystemBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMmoSystemBPLibrary.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMmoSystemBPLibrary>()
{
	return UMmoSystemBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMmoSystemBPLibrary);
UMmoSystemBPLibrary::~UMmoSystemBPLibrary() {}
// End Class UMmoSystemBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MmoProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMmoSystemBPLibrary, UMmoSystemBPLibrary::StaticClass, TEXT("UMmoSystemBPLibrary"), &Z_Registration_Info_UClass_UMmoSystemBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMmoSystemBPLibrary), 2856119070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MmoProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_3587651937(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MmoProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MmoProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
