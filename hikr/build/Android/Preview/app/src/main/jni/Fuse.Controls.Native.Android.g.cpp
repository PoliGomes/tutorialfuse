// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCap-526a856d.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.-118b98c3.h>
#include <Fuse.Controls.Native.-3a814c3c.h>
#include <Fuse.Controls.Native.-43e7fbf.h>
#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.-51b6e8e5.h>
#include <Fuse.Controls.Native.-56f4c151.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-6009f819.h>
#include <Fuse.Controls.Native.-6178e8bc.h>
#include <Fuse.Controls.Native.-65e8a589.h>
#include <Fuse.Controls.Native.-6c93d881.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-7babb833.h>
#include <Fuse.Controls.Native.-88fc1c1d.h>
#include <Fuse.Controls.Native.-890b856e.h>
#include <Fuse.Controls.Native.-8a1d0695.h>
#include <Fuse.Controls.Native.-952ea184.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.-a0a2bb3d.h>
#include <Fuse.Controls.Native.-ae84b26e.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-c578532e.h>
#include <Fuse.Controls.Native.-c67cabe.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-cb7bb609.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-e81f3684.h>
#include <Fuse.Controls.Native.-eb2a3c99.h>
#include <Fuse.Controls.Native.-f43d469d.h>
#include <Fuse.Controls.Native.-f67615b8.h>
#include <Fuse.Controls.Native.-f715ad8a.h>
#include <Fuse.Controls.Native.-f8b7cf50.h>
#include <Fuse.Controls.Native.-fb992a16.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInp-90db19ac.h>
#include <Fuse.Controls.TextInp-cfb86f57.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Color.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[9];
static uType* TYPES[35];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Button :9
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(5);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Button__New4_fn, 0, true, type, 0),
        new uFunction("set_Text", NULL, (void*)Button__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New4_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public Button() :11
void Button__ctor_8_fn(Button* __this)
{
    __this->ctor_8();
}

// private static Java.Object Create() :19
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public Button New() :11
void Button__New4_fn(Button** __retval)
{
    *__retval = Button::New4();
}

// private static void SetText(Java.Object handle, string text) :25
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :15
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button() [instance] :11
void Button::ctor_8()
{
    ctor_6(Button::Create());
}

// public void set_Text(string value) [instance] :15
void Button::Text(uString* value)
{
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :19
::g::Java::Object* Button::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create109", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New() [static] :11
Button* Button::New4()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_8();
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :25
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText110", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class CanvasViewGroup :43
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Drawing::NativeSurface_typeof(), offsetof(::g::Fuse::Controls::Native::Android::CanvasViewGroup, _nativeSurface), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::CanvasViewGroup, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::CanvasViewGroup, _surfaceDrawable), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CanvasViewGroup__New4_fn, 0, true, type, 2, ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), ::g::Uno::Float_typeof()));
}

CanvasViewGroup_type* CanvasViewGroup_typeof()
{
    static uSStrong<CanvasViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :49
void CanvasViewGroup__ctor_3_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_3(surfaceDrawable, *pixelsPerPoint);
}

// public override sealed void Dispose() :105
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_surfaceDrawable = NULL;
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface() :57
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        __this->InstallDrawlistener(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback) :81
void CanvasViewGroup__InstallDrawlistener_fn(CanvasViewGroup* __this, ::g::Java::Object* handle, uDelegate* callback)
{
    __this->InstallDrawlistener(handle, callback);
}

// private static Java.Object Instantiate() :94
void CanvasViewGroup__Instantiate_fn(::g::Java::Object** __retval)
{
    *__retval = CanvasViewGroup::Instantiate();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :49
void CanvasViewGroup__New4_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New4(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Java.Object canvas) :67
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, ::g::Java::Object* canvas)
{
    __this->OnDraw(canvas);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance] :49
void CanvasViewGroup::ctor_3(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_(CanvasViewGroup::Instantiate());
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback) [instance] :81
void CanvasViewGroup::InstallDrawlistener(::g::Java::Object* handle, uDelegate* callback)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallDrawlistener111", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/foreign/Uno/Action_Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Action_Object");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_callback);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnDraw(Java.Object canvas) [instance] :67
void CanvasViewGroup::OnDraw(::g::Java::Object* canvas)
{
    uStackFrame __("Fuse.Controls.Native.Android.CanvasViewGroup", "OnDraw(Java.Object)");

    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 71, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(canvas, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static Java.Object Instantiate() [static] :94
::g::Java::Object* CanvasViewGroup::Instantiate()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Instantiate112", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static] :49
CanvasViewGroup* CanvasViewGroup::New4(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_3(surfaceDrawable, pixelsPerPoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Circle :125
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(8,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.Android.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New4_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Circle__OnSizeChanged_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Circle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :125
void Circle__ctor_7_fn(Circle* __this)
{
    __this->ctor_7();
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :158
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :141
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float)");
    float value_ = *value;
    __this->_endAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :131
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float)");
    float value_ = *value;
    __this->_startAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :151
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_UseAngle(bool)");
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :125
void Circle__New4_fn(Circle** __retval)
{
    *__retval = Circle::New4();
}

// protected internal override sealed void OnSizeChanged() :165
void Circle__OnSizeChanged_fn(Circle* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "OnSizeChanged()");
    __this->OnShapeChanged();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) :171
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle)
{
    __this->UpdateShapeDrawable1(handle, *useAngle, *width, *height, *startAngle, *endAngle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :160
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle, __this->_useAngle, (float)__this->Size().X, (float)__this->Size().Y, __this->_startAngle, __this->_endAngle);
}

// public generated Circle() [instance] :125
void Circle::ctor_7()
{
    ctor_6();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) [instance] :171
void Circle::UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable1113", "(Lcom/uno/UnoObject;Ljava/lang/Object;ZFFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uuseAngle=useAngle;
        jboolean _useAngle = (jboolean)_uuseAngle;
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        float _uheight=height;
        jfloat _height = (jfloat)_uheight;
        float _ustartAngle=startAngle;
        jfloat _startAngle = (jfloat)_ustartAngle;
        float _uendAngle=endAngle;
        jfloat _endAngle = (jfloat)_uendAngle;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_useAngle,_width,_height,_startAngle,_endAngle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Circle New() [static] :125
Circle* Circle::New4()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Ellipse :195
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface2));
    type->SetFields(8);
}

::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::Shape_type);
    type = (::g::Fuse::Controls::Native::Android::Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Ellipse", options);
    type->fp_build_ = Ellipse_build;
    type->fp_ctor_ = (void*)Ellipse__New4_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Ellipse__UpdateShapeDrawable_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public generated Ellipse() :195
void Ellipse__ctor_7_fn(Ellipse* __this)
{
    __this->ctor_7();
}

// public generated Ellipse New() :195
void Ellipse__New4_fn(Ellipse** __retval)
{
    *__retval = Ellipse::New4();
}

// private void UpdateShapeDrawable(Java.Object handle) :203
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle)
{
    __this->UpdateShapeDrawable1(handle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :197
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle);
}

// public generated Ellipse() [instance] :195
void Ellipse::ctor_7()
{
    ctor_6();
}

