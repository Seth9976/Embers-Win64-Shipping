// 函数: sub_141eb9360
// 地址: 0x141eb9360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rdi = 0
__builtin_memset(arg2, 0, 0x6e)
uint64_t rsi = zx.q(data_143f138e4)
uint64_t rbp = zx.q(data_143f138e8)
uint64_t r14 = zx.q(data_143f5b2a4)
float zmm7[0x4] = arg3
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm1 = zx.o(*(arg1 + 0x10))
double zmm9[0x2] = zx.o(0)
zmm9[0] = float.d(performanceCount)
zmm9[0] = zmm9[0] f* data_143d796f8
zmm9[0] = zmm9[0] + 16777216.0

if (not(zmm1.q f<= 0.0))
    zmm9[0] = zmm9[0] f- zmm1.q
    zmm7 = _mm_cvtpd_ps(zmm9)

*(arg1 + 0x10) = zmm9.q
arg3 = zx.o(0)
arg3[0].q = fconvert.d(zmm7[0])
arg2[1] = arg3.q
double zmm3 = data_143dbb3c8
arg2[2] = zmm3
arg2[3] = data_143dbb3d0
arg2[8] = data_143f4d280
arg2[9] = data_143f3d168

if (*data_143f3a4a8 != 0 && not(zmm3 f>= arg3[0].q))
    arg3[0].q = arg3[0].q f- zmm3
    zmm7 = _mm_cvtpd_ps(arg3)

double zmm0[0x2] = zx.o(0)
performanceCount.d = rsi.d
zmm0[0] = fconvert.d(zmm7[0])
int32_t var_80 = r14.d
int32_t var_7c = rbp.d
uint64_t var_98 = 0
int32_t var_90 = 4
*arg2 = zmm0.q
performanceCount:4.d = data_143f138ec
sub_1405c4a90(&var_98, 4, 0)
uint64_t r10 = var_98
*r10 = performanceCount.o

if (var_90 != 0)
    int32_t rcx_2 = *r10
    int64_t i = 1
    int32_t r9_1 = 1
    
    if (var_90 s> 1)
        if (var_90 - 1 u>= 8 && data_143ccb970 s>= 2)
            zmm1 = _mm_shuffle_epi32(zx.o(rcx_2), 0)
            arg3 = zmm1
            int32_t r8_2 = (var_90 - 1) & 0x80000007
            
            if (r8_2 s< 0)
                r8_2 = ((r8_2 - 1) | 0xfffffff8) + 1
            
            do
                r9_1 += 8
                zmm1 = _mm_max_epu32(zmm1, *(r10 + (i << 2)))
                int32_t zmm0_1[0x4] = *(r10 + (i << 2) + 0x10)
                i += 8
                arg3 = _mm_max_epu32(arg3, zmm0_1)
            while (i s< sx.q(var_90 - r8_2))
            
            zmm1 = _mm_max_epu32(zmm1, arg3)
            zmm1 = _mm_max_epu32(zmm1, _mm_bsrli_si128(zmm1, 8))
            rcx_2 = _mm_max_epu32(zmm1, _mm_bsrli_si128(zmm1, 4)).d
        
        if (r9_1 s< var_90)
            uint64_t i_2 = zx.q(var_90 - r9_1)
            int64_t rdx = r10 + (sx.q(r9_1) << 2)
            uint64_t i_1
            
            do
                int32_t rax_7 = *rdx
                rdx += 4
                
                if (rcx_2 u>= rax_7)
                    rax_7 = rcx_2
                
                rcx_2 = rax_7
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    rdi = rcx_2

if (r10 != 0)
    sub_140a74f90(r10)

zmm3 = sub_142218a10()[0]
arg2[2] = data_143dbb3c8
double zmm0_2[0x2] = zx.o(0)
uint64_t rax_8 = zx.q(data_143f138ec)
arg3 = zx.o(0)
zmm0_2[0] = float.d(rbp)
arg3[0].q = float.d(rax_8)
arg3[0].q = arg3[0].q f* data_143d796f8
int64_t temp0_12 = _mm_cvtps_pd(_mm_cvtpd_ps(arg3).q)
arg2[4] = temp0_12
zmm1.q = float.d(rsi)
zmm1.q = zmm1.q f* data_143d796f8
float temp0_14[0x4] = _mm_cvtps_pd(_mm_cvtpd_ps(zmm1).q)
arg2[5] = temp0_14.q
zmm0_2[0] = zmm0_2[0] f* data_143d796f8
int64_t temp0_16 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_2)[0])
zmm0_2 = zx.o(0)
arg2[6] = temp0_16
zmm0_2[0] = float.d(r14)
zmm0_2[0] = zmm0_2[0] f* data_143d796f8
double temp0_18[0x2] = _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_2)[0])
arg2[7] = temp0_18.q
arg2[0xb] = data_143e1a8c8
arg2[0xc].d = data_143e1a8d0
*(arg2 + 0x64) = data_143e1a8d4
zmm1 = data_143a2d640
int32_t rax_10

