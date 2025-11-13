// 函数: sub_1424e8f60
// 地址: 0x1424e8f60
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
float zmm0[0x4] = arg_10
float zmm1[0x4] = 0xbf800000
int64_t rcx_1
rcx_1.b = rax_2 != 0
bool cond:2 = zmm0[0] < -1f
*(arg2 + 0x20) = rcx_1 + rax_2

if (not(cond:2))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

float result = acosf(zmm1[0]) * 57.2957764f
*arg3 = result
return result