// private void UpdateShapeDrawable(Java.Object handle) [instance] :203
void Ellipse::UpdateShapeDrawable1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable1114", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Ellipse New() [static] :195
Ellipse* Ellipse::New4()
{
    Ellipse* obj1 = (Ellipse*)uNew(Ellipse_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :2203
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _callback), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _view), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) :2210
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) :2225
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) :2255
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create() :2238
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose() :2232
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) :2210
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus) :2220
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) :2249
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance] :2210
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance] :2238
::g::Java::Object* FocusChangedListener::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create116", "(Lcom/uno/UnoObject;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance] :2232
void FocusChangedListener::Dispose()
{
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :2220
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "OnFocusChange(bool)");
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2225
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "AddHandler(Java.Object,Uno.Action<Java.Object, bool>)");
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static] :2255
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener115", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2210
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :2249
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener118", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusManager :2131
// {
// static FocusManager() :2131
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, LoseFocus), 0,
        type, (uintptr_t)&::g::Fuse::Controls::Native::Android::FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager() :2131
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :2139
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle) :2168
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) :2174
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle) :2156
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New() :2131
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle) :2162
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :2131
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :2139
void FocusManager::CompleteFocusLoss()
{
    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static] :2168
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext119", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static] :2174
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken120", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :2156
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus121", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static] :2131
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static] :2162
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus122", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public abstract extern class GraphicsViewBase :225
// {
static void GraphicsViewBase_build(uType* type)
{
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(GraphicsViewBase_type, interface3));
    type->SetFields(5,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase, _eglSurface), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase, _graphicsViewHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase, _nativeWindow), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase, _surfaceHandle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, (void*)GraphicsViewBase__BeginDraw_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, (void*)GraphicsViewBase__EndDraw_fn, 0, false, uVoid_typeof(), 0));
}

GraphicsViewBase_type* GraphicsViewBase_typeof()
{
    static uSStrong<GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(GraphicsViewBase_type);
    type = (GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected GraphicsViewBase(Java.Object handle) :243
void GraphicsViewBase__ctor_6_fn(GraphicsViewBase* __this, ::g::Java::Object* handle)
{
    __this->ctor_6(handle);
}

// public bool BeginDraw(int2 size) :282
void GraphicsViewBase__BeginDraw_fn(GraphicsViewBase* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->BeginDraw(*size);
}

// protected void DestroySurface() :270
void GraphicsViewBase__DestroySurface_fn(GraphicsViewBase* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :305
void GraphicsViewBase__EndDraw_fn(GraphicsViewBase* __this)
{
    __this->EndDraw();
}

// private void Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle child) :227
void GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle)");
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView(__this->Handle(), uPtr(child)->NativeHandle);
}

// private void Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle child) :232
void GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle)");
    ::g::Fuse::Controls::Native::Android::ViewGroup::RemoveView(__this->Handle(), uPtr(child)->NativeHandle);
}

// protected Java.Object get_GraphicsViewHandle() :240
void GraphicsViewBase__get_GraphicsViewHandle_fn(GraphicsViewBase* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->GraphicsViewHandle();
}

// protected void SetSurface(Java.Object surfaceHandle) :255
void GraphicsViewBase__SetSurface_fn(GraphicsViewBase* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsViewBase(Java.Object handle) [instance] :243
void GraphicsViewBase::ctor_6(::g::Java::Object* handle)
{
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_3(::g::Fuse::Controls::Native::Android::ViewGroup::Create());
    _graphicsViewHandle = handle;
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView1(Handle(), _graphicsViewHandle, 0);
}

// public bool BeginDraw(int2 size) [instance] :282
bool GraphicsViewBase::BeginDraw(::g::Uno::Int2 size)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return false;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
    return true;
}

// protected void DestroySurface() [instance] :270
void GraphicsViewBase::DestroySurface()
{
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :305
void GraphicsViewBase::EndDraw()
{
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected Java.Object get_GraphicsViewHandle() [instance] :240
::g::Java::Object* GraphicsViewBase::GraphicsViewHandle()
{
    return _graphicsViewHandle;
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :255
void GraphicsViewBase::SetSurface(::g::Java::Object* surfaceHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsViewBase", "SetSurface(Java.Object)");

    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[1/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class HttpImageLoader :343
// {
static void HttpImageLoader_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Java::Object_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::HttpImageLoader, _isDisposed1), 0);
}

::g::Uno::Threading::Future_type* HttpImageLoader_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageLoader);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.Android.HttpImageLoader", options);
    type->fp_build_ = HttpImageLoader_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))HttpImageLoader__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpImageLoader__Dispose_fn;
    return type;
}

// public HttpImageLoader(string url) :346
void HttpImageLoader__ctor_7_fn(HttpImageLoader* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Dispose() :388
void HttpImageLoader__Dispose_fn(HttpImageLoader* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Dispose()");
    __this->_isDisposed1 = true;
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
}

// private void Error(string errorMsg) :357
void HttpImageLoader__Error_fn(HttpImageLoader* __this, uString* errorMsg)
{
    __this->Error(errorMsg);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) :364
void HttpImageLoader__LoadAsync_fn(uString* urlString, uDelegate* success, uDelegate* error)
{
    HttpImageLoader::LoadAsync(urlString, success, error);
}

// public HttpImageLoader New(string url) :346
void HttpImageLoader__New5_fn(uString* url, HttpImageLoader** __retval)
{
    *__retval = HttpImageLoader::New5(url);
}

// private void Success(Java.Object bitmap) :351
void HttpImageLoader__Success_fn(HttpImageLoader* __this, ::g::Java::Object* bitmap)
{
    __this->Success(bitmap);
}

// public HttpImageLoader(string url) [instance] :346
void HttpImageLoader::ctor_7(uString* url)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", ".ctor(string)");
    ctor_5(::g::Fuse::UpdateManager::Dispatcher());
    HttpImageLoader::LoadAsync(url, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)HttpImageLoader__Success_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)HttpImageLoader__Error_fn, this));
}

// private void Error(string errorMsg) [instance] :357
void HttpImageLoader::Error(uString* errorMsg)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Error(string)");

    if (!_isDisposed1)
        Reject(::g::Uno::Exception::New2(errorMsg));
}

// private void Success(Java.Object bitmap) [instance] :351
void HttpImageLoader::Success(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Success(Java.Object)");

    if (!_isDisposed1)
        ::g::Uno::Threading::Promise__Resolve_fn(this, bitmap);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) [static] :364
