// 函数: sub_142a66cf0
// 地址: 0x142a66cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Calendar::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::Calendar::`vftable'{for `icu_64::UObject'}
arg1[1].d = 0
*(arg1 + 0xdc) = 2
arg1[0x1c] = 0
arg1[0x1d].b = 1
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x25].b = 0
*(arg1 + 0x1c5) = 0
int64_t i = 0
void* rcx = arg1 + 0x80

do
    *(rcx - 0x74) = 0
    *rcx = 0
    *(arg1 + i + 0x68) = 0
    i += 1
    rcx += 4
while (i s< 0x17)

arg1[1].d = 0

if (*arg2 s<= 0)
    int64_t rax = sub_142a64c40()
    arg1[0x1e] = rax
    
    if (rax == 0)
        *arg2 = 7
    
    sub_142a6c280(arg1, sub_142a463c0(), nullptr, arg2)

return arg1
