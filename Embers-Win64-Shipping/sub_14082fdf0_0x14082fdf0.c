// 函数: sub_14082fdf0
// 地址: 0x14082fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x50)

if (result != 0)
    void* rdx_1 = ***(result + 0x50)
    result = zx.q(*(rdx_1 + 0x1b0))
    
    if (result.d s< 0)
        int32_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(*(rdx_1 + 0x1a0))
        
        if (*(rdx_1 + 0x1b4) == 0)
            return zx.q((temp1 - temp0) s>> 1)
        
        return zx.q((temp1 + (temp0 & 3)) s>> 2)

return result
