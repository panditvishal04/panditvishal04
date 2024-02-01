data class Student(var studentId: String, var name: String, var marks1:  Float, var marks2 :  Float, var marks3 :  Float){
    fun calculatePercentage(totalMarks: Float):  Float{
        var percentage = ((marks1 + marks2 + marks3) / totalMarks) * 100
        return percentage
    }
}
fun main(){
var student1 = Student("2102663", "vishal", 90.0f,96.0f, 66.0f)
var student2 = Student("210786", "jatin",90.0f,96.0f,67.0f)
var totalMarks = 300.0f
var percentage1 = student1.calculatePercentage(totalMarks)
var percentage2 = student2.calculatePercentage(totalMarks)
println("The percentage of marks obtained by ${student1.name} is $percentage1%")
println("The percentage of marks obtained by ${student2.name} is $percentage2%") 
}