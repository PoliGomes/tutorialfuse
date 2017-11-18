// This file was generated based on /Users/Poli/hikr/hikr.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class hikr_bundle :0
// {
// static hikr_bundle() :0
static void hikr_bundle__cctor__fn(uType* __type)
{
    hikr_bundle::backgroundd111a08d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[1/*"background-...*/]);
    hikr_bundle::EditHikePagefa34576e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[2/*"edithikepag...*/]);
    hikr_bundle::HomePage17ed0766_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[3/*"homepage-a6...*/]);
    hikr_bundle::natureda1f5714_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[4/*"nature-15b9...*/]);
    hikr_bundle::SplashPage20e9583a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[5/*"splashpage-...*/]);
}

static void hikr_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("hikr");
    ::STRINGS[1] = uString::Const("background-01212485.jpg");
    ::STRINGS[2] = uString::Const("edithikepage-c2b43310.js");
    ::STRINGS[3] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[4] = uString::Const("nature-15b9e892.mp4");
    ::STRINGS[5] = uString::Const("splashpage-7fac3464.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::backgroundd111a08d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::EditHikePagefa34576e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::HomePage17ed0766_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::natureda1f5714_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::SplashPage20e9583a_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("backgroundd111a08d", 0),
        new uField("EditHikePagefa34576e", 1),
        new uField("HomePage17ed0766", 2),
        new uField("natureda1f5714", 3),
        new uField("SplashPage20e9583a", 4));
}

uClassType* hikr_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("hikr_bundle", options);
    type->fp_build_ = hikr_bundle_build;
    type->fp_cctor_ = hikr_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::backgroundd111a08d_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::EditHikePagefa34576e_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::HomePage17ed0766_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::natureda1f5714_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::SplashPage20e9583a_;
// }

} // ::g
