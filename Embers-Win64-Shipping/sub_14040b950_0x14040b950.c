// 函数: sub_14040b950
// 地址: 0x14040b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4 = 0x26901d7d
int128_t zmm7 = 0x26901d7d
int128_t zmm1
int128_t zmm0
int128_t zmm2
float zmm3

if (arg3 == 0)
    int64_t rcx_1 = sx.q(arg4)
    int64_t r8_1 = 0
    
    if (rcx_1 s>= 4)
        float* rax_4 = arg2 + 4
        int128_t* rdx_3 = arg1 - arg2
        int64_t i_7 = ((rcx_1 - 4) u>> 2) + 1
        r8_1 = i_7 << 2
        int64_t i
        
        do
            zmm0 = *(rdx_3 + rax_4 - 4)
            zmm2 = rax_4[-1]
            zmm1 = *(rdx_3 + rax_4)
            zmm0.d = zmm0.d f* zmm0.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm3 = *rax_4
            zmm0.d = zmm0.d f+ zmm7.d
            zmm7 = *(rdx_3 + rax_4 + 8)
            rax_4 = &rax_4[4]
            zmm7.d = zmm7.d f* zmm7.d
            zmm2.d = zmm2.d f+ zmm4.d
            zmm4 = rax_4[-2]
            zmm1.d = zmm1.d f+ zmm0.d
            zmm4.d = zmm4.d f* zmm4.d
            zmm0 = *(rdx_3 + rax_4 - 0xc)
            zmm3 = zmm3 * zmm3 f+ zmm2.d
            zmm2 = rax_4[-3]
            zmm0.d = zmm0.d f* zmm0.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm1.d
            zmm2.d = zmm2.d f+ zmm3
            zmm7.d = zmm7.d f+ zmm0.d
            zmm4.d = zmm4.d f+ zmm2.d
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    if (r8_1 s< rcx_1)
        void* rax_5 = arg2 + (r8_1 << 2)
        int64_t i_6 = rcx_1 - r8_1
        int64_t i_1
        
        do
            zmm0 = *(arg1 - arg2 + rax_5)
            zmm1 = *rax_5
            rax_5 += 4
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm0.d = zmm0.d f+ zmm7.d
            zmm1.d = zmm1.d f+ zmm4.d
            zmm7 = zmm0
            zmm4 = zmm1
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
else
    uint32_t r8 = 0
    uint64_t rbx_1 = 0
    
    if (arg4 s>= 4)
        void* rcx = arg2 + 4
        void* rdx_1 = arg1 - arg2
        uint64_t i_4 = zx.q(((arg4 - 4) u>> 2) + 1)
        r8 = (i_4 << 2).d
        rbx_1 = i_4 << 2
        uint64_t i_2
        
        do
            zmm0 = *(rcx - 4)
            zmm3 = *(rdx_1 + rcx - 4)
            float zmm5 = *(rdx_1 + rcx + 4)
            rcx += 0x10
            zmm1.d = zmm0.d f+ zmm3
            zmm3 = zmm3 f- zmm0.d
            zmm0 = *(rcx - 0xc)
            zmm1.d = zmm1.d f* zmm1.d
            zmm1.d = zmm1.d f+ zmm7.d
            zmm3 = zmm3 * zmm3 f+ zmm4.d
            zmm4 = *(rdx_1 + rcx - 0x10)
            zmm2 = zmm4
            zmm4.d = zmm4.d f- *(rcx - 0x10)
            zmm2.d = zmm2.d f+ *(rcx - 0x10)
            zmm4.d = zmm4.d f* zmm4.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm4.d = zmm4.d f+ zmm3
            zmm2.d = zmm2.d f+ zmm1.d
            zmm1.d = zmm0.d f+ zmm5
            zmm5 = zmm5 f- zmm0.d
            zmm0 = *(rcx - 8)
            zmm1.d = zmm1.d f* zmm1.d
            zmm5 = zmm5 * zmm5 f+ zmm4.d
            zmm4 = *(rdx_1 + rcx - 8)
            zmm1.d = zmm1.d f+ zmm2.d
            zmm7.d = zmm0.d f+ zmm4.d
            zmm4.d = zmm4.d f- zmm0.d
            zmm4.d = zmm4.d f* zmm4.d
            zmm7.d = zmm7.d f* zmm7.d
            zmm4.d = zmm4.d f+ zmm5
            zmm7.d = zmm7.d f+ zmm1.d
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (r8 s< arg4)
        void* rax_3 = arg2 + (rbx_1 << 2)
        uint64_t i_5 = zx.q(arg4 - r8)
        uint64_t i_3
        
        do
            zmm2 = *(arg1 - arg2 + rax_3)
            rax_3 += 4
            zmm1 = zmm2
            zmm2.d = zmm2.d f- *(rax_3 - 4)
            zmm1.d = zmm1.d f+ *(rax_3 - 4)
            zmm2.d = zmm2.d f* zmm2.d
            zmm2.d = zmm2.d f+ zmm4.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm1.d = zmm1.d f+ zmm7.d
            zmm4 = zmm2
            zmm7 = zmm1
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
zmm1.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm4.q).q))
double _X = _mm_cvtps_pd(zmm7.q)
int128_t zmm6 = _mm_cvtps_pd(zmm1.q)
zmm1.d = fconvert.s(sqrt(_X))
return zx.q(int.d(floor(atan2(zmm6.q, _mm_cvtps_pd(zmm1.q).q) * 10430.3818359375 + 0.5)))
