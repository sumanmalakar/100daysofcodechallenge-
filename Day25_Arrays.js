var countries  =  ["India", "USA", "Japan", "Russia"];
var states = new Array("Rajasthan","Delhi","Mumbai","Assam");

console.log(Array.from("Suman"));
console.log(states[1]);
console.log(states.length);
states[0] = "Punjab";
console.log(states);

var user = ["Suman", "Suman@gmail.com", 3, 34, true];
console.log(user);

user.pop();
user.pop();
console.log(user);
user.unshift("NEW VALUE");
console.log(user);
user.shift();
console.log(user);
user.shift();
console.log(user);
console.log(user.indexOf(3))
console.log(user.indexOf('Suman'))
console.log(user.indexOf(1))