void HttpImageLoader::LoadAsync(uString* urlString, uDelegate* success, uDelegate* error)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsync123", "(Ljava/lang/String;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uString* _uurlString=urlString;
        jstring _urlString = JniHelper::UnoToJavaString(_uurlString);
        uDelegate* _usuccess=success;
        jobject _success = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_usuccess, "com.foreign.Uno.Action_Object");
        uDelegate* _uerror=error;
        jobject _error = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uerror, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_urlString,_success,_error);
        
        if (_urlString!=NULL) { U_JNIVAR->DeleteLocalRef(_urlString); }
        if (_success!=NULL) { U_JNIVAR->DeleteLocalRef(_success); }
        if (_error!=NULL) { U_JNIVAR->DeleteLocalRef(_error); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public HttpImageLoader New(string url) [static] :346
HttpImageLoader* HttpImageLoader::New5(uString* url)
{
    HttpImageLoader* obj1 = (HttpImageLoader*)uNew(HttpImageLoader_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class ImageView :396
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[3] = uString::Const("MultiDensityImageSource in a native context not supported");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno");
    ::STRINGS[4] = uString::Const("UpdateImage");
    ::STRINGS[5] = uString::Const(" not supported in native context");
    ::TYPES[3] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::Java::Object_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[9] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[10] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    type->SetInterfaces(
        ::TYPES[6/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(5,
        ::TYPES[6/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageHandle), 0,
        ::TYPES[7/*Java.Object*/], offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageView), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _tintColor), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.Android.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New4_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :430
void ImageView__ctor_6_fn(ImageView* __this)
{
    __this->ctor_6();
}

// private static void ClearBitmap(Java.Object handle) :562
void ImageView__ClearBitmap_fn(::g::Java::Object* handle)
{
    ImageView::ClearBitmap(handle);
}

// private static Java.Object Create(Java.Object container) :569
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval)
{
    *__retval = ImageView::Create(container);
}

// private static Java.Object CreateContainer() :580
void ImageView__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = ImageView::CreateContainer();
}

// public override sealed void Dispose() :435
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "Dispose()");
    __this->ImageHandle(NULL);
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :455
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :401
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :430
void ImageView__New4_fn(ImageView** __retval)
{
    *__retval = ImageView::New4();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :484
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :489
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) :546
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    ImageView::SetBitmap(handle, bitmapHandle);
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) :531
void ImageView__SetImageMatrix_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY)
{
    ImageView::SetImageMatrix(handle, *x, *y, *scaleX, *scaleY);
}

// private void SetImageSize(float2 size) :517
void ImageView__SetImageSize_fn(ImageView* __this, ::g::Uno::Float2* size)
{
    __this->SetImageSize(*size);
}

// private static void SetImageSize(Java.Object handle, int[] wh) :524
void ImageView__SetImageSize1_fn(::g::Java::Object* handle, uArray* wh)
{
    ImageView::SetImageSize1(handle, wh);
}

// private static void SetTint(Java.Object handle, int rgba) :553
void ImageView__SetTint_fn(::g::Java::Object* handle, int* rgba)
{
    ImageView::SetTint(handle, *rgba);
}

