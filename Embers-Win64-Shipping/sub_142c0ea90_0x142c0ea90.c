// 函数: sub_142c0ea90
// 地址: 0x142c0ea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0

if (*arg2 == 0)
    zmm0 = zx.o(*(arg2 + 8))
    *arg2 = 1
    
    if (not(zmm0.q f<= *(arg1 + 0xb0)))
        *(arg2 + 8) = *(arg1 + 0xb0)
    
    if (not(*(arg1 + 0xb0) f<= *(arg2 + 0x18)))
        *(arg2 + 0x18) = *(arg1 + 0xb0)
    
    if (not(*(arg2 + 0x10) f<= *(arg1 + 0xb8)))
        *(arg2 + 0x10) = *(arg1 + 0xb8)
    
    if (not(*(arg1 + 0xb8) f<= *(arg2 + 0x20)))
        *(arg2 + 0x20) = *(arg1 + 0xb8)

if (not(*(arg2 + 8) f<= *arg3))
    *(arg2 + 8) = *arg3

if (not(*arg3 f<= *(arg2 + 0x18)))
    *(arg2 + 0x18) = *arg3

if (not(*(arg2 + 0x10) f<= arg3[1]))
    *(arg2 + 0x10) = arg3[1]

if (not(arg3[1] f<= *(arg2 + 0x20)))
    *(arg2 + 0x20) = arg3[1]

if (not(*(arg2 + 8) f<= *arg4))
    *(arg2 + 8) = *arg4

if (not(*arg4 f<= *(arg2 + 0x18)))
    *(arg2 + 0x18) = *arg4

if (not(*(arg2 + 0x10) f<= arg4[1]))
    *(arg2 + 0x10) = arg4[1]

if (not(arg4[1] f<= *(arg2 + 0x20)))
    *(arg2 + 0x20) = arg4[1]

zmm0 = *arg5
*(arg1 + 0xb0) = zmm0

if (not(*(arg2 + 8) f<= *(arg1 + 0xb0)))
    *(arg2 + 8) = zmm0.q

if (not(*(arg1 + 0xb0) f<= *(arg2 + 0x18)))
    *(arg2 + 0x18) = *(arg1 + 0xb0)

if (not(*(arg2 + 0x10) f<= *(arg1 + 0xb8)))
    *(arg2 + 0x10) = *(arg1 + 0xb8)

if (not(*(arg1 + 0xb8) f<= *(arg2 + 0x20)))
    *(arg2 + 0x20) = *(arg1 + 0xb8)

return arg5
