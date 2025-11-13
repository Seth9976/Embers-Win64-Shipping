// 函数: sub_142503930
// 地址: 0x142503930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
double result[0x2] = zx.o(0)
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t rax_4 = arg_10
*(arg2 + 0x20) = rcx_2 + rax_3

if (rax_4 == 0)
    *arg3 = _mm_cvtpd_ps(result)[0]
    return result

float zmm1[0x4] = zx.o(0)
zmm1[0].q = float.d(arg_18)
result[0] = float.d(rax_4)
zmm1[0].q = zmm1[0].q f/ result[0]
*arg3 = _mm_cvtpd_ps(zmm1)[0]
return result
