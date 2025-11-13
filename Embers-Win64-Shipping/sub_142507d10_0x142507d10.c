// 函数: sub_142507d10
// 地址: 0x142507d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
float zmm1[0x4] = 0x3f800000
int64_t rcx_1
rcx_1.b = rax_2 != 0
int32_t var_10
bool cond:2 = var_10[0] < 0f
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t result

result = cond:2 ? -0x40800000 : 0x3f800000

int32_t var_14
int64_t zmm4

if (var_14[0] < 0f)
    zmm4 = 0xbf800000
else
    zmm4 = 0x3f800000

if (not(var_18[0] >= 0f))
    zmm1 = 0xbf800000

*arg3 = (_mm_unpacklo_ps(zmm1, zmm4)).q
arg3[1].d = result
return result
