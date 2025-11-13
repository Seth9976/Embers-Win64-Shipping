// 函数: sub_142336dc0
// 地址: 0x142336dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* buffer2 = arg3
int32_t rbx_1
int32_t r15_1

if (arg1[1].d != *(arg1 + 0x34))
    void* buffer2_1 = *(arg3 + 0x10)
    r15_1 = *(arg3 + 0x18)
    uint32_t r10_2 = (r15_1 + 0x1f) u>> 5
    uint32_t r9_1 = r10_2
    
    if (buffer2_1 != 0)
        buffer2 = buffer2_1
    
    uint64_t rdx = 0
    
    if (r10_2 != 0)
        if (r10_2 u>= 8)
            uint128_t zmm1 = zx.o(0)
            uint128_t zmm2 = zx.o(0)
            uint128_t zmm0
            
            do
                zmm0 = *(buffer2 + (rdx << 2))
                uint64_t rax_1 = zx.q((rdx + 4).d)
                rdx = zx.q(rdx.d + 8)
                zmm1 ^= zmm0
                zmm0 = *(buffer2 + (rax_1 << 2)) ^ zmm2
                zmm2 = zmm0
            while (rdx.d u< (r10_2 & 0xfffffff8))
            
            zmm1 ^= zmm0
            zmm1 ^= _mm_bsrli_si128(zmm1, 8)
            r9_1 = (zmm1 ^ _mm_bsrli_si128(zmm1, 4)).d ^ r10_2
        
        if (rdx.d u< r10_2)
            void* rcx = buffer2 + (rdx << 2)
            uint64_t i_1 = zx.q(r10_2 - rdx.d)
            uint64_t i
            
            do
                r9_1 ^= *rcx
                rcx += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    void* rcx_1 = arg1[8]
    void* r8_2 = &arg1[7]
    
    if (rcx_1 != 0)
        r8_2 = rcx_1
    
    rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r9_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_142336f14:
    *arg2 = 0xffffffff
else
    int64_t rbp_1 = *arg1
    
    while (true)
        void* buffer1_2 = sx.q(rbx_1) * 0x30 + rbp_1
        int32_t rax_4 = *(buffer1_2 + 0x18)
        
        if (rax_4 == r15_1)
            void* buffer1_1 = *(buffer1_2 + 0x10)
            void* buffer1 = buffer1_2
            
            if (buffer1_1 != 0)
                buffer1 = buffer1_1
            
            if (memcmp(buffer1, buffer2, zx.q(rax_4 + 0x1f) u>> 5 << 2) == 0)
                *arg2 = rbx_1
                break
        
        rbx_1 = *(buffer1_2 + 0x28)
        
        if (rbx_1 == 0xffffffff)
            goto label_142336f14

return arg2
