external theme : Js.t {..} = "../../../src/SuccessButton.css" [@@bs.module];

let component = ReasonReact.statelessComponent "SuccessButton";

let make ::label ::primary ::raised _children => {
  ...component,
  render: fun _self => <ReactToolbox.Button theme label primary raised />
};
