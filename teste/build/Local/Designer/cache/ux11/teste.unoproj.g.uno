sealed class teste_FuseControlsButtonBase_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.ButtonBase _obj;
    public teste_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.ButtonBase)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.ButtonBase)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
