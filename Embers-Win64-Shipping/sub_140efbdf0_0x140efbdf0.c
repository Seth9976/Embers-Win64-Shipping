// 函数: sub_140efbdf0
// 地址: 0x140efbdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x218)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

if (result == 0 || *(arg1 + 0x210) == 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    void*** rax_2 = sub_1405978f0(0x20, &var_28)
    
    if (rax_2 != 0)
        *rax_2 = &data_142ee20d0
        rax_2[1] = arg1 - 0x2a8
        rax_2[3] = sub_140a387b0()
    
    void var_18
    result = sub_140e20c50(arg1 - 0x2a8, &var_18, 0x3f000000, &var_28)
    *(arg1 + 0x210) = *result
    void* rsi_2 = result[1]
    int64_t* rcx_3 = *(arg1 + 0x218)
    
    if (rsi_2 != rcx_3)
        if (rsi_2 != 0)
            *(rsi_2 + 0xc) += 1
            rcx_3 = *(arg1 + 0x218)
        
        if (rcx_3 != 0)
            int32_t temp4_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(arg1 + 0x218) = rsi_2
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            result = (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_10 + 8))(var_10, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp2_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*result_1 + 8))

return result
