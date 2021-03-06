[@bs.module] external theme : Js.t({..}) = "../../../src/PurpleAppBar.css";

let component = ReasonReact.statelessComponent("PurpleAppBar");

let make = _children => {
  ...component,
  render: _self =>
    <ReactToolboxBundled.AppBar theme>
      <Logo />
      (ReasonReact.string("App example"))
    </ReactToolboxBundled.AppBar>
};
