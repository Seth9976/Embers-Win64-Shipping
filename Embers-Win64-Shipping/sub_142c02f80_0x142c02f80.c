// 函数: sub_142c02f80
// 地址: 0x142c02f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t rcx_1 = zx.d(arg1[3]) + 1
uint32_t rdx_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)

if (rcx_1 != neg.d(rdx_3))
    int32_t r10_1 = 0
    uint32_t j_2 = zx.d(arg1[4])
    uint64_t i_1 = zx.q(rcx_1 + rdx_3)
    uint64_t i
    
    do
        void* rdx_5 = &arg1[5 + zx.q(r10_1)]
        int32_t rcx_3 = 0
        uint32_t j_1 = j_2
        
        if (j_2 != 0)
            uint32_t j
            
            do
                uint32_t rax_5 = zx.d(*rdx_5)
                rdx_5 += 1
                rcx_3 = (rcx_3 << 8) + rax_5
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r10_1 += j_2
        
        if (rcx_3 u<= r9)
            rcx_3 = r9
        
        r9 = rcx_3
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r9)
