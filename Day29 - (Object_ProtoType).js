var User = function(firstName, courseCount){
this.firstName = firstName;
this.courseCount = courseCount;
this.getCourseCount = function(){
  console.log(`Course count is : ${this.courseCount}`);
}}

User.prototype.getFirstName = function () {
  console.log(`Your firstName is : ${this.firstName}`);}

var suman = new User("SumanMalakar", 2);
suman.getCourseCount();

if(suman.hasOwnProperty("firstName")){
  suman.getFirstName();}

var sam = new User("Sam", 1); 
sam.getCourseCount();
sam.getFirstName();

// suman.getFirstName();
// console.log(suman)
// console.log(sam)
