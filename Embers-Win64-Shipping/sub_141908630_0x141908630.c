// 函数: sub_141908630
// 地址: 0x141908630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1
sub_141946100(arg1[1], &result_1, *arg1[2], zx.q(*arg1[3]), *arg1[4], *arg1[5], *arg1[6], arg1[7])
int64_t* rcx_1 = *arg1
void**** result = &result_1

if (rcx_1 == &result_1)
label_141908701:
    void*** result_2 = result_1
    
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
    int64_t* rbx_1 = *rcx_1
    result = result_1
    *rcx_1 = result
    result_1 = nullptr
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            char rax_4
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_4 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
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
        
        goto label_141908701

return result
