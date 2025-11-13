// 函数: sub_141eea8c0
// 地址: 0x141eea8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x211) & 4) != 0)
    return 

int64_t* rax = sub_141ee2210(arg1)

if (rax == 0 || (*(arg1 + 0x8a) & 1) == 0)
    return 

int128_t var_b8_1 = *(arg1 + 0x1c0)
int128_t var_a8_1 = *(arg1 + 0x1d0)
int128_t zmm0_1 = *(arg1 + 0x1e0)
int64_t var_40_1 = *(arg1 + 0x740)
void*** rax_2 = sub_140a82f30(0x50, 0x10)
*(rax_2 + 0x10) = rax.o
*rax_2 = &data_143264860
*(rax_2 + 0x20) = var_b8_1
*(rax_2 + 0x30) = var_a8_1
*(rax_2 + 0x40) = zmm0_1
void*** var_78_1 = rax_2
void* (* var_88)(int64_t* arg1)
void* (* rax_3)(int64_t* arg1) = var_88

if (rax_2 != -0x10)
    rax_3 = sub_141ed9be0

var_88 = rax_3
sub_141e85cb0(&var_88, arg2)
