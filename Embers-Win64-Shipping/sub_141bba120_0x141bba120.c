// 函数: sub_141bba120
// 地址: 0x141bba120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 1
char var_88
char var_48
char rax
int128_t* rdx
int128_t* r8
int128_t* r9
uint32_t* r10
int32_t r11

if ((*(arg1 + 0xb4) & 8) == 0)
    rax = 0
    uint32_t var_50 = 1
    var_88 = 0
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x30)
    r9 = &var_80
    rdi = 0
    r11 = 2
    int128_t var_70
    rdx = &var_70
    int128_t var_60
    r8 = &var_60
    r10 = &var_50
else
    uint32_t rax_1 = zx.d(*(arg1 + 0xc1))
    int128_t var_40
    r9 = &var_40
    var_48 = 1
    int128_t var_30
    rdx = &var_30
    __builtin_memset(&var_40, 0, 0x30)
    int128_t var_20
    r8 = &var_20
    uint32_t var_10 = rax_1
    r10 = &var_10
    rax = 1
    r11 = 0

*arg2 = rax
int64_t rax_2 = *(r9 + 8)
*(r9 + 8) = 0
*r9 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = rax_2
*(arg2 + 0x18) = *rdx
int64_t rax_4 = *(rdx + 8)
*(rdx + 8) = 0
*(arg2 + 0x20) = rax_4
*rdx = 0
*(arg2 + 0x28) = *r8
int64_t rax_6 = *(r8 + 8)
*(r8 + 8) = 0
*(arg2 + 0x30) = rax_6
*r8 = 0
*(arg2 + 0x38) = *r10

if (r11 != 0)
    sub_140ddf250(&var_88)

if (rdi != 0)
    sub_140ddf250(&var_48)

return arg2
