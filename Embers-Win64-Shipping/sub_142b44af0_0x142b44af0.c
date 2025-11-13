// 函数: sub_142b44af0
// 地址: 0x142b44af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 6)
    abort()
    noreturn

switch (arg1)
    case 0
        return sub_142a48d70(arg2, u"sign-auto", 0, 0xffffffff) __tailcall
    case 1
        return sub_142a48d70(arg2, u"sign-always", 0, 0xffffffff) __tailcall
    case 2
        return sub_142a48d70(arg2, u"sign-never", 0, 0xffffffff) __tailcall
    case 3
        return sub_142a48d70(arg2, u"sign-accounting", 0, 0xffffffff) __tailcall
    case 4
        return sub_142a48d70(arg2, u"sign-accounting-always", 0, 0xffffffff) __tailcall
    case 5
        return sub_142a48d70(arg2, u"sign-except-zero", 0, 0xffffffff) __tailcall
    case 6
        return sub_142a48d70(arg2, u"sign-accounting-except-zero", 0, 0xffffffff) __tailcall
