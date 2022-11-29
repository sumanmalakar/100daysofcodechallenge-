var user = {
  firstName: "Suman",
  lastName: "Malakar",
  role: "Admin",
  loginCount: 32,
  facebookSignedIn: true,
  courseList: [],

  buyCourse: function (courseName) {
    this.courseList.push(courseName);
  },
  getCourseCount: function () {
    return ` ${this.firstName} is enrolled in total of ${this.courseList.length} courses `;
  },
  userInfo: function () {
    console.table(user);
  }} 
console.log(user.firstName);
console.log(user.getCourseCount());
user.buyCourse("ReactJS");
user.buyCourse("NodeJS");
user.buyCourse("Express");
console.log(user.getCourseCount());
user.userInfo();
