// 函数: sub_1424f68f0
// 地址: 0x1424f68f0
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
void* rdi = &var_48
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
float var_78[0x4] = *(rdi + 0x10)
float zmm1[0x4] = *(rdi + 0x30)
int128_t var_88 = *rdi
int128_t zmm0_1 = *(rdi + 0x20)
int64_t result = sub_1407740e0(&var_88, arg_10)
*arg3 = var_88
arg3[1] = var_78
arg3[2] = zmm0_1
arg3[3] = zmm1
return result
