// 函数: sub_142110b90
// 地址: 0x142110b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x10)
    sub_140af98a0("Unknown", 0x514, u"Unknown material usage: %u", zx.q(arg2))
    sub_140afbb40()
    return 0

switch (arg2)
    case 0
        return zx.q(*(arg1 + 0x1f8) u>> 7)
    case 1
        return zx.q(*(arg1 + 0x1f9) u>> 1) & 1
    case 2
        return zx.q(*(arg1 + 0x1f9) u>> 2) & 1
    case 3
        return zx.q(*(arg1 + 0x1f9) u>> 3) & 1
    case 4
        return zx.q(*(arg1 + 0x1fa)) & 1
    case 5
        return zx.q(*(arg1 + 0x1fa) u>> 1) & 1
    case 6
        return zx.q(*(arg1 + 0x1fa) u>> 2) & 1
    case 7
        return zx.q(*(arg1 + 0x1fa) u>> 3) & 1
    case 8
        return zx.q(*(arg1 + 0x1fa) u>> 4) & 1
    case 9
        return zx.q(*(arg1 + 0x1fa) u>> 6) & 1
    case 0xa
        return zx.q(*(arg1 + 0x1f9) u>> 4) & 1
    case 0xb
        return zx.q(*(arg1 + 0x1f9) u>> 5) & 1
    case 0xc
        return zx.q(*(arg1 + 0x1f9) u>> 6) & 1
    case 0xd
        return zx.q(*(arg1 + 0x1f9) u>> 7)
    case 0xe
        return zx.q(*(arg1 + 0x1fc)) & 1
    case 0xf
        return zx.q((*(arg1 + 0x1fc) u>> 1).b) & 1
    case 0x10
        return zx.q((*(arg1 + 0x1fc) u>> 2).b) & 1
