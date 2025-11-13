// 函数: sub_140960db0
// 地址: 0x140960db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140947aa0()
*arg2 = &rax[2]
arg2[1] = rax

if (rax == 0)
    return arg2

rax[1].d += 1

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t temp1_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax)[1](rax, 1)

return arg2
