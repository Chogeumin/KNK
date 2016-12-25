let size = 10
var star: String
for i in 1...size {
    star = ""
    for _ in 1...(size-i+1) {
        star += " "
    }
    for j in 1...i {
        if j == 1 { 
            star += "*"
        } else {
            star += "**"
        }
    }
    print(star)
}