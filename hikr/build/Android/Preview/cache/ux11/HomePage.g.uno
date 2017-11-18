[Uno.Compiler.UxGenerated]
public partial class HomePage: hikr.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Separator();
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template1(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb2;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb2"
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::hikr.Text();
            temp_Value_inst = new hikr_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("name");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Reactive.Data("goToHike");
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp4 = new global::Fuse.Gestures.WhilePressed();
            var temp5 = new global::Fuse.Animations.Scale();
            var temp_eb2 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
            __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb2.OnEvent);
            temp.Color = Fuse.Drawing.Colors.White;
            temp.Margin = float4(20f, 20f, 20f, 20f);
            temp.Bindings.Add(temp3);
            temp4.Animators.Add(temp5);
            temp5.Factor = 0.95f;
            temp5.Duration = 0.08;
            temp5.Easing = Fuse.Animations.Easing.QuadraticOut;
            __g_nametable.Objects.Add(temp_eb2);
            __self.Children.Add(temp);
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp_eb2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new hikr_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("hikes");
        var temp2 = new global::Fuse.Controls.Image();
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new global::Fuse.Controls.DockPanel();
        var temp5 = new global::hikr.Text();
        var temp6 = new global::Fuse.Controls.ScrollView();
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new Template(this, this);
        var temp9 = new Template1(this, this);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Separator();
        temp2.StretchMode = Fuse.Elements.StretchMode.Fill;
        temp2.Opacity = 0.7f;
        temp2.Layer = Fuse.Layer.Background;
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background.jpg"));
        temp3.LineNumber = 7;
        temp3.FileName = "Pages/HomePage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/HomePage.js"));
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.Value = "Recent Hikes";
        temp5.FontSize = 30f;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp5.Margin = float4(0.5f, 0.5f, 0.5f, 0.5f);
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        temp6.Children.Add(temp7);
        temp7.Children.Add(temp);
        temp7.Children.Add(temp11);
        temp.Templates.Add(temp8);
        temp.Templates.Add(temp9);
        temp.Bindings.Add(temp10);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
