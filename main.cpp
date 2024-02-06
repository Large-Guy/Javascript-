#include "javascript.h"
function main()
{
    // program to solve quadratic equation
    let root1=0.0, root2=0.0;

    // take input from the user
    let a = std::stoi(prompt("Enter the first number: "));
    let b = std::stoi(prompt("Enter the second number: "));
    let c = std::stoi(prompt("Enter the third number: "));

    // calculate discriminant
    let discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
        root2 = (-b - Math.sqrt(discriminant)) / (2 * a);

        // result
        console.log("The roots of quadratic equation are ${root1} and ${root2}");
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);

        // result
        console.log("The roots of quadratic equation are ${root1} and ${root2}");
    }

    // if roots are not real
    else {
        let realPart = (-b / (2 * a));
        let imagPart = (Math.sqrt(-discriminant) / (2 * a));

        // result
        console.log("The roots of quadratic equation are " + std::to_string(realPart) + ", " + std::to_string(imagPart) + "i and " + std::to_string(realPart) + " - " + std::to_string(imagPart) + "i");
    }
}