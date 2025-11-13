// 函数: sub_142676500
// 地址: 0x142676500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0xffffffff
int32_t arg_10 = 0xffffffff
sub_142676a20(*(arg1 + 0xe8), &arg_8, &arg_10)
int32_t result_1 = 1 << arg_8.b
void* rcx_2 = *(arg1 + 0xe8)
int32_t result

if ((1 & not.b(*(rcx_2 + 0x408))) == 0)
    result = *(rcx_2 + 0x40c)
else
    float zmm2[0x4] = *(arg1 + 0xb4)
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20))).d f* *(arg1 + 0x28)
    result = sub_1426760e0(arg1 + 0xd8, zmm1_1, zmm2)

if (result s< 0 || result s> result_1)
    result = result_1

int32_t rcx_4 = arg_10

if (rcx_4 s< 0x20)
    *arg3 = 1 << rcx_4.b
else
    *arg3 = 0x7fffffff

*arg2 = result
return result