// public void set_TintColor(float4 value) :421
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :474
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :479
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :494
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :441
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :430
void ImageView::ctor_6()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_3(ImageView::CreateContainer());
    _imageView = ImageView::Create(Handle());
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :455
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[6/*Uno.IDisposable*/]));
        _imageHandle = NULL;
        ImageView::ClearBitmap(_imageView);
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        ImageView::SetBitmap(_imageView, uCast< ::g::Java::Object*>(uPtr(value)->Handle(), ::TYPES[7/*Java.Object*/]));
        ImageView::SetTint(_imageView, (int)::g::Uno::Color::ToArgb(_tintColor));
    }
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :401
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (value == NULL)
        ImageHandle(NULL);
    else if (uIs(value, ::TYPES[8/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[8/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[9/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[9/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[10/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[10/*Fuse.Resources.MultiDensityImageSource*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[5/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :484
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoaded(Fuse.Controls.Native.ImageHandle)");
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :489
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoadFailed(Uno.Exception)");
    ImageHandle(NULL);
}

// private void SetImageSize(float2 size) [instance] :517
void ImageView::SetImageSize(::g::Uno::Float2 size)
{
    uArray* wh = uArray::Init<int>(::TYPES[3/*int[]*/], 2, (int)size.X, (int)size.Y);
    ImageView::SetImageSize1(_imageView, wh);
}

// public void set_TintColor(float4 value) [instance] :421
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    ImageView::SetTint(_imageView, (int)::g::Uno::Color::ToArgb(_tintColor));
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :474
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :479
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :494
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[3/*"MultiDensit...*/], this, ::STRINGS[1/*"/usr/local/...*/], 496, ::STRINGS[4/*"UpdateImage"*/]);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :441
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    SetImageSize(::g::Uno::Float2__op_Multiply1(drawSize, density));
    ImageView::SetImageMatrix(_imageView, origin.X * density, origin.Y * density, scale.X * density, scale.Y * density);
}

// private static void ClearBitmap(Java.Object handle) [static] :562
void ImageView::ClearBitmap(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearBitmap124", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object container) [static] :569
::g::Java::Object* ImageView::Create(::g::Java::Object* container)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create125", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_container);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateContainer() [static] :580
::g::Java::Object* ImageView::CreateContainer()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer126", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageView New() [static] :430
ImageView* ImageView::New4()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_6();
    return obj1;
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) [static] :546
void ImageView::SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBitmap128", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_bitmapHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) [static] :531
void ImageView::SetImageMatrix(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageMatrix129", "(Ljava/lang/Object;FFFF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y,_scaleX,_scaleY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageSize(Java.Object handle, int[] wh) [static] :524
void ImageView::SetImageSize1(::g::Java::Object* handle, uArray* wh)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageSize1130", "(Ljava/lang/Object;Lcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uwh=wh;
        jobject _wh = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uwh);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wh);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_wh!=NULL) { U_JNIVAR->DeleteLocalRef(_wh); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTint(Java.Object handle, int rgba) [static] :553
void ImageView::SetTint(::g::Java::Object* handle, int rgba)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTint131", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _urgba=rgba;
        jint _rgba = (jint)_urgba;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rgba);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal static extern class InputDispatch :606
// {
// static InputDispatch() :606
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[12/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::Native::NativeRootViewport_typeof();
    ::TYPES[15] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[16] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::TYPES[12/*Uno.Collections.HashSet<int>*/], (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::TYPES[11/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/], (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner) :763
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(viewHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner) :757
void InputDispatch__AddListener1_fn(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener1(nativeHandle, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :801
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :785
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :688
void InputDispatch__DeactivatePointer_fn(int* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :779
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :678
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :620
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :635
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :709
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(rootVisual, visual, data);
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :694
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(rootVisual, visual, data);
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) :721
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(rootVisual, visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle) :774
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveListener(viewHandle);
}

// public static void RemoveListener(Java.Object nativeHandle) :768
void InputDispatch__RemoveListener1_fn(::g::Java::Object* nativeHandle)
{
    InputDispatch::RemoveListener1(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :795
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :617
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :754
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner) [static] :763
void InputDispatch::AddListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Fuse.Controls.Native.ViewHandle,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    InputDispatch::AddListener1(uPtr(viewHandle)->NativeHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner) [static] :757
void InputDispatch::AddListener1(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Java.Object,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(nativeHandle, owner);
    InputDispatch::SetOnTouchListener(nativeHandle, InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :801
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener132", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :785
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener133", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :688
void InputDispatch::DeactivatePointer(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "DeactivatePointer(int)");
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :779
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :678
bool InputDispatch::IsPointerActive(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "IsPointerActive(int)");
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :620
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "OnTouch(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[13/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :635
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseEvent(Fuse.Visual,Java.Object,Fuse.Controls.Native.Android.MotionEvent)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(visual);
    ::g::Java::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::TYPES[14/*Fuse.Controls.Native.NativeRootViewport*/]);

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    int action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(rootView, viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[15/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :709
void InputDispatch::RaiseMoved(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(rootVisual, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :694
void InputDispatch::RaisePressed(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(rootVisual, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :721
void InputDispatch::RaiseReleased(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(rootVisual, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle) [static] :774
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Fuse.Controls.Native.ViewHandle)");
    InputDispatch_typeof()->Init();
    InputDispatch::RemoveListener1(uPtr(viewHandle)->NativeHandle);
}

// public static void RemoveListener(Java.Object nativeHandle) [static] :768
void InputDispatch::RemoveListener1(::g::Java::Object* nativeHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Java.Object)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(nativeHandle);
    InputDispatch::ClearOnTouchListener(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :795
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener135", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :617
::g::Java::Object* InputDispatch::TouchListener()
{
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1 = InputDispatch::_touchListenerHandle();
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle() = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :754
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2 = InputDispatch::_viewVisualMap();
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap() = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class JavaMap :810
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :814
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :829
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :862
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :840
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :834
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :870
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :814
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :846
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :819
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :824
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :854
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :814
void JavaMap::ctor_()
{
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :829
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :834
uObject* JavaMap::Get(::g::Java::Object* key)
{
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :819
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :824
void JavaMap::Remove(::g::Java::Object* key)
{
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :862
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey1136", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :840
::g::Java::Object* JavaMap::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create137", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :870
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get1138", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/uno/UnoObject;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static] :814
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :846
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put139", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/uno/UnoObject;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :854
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove1140", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public abstract extern class LeafView :1064
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(5);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :1066
void LeafView__ctor_6_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_6(handle);
}

// protected LeafView(Java.Object handle, bool handlesInput) :1068
void LeafView__ctor_7_fn(LeafView* __this, ::g::Java::Object* handle, bool* handlesInput)
{
    __this->ctor_7(handle, *handlesInput);
}

// protected LeafView(Java.Object handle) [instance] :1066
void LeafView::ctor_6(::g::Java::Object* handle)
{
    ctor_4(handle, true);
}

// protected LeafView(Java.Object handle, bool handlesInput) [instance] :1068
void LeafView::ctor_7(::g::Java::Object* handle, bool handlesInput)
{
    ctor_5(handle, true, handlesInput);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class MotionEvent :879
// {
// static MotionEvent() :879
static void MotionEvent__cctor__fn(uType* __type)
{
    MotionEvent::_locationOnScreen_ = uArray::New(::TYPES[3/*int[]*/], 2);
}

static void MotionEvent_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[17] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::MotionEvent, _handle), 0,
        ::TYPES[3/*int[]*/], (uintptr_t)&::g::Fuse::Controls::Native::Android::MotionEvent::_locationOnScreen_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Action", NULL, (void*)MotionEvent__get_Action_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ActionMasked", NULL, (void*)MotionEvent__get_ActionMasked_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_EventTime", NULL, (void*)MotionEvent__get_EventTime_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetPointerId", NULL, (void*)MotionEvent__GetPointerId_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPosition", NULL, (void*)MotionEvent__GetPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)MotionEvent__New1_fn, 0, true, type, 1, ::g::Java::Object_typeof()),
        new uFunction("get_PointerCount", NULL, (void*)MotionEvent__get_PointerCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("PointerEventDataForView", NULL, (void*)MotionEvent__PointerEventDataForView_fn, 0, false, ::TYPES[17/*Fuse.Input.PointerEventData[]*/], 3, ::g::Java::Object_typeof(), ::g::Java::Object_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PointerIndexMask", NULL, (void*)MotionEvent__get_PointerIndexMask_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_PointerIndexShift", NULL, (void*)MotionEvent__get_PointerIndexShift_fn, 0, true, ::g::Uno::Int_typeof(), 0));
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_cctor_ = MotionEvent__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :884
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :901
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :896
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :1047
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :942
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, __this->__type))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime() :906
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :971
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :983
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :989
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :955
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result) :962
void MotionEvent__GetLocationOnScreen1_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, uArray* result)
{
    __this->GetLocationOnScreen1(viewHandle, result);
}

// private int GetPointerCount(Java.Object handle) :995
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :889
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :977
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :1035
void MotionEvent__GetPointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :1041
void MotionEvent__GetPointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :914
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :1001
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :1007
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :884
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :911
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity) :919
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* rootView, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(rootView, view, *pointDensity);
}

// public static int get_PointerIndexMask() :1026
void MotionEvent__get_PointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :1031
void MotionEvent__get_PointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

uSStrong<uArray*> MotionEvent::_locationOnScreen_;

// public MotionEvent(Java.Object handle) [instance] :884
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public int get_Action() [instance] :901
int MotionEvent::Action()
{
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :896
int MotionEvent::ActionMasked()
{
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :906
int64_t MotionEvent::EventTime()
{
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :971
int MotionEvent::GetAction(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction142", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :983
int MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked143", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :989
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime144", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :955
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreen(Java.Object)");
    GetLocationOnScreen1(viewHandle, MotionEvent::_locationOnScreen());
    return ::g::Uno::Float2__New2((float)uPtr(MotionEvent::_locationOnScreen())->Item<int>(0), (float)uPtr(MotionEvent::_locationOnScreen())->Item<int>(1));
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result) [instance] :962
void MotionEvent::GetLocationOnScreen1(::g::Java::Object* viewHandle, uArray* result)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreen1145", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/uno/IntArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uresult=result;
        jobject _result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uresult);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_viewHandle,_result);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_result!=NULL) { U_JNIVAR->DeleteLocalRef(_result); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :995
int MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount146", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :889
int MotionEvent::GetPointerId(int pointerIndex)
{
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :977
int MotionEvent::GetPointerId1(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId1147", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :914
::g::Uno::Float2 MotionEvent::GetPosition(int pointerIndex)
{
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :1001
float MotionEvent::GetX(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX150", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :1007
float MotionEvent::GetY(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY152", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :911
int MotionEvent::PointerCount()
{
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity) [instance] :919
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* rootView, ::g::Java::Object* view, float pointDensity)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "PointerEventDataForView(Java.Object,Java.Object,float)");
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[17/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = ::g::Uno::Float2__op_Subtraction2(GetLocationOnScreen(view), GetLocationOnScreen(rootView));

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :1047
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare141", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :1035
int MotionEvent::GetPointerIndexMask()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask148", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :1041
int MotionEvent::GetPointerIndexShift()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift149", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :884
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :1026
int MotionEvent::PointerIndexMask()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :1031
int MotionEvent::PointerIndexShift()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexShift();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Rectangle :1082
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(8,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.Android.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New4_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Rectangle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :1082
void Rectangle__ctor_7_fn(Rectangle* __this)
{
    __this->ctor_7();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :1087
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4)");
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// public generated Rectangle New() :1082
void Rectangle__New4_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New4();
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :1094
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Uno::Float4 r = ::g::Uno::Float4__op_Multiply1(__this->_cornerRadius, pixelsPerPoint_);
    __this->UpdateShapeDrawable1(handle, r.X, r.Y, r.Z, r.W);
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) :1101
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w)
{
    __this->UpdateShapeDrawable1(handle, *x, *y, *z, *w);
}

// public generated Rectangle() [instance] :1082
void Rectangle::ctor_7()
{
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_6();
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) [instance] :1101
void Rectangle::UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable1154", "(Lcom/uno/UnoObject;Ljava/lang/Object;FFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uz=z;
        jfloat _z = (jfloat)_uz;
        float _uw=w;
        jfloat _w = (jfloat)_uw;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_x,_y,_z,_w);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Rectangle New() [static] :1082
Rectangle* Rectangle::New4()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class ScrollView :1127
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(5,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _callbackHandle), 0,
        ::TYPES[18/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _host), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New4_fn, 0, true, type, 1, ::TYPES[18/*Fuse.Controls.Native.IScrollViewHost*/]),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1134
void ScrollView__ctor_6_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_6(host);
}

// private Java.Object AddCallback(Java.Object handle) :1153
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1166
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static Java.Object Create() :1147
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :1140
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1134
void ScrollView__New4_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New4(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :1178
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :1171
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :1193
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1134
void ScrollView::ctor_6(uObject* host)
{
    ctor_3(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :1153
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback155", "(Lcom/uno/UnoObject;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_handle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1166
void ScrollView::AllowedScrollDirections(int value)
{
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :1178
void ScrollView::OnScrollChanged(int x, int y, int oldx, int oldy)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "OnScrollChanged(int,int,int,int)");
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[18/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[18/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :1171
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_ScrollPosition(float2)");
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[18/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :1147
::g::Java::Object* ScrollView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create157", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1134
ScrollView* ScrollView::New4(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_6(host);
    return obj1;
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :1193
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int x, int y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition159", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ux=x;
        jint _x = (jint)_ux;
        int _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal abstract extern class Shape :1214
// {
static void Shape_build(uType* type)
{
    ::STRINGS[6] = uString::Const("");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno");
    ::STRINGS[7] = uString::Const("SetBrush");
    ::TYPES[19] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[20] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[21] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[22] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[23] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(10/*ToArray<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*OrderBy<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[26] = ::g::Uno::Float_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _strokes), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Shape", options);
    type->fp_build_ = Shape_build;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected Shape() :1218
void Shape__ctor_6_fn(Shape* __this)
{
    __this->ctor_6();
}

// private static Java.Object Create() :1381
void Shape__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Shape::Create();
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :1227
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[],Fuse.Drawing.Stroke[],float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_fills = fills;
    __this->_strokes = strokes;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->OnShapeChanged();
}

// private static Java.Object GetLayer(Java.Object handle, int layer) :1393
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval)
{
    *__retval = Shape::GetLayer(handle, *layer);
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) :1400
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval)
{
    *__retval = Shape::MakeLayerDrawable(handle, *layerCount);
}

// protected void OnShapeChanged() :1237
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :1305
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = Shape::SelectOffset(a, b);
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) :1272
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(shapeDrawable, brush);
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) :1310
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    __this->SetLinearGradient(shapeDrawable, linearGradient);
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) :1365
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity)
{
    Shape::SetShapeDrawableColor(shapeDrawable, *r, *g, *b, *a, *opacity);
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) :1337
void Shape__SetShapeDrawableLinearGradient_fn(::g::Java::Object* shapeDrawable, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* positions)
{
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, *startX, *startY, *endX, *endY, colors, positions);
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) :1373
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width)
{
    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, *width);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) :1264
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(shapeDrawable, stroke);
}

// protected Shape() [instance] :1218
void Shape::ctor_6()
{
    ctor_3(Shape::Create());
}

// protected void OnShapeChanged() [instance] :1237
void Shape::OnShapeChanged()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "OnShapeChanged()");
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    ::g::Java::Object* layerDrawable = Shape::MakeLayerDrawable(Handle(), layerCount);

    for (int i = 0; i < layerCount; i++)
        UpdateShapeDrawable(Shape::GetLayer(layerDrawable, i), _pixelsPerPoint);

    int layer = 0;

    if (_fills != NULL)

        for (int i1 = uPtr(_fills)->Length(); (i1--) > 0; )
            SetBrush(Shape::GetLayer(layerDrawable, layer++), uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i1));

    if (_strokes != NULL)

        for (int i2 = uPtr(_strokes)->Length(); (i2--) > 0; )
            SetStroke(Shape::GetLayer(layerDrawable, layer++), uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i2));
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) [instance] :1272
void Shape::SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetBrush(Java.Object,Fuse.Drawing.Brush)");

    if (uIs(brush, ::TYPES[19/*Fuse.Drawing.LinearGradient*/]))
        SetLinearGradient(shapeDrawable, uCast< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[19/*Fuse.Drawing.LinearGradient*/]));
    else
    {
        ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[20/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[21/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::STRINGS[6/*""*/], brush, ::STRINGS[1/*"/usr/local/...*/], 1289, ::STRINGS[7/*"SetBrush"*/]);

        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[22/*Fuse.Drawing.DynamicBrush*/]);
        float opacity = (db != NULL) ? uPtr(db)->Opacity() : 1.0f;
        Shape::SetShapeDrawableColor(shapeDrawable, ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(opacity * 255.0f), 0, 255));
    }
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) [instance] :1310
void Shape::SetLinearGradient(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetLinearGradient(Java.Object,Fuse.Drawing.LinearGradient)");
    uArray* stops = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[23/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[24/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], uPtr(linearGradient)->Stops(), uDelegate::New(::TYPES[25/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)Shape__SelectOffset_fn)));
    uArray* colors = uArray::New(::TYPES[3/*int[]*/], uPtr(stops)->Length());
    uArray* positions = uArray::New(::TYPES[26/*float[]*/], stops->Length());

    for (int i = 0; i < stops->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item<int>(i) = (int)::g::Uno::Color::ToArgb(uPtr(gradientStop)->Color());
        uPtr(positions)->Item<float>(i) = gradientStop->Offset();
    }

    ::g::Uno::Float2 start = linearGradient->StartPoint();
    ::g::Uno::Float2 end = linearGradient->EndPoint();
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, start.X, start.Y, end.X, end.Y, colors, positions);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) [instance] :1264
void Shape::SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetStroke(Java.Object,Fuse.Drawing.Stroke)");

    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(shapeDrawable, uPtr(stroke)->Brush());

    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, uPtr(stroke)->Width() * _pixelsPerPoint);
}

// private static Java.Object Create() [static] :1381
::g::Java::Object* Shape::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create160", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetLayer(Java.Object handle, int layer) [static] :1393
::g::Java::Object* Shape::GetLayer(::g::Java::Object* handle, int layer)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLayer162", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayer=layer;
        jint _layer = (jint)_ulayer;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layer);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) [static] :1400
::g::Java::Object* Shape::MakeLayerDrawable(::g::Java::Object* handle, int layerCount)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeLayerDrawable163", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayerCount=layerCount;
        jint _layerCount = (jint)_ulayerCount;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layerCount);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :1305
int Shape::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SelectOffset(Fuse.Drawing.GradientStop,Fuse.Drawing.GradientStop)");
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) [static] :1365
void Shape::SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableColor164", "(Ljava/lang/Object;IIIII)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ur=r;
        jint _r = (jint)_ur;
        int _ug=g;
        jint _g = (jint)_ug;
        int _ub=b;
        jint _b = (jint)_ub;
        int _ua=a;
        jint _a = (jint)_ua;
        int _uopacity=opacity;
        jint _opacity = (jint)_uopacity;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_r,_g,_b,_a,_opacity);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) [static] :1337
void Shape::SetShapeDrawableLinearGradient(::g::Java::Object* shapeDrawable, float startX, float startY, float endX, float endY, uArray* colors, uArray* positions)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableLinearGradient165", "(Ljava/lang/Object;FFFFLcom/uno/IntArray;Lcom/uno/FloatArray;)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ustartX=startX;
        jfloat _startX = (jfloat)_ustartX;
        float _ustartY=startY;
        jfloat _startY = (jfloat)_ustartY;
        float _uendX=endX;
        jfloat _endX = (jfloat)_uendX;
        float _uendY=endY;
        jfloat _endY = (jfloat)_uendY;
        uArray* _ucolors=colors;
        jobject _colors = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ucolors);
        uArray* _upositions=positions;
        jobject _positions = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_upositions);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_startX,_startY,_endX,_endY,_colors,_positions);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        if (_colors!=NULL) { U_JNIVAR->DeleteLocalRef(_colors); }
        if (_positions!=NULL) { U_JNIVAR->DeleteLocalRef(_positions); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) [static] :1373
void Shape::SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableStrokeWidth166", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_width);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Slider :1445
// {
static void Slider_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Slider_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(5,
        ::TYPES[27/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(::g::Fuse::Controls::Native::Android::Slider, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New4_fn, 0, true, type, 1, ::TYPES[27/*Fuse.Controls.Native.IRangeViewHost*/]),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :1456
void Slider__ctor_8_fn(Slider* __this, uObject* host)
{
    __this->ctor_8(host);
}

// private void AddChangedCallback(Java.Object handle) :1477
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle)
{
    __this->AddChangedCallback(handle);
}

// private static Java.Object Create() :1463
void Slider__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :1493
void Slider__Dispose_fn(Slider* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :1456
void Slider__New4_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New4(host);
}

// private void OnSeekBarChanged(double newProgress) :1488
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress)
{
    __this->OnSeekBarChanged(*newProgress);
}

// public void set_Progress(double value) :1450
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetProgress(Java.Object handle, double progress) :1471
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :1456
void Slider::ctor_8(uObject* host)
{
    ctor_7(Slider::Create(), true);
    _host = host;
    AddChangedCallback(Handle());
}

// private void AddChangedCallback(Java.Object handle) [instance] :1477
void Slider::AddChangedCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddChangedCallback167", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSeekBarChanged(double newProgress) [instance] :1488
void Slider::OnSeekBarChanged(double newProgress)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "OnSeekBarChanged(double)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[27/*Fuse.Controls.Native.IRangeViewHost*/]), newProgress);
}

// public void set_Progress(double value) [instance] :1450
void Slider::Progress(double value)
{
    Slider::SetProgress(Handle(), value);
}

// private static Java.Object Create() [static] :1463
::g::Java::Object* Slider::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create169", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :1456
Slider* Slider::New4(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_8(host);
    return obj1;
}

// private static void SetProgress(Java.Object handle, double progress) [static] :1471
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress170", "(Ljava/lang/Object;D)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _uprogress=progress;
        jdouble _progress = (jdouble)_uprogress;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_progress);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal static extern class SoftKeyboard :2181
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) :2185
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle) :2194
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static] :2185
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard171", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhideKeyboardContext=hideKeyboardContext;
        jobject _hideKeyboardContext = (_uhideKeyboardContext==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhideKeyboardWindowToken=hideKeyboardWindowToken;
        jobject _hideKeyboardWindowToken = (_uhideKeyboardWindowToken==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_hideKeyboardContext,_hideKeyboardWindowToken);
        
        if (_hideKeyboardContext!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardContext); }
        if (_hideKeyboardWindowToken!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardWindowToken); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static] :2194
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard172", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class SurfaceView :1511
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New4_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public SurfaceView() :1513
void SurfaceView__ctor_7_fn(SurfaceView* __this)
{
    __this->ctor_7();
}

