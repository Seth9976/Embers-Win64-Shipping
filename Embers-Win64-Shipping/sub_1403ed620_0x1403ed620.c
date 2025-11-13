// 函数: sub_1403ed620
// 地址: 0x1403ed620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int64_t result = (zx.o(0)).q
uint64_t rax = zx.q(arg2) & 0xfffc
float zmm0[0x2]
double zmm1

if (rax.d s> 0)
    void* r8_1 = arg1 + 8
    int64_t i_3 = ((rax - 1) u>> 2) + 1
    r9 = (i_3 << 2).d
    int64_t i
    
    do
        zmm0 = *(r8_1 - 4)
        zmm1 = *r8_1
        double zmm2 = *(r8_1 + 4)
        float zmm3[0x2] = _mm_cvtps_pd(*(r8_1 - 8))
        zmm0 = _mm_cvtps_pd(zmm0)
        r8_1 += 0x10
        zmm1 = _mm_cvtps_pd(zmm1)
        zmm2 = _mm_cvtps_pd(zmm2)
        result = result f+ zmm3 f* zmm3 f+ zmm0 f* zmm0 f+ zmm1 * zmm1 f+ zmm2 * zmm2
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t r10 = sx.q(r9)

if (r9 s< arg2)
    if (arg2 - r9 s>= 4)
        void* rcx_1 = arg1 + 8 + (r10 << 2)
        uint64_t rax_9 = zx.q(((arg2 - r9 - 4) u>> 2) + 1)
        uint64_t i_5 = zx.q(rax_9.d)
        r9 += (rax_9 << 2).d
        r10 += rax_9 << 2
        uint64_t i_1
        
        do
            zmm0 = *(rcx_1 - 8)
            zmm1 = *(rcx_1 - 4)
            rcx_1 += 0x10
            zmm0 = _mm_cvtps_pd(zmm0)
            zmm1 = _mm_cvtps_pd(zmm1)
            result = result f+ zmm0 f* zmm0 f+ zmm1 * zmm1
            zmm1 = *(rcx_1 - 0xc)
            zmm0 = _mm_cvtps_pd(*(rcx_1 - 0x10))
            zmm1 = _mm_cvtps_pd(zmm1)
            result = result f+ zmm0 f* zmm0 f+ zmm1 * zmm1
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (r9 s< arg2)
        double* rax_10 = arg1 + (r10 << 2)
        int64_t i_4 = sx.q(arg2 - r9)
        int64_t i_2
        
        do
            zmm1 = *rax_10
            rax_10 += 4
            zmm1 = _mm_cvtps_pd(zmm1)
            result = result f+ zmm1 * zmm1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
