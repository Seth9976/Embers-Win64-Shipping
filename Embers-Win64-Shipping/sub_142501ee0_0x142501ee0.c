// 函数: sub_142501ee0
// 地址: 0x142501ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm0 = arg_10
int64_t rcx_1
rcx_1.b = result != 0
zmm0 - 0f
*(arg2 + 0x20) = rcx_1 + result

if (not(zmm0 <= 0f))
    *arg3 = 0x3f800000
    return result

if (zmm0 >= 0f)
    *arg3 = 0
    return result

*arg3 = 0xbf800000
return result
