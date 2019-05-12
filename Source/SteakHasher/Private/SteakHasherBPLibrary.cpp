// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SteakHasherBPLibrary.h"
#include "SteakHasher.h"


USteakHasherBPLibrary::USteakHasherBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int USteakHasherBPLibrary::SteakHasherCityHash32(FString HashedString)
{
	const char* cha = TCHAR_TO_ANSI(*HashedString);
	
	uint32 hashed = CityHash32(cha, HashedString.Len());
	return hashed;
}

int64 USteakHasherBPLibrary::SteakHasherCityHash64(FString HashedString)
{
	const char* cha = TCHAR_TO_ANSI(*HashedString);

	int64 hashed = CityHash64(cha, HashedString.Len());
	return hashed;
}

