let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <PurpleAppBar />
      <section style=(ReactDOMRe.Style.make(~padding="20px", ()))>
        <SuccessButton label="Success" primary=true raised=true />
        <ReactToolboxBundled.Button label="Primary Button" primary=true />
      </section>
    </div>
};