// private void AddCallback(Java.Object handle) :1536
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1555
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :1530
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :1513
void SurfaceView__New4_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New4();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :1519
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :1520
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :1524
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :1518
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :1513
void SurfaceView::ctor_7()
{
    ctor_6(SurfaceView::Create());
    AddCallback(GraphicsViewHandle());
}

// private void AddCallback(Java.Object handle) [instance] :1536
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback173", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :1519
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :1520
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceCreated(Java.Object)");
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :1524
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :1518
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :1555
::g::Java::Object* SurfaceView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create178", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :1530
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface179", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static] :1513
SurfaceView* SurfaceView::New4()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Switch :1583
// {
static void Switch_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(5,
        ::TYPES[28/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(::g::Fuse::Controls::Native::Android::Switch, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New4_fn, 0, true, type, 1, ::TYPES[28/*Fuse.Controls.Native.IToggleViewHost*/]),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1593
void Switch__ctor_8_fn(Switch* __this, uObject* host)
{
    __this->ctor_8(host);
}

// private void AddCallback(Java.Object handle) :1606
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1600
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :1626
void Switch__Dispose_fn(Switch* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1593
void Switch__New4_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New4(host);
}

// private void OnToggleChanged(bool value) :1621
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :1616
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :1587
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1593
void Switch::ctor_8(uObject* host)
{
    ctor_7(Switch::Create(), true);
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1606
void Switch::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback180", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :1621
void Switch::OnToggleChanged(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "OnToggleChanged(bool)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[28/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :1587
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :1600
::g::Java::Object* Switch::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create182", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1593
Switch* Switch::New4(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_8(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :1616
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue183", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextEdit :1642
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface4));
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextEdit__New7_fn, 0, true, type, 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextInput_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->fp_build_ = TextEdit_build;
    type->interface4.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1644
void TextEdit__ctor_11_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_11(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle) :1650
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1644
void TextEdit__New7_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New7(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1644
void TextEdit::ctor_11(uObject* host, bool isMultiline)
{
    ctor_10(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static] :1650
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain184", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1644
TextEdit* TextEdit::New7(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_11(host, isMultiline);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public extern class TextInput :1662
// {
static void TextInput_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[31] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::TYPES[6/*Uno.IDisposable*/], offsetof(TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface4));
    type->SetFields(5,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _actionStyle), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCorrentHint), 0,
        ::TYPES[6/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::Android::TextInput, _focusEvent), 0,
        ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/], offsetof(::g::Fuse::Controls::Native::Android::TextInput, _host), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _inputHint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isReadOnly), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_ActionStyle", NULL, (void*)TextInput__set_ActionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, (void*)TextInput__set_AutoCapitalizationHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, (void*)TextInput__set_AutoCorrectHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, (void*)TextInput__set_CaretColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_InputHint", NULL, (void*)TextInput__set_InputHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, (void*)TextInput__set_IsMultiline_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, (void*)TextInput__set_IsPassword_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, (void*)TextInput__set_IsReadOnly_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextInput__New6_fn, 0, true, type, 2, ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/], ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, (void*)TextInput__set_PlaceholderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, (void*)TextInput__set_PlaceholderText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, (void*)TextInput__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextView_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TextInput__Dispose_fn;
    type->fp_Measure = (void(*)(::g::Fuse::Controls::Native::ViewHandle*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))TextInput__Measure_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1666
void TextInput__ctor_10_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_10(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :1801
void TextInput__set_ActionStyle_fn(TextInput* __this, int* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle) :2099
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle) :2028
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :1781
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :1771
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value) :1896
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create() :1978
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose() :1700
void TextInput__Dispose_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[6/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :1708
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :1713
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusLost()");

    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle) :1720
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) :1791
void TextInput__set_InputHint_fn(TextInput* __this, int* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value) :1741
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value) :1751
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value) :1761
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public override sealed float2 Measure(Fuse.LayoutParams lp, float density) :2045
void TextInput__Measure_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Measure(Fuse.LayoutParams,float)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    ::g::Uno::Float2 ret2;

    if (__this->_isMultiline)
    {
        ::g::Java::Object* handle = __this->NativeHandle;
        uArray* measuredSize = uArray::New(::TYPES[3/*int[]*/], 2);
        TextInput::Measure2(handle, (int)(lp_.X() * density_), (int)(lp_.Y() * density_), lp_.HasX(), lp_.HasY(), measuredSize);
        return *__retval = ::g::Uno::Float2__New2((float)measuredSize->Item<int>(0) / density_, (float)measuredSize->Item<int>(1) / density_), void();
    }
    else
        return *__retval = (::g::Fuse::Controls::Native::ViewHandle__Measure_fn(__this, uCRef(lp_), uCRef(density_), &ret2), ret2), void();
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize) :2061
void TextInput__Measure2_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY, uArray* measuredSize)
{
    TextInput::Measure2(handle, *w, *h, *hasX, *hasY, measuredSize);
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1666
void TextInput__New6_fn(uObject* host, bool* isMultiline, TextInput** __retval)
{
    *__retval = TextInput::New6(host, *isMultiline);
}

// private bool OnEditorAction(int actionCode) :2113
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) :1675
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value) :2108
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value) :1911
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value) :1906
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle) :1726
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType() :1928
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss() :1690
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value) :1901
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color) :1984
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetImeOptions(Java.Object handle, int value) :1972
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value) :1949
void TextInput__SetInputType_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value) :1915
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value) :1921
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color) :1943
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags() :1808
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1666
void TextInput::ctor_10(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_9(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[29/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :1801
void TextInput::ActionStyle(int value)
{
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance] :2099
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener185", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance] :2028
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener187", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance] :1781
void TextInput::AutoCapitalizationHint(int value)
{
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance] :1771
void TextInput::AutoCorrectHint(int value)
{
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance] :1896
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    SetCursorDrawableColor(Handle(), (int)::g::Uno::Color::ToArgb(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance] :1791
void TextInput::InputHint(int value)
{
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance] :1741
void TextInput::IsMultiline(bool value)
{
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance] :1751
void TextInput::IsPassword(bool value)
{
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance] :1761
void TextInput::IsReadOnly(bool value)
{
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance] :2113
bool TextInput::OnEditorAction(int actionCode)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnEditorAction(int)");

    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance] :1675
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnNativeFocusChanged(Java.Object,bool)");

    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance] :2108
void TextInput::OnTextChanged(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnTextChanged(string)");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[30/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance] :1911
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    TextInput::SetPlaceholderColor(Handle(), (int)::g::Uno::Color::ToArgb(value));
}

// public void set_PlaceholderText(string value) [instance] :1906
void TextInput::PlaceholderText(uString* value)
{
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance] :1928
int TextInput::ReturnKeyType()
{
    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance] :1690
void TextInput::ScheduleFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "ScheduleFocusLoss()");
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[31/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 0);
}

