// 函数: sub_141bc37f0
// 地址: 0x141bc37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int128_t* var_170 = arg4
uint64_t result

if (*(arg1 + 0x8f1) == 0)
    result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
else
    void* rdi_1 = arg1[0x101]
    
    if (rdi_1 == 0)
        result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
    else
        if (*(rdi_1 + 0x1b8) != 0)
            int64_t* rcx = *(rdi_1 + 0x1b0)
            
            if (rcx != 0)
                if ((*(*rcx + 0x28))(rcx) != 0)
                    int64_t* rcx_1
                    
                    if (*(rdi_1 + 0x1b8) == 0)
                        rcx_1 = nullptr
                    else
                        rcx_1 = *(rdi_1 + 0x1b0)
                    
                    char var_178
                    (*(*rcx_1 + 0x48))(rcx_1, &var_178)
                    *(rdi_1 + 0x1a8) = var_178
                
                arg4 = var_170
        
        if ((*(rdi_1 + 0x1a8) & 0x19) == 0)
            result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
        else
            void* rax_6 = *arg2
            int64_t var_158 = *(rax_6 + 0xa8)
            int64_t var_150 = *(rax_6 + 0xb0)
            int64_t var_168 = *(rax_6 + 0xa0)
            
            if (sub_140dbd970(&arg1[0x105], &var_168, &var_150, &var_158) != 0)
                *(arg1 + 0x8f4) = 1
                sub_140db2ea0(&arg1[0x72])
            
            int32_t var_190
            var_190.q = arg2[4]
            void var_110
            sub_140dd88d0(&var_110, arg2[3], *arg2, &arg1[0x105], arg2[2], var_190, arg2[5].d.d)
            var_158.d = 0x3f800000
            void* var_108
            *(var_108 + 0xb8) = *(*arg2 + 0xb8)
            char var_118_1 = arg8
            char var_117_1 = 1
            int128_t zmm0_2
            
            if (*(arg1 + 0x17c) == 0)
                zmm0_2 = 0x3f800000
            else
                zmm0_2 = arg1[0x2f].d
            
            int32_t var_120_1 = zmm0_2.d
            void* var_138_1 = &var_110
            zmm0_2 = *var_170
            int64_t rax_13 = *arg1
            int128_t var_148 = zmm0_2
            (*(rax_13 + 0x240))(arg1, &var_148, arg3)
            int64_t* rdi_2 = *(arg1[0x122] + 0x20)
            (*(*rdi_2 + 0x338))(rdi_2)
            
            if (not(zmm0_2.d f< 1f))
                (*(*rdi_2 + 0x340))(rdi_2)
                
                if (not(zmm0_2.d f< 1f))
                    void* rdx_4 = &arg1[0xf3]
                    uint32_t rcx_9 = zx.d(*(rdx_4 + 0x10))
                    
                    if (rcx_9 != 0)
                        if (rcx_9 == 1)
                            rdx_4 = *(rdx_4 + 0x18)
                        else if (rcx_9 == 3)
                            rdx_4 = &arg7[2]
                        else
                            rdx_4 = &arg7[1]
                    
                    float zmm6[0x4] = *rdx_4
                    int128_t* rax_17 = sub_140eff690(&arg1[0x65])
                    int128_t zmm7
                    zmm7.d = (*(arg7 + 0xc)).d f* *(rax_17 + 0xc)
                    int128_t zmm9
                    zmm9.d = (*(arg7 + 4)).d f* *(rax_17 + 4)
                    int128_t zmm10
                    zmm10.d = (*(arg7 + 8)).d f* *(rax_17 + 8)
                    int128_t zmm8
                    zmm8.d = (*rax_17).d f* *arg7
                    void* rax_18 = arg1[0x122]
                    zmm7.d = zmm7.d f* _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
                    void* rcx_12 = *(rax_18 + 0x28)
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm8.d = zmm8.d f* zmm6[0]
                    zmm10.d = zmm10.d f* _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                    zmm9.d = zmm9.d f* temp0_3[0]
                    zmm8.d = zmm8.d f* zmm7.d
                    zmm10.d = zmm10.d f* zmm7.d
                    zmm9.d = zmm9.d f* zmm7.d
                    zmm7.d = zmm7.d f* zmm7.d
                    
                    if (rcx_12 != 0)
                        zmm7, zmm8, zmm9, zmm10 = sub_142131d00(rcx_12, arg1[0x134], rdi_2)
                    
                    char rcx_13 = *(arg3 + 0x34) & 1
                    int32_t zmm2_1 = *(arg3 + 8)
                    int32_t var_dc_1 = arg3[1].d.d
                    int128_t zmm1_2 = *arg3
                    float var_e0 = (*(arg3 + 0xc))[0]
                    int32_t var_cc_1 = zmm1_2.d
                    char var_ac
                    char var_ac_1 = (rcx_13 * 2) | (var_ac & 0xfc)
                    float var_c8_1 = (*(arg3 + 4))[0]
                    var_190.q = &var_168
                    int128_t var_c4_1 = *(arg3 + 0x1c)
                    int64_t var_198
                    var_198.b = 6
                    var_168.d = zmm8.d
                    var_168:4.d = zmm9.d
                    int32_t var_160_1 = zmm10.d
                    int32_t var_15c_1 = zmm7.d
                    int32_t var_d8_1 = zmm2_1
                    int64_t var_d4_1 = 0
                    int64_t var_b4_1 = *(arg3 + 0x2c)
                    sub_140db3600(arg5, arg6, &var_e0, &arg1[0xef], var_198.b, var_190)
            
            sub_140d9a120(*var_138_1, &arg1[0x105])
            result = zx.q(arg6)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
