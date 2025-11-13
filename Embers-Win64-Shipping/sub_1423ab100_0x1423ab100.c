// 函数: sub_1423ab100
// 地址: 0x1423ab100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) += 1
int32_t* result

if (*arg1 != 0)
    result = data_143f5a0d0

if (*arg1 == 0 || *result == 0)
    result = nullptr
    *(arg1 + 0x10) = 0
else
    *(arg1 + 0x10) = arg2
    
    if (arg2 != 0 && *(arg1 + 0x20) s> 0)
        result = nullptr
        
        if (arg2[1].d s> 0)
            int64_t r10 = 0
            
            do
                int64_t rdx = sx.q(*(r10 + *arg2 + 4))
                
                if (rdx.d s>= 0 && rdx.d s< *(arg1 + 0x20))
                    int32_t* rdx_2 = (rdx << 4) + *(arg1 + 0x18)
                    rdx_2[1] = result.d
                    *rdx_2 = *(arg1 + 0xc)
                
                result = zx.q(result.d + 1)
                r10 += 0xc
            while (result.d s< arg2[1].d)

return result
