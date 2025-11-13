// 函数: sub_1420043d0
// 地址: 0x1420043d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
(*(*arg1 + 0x260))(arg1, &var_18)
double zmm1[0x2] = _mm_cvtps_pd(arg1[5].d[0])
int64_t rcx = int.q(zmm1[0])
double zmm0[0x2] = zmm1
double zmm2[0x2]

if (rcx != -0x8000000000000000)
    zmm2 = zx.o(0)
    zmm2[0] = float.d(rcx)
    
    if (not(zmm2[0] == zmm1[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rcx - (zx.q(temp0_2) & 1))

zmm1[0] = zmm1[0] - zmm0[0]
int32_t r8 = int.d(zmm0[0])
int32_t temp0_3 = _mm_cvtpd_ps(zmm1)
int32_t arg_8 = r8
int32_t arg_c

if (temp0_3 f>= 0f)
    zmm0 = _mm_min_ss(0x3f7fffff, temp0_3)
    
    if (zmm0[0].d f>= 0f)
        arg_c = _mm_min_ss(zmm0[0].d, 0x3f7fffff)[0].d
    else
        arg_c = 0
else
    arg_c = _mm_min_ss(zx.o(0)[0].d, 0x3f7fffff)[0].d

int32_t var_14
zmm2 = var_14
arg_8.q = arg_8.q
zmm2[0].d = zmm2[0].d f- arg_c
zmm2[0].d = zmm2[0].d f+ zmm2[0].d
zmm2[0].d = zmm2[0].d f- 0.5f
int32_t rdx_2 = int.d(zmm2[0].d) s>> 1
int32_t rax_5 = var_18 + rdx_2 - r8
int32_t var_10
int32_t rcx_4 = var_10
var_18 = rax_5
arg_8 = rax_5
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_2))
zmm2[0].d = zmm2[0].d f- zmm0[0].d
int32_t var_14_1 = zmm2[0].d
int32_t var_c
char r9

if ((rcx_4 != 0x7530 || var_c != 0x3e9) && (rcx_4 != 0xea60 || var_c != 0x3e9))
    r9 = 0
else if (sub_140b4afa0() == 0)
    r9 = 0
else
    r9 = 1

sub_140af0b20(arg2, &arg_8, &var_10, r9)
return arg2
