const name1 = "Mark";
const name2 = "John";

let massMark = 95;
let heightMark = 1.68;

let massJohn = 93;
let heightJohn = 1.70;
var bmiMark = massMark / (heightMark * heightMark);
var bmiJohn = massJohn / (heightJohn * heightJohn);



if(bmiMark > bmiJohn) {
    console.log(`Mark's BMI (${bmiMark}) is higher than Johns (${bmiJohn})`)
} else {
    console.log(`John's BMI (${bmiJohn}) is higher than Marks (${bmiMark})`)
}