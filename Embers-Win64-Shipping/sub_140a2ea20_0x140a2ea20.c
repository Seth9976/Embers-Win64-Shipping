// 函数: sub_140a2ea20
// 地址: 0x140a2ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rbx = rdi * 0x1f8
*(rbx + arg1 + 0x224) = 0
*(rbx + arg1 + 0x220) += 1
char i

do
    i = sub_140a2e610(arg1, rdi.d, sub_140a54810())
    
    if (*(rbx + arg1 + 0x224) != 0)
        break
    
    if (*(rbx + arg1 + 0x225) != 0)
        break
    
    i = sub_140a54810()
while (i != 0)

*(rbx + arg1 + 0x220) -= 1
return i
