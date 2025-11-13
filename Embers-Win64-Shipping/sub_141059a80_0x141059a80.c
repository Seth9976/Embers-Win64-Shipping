// 函数: sub_141059a80
// 地址: 0x141059a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 8)

if (result == 1)
    int64_t* rcx_2 = *(arg1 + 0x10)
    
    if (*(rcx_2 + 0xfe) != 0)
        return sub_141049740(rcx_2) __tailcall
    
    result = rcx_2[1].d
    rcx_2[1].d -= 1
    
    if (result == 1 && rcx_2 != 0)
        jump(**rcx_2)
    
    return result

if (result == 2)
    if (*(arg1 + 0x61) != 1)
        return sub_14101be70(*(arg1 + 0x20), arg1) __tailcall
    
    return sub_14101bf40(*(arg1 + 0x20), *(arg1 + 0x10), *(arg1 + 0x28), *(arg1 + 0x58)) __tailcall

if (result s<= 4)
    return result

if (result s> 6)
    if (result != 7)
        return result
    
    int64_t* rcx = *(arg1 + 0x10)
    
    if (*(rcx + 0xfe) != 0)
        return sub_141049740(rcx) __tailcall
    
    return sub_141059a50(rcx, arg2) __tailcall

void* rdx_2 = *(arg1 + 0x10)
int32_t rax_1

if (*(rdx_2 + 0xfe) != 0)
    rax_1 = 0
    
    if (0 == *(rdx_2 + 8))
        *(rdx_2 + 8) = 0
    else
        rax_1 = *(rdx_2 + 8)

if (*(rdx_2 + 0xfe) == 0 || rax_1 != 1)
    return sub_141059a50(*(arg1 + 0x10), arg2) __tailcall

return sub_141049740(*(arg1 + 0x10)) __tailcall
