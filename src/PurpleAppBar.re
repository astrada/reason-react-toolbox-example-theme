external theme : Js.t {..} = "../../../src/PurpleAppBar.css" [@@bs.module];

let component = ReasonReact.statelessComponent "PurpleAppBar";

let make _children => {
  ...component,
  render: fun _self =>
    <ReactToolboxBundled.AppBar theme>
      <Logo />
      (ReasonReact.stringToElement "App example")
    </ReactToolboxBundled.AppBar>
};
