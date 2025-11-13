// 函数: sub_1424e3fa0
// 地址: 0x1424e3fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_88
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_48
int64_t i_1 = 4

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rbp
rbp.b = rax_5 != 0
int128_t* rcx_3 = rcx_2 - rsi
int128_t var_c8
int32_t* rdx_4 = &var_c8 - rsi
*(arg2 + 0x20) = rbp + rax_5
void* result = rsi + 4
int64_t i

do
    int128_t zmm0_1
    zmm0_1.d = (*(rcx_3 + result - 4)).d f+ *(result - 4)
    int128_t zmm1
    zmm1.d = (*(rcx_3 + result)).d f+ *result
    *(rdx_4 + result - 4) = zmm0_1.d
    zmm0_1.d = (*(rcx_3 + result + 4)).d f+ *(result + 4)
    *(rdx_4 + result) = zmm1.d
    zmm1.d = (*(rcx_3 + result + 8)).d f+ *(result + 8)
    *(result + &var_c8:4 - rsi) = zmm0_1.d
    void var_c0
    *(result + &var_c0 - rsi) = zmm1.d
    result += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
*arg3 = var_c8
int128_t var_b8
arg3[1] = var_b8
int128_t var_a8
arg3[2] = var_a8
int128_t var_98
arg3[3] = var_98
return result
