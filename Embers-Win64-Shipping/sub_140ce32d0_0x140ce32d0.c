// 函数: sub_140ce32d0
// 地址: 0x140ce32d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x10)

if (((*(result + 0xcc) u>> 0x17).b & 1) == 0)
    *(arg1 + 8) &= 0xffffdfff
else
    int64_t* rcx = *(arg1 + 0x20)
    
    if (rcx == 0)
        *(arg1 + 8) &= 0xffffdfff
        return result
    
    int32_t rdx_2 = rcx[1].d
    result = zx.q(rdx_2 u>> 0xd)
    
    if ((result.b & 1) == 0)
        *(arg1 + 8) &= 0xffffdfff
        return result
    
    uint8_t rdx_3 = (rdx_2 u>> 0xc).b
    
    if ((rdx_3 & 1) == 0)
        (*(*rcx + 0x78))(rcx, 0)
    else
        sub_140cd85e0(rcx, rdx_3)
    
    result = zx.q(*(arg1 + 8) u>> 0xd)
    
    if ((result.b & 1) != 0)
        *(arg1 + 8) &= 0xffffdfff

return result
