// 函数: sub_142742160
// 地址: 0x142742160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* r13 = *arg2
int64_t* r12 = nullptr
int64_t rax_2 = sx.q(arg2[1].d)
int32_t r15 = 0
int32_t rdi = 0
int64_t* var_168 = nullptr
int32_t var_15c = 0
int32_t* result = &r13[rax_2]
int32_t* result_1 = result

if (r13 != result)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    
    do
        int64_t* rbx_1 = *r13
        result = rbx_1[2]
        
        if (result != 0 && *result == 7)
            void* rsi_1 = *(result + 8)
            
            if (rsi_1 != 0)
                int64_t* rcx = data_143f74110
                result = (*(*rcx + 0xf8))(rcx, rbx_1)
                
                if (result.b != 0)
                    result = sub_140d3e110(rsi_1 + 0x14)
                    
                    if (result.b != 0)
                        int32_t i_2 = rdi + (*(*rbx_1 + 0xc8))(rbx_1)
                        
                        if (i_2 s> r15)
                            sub_1405a4d70(&var_168)
                            r12 = var_168
                            r15 = var_15c
                        
                        result = (*(*rbx_1 + 0xd0))(rbx_1, r12, zx.q(i_2), 0)
                        
                        if (i_2 s> 0)
                            int64_t* rsi_2 = r12
                            uint64_t i_1 = zx.q(i_2)
                            uint64_t i
                            
                            do
                                int64_t* rcx_5 = data_143f74110
                                int32_t var_158
                                result = (*(*rcx_5 + 0x108))(rcx_5, *rsi_2, &var_158)
                                int32_t* result_3 = result
                                
                                if (result != 0)
                                    int64_t r9_1 = *result
                                    float var_108
                                    int128_t* rax_9 =
                                        (*(r9_1 + 0xe0))(result, &var_108, zx.q(var_158), r9_1)
                                    int128_t zmm2 = *(rax_9 + 8)
                                    int128_t zmm1 = *(rax_9 + 4)
                                    int128_t zmm0 = *rax_9
                                    zmm8.d = zmm2.d f+ zmm2.d
                                    int128_t zmm3 = *(rax_9 + 0xc)
                                    zmm12.d = zmm0.d f+ zmm0.d
                                    zmm13.d = zmm1.d f+ zmm1.d
                                    zmm7.d = zmm12.d f* zmm0.d
                                    zmm9 = zmm13
                                    zmm0 = zmm8
                                    zmm6.d = zmm12.d f* zmm2.d
                                    zmm8.d = zmm8.d f* zmm3.d
                                    zmm10 = zmm13
                                    zmm0.d = zmm0.d f* zmm2.d
                                    zmm11 = zmm12
                                    zmm12.d = zmm12.d f* zmm3.d
                                    zmm13.d = zmm13.d f* zmm3.d
                                    zmm10.d = zmm10.d f* zmm1.d
                                    zmm3.d = 1f f- zmm7.d
                                    zmm7 = *(rax_9 + 0x14)
                                    zmm9.d = zmm9.d f* zmm2.d
                                    zmm11.d = zmm11.d f* zmm1.d
                                    zmm2.d = zmm6.d f- zmm13.d
                                    zmm1.d = zmm3.d f- zmm0.d
                                    float zmm4_1 = zmm8.d f+ zmm11.d
                                    zmm11.d = zmm11.d f- zmm8.d
                                    zmm8 = *(rax_9 + 0x18)
                                    zmm13.d = zmm13.d f+ zmm6.d
                                    rax_9[1].d
                                    float zmm5_1 = 1f f- zmm10.d f- zmm0.d
                                    int32_t var_100_1 = zmm2.d
                                    int32_t var_f8_1 = zmm1.d
                                    zmm0.d = zmm9.d f+ zmm12.d
                                    float var_104_1 = zmm4_1
                                    zmm3.d = zmm3.d f- zmm10.d
                                    int32_t var_fc_1 = zmm11.d
                                    zmm9.d = zmm9.d f- zmm12.d
                                    int32_t var_f0_1 = zmm13.d
                                    var_108 = zmm5_1
                                    int32_t var_f4_1 = zmm0.d
                                    int32_t var_e8_1 = zmm3.d
                                    int32_t var_ec_1 = zmm9.d
                                    int32_t var_118[0x4]
                                    result, zmm6 = sub_142742ed0(&var_118, &var_108)
                                    int32_t* rbx_2 = *(result_3 + 8)
                                    int32_t var_148 = (*result).d
                                    int32_t var_144_1 = result[1].d
                                    int32_t var_140_1 = result[2].d
                                    int32_t var_13c_1 = result[3].d
                                    int32_t var_138_1 = zmm6.d
                                    int32_t var_134_1 = zmm7.d
                                    int32_t var_130_1 = zmm8.d
                                    
                                    if (rbx_2 != 0 && *rbx_2 == 5)
                                        void* rbx_3 = *(rbx_2 + 8)
                                        
                                        if (rbx_3 != 0)
                                            void* rax_10 = sub_142748e90()
                                            void* rdx_6 = *(rbx_3 + 0x10)
                                            result = sx.q(*(rax_10 + 0x38))
                                            
                                            if (result.d s<= *(rdx_6 + 0x38))
                                                int32_t* result_2 = result
                                                result = *(rdx_6 + 0x30)
                                                
                                                if (*(result + (result_2 << 3)) == rax_10 + 0x30
                                                        && (*(rbx_3 + 0x88) & 1) != 0)
                                                    int64_t var_154
                                                    sub_140d3a3a0(&var_154, rbx_3)
                                                    int64_t rax_11 = var_154
                                                    result = sub_142742aa0(arg1 + 0x18, 
                                                        (rax_11 u>> 0x20).d ^ rax_11.d, &var_154)
                                                    int32_t* result_4 = result
                                                    int64_t rbx_4 = sx.q(result[2])
                                                    int32_t rcx_10 = (rbx_4 + 1).d
                                                    result[2] = rcx_10
                                                    
                                                    if (rcx_10 s> result[3])
                                                        result = sub_1405c4fe0(result)
                                                    
                                                    int64_t rbx_5 = rbx_4 << 6
                                                    int32_t* rbx_6 = rbx_5 + *result_4
                                                    
                                                    if (rbx_5 != neg.q(*result_4))
                                                        result = sub_1417cbc40(&var_108, &var_148)
                                                        *rbx_6 = var_158
                                                        *(rbx_6 + 0x10) = *result
                                                        *(rbx_6 + 0x20) = *(result + 0x10)
                                                        *(rbx_6 + 0x30) = *(result + 0x20)
                                
                                rsi_2 = &rsi_2[1]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            r12 = var_168
                            r15 = var_15c
                        
                        rdi = 0
                        int32_t var_160_2 = 0
                        
                        if (r15 != i_2)
                            result = sub_1405c5570(&var_168, i_2)
                            rdi = var_160_2
                            r12 = var_168
                            r15 = var_15c
        
        r13 = &r13[1]
    while (r13 != result_1)
    
    if (r12 != 0)
        result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_188)
return result
