// 函数: sub_140b2b1a0
// 地址: 0x140b2b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = zx.d(arg1) & 0xf

if (rax u> 7)
    return u"UknownVerbosity"

switch (rax)
    case 0
        return u"NoLogging"
    case 1
        return u"Fatal"
    case 2
        return u"Error"
    case 3
        return u"Warning"
    case 4
        return u"Display"
    case 5
        return &data_142e65810
    case 6
        return u"Verbose"
    case 7
        return u"VeryVerbose"
