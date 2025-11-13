// 函数: sub_141b0f640
// 地址: 0x141b0f640
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
            int64_t* rsi_1 = *arg1
            int32_t rcx_1 = rsi_1[1].d
            int32_t rax_1 = rcx_1 - result_1.d
            
            if (rax_1 != 1)
                int64_t r9_1 = *rsi_1
                memmove(r9_1 + (result_1 << 2), r9_1 + (sx.q((result_1 + 1).d) << 2), 
                    (rax_1 - 1) << 2)
                rcx_1 = rsi_1[1].d
            
            rsi_1[1].d = rcx_1 - 1
            int64_t* rsi_2 = arg1[2]
            int64_t r15_2 = result_1 * 6
            int64_t r13_1 = *rsi_2
            int64_t rcx_4 = *(r13_1 + (r15_2 << 3) + 0x20)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(r13_1 + (r15_2 << 3) + 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int32_t rcx_8 = rsi_2[1].d
            int32_t rax_6 = rcx_8 - result_1.d
            
            if (rax_6 != 1)
                int64_t r9_2 = *rsi_2
                memmove(r9_2 + (r15_2 << 3), sx.q((result_1 + 1).d) * 0x30 + r9_2, 
                    (rax_6 - 1) * 0x30)
                rcx_8 = rsi_2[1].d
            
            result = rcx_8 - 1
            rsi_2[1].d = result
            int64_t* rcx_9 = arg1[1]
            
            if (rcx_9 != 0)
                result = sub_141f845f0(rcx_9, result_1.d)
        
        rdi_1 = &rdi_1[1]
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
