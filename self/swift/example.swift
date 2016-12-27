let orangeAreOrange = true
let turnipsAreDelicous = false
if turnipsAreDelicous {
    print("Mmm, tasty turnips!")
} else {
    print("Eww, turnips are horrible.")
}

let http404Error = (statusCode: 404, statusMessage: "Not Found")
print("The status code is \(http404Error.statusCode)")
print("The status message is \(http404Error.1)")

let possibleNumber = "123"
let convertedNumber = Int(possibleNumber)

var serverResponseCode: Int? = 404
print("\(serverResponseCode)")

if convertedNumber != nil {
    print("convertedNumber has an integer value of \(convertedNumber!).")
}