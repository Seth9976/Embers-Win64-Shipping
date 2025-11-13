// 函数: sub_142c12ed0
// 地址: 0x142c12ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
uint64_t rbx = 0
*(arg1 + 0xc) = arg3
int32_t rsi = arg4

if (arg4 s< 0)
    rsi = 0

uint64_t result = sub_142bfd0e0(arg1 + 0x10, rsi)

if (result.b != 0)
    uint64_t rcx_1 = zx.q(*(arg1 + 0x10))
    
    if (rsi u> rcx_1.d)
        result = memset(*(arg1 + 0x18) + (rcx_1 << 3), 0, zx.q(rsi - rcx_1.d) << 3)
    
    *(arg1 + 0x10) = rsi

if (arg4 != 0)
    do
        int128_t* const rdx_1
        
        if (rbx.d u< *(arg5 + 0x10))
            rdx_1 = (zx.q(rbx.d) << 5) + *(arg5 + 8)
        else
            rdx_1 = &data_14369a5d0
        
        if (rbx.d u< *(arg1 + 0x10))
            result = *(arg1 + 0x18) + (rbx << 3)
        else
            data_144017550.q = 0
            result = &data_144017550
        
        rbx = zx.q(rbx.d + 1)
        *result = *rdx_1
    while (rbx.d u< arg4)

return result
