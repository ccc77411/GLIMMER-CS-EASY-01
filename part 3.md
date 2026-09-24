# part3_函数  
## 一.精简函数的结果  
<img width="1010" height="712" alt="image" src="https://github.com/user-attachments/assets/ff30da4d-0fd8-4d76-ade1-d7199955e41c" />

 
## 二.文字回答部分  
### 1.猜猜下列函数的效果(你可以自行运行，看看结果怎么样)，尝试从值传递的角度入手，说说为什么会这样   
````
void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  int a = 10;
  int b = 20;
  swap(a, b);
} 
````  
- **运行结果**
<img width="2037" height="1243" alt="image" src="https://github.com/user-attachments/assets/feed7366-1586-44da-a915-012a59f52e8d" />

- 根据运行的结果可以看出a和b的值并没有和预想中的那样相互交换  
- 我认为这是因为 `swap(a,b)` 只是把a=10和b=20这两个实参的值传递，赋值给了 `swap()` 这一个函数中的a和b这两个形参，但 `swap()` 这个函数运算时只是把这两个形参的值互换，对这个函数外面的实参的值没有影响。所以 `main()` 中的a和并没有互换，自然在打印a和b的值时可以看到a和b的值没有变。  
### 2.怎么修改函数才能真正实现值交换的效果呢？      
- 根据题目中对指针的提示，我去了解了之后，知道了应该用指针中的运算符`&`取出变量a和b的内存地址，把它们的内存地址输入`swap()`函数，这样函数就可以直接调取a和b的地址，直接对`main()`函数中的实参（原a,b）进行修改，从而实现对原a和b的值的互换。  
- 以下为尝试写的一个修改程序
 <img width="2001" height="1417" alt="image" src="https://github.com/user-attachments/assets/9142dc72-90fc-401f-a140-7bf7c047b768" />
 
---  
- PS：对swap()函数的修改稍微借助了AI帮忙，因为一开始只是添加了&，虽然能运行但一直有报错后求助了AI,才在swap()函数中每个a和b前加了*，应该是因为temp是一个普通变量所以应该对a和b解指针再交换值。
