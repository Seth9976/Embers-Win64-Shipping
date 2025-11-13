// 函数: sub_141935520
// 地址: 0x141935520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) != 0)
    sub_141934b90(arg1, 0, 0)

if (*(arg1 + 0x168) != 0)
    sub_141934b90(arg1, 1, zx.d(*(arg1 + 0x9b)))

if (*(arg1 + 0x220) != 0)
    sub_141934b90(arg1, 2, zx.d(*(arg1 + 0x153)) + zx.d(*(arg1 + 0x9b)))

if (*(arg1 + 0x2d8) != 0)
    sub_141934b90(arg1, 3, zx.d(*(arg1 + 0x20b)) + zx.d(*(arg1 + 0x153)) + zx.d(*(arg1 + 0x9b)))

if (*(arg1 + 0x390) != 0)
    sub_141934b90(arg1, 4, 
        zx.d(*(arg1 + 0x2c3)) + zx.d(*(arg1 + 0x20b)) + zx.d(*(arg1 + 0x153))
            + zx.d(*(arg1 + 0x9b)))

if (*(arg1 + 0x448) == 0)
    return 

return sub_141934b90(arg1, 5, 0) __tailcall
