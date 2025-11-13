// 函数: sub_1424fa220
// 地址: 0x1424fa220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm0_1[0x4] = arg_18
zmm0_1[0] = zmm0_1[0] f* arg_10
int64_t rcx_2
rcx_2.b = result != 0
int64_t zmm1
zmm1.d = arg4.d f* arg_10
*(arg2 + 0x20) = rcx_2 + result
*arg3 = (_mm_unpacklo_ps(zmm0_1, zmm1)).q
return result
