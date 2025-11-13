// 函数: sub_1427ca2c0
// 地址: 0x1427ca2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_2 = *arg2

if (rcx_2 == 0)
    return float.s(zx.q(arg2[2]))

if (rcx_2 == 1)
    int64_t rax = *(arg2 + 8)
    float result = float.s(rax)
    
    if (rax s>= 0)
        return result
    
    return result + 1.84467441e+19f

if (rcx_2 == 2)
    return arg2[2]

if (rcx_2 == 3 && arg2[2].b != 0)
    return 1f

return (zx.o(0)).d