// public void set_SelectionColor(float4 value) [instance] :1901
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    TextInput::SetSelectionColor(Handle(), (int)::g::Uno::Color::ToArgb(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance] :1984
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor194", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_color);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance] :1808
void TextInput::UpdateFlags()
{
    int flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
        TextInput::SetInputType(Handle(), 0);
    else
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
    }
}

// private static Java.Object Create() [static] :1978
::g::Java::Object* TextInput::Create1()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1190", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :1720
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus191", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize) [static] :2061
void TextInput::Measure2(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY, uArray* measuredSize)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure2192", "(Ljava/lang/Object;IIZZLcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        uArray* _umeasuredSize=measuredSize;
        jobject _measuredSize = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_umeasuredSize);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY,_measuredSize);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        if (_measuredSize!=NULL) { U_JNIVAR->DeleteLocalRef(_measuredSize); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1666
TextInput* TextInput::New6(uObject* host, bool isMultiline)
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_10(host, isMultiline);
    return obj1;
}

// private static void RequestFocus(Java.Object viewHandle) [static] :1726
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus193", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static] :1972
void TextInput::SetImeOptions(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions195", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static] :1949
void TextInput::SetInputType(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType196", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static] :1915
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor197", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static] :1921
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText198", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static] :1943
void TextInput::SetSelectionColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor199", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextureView :2273
// {
static void TextureView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* TextureView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New4_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextureView() :2275
void TextureView__ctor_7_fn(TextureView* __this)
{
    __this->ctor_7();
}

// private static Java.Object Create() :2311
void TextureView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextureView::Create();
}

// private void InstallSurfaceListener(Java.Object handle) :2291
void TextureView__InstallSurfaceListener_fn(TextureView* __this, ::g::Java::Object* handle)
{
    __this->InstallSurfaceListener(handle);
}

// public TextureView New() :2275
void TextureView__New4_fn(TextureView** __retval)
{
    *__retval = TextureView::New4();
}

// private void OnSurfaceTextureAvailable(Java.Object surface) :2280
void TextureView__OnSurfaceTextureAvailable_fn(TextureView* __this, ::g::Java::Object* surface)
{
    __this->OnSurfaceTextureAvailable(surface);
}

// private void OnSurfaceTextureDestroyed() :2285
void TextureView__OnSurfaceTextureDestroyed_fn(TextureView* __this)
{
    __this->OnSurfaceTextureDestroyed();
}

// public TextureView() [instance] :2275
void TextureView::ctor_7()
{
    ctor_6(TextureView::Create());
    InstallSurfaceListener(GraphicsViewHandle());
}

// private void InstallSurfaceListener(Java.Object handle) [instance] :2291
void TextureView::InstallSurfaceListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallSurfaceListener201", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceTextureAvailable(Java.Object surface) [instance] :2280
void TextureView::OnSurfaceTextureAvailable(::g::Java::Object* surface)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextureView", "OnSurfaceTextureAvailable(Java.Object)");
    SetSurface(surface);
}

