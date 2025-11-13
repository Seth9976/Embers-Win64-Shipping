// 函数: sub_141f1bc30
// 地址: 0x141f1bc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t result = (*(*arg1 + 0x6a0))()

if (result s> 0)
    do
        int64_t rax_2 = (*(*arg1 + 0x548))(arg1, zx.q(rbp))
        
        if (rax_2 != 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rcx_1 = (rsi_1 + 1).d
            arg2[1].d = rcx_1
            
            if (rcx_1 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_1 << 3)) = rax_2
        
        rbp += 1
        result = (*(*arg1 + 0x6a0))(arg1)
    while (rbp s< result)

return result
