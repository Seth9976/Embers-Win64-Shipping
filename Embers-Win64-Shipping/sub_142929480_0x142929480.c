// 函数: sub_142929480
// 地址: 0x142929480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg1 == 2)
    return zx.q(*(arg1 + 0x18))

int64_t rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    int32_t result = (*(rax_1 + 0x10))(*(arg1 + 0x20))
    
    if (result == 0)
        return result

return sub_142899cf0(*(arg1 + 0x10), 2, 0, 0) __tailcall
