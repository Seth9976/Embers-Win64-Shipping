// 函数: sub_141333f30
// 地址: 0x141333f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0x7000001
int64_t* rcx = data_143f0f180
int32_t var_10 = 7
int16_t var_c = 0xffff
int64_t* result_1
(*(*rcx + 0x38))(rcx, &result_1, &var_18)
int64_t* result = &result_1

if (arg1 + 0x10 == &result_1)
label_141333feb:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result_2[1].d -= 1
        
        if (result_2[1].d == 1)
            if (result_2[2].b != 0)
                return (**result_2)(result_2, 1)
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                return (**result_2)(result_2, 1)
            
            result = nullptr
            bool z_2
            
            if (0 == *(result_2 + 0xc))
                *(result_2 + 0xc) = 1
                z_2 = true
            else
                result = zx.q(*(result_2 + 0xc))
                z_2 = false
            
            if (z_2)
                return sub_1405dcc10(&data_143f02390, result_2)
else
    int64_t* rbx_1 = *(arg1 + 0x10)
    result = result_1
    *(arg1 + 0x10) = result
    result_1 = nullptr
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            char rax_1
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_1 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                result = (**rbx_1)(rbx_1, 1)
            else
                result = nullptr
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    result = zx.q(*(rbx_1 + 0xc))
                    z_1 = false
                
                if (z_1)
                    result = sub_1405dcc10(&data_143f02390, rbx_1)
        
        goto label_141333feb

return result
