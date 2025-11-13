// 函数: sub_14139bc60
// 地址: 0x14139bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x12c)

if ((result & 1) != 0)
    int32_t rdi_1 = 0
    uint32_t i_1 = zx.d(result) u>> 1
    
    if (i_1 != 0)
        uint32_t i
        
        do
            i = i_1
            
            if ((i_1.b & 1) != 0)
                result = sub_141504c20(*(*(*(arg1 + 0xf0) + 0x62e0) + (sx.q(rdi_1) << 3)), 
                    *(arg1 + 8) + 0xc0)
            
            i_1 u>>= 1
            rdi_1 += 1
        while (i u>= 2)

return result
