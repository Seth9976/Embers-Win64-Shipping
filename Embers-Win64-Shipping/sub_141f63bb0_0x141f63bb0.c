// 函数: sub_141f63bb0
// 地址: 0x141f63bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg2 = 0
arg2[1] = 0
void* rbp = *(arg1 + 0x440)

if (rbp != 0 && *(rbp + 0x70) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        int64_t r15_1 = *(rbp + 0x68)
        int32_t rax_1 = (rsi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        int64_t rax_2 = *(r15_1 + r14_1 + 8)
        i += 1
        r14_1 += 0x30
        *(*arg2 + (rsi_1 << 3)) = rax_2
    while (i s< *(rbp + 0x70))

return arg2
