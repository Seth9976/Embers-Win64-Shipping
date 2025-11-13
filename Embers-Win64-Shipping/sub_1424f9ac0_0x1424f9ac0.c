// 函数: sub_1424f9ac0
// 地址: 0x1424f9ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_48
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int128_t zmm2 = arg_10
int64_t i_1 = 4
int64_t rbp
rbp.b = rax_4 != 0
int128_t var_88
int64_t rcx_2 = &var_88 - rsi
void* result = rsi + 8
*(arg2 + 0x20) = rbp + rax_4
int64_t rdx_4 = &var_88:4 - rsi
int64_t i

do
    result += 0x10
    int128_t zmm0_1
    zmm0_1.d = zmm2.d f* *(result - 0x18)
    int128_t zmm1
    zmm1.d = zmm2.d f* *(result - 0x14)
    *(rcx_2 + result - 0x18) = zmm0_1.d
    zmm0_1.d = zmm2.d f* *(result - 0x10)
    *(rdx_4 + result - 0x18) = zmm1.d
    zmm1.d = zmm2.d f* *(result - 0xc)
    *(rcx_2 + result - 0x10) = zmm0_1.d
    *(rdx_4 + result - 0x10) = zmm1.d
    i = i_1
    i_1 -= 1
while (i != 1)
*arg3 = var_88
int128_t var_78
arg3[1] = var_78
int128_t var_68
arg3[2] = var_68
int128_t var_58
arg3[3] = var_58
return result
