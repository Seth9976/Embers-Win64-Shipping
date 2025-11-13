// 函数: sub_142b0eb80
// 地址: 0x142b0eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
arg1[9] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0xa].w = 2
__builtin_memset(arg1, 0, 0x28)
arg1[6] = 0
arg1[8] = 0
arg1[7].d
arg1[7].d = 0
arg1[0x11].b = 1

if (*arg3 s<= 0)
    int16_t* rax_1 = *(arg2 + 8)
    uint64_t rcx = zx.q(*rax_1)
    
    if (rcx.d u< 0x14 || rax_1[4].b != 0 || *(rax_1 + 9) != 0 || rax_1[6].b != 0x42
            || *(rax_1 + 0xd) != 0x72 || rax_1[7].b != 0x6b || *(rax_1 + 0xf) != 0x20
            || rax_1[8].b != 5)
        *arg3 = 3
    else
        sub_142b0eca0(arg1, rax_1 + rcx, arg3)
        arg1[8] = arg2

return arg1
