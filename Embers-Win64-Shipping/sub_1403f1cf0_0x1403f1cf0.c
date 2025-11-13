// 函数: sub_1403f1cf0
// 地址: 0x1403f1cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg3)
int32_t rdx = 0
int64_t result = (zx.o(0)).q
uint64_t rax_1 = zx.q(r9.d) & 0xfffc
float zmm0[0x2]
double zmm1
double zmm2

if (rax_1.d s> 0)
    double* rcx = arg1 - arg2
    int64_t* r8 = arg2 + 4
    int64_t i_3 = ((rax_1 - 1) u>> 2) + 1
    rdx = (i_3 << 2).d
    int64_t i
    
    do
        float zmm3[0x2] = *(rcx + r8 - 4)
        zmm2 = *(rcx + r8)
        zmm1 = *r8
        zmm0 = _mm_cvtps_pd(*(r8 - 4))
        r8 = &r8[2]
        zmm3 = _mm_cvtps_pd(zmm3) f* zmm0
        zmm0 = *(r8 - 0xc)
        zmm2 = _mm_cvtps_pd(zmm2) * _mm_cvtps_pd(zmm1)
        zmm1 = *(rcx + r8 - 0xc)
        zmm3 = zmm3 f+ zmm2
        zmm2 = *(rcx + r8 - 8)
        zmm0 = _mm_cvtps_pd(zmm0)
        result = result f+ zmm3 f+ _mm_cvtps_pd(zmm1) f* zmm0 f+ _mm_cvtps_pd(zmm2)
            f* _mm_cvtps_pd(r8[-1].d)
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rcx_1 = sx.q(rdx)

if (rcx_1 s< r9)
    if (r9 - rcx_1 s>= 4)
        double* r8_2 = arg1 - arg2
        void* rax_7 = arg2 + 4 + (rcx_1 << 2)
        int64_t i_4 = ((r9 - rcx_1 - 4) u>> 2) + 1
        rcx_1 += i_4 << 2
        int64_t i_1
        
        do
            zmm2 = *(r8_2 + rax_7 - 4)
            zmm0 = *(rax_7 - 4)
            zmm1 = *(r8_2 + rax_7)
            rax_7 += 0x10
            zmm0 = _mm_cvtps_pd(zmm0)
            zmm2 = _mm_cvtps_pd(zmm2)
            zmm1 = _mm_cvtps_pd(zmm1)
            zmm2 = zmm2 f* zmm0
            zmm0 = _mm_cvtps_pd(*(rax_7 - 0x10))
            result = zmm2 f+ result
            zmm2 = *(r8_2 + rax_7 - 0xc)
            result = result f+ zmm1 f* zmm0
            zmm1 = *(r8_2 + rax_7 - 8)
            zmm0 = _mm_cvtps_pd(*(rax_7 - 0xc))
            result = result f+ _mm_cvtps_pd(zmm2) f* zmm0 f+ _mm_cvtps_pd(zmm1)
                f* _mm_cvtps_pd(*(rax_7 - 8))
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    if (rcx_1 s< r9)
        double* rax_8 = arg2 + (rcx_1 << 2)
        int64_t i_5 = r9 - rcx_1
        int64_t i_2
        
        do
            zmm2 = *(arg1 - arg2 + rax_8)
            zmm1 = *rax_8
            rax_8 += 4
            result = result f+ _mm_cvtps_pd(zmm2) * _mm_cvtps_pd(zmm1)
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)

return result
