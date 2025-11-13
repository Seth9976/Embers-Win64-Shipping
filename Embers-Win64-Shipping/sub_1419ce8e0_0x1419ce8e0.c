// 函数: sub_1419ce8e0
// 地址: 0x1419ce8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x70) s<= 0)
    return 

int64_t rsi_1 = 0

do
    int64_t rbp_1 = *(*(arg1 + 0x68) + rsi_1 + 0x28)
    
    if (rbp_1 != 0)
        int64_t r14_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (r14_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (r14_1 << 3)) = rbp_1
        sub_1419ce8e0(rbp_1, arg2)
    
    i += 1
    rsi_1 += 0x30
while (i s< *(arg1 + 0x70))
