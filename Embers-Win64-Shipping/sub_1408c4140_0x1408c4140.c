// 函数: sub_1408c4140
// 地址: 0x1408c4140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x128)

if (result != 0)
    result = result[0x56]
    
    if (result != 0)
        int64_t** i = *result
        
        for (void* rsi_3 = &i[sx.q(result[1].d) * 2]; i != rsi_3; i = &i[2])
            int64_t* rbx_1 = i[1]
            result = *i
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (result != 0)
                *(result + 0x281) = 1
            
            if (rbx_1 != 0)
                result = zx.q(rbx_1[1].d)
                rbx_1[1].d -= 1
                
                if (result.d == 1)
                    (**rbx_1)(rbx_1)
                    result = zx.q(*(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)

return result
