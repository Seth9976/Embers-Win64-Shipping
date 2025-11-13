// 函数: sub_142b3d4c0
// 地址: 0x142b3d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
void* rax_1 = __RTDynamicCast(arg2, 0, 
    &class icu_64::number::impl::Modifier `RTTI Type Descriptor', 
    &class icu_64::number::impl::SimpleModifier `RTTI Type Descriptor', 0)

if (rax_1 == 0)
    return rax_1

int64_t rax_2 = *(arg1 + 0x58)

if (rax_2 != 0)
    rax_2.b = rax_2 == *(rax_1 + 0x58)
    return rax_2

if (sub_142a48110(arg1 + 8, rax_1 + 8) != 0 && *(arg1 + 0x48) == *(rax_1 + 0x48)
        && *(arg1 + 0x49) == *(rax_1 + 0x49))
    rsi = 1

return zx.q(rsi)
