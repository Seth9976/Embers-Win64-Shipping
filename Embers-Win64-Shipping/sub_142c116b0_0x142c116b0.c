// 函数: sub_142c116b0
// 地址: 0x142c116b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result

if (*arg2 == 0)
    result = zx.o(*(arg2 + 8))
    *arg2 = 1
    
    if (not(result.q f<= *(arg1 + 0xb0)))
        *(arg2 + 8) = *(arg1 + 0xb0)
    
    if (not(*(arg1 + 0xb0) f<= *(arg2 + 0x18)))
        *(arg2 + 0x18) = *(arg1 + 0xb0)
    
    if (not(*(arg2 + 0x10) f<= *(arg1 + 0xb8)))
        *(arg2 + 0x10) = *(arg1 + 0xb8)
    
    if (not(*(arg1 + 0xb8) f<= *(arg2 + 0x20)))
        *(arg2 + 0x20) = *(arg1 + 0xb8)

*(arg1 + 0xb0) = *arg3

if (not(*(arg2 + 8) f<= *(arg1 + 0xb0)))
    *(arg2 + 8) = *(arg1 + 0xb0)

if (not(*(arg1 + 0xb0) f<= *(arg2 + 0x18)))
    *(arg2 + 0x18) = *(arg1 + 0xb0)

if (not(*(arg2 + 0x10) f<= *(arg1 + 0xb8)))
    *(arg2 + 0x10) = *(arg1 + 0xb8)

result = zx.o(*(arg1 + 0xb8))

if (not(result.q f<= *(arg2 + 0x20)))
    result = zx.o(*(arg1 + 0xb8))
    *(arg2 + 0x20) = result.q

return result
