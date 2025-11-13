// 函数: sub_142276350
// 地址: 0x142276350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x210))

if (rdx.d != 0)
    int32_t rsi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(arg1 + 0x208) != arg2
    int64_t i = 0
    
    do
        int64_t r9_1 = sx.q(rsi_1)
        i += 1
        rsi_1 += 1
        
        for (; i s< rdx; i += 1)
            int32_t rax_2
            rax_2.b = (*(arg1 + 0x208))[i] != arg2
            
            if (zx.d(r15.b) != rax_2)
                break
            
            rsi_1 += 1
        
        uint32_t count = rsi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rax_3 = *(arg1 + 0x208)
                memmove(sx.q(r12_1) + rax_3, rax_3 + r9_1, count)
            
            r12_1 += count
        
        r15.b ^= 1
    while (i s< rdx)
    
    *(arg1 + 0x210) = r12_1

return sub_14227fbf0(arg1) __tailcall
