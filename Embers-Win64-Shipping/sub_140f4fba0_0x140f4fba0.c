// 函数: sub_140f4fba0
// 地址: 0x140f4fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_88
char var_48
int128_t* rdx
int32_t rdi
int128_t* r8
int128_t* r9
int32_t* r10
int32_t r11

if (*(arg1 + 0x608) == 0)
    var_88 = 1
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x30)
    int32_t var_50 = 3
    r9 = &var_80
    r11 = 2
    rdi = 0
    int128_t var_70
    rdx = &var_70
    int128_t var_60
    r8 = &var_60
    r10 = &var_50
else
    var_48 = 1
    int128_t var_40
    __builtin_memset(&var_40, 0, 0x34)
    r9 = &var_40
    rdi = 1
    r11 = 0
    int128_t var_30
    rdx = &var_30
    int128_t var_20
    r8 = &var_20
    int32_t var_10
    r10 = &var_10

int64_t rax = *(r9 + 8)
*(r9 + 8) = 0
*r9 = 0
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = rax
*(arg2 + 0x18) = *rdx
int64_t rax_2 = *(rdx + 8)
*(rdx + 8) = 0
*(arg2 + 0x20) = rax_2
*rdx = 0
*(arg2 + 0x28) = *r8
int64_t rax_4 = *(r8 + 8)
*(r8 + 8) = 0
*(arg2 + 0x30) = rax_4
*r8 = 0
*(arg2 + 0x38) = *r10

if (r11 != 0)
    sub_140ddf250(&var_88)

if (rdi != 0)
    sub_140ddf250(&var_48)

return arg2
