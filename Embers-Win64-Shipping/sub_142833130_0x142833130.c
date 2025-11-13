// 函数: sub_142833130
// 地址: 0x142833130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = **(arg1 + 0x80)
int64_t r15 = **(arg1 + 0x88)

if (*(arg1 + 0x28) == 1)
    int64_t r9 = sx.q(*(arg1 + 0xb0))
    
    if (arg2 s> 0)
        int32_t* rsi_1 = arg3 + (sx.q(arg4) << 2)
        int64_t r10_1 = r9
        uint64_t i_1 = zx.q(arg2)
        int32_t* rdi_1 = arg6 + (sx.q(arg7) << 2)
        uint64_t i
        
        do
            if (r10_1 == 0x40)
                sub_1428325bc(arg1, 0)
                r9 = 0
                r10_1 = 0
            
            r9 = zx.q(r9.d + 1)
            *rsi_1 = *(r14 + (r10_1 << 2))
            rsi_1 = &rsi_1[sx.q(arg5)]
            int32_t rax_5 = *(r15 + (r10_1 << 2))
            r10_1 += 1
            *rdi_1 = rax_5
            rdi_1 = &rdi_1[sx.q(arg8)]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0xb0) = r9.d

return 0
