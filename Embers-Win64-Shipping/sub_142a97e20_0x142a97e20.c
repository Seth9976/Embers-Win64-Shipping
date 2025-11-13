// 函数: sub_142a97e20
// 地址: 0x142a97e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::SimpleFilteredSentenceBreakIterator::`vftable'{for `icu_64::BreakIterator'}
int64_t* rcx = arg1[0x29]
rcx[3].d -= 1

if (rcx[3].d s<= 0)
    (**rcx)(arg2, 1)

arg1[0x29] = 0
int32_t* rcx_1 = arg1[0x2b]

if (rcx_1 != 0)
    sub_142aea470(rcx_1)

int64_t* rcx_2 = arg1[0x2a]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

return sub_142a54ec0(arg1) __tailcall
