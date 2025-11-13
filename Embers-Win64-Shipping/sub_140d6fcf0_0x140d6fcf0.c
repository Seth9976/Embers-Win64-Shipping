// 函数: sub_140d6fcf0
// 地址: 0x140d6fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rax_1 = (*(*arg1 + 8))(arg1, arg3)
int32_t r14 = 0

if (rax_1 s> 0)
    do
        int64_t r9_1 = *arg1
        int64_t rax_2 = (*(r9_1 + 0x10))(arg1, arg3, zx.q(r14), r9_1)
        int64_t rbp_1
        
        if (rax_2 == 0)
            rbp_1 = 0
        else
            rbp_1 = rax_2 - 8
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_3 = (rsi_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        r14 += 1
        *(*arg2 + (rsi_1 << 3)) = rbp_1
    while (r14 s< rax_1)

return arg2
