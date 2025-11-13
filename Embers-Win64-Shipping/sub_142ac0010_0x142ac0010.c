// 函数: sub_142ac0010
// 地址: 0x142ac0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
uint8_t r8 = (arg3 u>> 0xa).b & 1
uint8_t rdx_1 = (arg3 u>> 9).b & 1
int32_t* rax_2

if (rdx_1 != 0)
    if (r8 == 0)
        goto label_142ac0056
    
    rax_2 = 0x190
else if (r8 == 0)
label_142ac0056:
    int32_t* r8_1
    
    if (((arg3 u>> 8).b & 1) == 0)
        rax_2 = 0xe0
        r8_1 = 0x188
    else
        rax_2 = 0xd8
        r8_1 = 0x180
    
    if (rdx_1 != 0)
        rax_2 = r8_1
else
    rax_2 = 0xe8

int32_t r8_2 = *(rax_2 + arg1)
int32_t r9 = *(rax_2 + arg1 + 4)

if (r8_2 != r9)
    Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(arg2, arg1 + 8, 
        r8_2, r9 - r8_2)
    return arg2

*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
return arg2
