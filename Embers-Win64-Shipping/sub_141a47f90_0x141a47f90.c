// 函数: sub_141a47f90
// 地址: 0x141a47f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = *(arg1 + 0x10)
float zmm2[0x4] = zx.o(0)
int32_t rcx = *r11
int32_t arg_8
arg_8.q = arg2
uint64_t rax_1
int96_t var_38
int64_t arg_10
uint64_t rax_5
double zmm0[0x2]
double zmm1
float zmm3[0x4]

if (arg2.d s< rcx || (arg2.d == rcx && 0f f< rcx.q:4.d))
    rax_1 = zx.q(*(arg1 + 8))
    
    if (rax_1.b != 5)
        if (rax_1.b == 4)
            int32_t* rax_10
            rax_10.b = 1
            *arg3 = **(arg1 + 0x20)
            return rax_10
        
        if (rax_1.b == 3)
            double (* r10_3)[0x2] = *(arg1 + 0x20)
            rax_5 = zx.q((*r10_3)[3].d)
            int32_t var_20_1 = rax_5.d
            var_38 = (*r10_3)[0].12
            
            if (rax_5.b == 1)
            label_141a482cf:
                *arg3 = var_38.d[0].d
                rax_5.b = 1
                return rax_5
            
            if (rax_5.b != 2)
                if (rax_5.b != 0)
                    rax_5.b = 1
                    return rax_5
                
                int32_t r9_2 = r11[1]
                
                if (r9_2 == rcx)
                    goto label_141a482cf
                
                zmm3 = zx.o(0)
                zmm2 = *(r10_3 + 0x1c)
                double temp0_20[0x2] = _mm_cvtps_pd(arg2:4.d[0])
                zmm3[0].q = float.d(r9_2)
                zmm0 = var_38.d
                zmm0[0].d = zmm0[0].d f- zmm2[0]
                zmm3[0].q = zmm3[0].q f- (float.d(arg2.d) + temp0_20[0])
                rax_5.b = 1
                zmm3[0].q = zmm3[0].q f/ float.d(r9_2 - rcx)
                double temp0_21 = _mm_cvtps_pd(zmm0[0])
                double temp0_22[0x2] = _mm_cvtps_pd(zmm2[0].q)
                zmm3[0].q = zmm3[0].q f* temp0_21
                zmm3[0].q = zmm3[0].q f+ temp0_22[0]
                *arg3 = _mm_cvtpd_ps(zmm3)[0].d
                return rax_5
            
            arg_10.d = rcx
            arg_10:4.d = 0
            zmm3 = arg_10:4.d
            arg_8.q = arg2
            zmm3[0] = zmm3[0] - 0f
            zmm1.d = zmm3[0].q.d f+ zmm3[0]
            zmm1.d = zmm1.d f- 0.5f
            int32_t rax_13 = int.d(zmm1.d) s>> 1
            int32_t rdx = rcx - arg2.d + rax_13
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_13))
            zmm3[0] = zmm3[0] f- zmm0[0].d
            
            if (not(zmm3[0] < 0f))
                zmm2 = __minss_xmmss_memss(zmm3[0], 0x3f7fffff)
            
            rax_13.b = 1
            zmm2 = _mm_cvtps_pd(zmm2[0].q)
            zmm3 = _mm_cvtps_pd(var_38.d[0].q)
            double temp0_16[0x2] = _mm_cvtepi32_pd(zx.o(rdx)[0])
            double temp0_17 = _mm_cvtps_pd(var_38:4.d)
            zmm2[0].q = zmm2[0].q f+ temp0_16[0]
            zmm2[0].q = zmm2[0].q f* temp0_17
            zmm3[0].q = zmm3[0].q f- zmm2[0].q
            *arg3 = _mm_cvtpd_ps(zmm3)[0].d
            return rax_13
