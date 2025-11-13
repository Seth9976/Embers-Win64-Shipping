// 函数: sub_142822a54
// 地址: 0x142822a54
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
arg2[1].d = 0
arg2[2] = rax
void** rbx = *(rax + 8)
*arg2 = rbx

while (*(rbx + 0x19) == 0)
    *arg2 = rbx
    int32_t rax_2
    
    if (sub_142822974(&rbx[4], arg3) == 0)
        arg2[2] = rbx
        rax_2 = 1
        rbx = *rbx
    else
        rbx = rbx[2]
        rax_2 = 0
    
    arg2[1].d = rax_2

return arg2
