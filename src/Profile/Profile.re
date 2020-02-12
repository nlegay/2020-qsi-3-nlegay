open ReasonUrql;

let headers = Fetch.HeadersInit.make({ "Content-Type": "application/json", "Authorization": "Bearer mytoken" });
let client = {
  url: "https://api.github.com/graphql",
  fetchOptions: Fetch.RequestInit.make(~headers, ~method_=POST, ())
};

[@react.component]
let make = _ => {

    <Provider value={client}>
        <div> {React.string(atom)} </div>
    </Provider>;

};