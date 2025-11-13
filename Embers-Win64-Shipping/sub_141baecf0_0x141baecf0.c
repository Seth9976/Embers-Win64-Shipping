// 函数: sub_141baecf0
// 地址: 0x141baecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rcx = data_143e29f28

if (rcx == 0)
    *arg1 = 0
else
    float var_78
    (*(*rcx + 0x58))(rcx, &var_78)
    void* rax_3 = sub_1423de540(data_143f5b298, arg2, 1)
    void var_70
    
    if (rax_3 == 0)
        sub_140d921c0(&var_70)
    else if (sub_14243ade0(rax_3) == 0)
        sub_140d921c0(&var_70)
    else
        void* rax_5 = sub_142436920(rax_3)
        
        if (rax_5 == 0)
            sub_140d921c0(&var_70)
        else
            int64_t* rbx_2 = *(rax_5 + 0xf0)
            
            if (rbx_2 == 0)
                sub_140d921c0(&var_70)
            else
                int32_t rax_6 = rbx_2[1].d
                char rdx_2
                
                if (rax_6 != 0)
                    rdx_2 = 1
                    rbx_2[1].d = rax_6 + 1
                else
                    rdx_2 = 0
                
                if (rdx_2 == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 == 0)
                    sub_140d921c0(&var_70)
                else
                    int64_t* rcx_5 = *(rax_5 + 0xe8)
                    
                    if (rcx_5 == 0)
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp2_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        sub_140d921c0(&var_70)
                    else
                        (*(*rcx_5 + 8))(rcx_5, &var_70)
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp3_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
    int32_t var_54
    int128_t zmm7 = var_54
    int32_t var_50
    int128_t zmm6_1 = var_50
    int32_t var_4c
    int128_t zmm4_1 = var_4c
    float var_48
    int128_t zmm1_1
    zmm1_1.d = zmm7.d f* var_48
    zmm1_1.d = zmm1_1.d f- zmm6_1.d f* zmm4_1.d
    int32_t var_44
    int128_t zmm3 = var_44 ^ 0x80000000
    float zmm2_1 = 1f f/ zmm1_1.d
    zmm7.d = zmm7.d f* zmm2_1
    int32_t var_40
    zmm1_1 = var_40 ^ 0x80000000
    zmm4_1.d = zmm4_1.d f* zmm2_1
    zmm6_1.d = zmm6_1.d f* zmm2_1
    zmm4_1 ^= 0x80000000
    float zmm5_1 = var_48 * zmm2_1
    zmm6_1 ^= 0x80000000
    zmm2_1 = zmm4_1.d
    int32_t var_74
    zmm4_1.d = zmm4_1.d f* var_74
    float zmm0_1 = zmm3.d * zmm5_1
    zmm3.d = zmm3.d f* zmm6_1.d
    zmm6_1.d = zmm6_1.d f* var_78
    zmm4_1.d = zmm4_1.d f+ zmm5_1 * var_78
    zmm2_1 = zmm2_1 f* zmm1_1.d + zmm0_1
    zmm0_1 = zmm7.d
    zmm7.d = zmm7.d f* var_74
    zmm7.d = zmm7.d f+ zmm6_1.d
    zmm4_1.d = zmm4_1.d f+ zmm2_1
    zmm3.d = zmm3.d f+ zmm0_1 f* zmm1_1.d
    *arg1 = zmm4_1.d
    zmm7.d = zmm7.d f+ zmm3.d
    arg1[1] = zmm7.d

__security_check_cookie(rax_1 ^ &var_98)
return arg1