else
    int64_t rbx_1 = sx.q(*(arg1 + 0x18))
    int32_t r10_1 = r11[rbx_1 - 1]
    arg_8.q = arg2
    
    if (arg2.d s> r10_1)
    label_141a48015:
        rax_1 = zx.q(*(arg1 + 9))
        
        if (rax_1.b != 5)
            if (rax_1.b == 4)
                int64_t rax_3
                rax_3.b = 1
                *arg3 = *(sx.q(*(arg1 + 0x28)) * 0x1c + *(arg1 + 0x20) - 0x1c)
                return rax_3
            
            if (rax_1.b == 3)
                int64_t rdi_1 = *(arg1 + 0x20)
                int64_t rcx_3 = sx.q(*(arg1 + 0x28)) * 0x1c
                rax_5 = zx.q(*(rcx_3 + rdi_1 - 4))
                int32_t var_20 = rax_5.d
                var_38 = (*(rcx_3 + rdi_1 - 0x1c))[0].12
                
                if (rax_5.b == 1)
                    goto label_141a482cf
                
                if (rax_5.b == 2)
                    arg_10.d = r10_1
                    arg_10:4.d = 0
                    arg_8.q = arg_10
                    zmm3 = arg2:4.d
                    zmm3[0] = zmm3[0] - 0f
                    zmm1.d = zmm3[0].q.d f+ zmm3[0]
                    zmm1.d = zmm1.d f- 0.5f
                    int32_t rcx_5 = int.d(zmm1.d) s>> 1
                    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_5))
                    zmm3[0] = zmm3[0] f- zmm0[0].d
                    
                    if (not(zmm3[0] < 0f))
                        zmm2 = __minss_xmmss_memss(zmm3[0], 0x3f7fffff)
                    
                    int32_t rax_8
                    rax_8.b = 1
                    zmm2 = _mm_cvtps_pd(zmm2[0].q)
                    double temp0_4[0x2] = _mm_cvtepi32_pd(zx.o(rcx_5 - r10_1 + arg2.d)[0])
                    double temp0_5 = _mm_cvtps_pd(var_38:8.d)
                    zmm2[0].q = zmm2[0].q f+ temp0_4[0]
                    double temp0_6[0x2] = _mm_cvtps_pd(var_38.d[0])
                    zmm2[0].q = zmm2[0].q f* temp0_5
                    zmm2[0].q = zmm2[0].q f+ temp0_6[0]
                    *arg3 = _mm_cvtpd_ps(zmm2)[0].d
                    return rax_8
                
                if (rax_5.b != 0)
                    rax_5.b = 1
                    return rax_5
                
                int32_t rcx_6 = r11[rbx_1 - 2]
                
                if (r10_1 == rcx_6)
                    goto label_141a482cf
                
                zmm3 = zx.o(0)
                zmm3[0].q = float.d(arg2.d)
                double temp0_8[0x2] = _mm_cvtps_pd(arg2:4.d[0])
                zmm3[0].q = zmm3[0].q f+ temp0_8[0]
                zmm0 = zx.o(0)
                zmm0[0] = float.d(r10_1 - rcx_6)
                zmm3[0].q = zmm3[0].q f- float.d(rcx_6)
                zmm3[0].q = zmm3[0].q f/ zmm0[0]
                zmm2 = *((rbx_1 - 2) * 0x1c + rdi_1)
                float (* rax_9)[0x4]
                rax_9.b = 1
                zmm1.d = var_38.d.d f- zmm2[0]
                double temp0_9[0x2] = _mm_cvtps_pd(zmm1)
                double temp0_10 = _mm_cvtps_pd(zmm2[0].q)
                zmm3[0].q = zmm3[0].q f* temp0_9[0]
                zmm3[0].q = zmm3[0].q f+ temp0_10
                *arg3 = _mm_cvtpd_ps(zmm3)[0].d
                return rax_9
    else if (arg2.d == r10_1 && not(0f f<= r10_1.q:4.d))
        goto label_141a48015
rax_1.b = 0
return rax_1
