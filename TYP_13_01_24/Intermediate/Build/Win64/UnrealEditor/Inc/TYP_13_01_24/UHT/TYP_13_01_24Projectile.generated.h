// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TYP_13_01_24Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TYP_13_01_24_TYP_13_01_24Projectile_generated_h
#error "TYP_13_01_24Projectile.generated.h already included, missing '#pragma once' in TYP_13_01_24Projectile.h"
#endif
#define TYP_13_01_24_TYP_13_01_24Projectile_generated_h

#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_SPARSE_DATA
#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_ACCESSORS
#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATYP_13_01_24Projectile(); \
	friend struct Z_Construct_UClass_ATYP_13_01_24Projectile_Statics; \
public: \
	DECLARE_CLASS(ATYP_13_01_24Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TYP_13_01_24"), NO_API) \
	DECLARE_SERIALIZER(ATYP_13_01_24Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATYP_13_01_24Projectile(ATYP_13_01_24Projectile&&); \
	NO_API ATYP_13_01_24Projectile(const ATYP_13_01_24Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATYP_13_01_24Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATYP_13_01_24Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATYP_13_01_24Projectile) \
	NO_API virtual ~ATYP_13_01_24Projectile();


#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_12_PROLOG
#define FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_SPARSE_DATA \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_ACCESSORS \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYP_13_01_24_API UClass* StaticClass<class ATYP_13_01_24Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
