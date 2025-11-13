// 函数: sub_142ab12e0
// 地址: 0x142ab12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x4c]
*arg1 = &icu_64::Win32NumberFormat::`vftable'{for `icu_64::NumberFormat'}

if (rdi != 0)
    if (arg1[0x2e].b != 0)
        sub_142a7dcd0(*(rdi + 0x28))
    
    sub_142a7dcd0(*(rdi + 0x18))
    sub_142a7dcd0(*(rdi + 0x10))
    sub_142a7dcd0(arg1[0x4c])

int64_t* rcx_4 = arg1[0x4e]

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

sub_142a45a20(&arg1[0x2f])
return sub_142a57fc0(arg1) __tailcall