if (zmm7[0] f< zmm1.d || zmm1.d f<= 0f)
    rax_10.b = 1
else
    rax_10.b = 0

arg2[0xd].b = rax_10.b

if (rax_10.b != 0)
    zmm3.d = zmm3.d f* 0.00100000005f
    
    if (not(zmm7[0] f<= zmm3.d))
        zmm0_2 = zx.o(0)
        zmm0_2[0] = fconvert.d(zmm3.d)
        
        if (not(temp0_12 f< zmm0_2[0]))
            *(arg2 + 0x69) = 1
        
        if (not(temp0_14[0].q f< zmm0_2[0]))
            *(arg2 + 0x6a) = 1
        
        if (not(temp0_16 f< zmm0_2[0]))
            *(arg2 + 0x6b) = 1
        
        if (not(temp0_18[0] < zmm0_2[0]))
            *(arg2 + 0x6c) = 1

double zmm0_3
zmm0_3.d = sub_142217650().d f* 0.00100000005f

if (not(zmm7[0] f< zmm0_3.d))
    double zmm6[0x2] = zx.o(0)
    zmm6[0].d = fconvert.s(zmm9[0] f- *(arg1 + 0x20))
    zmm0_3.d = sub_142217990().d f* 0.00100000005f
    
    if (not(zmm6[0].d f< zmm0_3.d))
        zmm0_3.d = sub_142217660().d f* *(arg1 + 0x18)
        
        if (not(zmm7[0] f<= zmm0_3.d))
            zmm0_3.d = float.s(zx.q(data_143f138ec))
            float zmm1_1 = float.s(zx.q(rdi)) - 0.25f
            
            if (zmm0_3.d f< zmm1_1)
                zmm0_3.d = float.s(rsi)
                
                if (zmm0_3.d f< zmm1_1)
                    zmm0_3.d = float.s(rbp)
                    
                    if (zmm0_3.d f< zmm1_1)
                        zmm0_3.d = float.s(r14)
                        
                        if (zmm0_3.d f< zmm1_1)
                            *(arg2 + 0x6d) = 1
                            rbp.b = 1
                        else
                            *(arg2 + 0x6d) = 5
                            rbp.b = 5
                    else
                        *(arg2 + 0x6d) = 4
                        rbp.b = 4
                else
                    *(arg2 + 0x6d) = 3
                    rbp.b = 3
            else
                *(arg2 + 0x6d) = 2
                rbp.b = 2
            
            int64_t r15
            r15.b = 0
            int64_t* r14_2 = data_143f5b298 + 0xb38
            *(r14_2 + 0x14) += 1
            int32_t rax_13 = r14_2[1].d
            int32_t rcx_5 = *(r14_2 + 0x14)
            int64_t rsi_1 = sx.q(rax_13 - 1)
            
            if (rax_13 - 1 s>= 0)
                int64_t rdi_2 = rsi_1 << 4
                int64_t temp2_1
                
                do
                    int64_t rcx_6 = *r14_2
                    
                    if (*(rdi_2 + rcx_6 + 8) == 0)
                        r15.b = 1
                    else
                        int64_t* rcx_7 = *(rdi_2 + rcx_6)
                        
                        if (rcx_7 == 0)
                            r15.b = 1
                        else if ((*(*rcx_7 + 0x50))(rcx_7, zx.q(rbp.b), zmm7) == 0)
                            r15.b = 1
                    
                    rdi_2 -= 0x10
                    temp2_1 = rsi_1
                    rsi_1 -= 1
                while (temp2_1 - 1 s>= 0)
                rcx_5 = *(r14_2 + 0x14)
            
            *(r14_2 + 0x14) = rcx_5 - 1
            
            if (r15.b != 0)
                zmm0_3 = sub_140599630(r14_2, 0)
            
            *(arg1 + 0x20) = zmm9.q

*(arg1 + 0x18) = zmm7[0]
arg2[0xa] = 0x4059000000000000
sub_1423dd0a0(data_143f5b298, &performanceCount, zmm0_3.d)

if (performanceCount.d - 3 u<= 1)
    float zmm0_4[0x2] = performanceCount:4.d
    zmm0_4[0] = zmm0_4[0] * 100f
    arg2[0xa] = _mm_cvtps_pd(zmm0_4)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
