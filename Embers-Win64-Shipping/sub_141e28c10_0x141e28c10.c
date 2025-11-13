// 函数: sub_141e28c10
// 地址: 0x141e28c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f39750
arg1[0x22].d = rax
uint64_t result = zx.q(rax + 1)
data_143f39750 = result.d

if (arg2 != 0)
    *arg1 = arg2
    arg1[0x25].d = 0
    arg1[6].d = 0xfffffffe
    arg1[7].d = 0xfffffffe
    sub_141df0060(&arg1[0x26], (zx.o(0)).d, 0x3f800000)
    sub_141e2f5d0(arg1)
    
    if (sub_140d3e110(&arg1[0x21]) != 0 && *(*arg1 + 0x130) s> 0)
        *(arg1 + 0x174) = sub_141e04b20(sub_140d3c6e0(&arg1[0x21]), *(*arg1 + 0x118))
    
    arg1[0xb] = arg1
    result = *arg1
    arg1[0xc] = result

return result
