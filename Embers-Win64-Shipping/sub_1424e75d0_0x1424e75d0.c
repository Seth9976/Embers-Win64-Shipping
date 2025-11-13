// 函数: sub_1424e75d0
// 地址: 0x1424e75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
float zmm1[0x4] = arg_10
float result = zmm1[0]
int64_t rcx_1
rcx_1.b = rax_2 != 0
float temp0[0x4] = _mm_unpacklo_ps(zmm1, zmm1[0].q)
*(arg2 + 0x20) = rcx_1 + rax_2
*arg3 = temp0.q
arg3[1].d = result
return result
