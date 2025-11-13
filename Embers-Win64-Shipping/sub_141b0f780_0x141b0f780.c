// 函数: sub_141b0f780
// 地址: 0x141b0f780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    int32_t* rdi_1 = *arg2
    uint64_t i
    
    do
        result = sub_141a50d70(arg1, *rdi_1)
        int64_t result_1 = sx.q(result)
        
        if (result_1.d != 0xffffffff)
            int64_t* r15_1 = *arg1
            int32_t rsi_1 = (result_1 + 1).d
            int32_t rcx_1 = r15_1[1].d
            int32_t rax_1 = rcx_1 - result_1.d
            
            if (rax_1 != 1)
                int64_t rcx_2 = *r15_1
                memmove(rcx_2 + (result_1 << 2), rcx_2 + (sx.q(rsi_1) << 2), (rax_1 - 1) << 2)
                rcx_1 = r15_1[1].d
            
            r15_1[1].d = rcx_1 - 1
            int64_t* r15_2 = arg1[2]
            int32_t rcx_4 = r15_2[1].d
            int32_t rax_6 = rcx_4 - result_1.d
            
            if (rax_6 != 1)
                int64_t r9_1 = *r15_2
                memmove(r9_1 + result_1 * 0x28, r9_1 + sx.q(rsi_1) * 0x28, (rax_6 - 1) * 0x28)
                rcx_4 = r15_2[1].d
            
            result = rcx_4 - 1
            r15_2[1].d = result
            int64_t* rcx_8 = arg1[1]
            
            if (rcx_8 != 0)
                result = sub_141f845f0(rcx_8, result_1.d)
        
        rdi_1 = &rdi_1[1]
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
