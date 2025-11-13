// 函数: sub_142a45a20
// 地址: 0x142a45a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::VTable** rbx = arg1
*arg1 = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
int64_t rcx = arg1[0x1a]

if (rcx != rbx[5])
    sub_142a7dcd0(rcx)

int64_t rcx_1 = rbx[5]
rbx[0x1a] = 0

if (rcx_1 != &rbx[6])
    sub_142a7dcd0(rcx_1)
    rbx[5] = 0

return sub_142a47900(rbx) __tailcall
