// 函数: sub_141a4b0f0
// 地址: 0x141a4b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    int32_t rsi_1 = arg3[1]
    int64_t rdi_1 = sx.q(*arg3)
    int64_t rbx_1 = sx.q(arg3[2])
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(not.d(rsi_1)) ^ rdi_1 ^ rbx_1) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx_4 = sx.q(i) * 9
            
            if (*(r8 + (rdx_4 << 3) + 4) == rsi_1 && *(r8 + (rdx_4 << 3)) == rdi_1.d
                    && *(r8 + (rdx_4 << 3) + 8) == rbx_1.d)
                *arg2 = i
                return arg2
            
            i = *(r8 + (rdx_4 << 3) + 0x40)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
