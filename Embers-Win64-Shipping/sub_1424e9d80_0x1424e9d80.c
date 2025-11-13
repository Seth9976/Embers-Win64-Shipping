// 函数: sub_1424e9d80
// 地址: 0x1424e9d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
float zmm0[0x4] = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
bool cond:2 = zmm0[0] != 0f
*(arg2 + 0x20) = rcx_2 + rax_3

if (not(cond:2))
    int64_t rax_4 = sub_1420d0cd0()
    *arg3 = (_mm_unpacklo_ps(data_143dbb1f0.d, data_143dbb1f0:4.d)).q
    return rax_4

float zmm2 = 1f / zmm0[0]
zmm0 = arg_18
zmm0[0] = zmm0[0] * zmm2
int64_t zmm1
zmm1.d = arg4.d f* zmm2
*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
return rax_3