// private void OnSurfaceTextureDestroyed() [instance] :2285
void TextureView::OnSurfaceTextureDestroyed()
{
    DestroySurface();
}

// private static Java.Object Create() [static] :2311
::g::Java::Object* TextureView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create200", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextureView New() [static] :2275
TextureView* TextureView::New4()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public extern class TextView :2329
// {
static void TextView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(5);
    type->Reflection.SetFunctions(11,
        new uFunction("set_Font", NULL, (void*)TextView__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, (void*)TextView__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, (void*)TextView__set_LineSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, (void*)TextView__set_MaxLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)TextView__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)TextView__New5_fn, 0, true, type, 1, ::g::Java::Object_typeof()),
        new uFunction("set_TextAlignment", NULL, (void*)TextView__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, (void*)TextView__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, (void*)TextView__set_TextTruncation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, (void*)TextView__set_TextWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, (void*)TextView__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New4_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextView() :2333
void TextView__ctor_8_fn(TextView* __this)
{
    __this->ctor_8();
}

// public TextView(Java.Object handle) :2331
void TextView__ctor_9_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_9(handle);
}

// private static Java.Object Create() :2399
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :2366
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :2361
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :2356
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :2342
void TextView__set_MaxLength_fn(TextView* __this, int* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :2333
void TextView__New4_fn(TextView** __retval)
{
    *__retval = TextView::New4();
}

// public TextView New(Java.Object handle) :2331
void TextView__New5_fn(::g::Java::Object* handle, TextView** __retval)
{
    *__retval = TextView::New5(handle);
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :2432
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :2426
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :2420
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :2453
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :2405
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :2438
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :2447
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :2414
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :2377
void TextView__set_TextAlignment_fn(TextView* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :2390
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :2395
void TextView__set_TextTruncation_fn(TextView* __this, int* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :2351
void TextView__set_TextWrapping_fn(TextView* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :2337
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :2333
void TextView::ctor_8()
{
    ctor_9(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :2331
void TextView::ctor_9(::g::Java::Object* handle)
{
    ctor_6(handle);
}

// public void set_Font(Fuse.Font value) [instance] :2366
void TextView::Font(::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Font(Fuse.Font)");
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :2361
void TextView::FontSize(float value)
{
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :2356
void TextView::LineSpacing(float value)
{
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :2342
void TextView::MaxLength(int value)
{
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :2377
void TextView::TextAlignment(int value)
{
    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :2390
void TextView::TextColor(::g::Uno::Float4 value)
{
    TextView::SetTextColor(Handle(), (int)::g::Uno::Color::ToArgb(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :2395
void TextView::TextTruncation(int value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :2351
void TextView::TextWrapping(int value)
{
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :2337
void TextView::Value(uString* value)
{
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :2399
::g::Java::Object* TextView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create204", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static] :2333
TextView* TextView::New4()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_8();
    return obj2;
}

// public TextView New(Java.Object handle) [static] :2331
TextView* TextView::New5(::g::Java::Object* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_9(handle);
    return obj1;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :2432
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont205", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :2426
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize206", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :2420
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing207", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :2453
void TextView::SetMaxLength(::g::Java::Object* handle, int maxLength)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength208", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :2405
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText209", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :2438
void TextView::SetTextAlignment(::g::Java::Object* handle, int alignment)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment210", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :2447
void TextView::SetTextColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor211", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :2414
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping212", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Typeface :2476
// {
static void Typeface_build(uType* type)
{
    ::TYPES[7] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::TYPES[7/*Java.Object*/], offsetof(::g::Fuse::Controls::Native::Android::Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :2486
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :2519
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :2508
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :2513
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :2527
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :2493
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :2496
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "Equals(object)");
    return *__retval = uIs(obj, ::TYPES[7/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[7/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :2533
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :2503
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :2480
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :2486
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :2486
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2480
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :2519
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile213", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :2508
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(Uno.IO.BundleFile)");
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :2513
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :2527
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl214", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static] :2533
::g::Java::Object* Typeface::GetDefault()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault215", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :2486
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :2493
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// internal static extern class TypefaceCache :2539
// {
// static TypefaceCache() :2539
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[32/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[8] = uString::Const("/tempFont");
    ::TYPES[32] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[34] = ::g::Fuse::Resources::SystemFileSource_typeof();
    type->SetFields(0,
        ::TYPES[32/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/], (uintptr_t)&::g::Fuse::Controls::Native::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :2544
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :2551
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :2561
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :2544
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypeface(Fuse.Font)");
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->FileSource(), ::TYPES[33/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[33/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->FileSource());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :2551
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromBundleFile(Uno.IO.BundleFile)");
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :2561
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromFileSource(Uno.UX.FileSource)");
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface;

    if (uIs(fileSource, ::TYPES[34/*Fuse.Resources.SystemFileSource*/]))
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(uPtr(fileSource)->Name);
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[8/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, typeface);
    return typeface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public abstract extern class View :2603
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(4,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _handle), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::Java::Object_typeof(), 0));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :2609
void View__ctor_3_fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_3(handle);
}

// protected View(Java.Object handle, bool isLeafView) :2611
void View__ctor_4_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView)
{
    __this->ctor_4(handle, *isLeafView);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput) :2613
void View__ctor_5_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView, bool* handlesInput)
{
    __this->ctor_5(handle, *isLeafView, *handlesInput);
}

// public Java.Object get_Handle() :2605
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(Java.Object handle) [instance] :2609
void View::ctor_3(::g::Java::Object* handle)
{
    ctor_4(handle, false);
}

// protected View(Java.Object handle, bool isLeafView) [instance] :2611
void View::ctor_4(::g::Java::Object* handle, bool isLeafView)
{
    ctor_5(handle, isLeafView, false);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput) [instance] :2613
void View::ctor_5(::g::Java::Object* handle, bool isLeafView, bool handlesInput)
{
    ctor_2(handle, isLeafView, handlesInput);
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2605
::g::Java::Object* View::Handle()
{
    return _handle;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/android/$.uno
// ----------------------------------------------------------------------

// public sealed extern class ViewGroup :2628
// {
static void ViewGroup_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, type, 0));
}

uType* ViewGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    return type;
}

// public generated ViewGroup() :2628
void ViewGroup__ctor__fn(ViewGroup* __this)
{
    __this->ctor_();
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle) :2641
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :2649
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// internal static Java.Object Create() :2631
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// public generated ViewGroup New() :2628
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :2657
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// public generated ViewGroup() [instance] :2628
void ViewGroup::ctor_()
{
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :2641
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView216", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :2649
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1217", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static Java.Object Create() [static] :2631
::g::Java::Object* ViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create218", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated ViewGroup New() [static] :2628
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :2657
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView219", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
