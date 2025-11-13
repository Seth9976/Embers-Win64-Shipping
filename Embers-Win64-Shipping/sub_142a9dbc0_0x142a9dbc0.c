// 函数: sub_142a9dbc0
// 地址: 0x142a9dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::UnicodeSet::`vftable'{for `icu_64::UnicodeFilter'}
arg1[1] = &icu_64::UnicodeSet::`vftable'{for `icu_64::UMemory'}
int64_t rcx = arg1[2]

if (rcx != &arg1[0xc])
    sub_142a7dcd0(rcx)

int64_t* rcx_1 = arg1[5]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t rcx_2 = arg1[6]

if (rcx_2 != &arg1[0xc])
    sub_142a7dcd0(rcx_2)

int64_t* rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

void*** rdi_1 = arg1[0xb]

if (rdi_1 != 0)
    sub_142b15d30(rdi_1)
    sub_142a47920(rdi_1)

int64_t rcx_6 = arg1[8]

if (rcx_6 != 0)
    sub_142a7dcd0(rcx_6)
    arg1[8] = 0
    arg1[9].d = 0

return sub_142b13570(arg1) __tailcall
