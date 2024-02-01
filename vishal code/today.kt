import java.util.Scanner
data class student(var id: String, var name: String, var marks1:  Float, var marks2 :  Float){
    fun calculatePercentage(totalMarks: Float):  Float{
        var percentage = ((marks1 + marks2) / totalMarks) * 100
        return percentage
    }
}
fun main(){
println("enter first name")
var name = readLine()
println("enter second name")
var name = readLine()
println("enter first id")
var id = readLine()
println("enter second id")
var id = readLine()
println("enter first marks")
var marks1 = readLine()
println("enter second marks")
var marks2 = readLine()
var student1 = student(name,id,mmarks1)
var student2 = student(name,id,marks2)
var totalMarks = 300.0f
var percentage1 = student1.calculatePercentage(totalMarks)
var percentage2 = student2.calculatePercentage(totalMarks)
println("The percentage of marks obtained by ${student1.name} is $percentage1%")
println("The percentage of marks obtained by ${student2.name} is $percentage2%") 
}



}