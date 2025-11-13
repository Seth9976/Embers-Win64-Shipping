// 函数: sub_142a3ea30
// 地址: 0x142a3ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2

if (arg1 == 0 || arg2 s< 0 || arg3 - 1 u> 7)
    return -2

int64_t result = 0
int64_t rsi = 0

if (arg3 s> 0)
    do
        char arg_8
        int32_t rax_3 = (**arg1)(arg1, rdi, 1, &arg_8)
        
        if (rax_3 s< 0)
            return sx.q(rax_3)
        
        rdi += 1
        rsi += 1
        result = result << 8 | zx.q(arg_8)
    while (rsi s< arg3)

return result
