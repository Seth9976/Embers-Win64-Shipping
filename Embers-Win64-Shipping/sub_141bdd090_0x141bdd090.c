// 函数: sub_141bdd090
// 地址: 0x141bdd090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t result = sub_1423de540(data_143f5b298, arg1, 1)
void* rsi = nullptr
uint64_t result_1 = result

if (result == 0)
    *arg3 = 0.0
else
    result = sub_14243ade0(result)
    
    if (result.b == 0)
        *arg3 = 0.0
    else
        result = sub_142436920(result_1)
        uint64_t result_2 = result
        
        if (result == 0)
            *arg3 = 0.0
        else
            int64_t* rbx = *(result + 0xf0)
            
            if (rbx == 0)
                *arg3 = 0.0
            else
                result = zx.q(rbx[1].d)
                
                if (result.d != 0)
                    rbx[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx = nullptr
                
                if (rbx == 0)
                    *arg3 = 0.0
                else
                    int64_t* rdi_1 = *(result_2 + 0xe8)
                    
                    if (rdi_1 == 0)
                        if (rbx != 0)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                result = (**rbx)(rbx)
                                int32_t temp1_1 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    result = (*(*rbx + 8))(rbx, 1)
                        
                        *arg3 = 0.0
                    else
                        float var_80
                        sub_14202bf60(result_2, &var_80)
                        float var_70
                        result = (*(*rdi_1 + 8))(rdi_1, &var_70)
                        float var_7c
                        float var_6c
                        float zmm3 = arg2:4.d / var_7c * var_6c
                        float zmm2_1 = arg2.d / var_80 * var_70
                        float var_54
                        float var_4c
                        float var_44
                        *arg3 = zmm3 * var_4c + zmm2_1 * var_54 + var_44
                        float var_50
                        float var_48
                        float var_40
                        arg3[1] = zmm3 * var_48 + zmm2_1 * var_50 + var_40
                        
                        if (arg4 != 0)
                            int64_t* rdi_2 = *(result_2 + 0xd0)
                            
                            if (rdi_2 != 0)
                                result = zx.q(rdi_2[1].d)
                                
                                if (result.d != 0)
                                    rdi_2[1].d = result.d + 1
                                    result.b = 1
                                
                                if (result.b == 0)
                                    rdi_2 = nullptr
                                
                                if (rdi_2 != 0)
                                    rsi = *(result_2 + 0xc8)
                                    rdi_2[1].d -= 1
                                    
                                    if (rdi_2[1].d == 1)
                                        result = (**rdi_2)(rdi_2)
                                        int32_t temp5_1 = *(rdi_2 + 0xc)
                                        *(rdi_2 + 0xc) -= 1
                                        
                                        if (temp5_1 == 1)
                                            result = (*(*rdi_2 + 8))(rdi_2, 1)
                            
                            if (rsi != 0)
                                void var_78
                                result = sub_140e15940(rsi, &var_78)
                                float zmm1_1 = arg3[1]
                                *arg3 = *arg3 f- *result
                                arg3[1] = zmm1_1 f- *(result + 4)
                        
                        if (rbx != 0)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                result = (**rbx)(rbx)
                                int32_t temp3_1 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    result = (*(*rbx + 8))(rbx, 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
