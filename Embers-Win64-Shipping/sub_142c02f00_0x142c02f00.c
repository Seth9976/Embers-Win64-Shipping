// 函数: sub_142c02f00
// 地址: 0x142c02f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
uint32_t rdx_1 = zx.d(*arg1) << 8
int32_t r8_1 = zx.d(arg1[1]) + 1

if (r8_1 != neg.d(rdx_1))
    uint32_t j_2 = zx.d(arg1[2])
    int32_t r10_1 = 0
    uint64_t i_1 = zx.q(r8_1 + rdx_1)
    uint64_t i
    
    do
        void* rdx_3 = &arg1[3 + zx.q(r10_1)]
        int32_t rcx = 0
        uint32_t j_1 = j_2
        
        if (j_2 != 0)
            uint32_t j
            
            do
                uint32_t rax_2 = zx.d(*rdx_3)
                rdx_3 += 1
                rcx = (rcx << 8) + rax_2
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r10_1 += j_2
        
        if (rcx u<= r9)
            rcx = r9
        
        r9 = rcx
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r9)
