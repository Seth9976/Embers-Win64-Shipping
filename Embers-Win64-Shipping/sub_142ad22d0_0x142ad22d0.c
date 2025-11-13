// 函数: sub_142ad22d0
// 地址: 0x142ad22d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x268)

if (rdx == 0)
    return "islamic"

if (rdx == 1)
    return "islamic-civil"

if (rdx == 2)
    return "islamic-umalqura"

if (rdx == 3)
    return "islamic-tbla"

abort()
noreturn
