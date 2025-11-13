// 函数: sub_140a0ecb0
// 地址: 0x140a0ecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a0ede0(arg3)
*arg2 = &rax[2]
arg2[1] = rax

if (rax == 0)
    return arg2

rax[1].d += 1

if (rax == 0)
    return arg2

rax[1].d -= 1

if (rax[1].d == 1)
    (**rax)(rax)
    int32_t rsi_1 = *(rax + 0xc)
    *(rax + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*rax)[1](rax, zx.q(rsi_1))

return arg2
