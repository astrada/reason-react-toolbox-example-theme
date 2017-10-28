[@bs.module] external theme : Js.t({..}) = "../../../src/SuccessButton.css";

let component = ReasonReact.statelessComponent("SuccessButton");

let make = (~label, ~primary, ~raised, _children) => {
  ...component,
  render: (_self) => <ReactToolbox.Button theme label primary raised />
};
