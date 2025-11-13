// 函数: sub_1424e9e90
// 地址: 0x1424e9e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t zmm1 = arg_10
float zmm0[0x4] = zx.o(0)
int64_t rcx_2
rcx_2.b = rax_3 != 0
bool cond:3 = zmm1.d f== zmm0[0]
*(arg2 + 0x20) = rcx_2 + rax_3

if (cond:3 || arg4 f== zmm0[0])
    int64_t rax_4 = sub_1420d0cf0()
    *arg3 = (_mm_unpacklo_ps(data_143dbb1f0.d, data_143dbb1f0:4.d)).q
    return rax_4

zmm0 = arg_18
zmm0[0] = zmm0[0] f/ zmm1.d
zmm1.d = arg5.d f/ arg4
*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
return rax_3
