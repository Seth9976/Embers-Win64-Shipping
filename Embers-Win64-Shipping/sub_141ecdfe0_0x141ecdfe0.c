// 函数: sub_141ecdfe0
// 地址: 0x141ecdfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0xba8) s> 0)
    int64_t var_78[0xe]
    sub_141eb9360(&data_143f3a810, &var_78, arg2)
    result = data_143f5b298
    int64_t* i = result[0x174]
    
    for (void* rsi_3 = &i[sx.q(result[0x175].d) * 2]; i != rsi_3; i = &i[2])
        int64_t* rbx_1 = i[1]
        int64_t* rcx = *i
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = (*(*rcx + 8))(rcx, &var_78)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)

return result
