// 函数: sub_1424e7fe0
// 地址: 0x1424e7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
float zmm1 = arg_10 * 2f
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
*arg3 = int.d(zmm1 + 0.5f) s>> 1
int32_t result = int.d(arg4 * 2f + 0.5f) s>> 1
arg3[1] = result
return result
