// 函数: sub_141f6a0d0
// 地址: 0x141f6a0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[0x86]

if (result != 0)
    result = zx.q(*(result + 0xc0))
    int32_t rbp_1 = arg1[0x82].d
    
    if (result.d s>= rbp_1)
        rbp_1 = result.d
    
    int32_t rdi_1 = 0
    
    if (rbp_1 s> 0)
        do
            result = (*(*arg1 + 0x548))(arg1, zx.q(rdi_1))
            int64_t rsi_1 = sx.q(arg2[1].d)
            uint64_t result_1 = result
            int32_t rcx_1 = (rsi_1 + 1).d
            arg2[1].d = rcx_1
            
            if (rcx_1 s> *(arg2 + 0xc))
                result = sub_1405a4d70(arg2)
            
            rdi_1 += 1
            *(*arg2 + (rsi_1 << 3)) = result_1
        while (rdi_1 s< rbp_1)

return result
