// 函数: sub_142386ce0
// 地址: 0x142386ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t rbx = 0
int128_t zmm6
zmm6.d = 1f f/ arg2[6]
int32_t rdx = 0
arg1[7].d = 0

if (*(arg1 + 0x3c) != rsi.d)
    sub_14085a940(&arg1[2], rsi.d)
    rdx = arg1[7].d

uint64_t result = zx.q(rdx + rsi.d)
arg1[7].d = result.d

if (result.d s> *(arg1 + 0x3c))
    result = sub_14083a490(&arg1[2], rdx)

int64_t i = 0
*(arg1 + 0x74) = 0
int32_t zmm4 = (zx.o(0)).d
float zmm0
float zmm1
float zmm2

if (rsi s>= 4)
    do
        void* rax = arg1[6]
        void* rdx_2 = &arg1[2]
        int64_t r9_1 = *arg1
        int64_t r8_1 = i << 3
        zmm0 = *arg2
        
        if (rax != 0)
            rdx_2 = rax
        
        zmm1 = *(rbx + r9_1 + 0xc)
        void* rdx_3 = rdx_2 + r8_1
        
        if (not(zmm0 f<= zmm4))
            zmm1 = _mm_min_ss(zmm1, zmm0)
        
        *(arg1 + 0x74) = _mm_max_ss(*(arg1 + 0x74), zmm1)
        *rdx_3 = zmm1 * 0.5f
        *(rdx_3 + 4) = 0x3f800000
        zmm0 = *(rbx + r9_1 + 0x14)
        zmm1 = arg2[6]
        zmm2 = *rdx_3
        
        if (zmm0 <= zmm1)
            *rdx_3 = zmm0 * zmm2
        else
            *rdx_3 = zmm1 * zmm2
            *(rdx_3 + 4) = zmm6.d f* *(rbx + r9_1 + 0x14)
        
        void* rax_1 = arg1[6]
        void* rdx_4 = &arg1[2]
        int64_t r9_2 = *arg1
        zmm1 = *arg2
        
        if (rax_1 != 0)
            rdx_4 = rax_1
        
        zmm0 = *(rbx + r9_2 + 0x34)
        
        if (zmm1 f<= zmm4)
            zmm1 = zmm0
        else
            zmm1 = _mm_min_ss(zmm1, zmm0)
        
        *(arg1 + 0x74) = _mm_max_ss(*(arg1 + 0x74), zmm1)
        *(rdx_4 + r8_1 + 8) = zmm1 * 0.5f
        *(rdx_4 + r8_1 + 0xc) = 0x3f800000
        zmm0 = *(rbx + r9_2 + 0x3c)
        zmm1 = arg2[6]
        zmm2 = *(rdx_4 + r8_1 + 8)
        
        if (zmm0 <= zmm1)
            *(rdx_4 + r8_1 + 8) = zmm0 * zmm2
        else
            *(rdx_4 + r8_1 + 8) = zmm1 * zmm2
            *(rdx_4 + r8_1 + 0xc) = zmm6.d f* *(rbx + r9_2 + 0x3c)
        
        void* rax_2 = arg1[6]
        void* rdx_5 = &arg1[2]
        int64_t r9_3 = *arg1
        zmm0 = *arg2
        
        if (rax_2 != 0)
            rdx_5 = rax_2
        
        zmm1 = *(rbx + r9_3 + 0x5c)
        
        if (not(zmm0 f<= zmm4))
            zmm1 = _mm_min_ss(zmm1, zmm0)
        
        *(arg1 + 0x74) = _mm_max_ss(*(arg1 + 0x74), zmm1)
        *(rdx_5 + r8_1 + 0x18 - 8) = zmm1 * 0.5f
        *(rdx_5 + r8_1 + 0x18 - 4) = 0x3f800000
        zmm0 = *(rbx + r9_3 + 0x64)
        zmm1 = arg2[6]
        zmm2 = *(rdx_5 + r8_1 + 0x18 - 8)
        
        if (zmm0 <= zmm1)
            *(rdx_5 + r8_1 + 0x18 - 8) = zmm0 * zmm2
        else
            *(rdx_5 + r8_1 + 0x18 - 8) = zmm1 * zmm2
            *(rdx_5 + r8_1 + 0x18 - 4) = zmm6.d f* *(rbx + r9_3 + 0x64)
        
        result = arg1[6]
        uint64_t result_1 = &arg1[2]
        int64_t r9_4 = *arg1
        zmm0 = *arg2
        
        if (result != 0)
            result_1 = result
        
        int32_t* rdx_6 = result_1 + r8_1 + 0x18
        zmm1 = *(rbx + r9_4 + 0x84)
        
        if (not(zmm0 f<= zmm4))
            zmm1 = _mm_min_ss(zmm1, zmm0)
        
        *(arg1 + 0x74) = _mm_max_ss(*(arg1 + 0x74), zmm1)
        *rdx_6 = zmm1 * 0.5f
        rdx_6[1] = 0x3f800000
        zmm0 = *(rbx + r9_4 + 0x8c)
        zmm1 = arg2[6]
        zmm2 = *rdx_6
        
        if (zmm0 <= zmm1)
            *rdx_6 = zmm0 * zmm2
        else
            *rdx_6 = zmm1 * zmm2
            rdx_6[1] = zmm6.d f* *(rbx + r9_4 + 0x8c)
        
        i += 4
        rbx += 0xa0
    while (i s< rsi - 3)

if (i s< rsi)
    int64_t r8_4 = i * 0x28
    
    do
        result = arg1[6]
        uint64_t result_2 = &arg1[2]
        int64_t r9_5 = *arg1
        zmm0 = *arg2
        
        if (result != 0)
            result_2 = result
        
        zmm1 = *(r8_4 + r9_5 + 0xc)
        
        if (not(zmm0 f<= zmm4))
            zmm1 = _mm_min_ss(zmm1, zmm0)
        
        float temp0_10 = _mm_max_ss(*(arg1 + 0x74), zmm1)
        zmm1 = zmm1 * 0.5f
        *(arg1 + 0x74) = temp0_10
        *(result_2 + (i << 3)) = zmm1
        *(result_2 + (i << 3) + 4) = 0x3f800000
        zmm0 = *(r8_4 + r9_5 + 0x14)
        zmm2 = arg2[6]
        
        if (zmm0 <= zmm2)
            *(result_2 + (i << 3)) = zmm0 * zmm1
        else
            *(result_2 + (i << 3)) = zmm1 * zmm2
            *(result_2 + (i << 3) + 4) = zmm6.d f* *(r8_4 + r9_5 + 0x14)
        
        i += 1
        r8_4 += 0x28
    while (i s< rsi)

return result
