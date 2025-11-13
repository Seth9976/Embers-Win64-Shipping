// 函数: sub_142502250
// 地址: 0x142502250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
float zmm0 = arg_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2

if (not(zmm0 < 0f))
    *arg3 = _mm_sqrt_ss(zmm0, zmm0)
    return rax_2

int64_t rax_3 = sub_1420d0db0()
*arg3 = 0f
return rax_3
