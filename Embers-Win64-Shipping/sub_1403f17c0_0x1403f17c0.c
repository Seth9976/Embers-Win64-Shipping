// 函数: sub_1403f17c0
// 地址: 0x1403f17c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t r15 = sx.q(arg7)
int32_t rbx = r15.d + arg5
int32_t r14 = rbx * 2
void var_358
void* r12 = &var_358 + (r15 << 2)
sub_1403f0b10(&var_358, arg3, arg2, r14, r15.d)
int128_t zmm6 = *arg4
zmm6.d = zmm6.d f* zmm6.d
void* rbx_1 = r12 + (sx.q(rbx) << 2)
float zmm0[0x2] = sub_1403ed620(r12, arg5) f* _mm_cvtps_pd(zmm6.q)
zmm0[0] = fconvert.s(zmm0)
*arg1 = zmm0[0]
zmm6 = *(arg4 + 4)
int64_t result
float zmm0_1[0x2]
zmm0_1, result = sub_1403ed620(rbx_1, arg5)
zmm6.d = zmm6.d f* zmm6.d
zmm0_1 = zmm0_1 f* _mm_cvtps_pd(zmm6.q)
zmm0_1[0] = fconvert.s(zmm0_1)
arg1[1] = zmm0_1[0]

if (arg6 == 4)
    sub_1403f0b10(&var_358, &arg3[0x10], (sx.q(r14) << 2) + arg2, r14, r15.d)
    zmm6 = *(arg4 + 8)
    zmm6.d = zmm6.d f* zmm6.d
    float zmm0_2[0x2] = sub_1403ed620(r12, arg5) f* _mm_cvtps_pd(zmm6.q)
    zmm0_2[0] = fconvert.s(zmm0_2)
    arg1[2] = zmm0_2[0]
    zmm6 = *(arg4 + 0xc)
    float zmm0_3[0x2]
    zmm0_3, result = sub_1403ed620(rbx_1, arg5)
    zmm6.d = zmm6.d f* zmm6.d
    zmm0_3 = zmm0_3 f* _mm_cvtps_pd(zmm6.q)
    zmm0_3[0] = fconvert.s(zmm0_3)
    arg1[3] = zmm0_3[0]

__security_check_cookie(rax_1 ^ &var_398)
return result
