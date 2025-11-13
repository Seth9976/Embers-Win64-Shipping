// 函数: sub_14257af00
// 地址: 0x14257af00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t r8_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_18
int64_t* rax_3 = sub_1422a11b0(arg1, &var_18, r8_2)
float zmm3[0x4] = *rax_3
int64_t zmm2 = *(rax_3 + 4)
float result = rax_3[1].d f* 57.2957764f
zmm3[0] = zmm3[0] * 57.2957764f
zmm2.d = zmm2.d f* 57.2957764f
*arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg3[1].d = result
return result
