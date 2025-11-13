// 函数: sub_142b4d1c0
// 地址: 0x142b4d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::TZDBNames::VTable* const result = &icu_64::TZDBNames::`vftable'
*arg1 = &icu_64::TZDBNames::`vftable'
int64_t rcx = arg1[1]

if (rcx != 0)
    result = sub_142a7dcd0(rcx)

int64_t* rbx = arg1[2]

if (rbx == 0)
    return result

int32_t i = 0

if (arg1[3].d s> 0)
    do
        sub_142a7dcd0(*rbx)
        i += 1
        rbx = &rbx[1]
    while (i s< arg1[3].d)

return sub_142a7dcd0(arg1[2])
