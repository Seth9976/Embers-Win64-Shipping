// 函数: sub_1424f7940
// 地址: 0x1424f7940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_58
char arg_18 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
uint32_t r8_6 = zx.d(arg_10)
uint32_t rdx_6 = zx.d(arg_18)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
int128_t zmm1 = *(rdi + 0x10)
int128_t var_98 = *rdi
int128_t zmm0 = *(rdi + 0x20)
int128_t var_88 = zmm1
zmm1 = *(rdi + 0x30)
sub_1424e3280(&var_98, rdx_6, r8_6)
*arg3 = var_98
arg3[1] = var_88
arg3[2] = zmm0
arg3[3] = zmm1
return result
