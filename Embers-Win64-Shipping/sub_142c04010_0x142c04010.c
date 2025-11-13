// 函数: sub_142c04010
// 地址: 0x142c04010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0x1d)
    return sub_142c04310(arg2 + 0x20, arg2) __tailcall

if (arg1 != 0x1e)
    return sub_142c033b0(arg1, arg2) __tailcall

uint64_t zmm0_1 = sub_142c03090(arg2)
uint64_t rcx_2 = zx.q(*(arg2 + 0x24))

if (rcx_2.d u>= *(arg2 + 0x28))
    *(arg2 + 0x20) = 1
else
    *(arg2 + 0x24) = (rcx_2 + 1).d
    
    if (rcx_2.d u< *(arg2 + 0x28))
        int64_t rax_4 = *(arg2 + 0x30)
        *(rax_4 + (rcx_2 << 3)) = zmm0_1
        return rax_4 + (rcx_2 << 3)

data_144017550.q = 0
data_144017550.q = zmm0_1
return &data_144017550
