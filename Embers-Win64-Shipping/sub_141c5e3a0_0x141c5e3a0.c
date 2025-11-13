// 函数: sub_141c5e3a0
// 地址: 0x141c5e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg2
int64_t rdi = *arg1
uint64_t r11 = zx.q(arg3)
uint128_t zmm0

if (*(arg1 + 0xc) == 0xffffffff)
    char r10 = 0
    uint32_t rsi = 0
    
    if (r11.d u>= 4)
        int32_t rcx = arg1[2].d
        void* r8 = r14 + 8
        uint64_t rax_3 = zx.q(((r11 - 4).d u>> 2) + 1)
        uint64_t i_3 = zx.q(rax_3.d)
        rsi = (rax_3 << 2).d
        uint64_t i
        
        do
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(rcx) << 1))))).d f* 3.05175781e-05f
            *(r8 - 8) = zmm0.d
            arg1[2].d += 1
            uint64_t rax_5 = zx.q(arg1[2].d)
            
            if (rax_5.d u>= *(arg1 + 0x14))
                arg1[2].d = 0
                r10 = 1
                rax_5 = 0
            
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_5 << 1))))).d f* 3.05175781e-05f
            *(r8 - 4) = zmm0.d
            arg1[2].d += 1
            uint64_t rax_6 = zx.q(arg1[2].d)
            
            if (rax_6.d u>= *(arg1 + 0x14))
                arg1[2].d = 0
                r10 = 1
                rax_6 = 0
            
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_6 << 1))))).d f* 3.05175781e-05f
            *r8 = zmm0.d
            arg1[2].d += 1
            uint64_t rax_7 = zx.q(arg1[2].d)
            
            if (rax_7.d u>= *(arg1 + 0x14))
                arg1[2].d = 0
                r10 = 1
                rax_7 = 0
            
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_7 << 1))))).d f* 3.05175781e-05f
            *(r8 + 4) = zmm0.d
            rcx = arg1[2].d + 1
            arg1[2].d = rcx
            
            if (rcx u>= *(arg1 + 0x14))
                arg1[2].d = 0
                r10 = 1
                rcx = 0
            
            r8 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rsi u< r11.d)
        uint64_t i_4 = zx.q(r11.d - rsi)
        int32_t* r8_1 = r14 + (zx.q(rsi) << 2)
        uint64_t i_1
        
        do
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(arg1[2].d) << 1))))).d f* 3.05175781e-05f
            *r8_1 = zmm0.d
            arg1[2].d += 1
            
            if (arg1[2].d u>= *(arg1 + 0x14))
                arg1[2].d = 0
                r10 = 1
            
            r8_1 = &r8_1[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    return zx.q(r10)

int32_t i_2 = arg1[2].d

if (i_2 u< *(arg1 + 0x14))
    uint64_t rdx = 0
    
    if (r11.d u>= 4)
        void* r8_2 = r14 + 8
        
        while (i_2 u< *(arg1 + 0x14))
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(i_2) << 1))))).d f* 3.05175781e-05f
            *(r8_2 - 8) = zmm0.d
            arg1[2].d += 1
            uint64_t rax_14 = zx.q(arg1[2].d)
            
            if (rax_14.d u>= *(arg1 + 0x14))
                rdx = zx.q(rdx.d + 1)
                break
            
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_14 << 1))))).d f* 3.05175781e-05f
            *(r8_2 - 4) = zmm0.d
            arg1[2].d += 1
            uint64_t rax_15 = zx.q(arg1[2].d)
            
            if (rax_15.d u>= *(arg1 + 0x14))
                rdx = zx.q(rdx.d + 2)
                break
            
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_15 << 1))))).d f* 3.05175781e-05f
            *r8_2 = zmm0.d
            arg1[2].d += 1
            uint64_t rax_16 = zx.q(arg1[2].d)
            
            if (rax_16.d u>= *(arg1 + 0x14))
                rdx = zx.q(rdx.d + 3)
                break
            
            rdx = zx.q(rdx.d + 4)
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (rax_16 << 1))))).d f* 3.05175781e-05f
            *(r8_2 + 4) = zmm0.d
            r8_2 += 0x10
            i_2 = arg1[2].d + 1
            arg1[2].d = i_2
            
            if (rdx.d u>= (r11 - 3).d)
                goto label_141c5e5f0
        
        goto label_141c5e63c
    
label_141c5e5f0:
    
    if (rdx.d u< r11.d)
        void* r8_3 = r14 + (rdx << 2)
        
        while (i_2 u< *(arg1 + 0x14))
            rdx = zx.q(rdx.d + 1)
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(i_2) << 1))))).d f* 3.05175781e-05f
            *r8_3 = zmm0.d
            r8_3 += 4
            arg1[2].d += 1
            i_2 = arg1[2].d
            
            if (rdx.d u>= r11.d)
                int32_t rax_19
                rax_19.b = i_2 u>= *(arg1 + 0x14)
                return rax_19
        
    label_141c5e63c:
        
        if (rdx.d u< r11.d)
            __builtin_memset(r14 + (rdx << 2), 0, zx.q(r11.d - rdx.d) << 2)
else if (arg3 != 0)
    __builtin_memset(r14, 0, r11 << 2)

int32_t rax_20
rax_20.b = arg1[2].d u>= *(arg1 + 0x14)
return rax_20
