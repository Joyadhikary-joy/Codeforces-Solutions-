package main
import ("fmt")
func main() {
  var test int 
  fmt.Scan(&test)
 for i:=0;i<test;i++{
    var a,ans int 
    fmt.Scan(&a)
    ans=180-a
    if 360%ans==0{
      fmt.Println("YES")
    }else{
      fmt.Println("NO")
    }
  }
}
