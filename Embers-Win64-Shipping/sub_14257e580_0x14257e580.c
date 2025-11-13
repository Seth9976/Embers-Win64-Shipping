// 函数: sub_14257e580
// 地址: 0x14257e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

bool cond:1 = arg_8 != 0
int64_t arg_10 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
float zmm3[0x4] = var_48
int64_t rdi
rdi.b = rax_4 != 0
int64_t r9 = arg_10
*(arg2 + 0x20) = rdi + rax_4
zmm3[0] = zmm3[0] * 0.0174532924f
int32_t var_44
int64_t zmm2
zmm2.d = var_44.d f* 0.0174532924f
float var_40
float var_30 = var_40 * 0.0174532924f
int64_t rax_6 = *arg1
int64_t var_38 = (_mm_unpacklo_ps(zmm3, zmm2)).q
return (*(rax_6 + 0x600))(arg1, &var_38, zx.q(rsi.b), r9)
