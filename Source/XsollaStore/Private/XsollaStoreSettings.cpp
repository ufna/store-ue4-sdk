// Copyright 2019 Xsolla Inc. All Rights Reserved.
// @author Vladimir Alyamkin <ufna@ufna.ru>

#include "XsollaStoreSettings.h"

UXsollaStoreSettings::UXsollaStoreSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	EnableSandbox = true;
	EnableSandboxInShippingBuild = false;
	UsePlatformBrowser = false;
	BuildForSteam = false;
	UseCrossPlatformAccountLinking = false;
	DemoProjectID = TEXT("44056");
	PaymentInterfaceTheme = EXsollaPaymentUiTheme::Dark;
}
