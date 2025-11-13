// 函数: sub_1409925c0
// 地址: 0x1409925c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rax_2 = data_143a1c6b0
void* rdx = &var_98:0xc
int64_t i_1 = 3
int64_t i

do
    *(rdx - 0xc) = rax_2
    *(rdx - 8) = rax_2
    *(rdx - 4) = 0
    *rdx = rax_2
    *(rdx + 4) = 0
    *(rdx + 8) = rax_2
    *(rdx + 0xc) = 0
    *(rdx + 0x10) = rax_2
    *(rdx + 0x14) = 0
    rdx += 0x28
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rcx = **arg1
*(arg2 + 4) = var_98
*arg2 = rcx
uint128_t var_88
*(arg2 + 0x14) = var_88
int128_t var_78
*(arg2 + 0x24) = var_78
uint128_t var_68
*(arg2 + 0x34) = var_68
int128_t var_58
*(arg2 + 0x44) = var_58
uint128_t var_48
*(arg2 + 0x54) = var_48
int128_t var_38
*(arg2 + 0x64) = var_38
int64_t var_28
*(arg2 + 0x74) = var_28
arg2[0x1f] = 0
__security_check_cookie(rax_1 ^ &var_98)
return arg2
