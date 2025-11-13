// 函数: sub_140636c30
// 地址: 0x140636c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
sub_140b21b90(arg1, &arg_10)
int64_t arg_8
sub_140b21b90(arg2, &arg_8)
int16_t* const rcx_1 = &data_142d40450
int16_t* rdx_2

if (arg2[1].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *arg2

if (arg1[1].d != 0)
    rcx_1 = *arg1

int32_t rax = sub_140a54510(rcx_1, rdx_2)
int64_t rdx_3 = arg_10
double zmm3[0x2] = zx.o(0)
int64_t rdx_4 = rdx_3 - arg_8

if (rax s< 0)
    rdx_4 = arg_8 - rdx_3

zmm3[0] = float.d(rdx_4)
zmm3[0] = zmm3[0] * 0.0001
zmm3[0] = zmm3[0] * 9.9999999999999995e-08
zmm3[0] = zmm3[0] * 1.6666666666666667e-09
zmm3[0] = zmm3[0] * 2.7777777777777777e-11
*arg3 = _mm_cvtpd_ps(zmm3)[0].d
*arg4 = _mm_cvtpd_ps(zmm3)[0].d
*arg5 = _mm_cvtpd_ps(zmm3)[0].d
*arg6 = _mm_cvtpd_ps(zmm3)[0].d
return arg6
