// 函数: sub_1424fa2f0
// 地址: 0x1424fa2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t result = *(arg2 + 0x20)
float zmm0[0x4] = arg_10
zmm0[0] = zmm0[0] f* arg_18
int64_t rcx_2
rcx_2.b = result != 0
int64_t zmm1
zmm1.d = arg4.d f* arg5
*(arg2 + 0x20) = rcx_2 + result
*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
return result
