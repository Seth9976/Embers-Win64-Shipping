// 函数: sub_140a45450
// 地址: 0x140a45450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[0x18]

if (r8 == 0)
    int64_t result
    result.b = 0
    return result

char rax_1 = (*(*arg1 + 0x218))(arg2, arg1[0x17], r8)

if (rax_1 == 0)
    *(arg1 + 0x29) |= 1
    
    if (arg1[0x1b].b == rax_1 && ((arg1[0x14].d u>> 5).b & 1) == 0)
        arg1[0x1b].b = rax_1

int64_t rax_4 = arg1[0x19]
arg1[0x18] = 0

if (rax_4 s<= -1)
    sub_140a4fbe0(&arg1[0x17], 0)

return zx.q(rax_1)
