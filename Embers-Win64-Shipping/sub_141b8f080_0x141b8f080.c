// 函数: sub_141b8f080
// 地址: 0x141b8f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t result
int128_t zmm6
result, zmm6 = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t result_2 = result

if (result == 0)
    *arg3 = 0
    *arg4 = 0
else
    result = sub_14243ade0(result)
    
    if (result.b == 0)
        *arg3 = 0
        *arg4 = 0
    else
        result = sub_142436920(result_2)
        uint64_t result_1 = result
        
        if (result == 0)
            *arg3 = 0
            *arg4 = 0
        else
            int64_t* rbx = *(result + 0xf0)
            
            if (rbx == 0)
                *arg3 = 0
                *arg4 = 0
            else
                result = zx.q(rbx[1].d)
                
                if (result.d != 0)
                    rbx[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx = nullptr
                
                if (rbx == 0)
                    *arg3 = 0
                    *arg4 = 0
                else
                    int64_t* r14_1 = *(result_1 + 0xe8)
                    
                    if (r14_1 == 0)
                        if (rbx != 0)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                result = (**rbx)(rbx)
                                int32_t temp2_1 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    result = (*(*rbx + 8))(rbx, 1)
                        
                        *arg3 = 0
                        *arg4 = 0
                    else
                        int128_t var_38_1 = zmm6
                        int32_t var_a0
                        sub_14202bf60(result_1, &var_a0)
                        int32_t var_98
                        result = (*(*r14_1 + 8))(r14_1, &var_98)
                        int32_t var_7c
                        int128_t zmm8 = var_7c
                        int32_t var_78
                        zmm6 = var_78
                        int32_t var_74
                        int128_t zmm7 = var_74
                        float var_70
                        int128_t zmm1_1
                        zmm1_1.d = zmm8.d f* var_70
                        zmm1_1.d = zmm1_1.d f- zmm6.d f* zmm7.d
                        int128_t zmm2_1
                        zmm2_1.d = 1f f/ zmm1_1.d
                        zmm7.d = zmm7.d f* zmm2_1.d
                        int32_t var_68
                        zmm1_1 = var_68 ^ 0x80000000
                        zmm8.d = zmm8.d f* zmm2_1.d
                        zmm6.d = zmm6.d f* zmm2_1.d
                        zmm7 ^= 0x80000000
                        float zmm5_1 = var_70 f* zmm2_1.d
                        zmm6 ^= 0x80000000
                        int32_t var_6c
                        zmm2_1 = var_6c ^ 0x80000000
                        float zmm0_1 = zmm7.d
                        zmm7.d = zmm7.d f* arg2:4.d
                        float zmm4_1 = zmm6.d
                        zmm6.d = zmm6.d f* arg2.d
                        zmm7.d = zmm7.d f+ zmm5_1 f* arg2.d
                        float zmm3 = zmm5_1 f* zmm2_1.d + zmm0_1 f* zmm1_1.d
                        zmm0_1 = zmm8.d
                        zmm8.d = zmm8.d f* arg2:4.d
                        zmm8.d = zmm8.d f+ zmm6.d
                        zmm7.d = zmm7.d f+ zmm3
                        *arg4 = zmm7.d
                        zmm8.d = zmm8.d f+ zmm4_1 f* zmm2_1.d + zmm0_1 f* zmm1_1.d
                        zmm7.d = zmm7.d f/ var_98
                        arg4[1] = zmm8.d
                        zmm7.d = zmm7.d f* var_a0
                        int32_t var_94
                        zmm8.d = zmm8.d f/ var_94
                        *arg3 = zmm7.d
                        int32_t var_9c
                        zmm8.d = zmm8.d f* var_9c
                        arg3[1] = zmm8.d
                        
                        if (rbx != 0)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                result = (**rbx)(rbx)
                                int32_t temp3_1 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    result = (*(*rbx + 8))(rbx, 1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
