// 函数: sub_142b60d70
// 地址: 0x142b60d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x2e0)

if (rcx == 0)
    return 0

int64_t inptr = sub_142a86d40(rcx, arg2)

if (inptr != 0 && __RTDynamicCast(inptr, 0, &class icu_64::Format `RTTI Type Descriptor', 
        &class icu_64::MessageFormat::DummyFormat `RTTI Type Descriptor', 0) == 0)
    return inptr

return 0
