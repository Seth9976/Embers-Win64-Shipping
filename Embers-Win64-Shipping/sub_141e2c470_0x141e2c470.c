// 函数: sub_141e2c470
// 地址: 0x141e2c470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1a0)

if (result != 0)
    void* rdi_1 = &result[0x32]
    int64_t* result_1 = *rdi_1
    uint64_t r9_1 = sx.q(*(rdi_1 + 8))
    result = result_1
    void* rdx_1 = &result_1[r9_1]
    
    if (result_1 != rdx_1)
        do
            if (*result == arg1)
                result = (result - result_1) s>> 3
                
                if (result.d != 0xffffffff)
                    int32_t rdx_4 = r9_1.d - result.d - 1
                    
                    if (rdx_4 s>= 1)
                        rdx_4 = 1
                    
                    if (rdx_4 != 0)
                        memcpy(&result_1[sx.q(result.d)], &result_1[sx.q(r9_1.d - rdx_4)], 
                            rdx_4 << 3)
                        r9_1 = zx.q(*(rdi_1 + 8))
                    
                    *(rdi_1 + 8) = (r9_1 - 1).d
                    result = sub_1405c53d0(rdi_1)
                
                break
            
            result = &result[1]
        while (result != rdx_1)
    
    *(arg1 + 0x1a0) = 0

return result
