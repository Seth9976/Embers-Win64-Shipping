// 函数: sub_141851680
// 地址: 0x141851680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_12 = zx.q(*arg1)

if (rax_12.d u> 0xa)
    return u"Unknown"

switch (rax_12)
    case 0
        return u"Success"
    case 1
        return u"OpenFileFail"
    case 2
        return u"BadArchive"
    case 3
        return u"CorruptHeader"
    case 4
        return u"IncorrectFileSize"
    case 5
        return u"UnsupportedStorage"
    case 6
        return u"MissingHashInfo"
    case 7
        return u"SerializationError"
    case 8
        return u"DecompressFailure"
    case 9
        return u"HashCheckFailed"
    case 0xa
        return u"Aborted"
