[@react.component]
let make = () => {

  let url = ReasonReactRouter.useUrl();
  
  <div>
    <button onClick={_ => ReasonReactRouter.push("/blinkingGreeting")}> {React.string("Blinking Greeting")} </button>
    <button onClick={_ => ReasonReactRouter.push("/fetchedDogPictures")}> {React.string("Fetched Dog Pictures")} </button>
    <button onClick={_ => ReasonReactRouter.push("/fetchRandomDog")}> {React.string("Fetch Random Dog")} </button>
    <button onClick={_ => ReasonReactRouter.push("/greeting")}> {React.string("Greeting")} </button>
    <button onClick={_ => ReasonReactRouter.push("/reducerFromReactJSDocs")}> {React.string("Reducer From ReactJS Docs")} </button>
    <button onClick={_ => ReasonReactRouter.push("/profile")}> {React.string("Profile GitHub")} </button>

    {switch (url.path) {
    | ["blinkingGreeting"] => <BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>;
    | ["fetchedDogPictures"] => <FetchedDogPictures />;
    | ["fetchRandomDog"] => <FetchRandomDog />;
    | ["greeting"] => <Greeting />;
    | ["reducerFromReactJSDocs"] => <ReducerFromReactJSDocs />;
    | ["profile"] => <Profile />;
    | _ => <div> {React.string("Choisir un composant a afficher")} </div>
    }}
  </div>
  
}