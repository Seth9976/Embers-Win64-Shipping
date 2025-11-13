// 函数: sub_14150ec40
// 地址: 0x14150ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 2
int32_t rbx = 0

if (*(arg1 + 0xb0) s> 2)
    void* r10_1 = 0x40
    
    do
        int64_t rax_1 = *(arg1 + 0xa8)
        
        if (*(r10_1 + rax_1 + 8) == arg2)
            bool cond:0_1 = (*(r10_1 + rax_1 + 0x1c) & 1) != 0
            __builtin_memset(r10_1 + rax_1, 0, 0x14)
            
            if (not(cond:0_1))
                *(r10_1 + rax_1 + 0x1c) = 0
                int64_t rdx = *(arg1 + 0xa8)
                void* r8_1 = r10_1 + rdx
                *((sx.q(*(r10_1 + rdx + 0x18)) << 5) + rdx + 0x14) = *(r8_1 + 0x14)
                *((sx.q(*(r8_1 + 0x14)) << 5) + *(arg1 + 0xa8) + 0x18) = *(r8_1 + 0x18)
                *(r8_1 + 0x18) = i
                *(r8_1 + 0x14) = i
                void* r8_2 = *(arg1 + 0xa8)
                *(r10_1 + r8_2 + 0x14) = 0
                *(r10_1 + r8_2 + 0x18) = *(r8_2 + 0x18)
                *((sx.q(*(r8_2 + 0x18)) << 5) + *(arg1 + 0xa8) + 0x14) = i
                *(r8_2 + 0x18) = i
            
            rbx += 1
        
        i += 1
        r10_1 += 0x20
    while (i s< *(arg1 + 0xb0))

return zx.q(rbx)
