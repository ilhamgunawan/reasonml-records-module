/**
 * IMPORTANT NOTES: 
 * Any changes values of records are not recommended.
 * Records are immutable, and should be treated that way.
 * When it comes to functional programming paradigm, this approach won't be necessary.
 */

type person = {
  name: string,
  mutable age: int,
};

let udin = {
  name: "Udin",
  age: 17,
};

let changeAge = (person: person, newAge): unit => {
  person.age = newAge;
  ();
};

Js.log2("Old udin: ", udin);

changeAge(udin, 20);

Js.log2("New udin: ", udin);