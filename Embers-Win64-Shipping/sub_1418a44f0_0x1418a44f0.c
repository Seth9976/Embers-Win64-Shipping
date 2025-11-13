// 函数: sub_1418a44f0
// 地址: 0x1418a44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
int64_t* i = *(arg1 + 0x1d0)

for (void* rbx_2 = &i[sx.q(*(arg1 + 0x1d8)) * 4]; i != rbx_2; i = &i[4])
    int32_t rdx_1
    result, rdx_1 = sub_140a32a50(arg2, i, 1)
    
    if (result.b != 0)
        int32_t rbx_3 = arg2[1].d
        int64_t rdi_1 = *arg2
        int64_t var_158 = 0
        int32_t var_150_1 = rbx_3
        
        if (rbx_3 != 0)
            sub_1405a4c70(&var_158, rbx_3, 0)
            rdx_1 = memcpy(var_158, rdi_1, rbx_3 * 2)
        else
            int32_t var_14c_1 = 0
        
        int32_t rbx_4 = i[1].d
        int64_t rdi_2 = *i
        int16_t* var_168 = nullptr
        sub_1405a4c70(&var_168, sbb.d(rdx_1, rdx_1, rbx_4 != 0) + 2 + rbx_4, 0)
        memcpy(var_168, rdi_2, rbx_4 * 2)
        int16_t* const rbx_5 = &data_142d40450
        sub_140a2cf70(&var_168, &data_142d40450, 0)
        
        if (rbx_4 != 0)
            rbx_5 = var_168
        
        sub_140b20770(&var_158, rbx_5)
        int16_t* rcx_7 = var_168
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t* rcx_8 = i[2]
        result = (*(*rcx_8 + 0x1c8))(rcx_8, &var_158)
        int64_t rcx_9 = var_158
        uint64_t result_2 = result
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        if (result_2 != 0)
            int64_t rax_4 = sx.q(*(result_2 + 0x50))
            int128_t* j = *(result_2 + 0x48)
            int64_t var_118
            __builtin_memset(&var_118, 0, 0x2c)
            void* rdi_3 = j + rax_4 * 0x18
            int32_t var_ec_1 = 0x80
            int32_t var_e8_1 = 0xffffffff
            int32_t var_e4_1 = 0
            int64_t var_d8_1 = 0
            int32_t var_d0_1 = 0
            
            for (; j != rdi_3; j += 0x18)
                void var_138
                sub_140acafe0(&var_118, &var_138, j, nullptr)
            
            int64_t var_c8
            int64_t* rax_5 = sub_141842470(&var_118, &var_c8, arg1 + 0x180)
            
            if (&var_118 != rax_5)
                sub_140780e10(&var_118, rax_5)
                void var_e0
                
                if (rax_5[8] == 0)
                    memmove(&var_e0, &rax_5[7], 4)
                
                if (var_d8_1 != 0)
                    sub_140a74f90(var_d8_1)
                
                var_d8_1 = rax_5[8]
                rax_5[8] = 0
                int32_t var_d0_2 = rax_5[9].d
                rax_5[9].d = 0
            
            int32_t var_80_1 = 0
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int32_t var_c0_1 = 0
            int32_t var_bc
            
            if (var_bc != 0)
                sub_1405a5130(&var_c8, 0)
            
            int32_t var_98_1 = 0xffffffff
            int32_t var_94_1 = 0
            void var_b8
            sub_14059a8e0(&var_b8, 0)
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            int64_t rcx_20 = var_c8
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t* rcx_21 = *(arg1 + 0x78)
            int64_t* var_128_1 = &var_118
            void*** var_68_1 = nullptr
            void** const var_58 = &data_142d42ed8
            int32_t* (* var_78)(int64_t* arg1, int64_t* arg2) = j_sub_14189eb80
            int128_t var_50_1 = arg1.o
            int64_t var_148
            (*(*rcx_21 + 0x20))(rcx_21, &var_148, 0x7fffffff, &var_78)
            int32_t var_140
            
            if (var_140 s> 0)
                int64_t* rcx_22 = *(arg1 + 0x88)
                (*(*rcx_22 + 8))(rcx_22, &var_148)
                int32_t rbx_7 = 0
                
                if (var_140 s> 0)
                    do
                        bool z_1
                        
                        if (0 == *(arg1 + 0x94))
                            *(arg1 + 0x94) = 0
                            z_1 = true
                        else
                            *(arg1 + 0x94)
                            z_1 = false
                        
                        if (not(z_1))
                            break
                        
                        sub_1418a4b00(arg1, (sx.q(rbx_7) << 4) + var_148)
                        rbx_7 += 1
                    while (rbx_7 s< var_140)
            
            int64_t rcx_24 = var_148
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            if (var_78 != 0)
                void** const* rcx_25 = &var_58
                
                if (var_68_1 != 0)
                    rcx_25 = var_68_1
                
                (*rcx_25)[2](rcx_25)
            
            int32_t var_d0_3 = 0
            
            if (var_d8_1 != 0)
                sub_140a74f90(var_d8_1)
            
            int64_t var_110
            var_110.d = 0
            int32_t var_e8_2 = 0xffffffff
            int32_t var_e4_2 = 0
            int64_t var_108
            result = sub_14059a8e0(&var_108, 0)
            int64_t var_f8
            
            if (var_f8 != 0)
                result = sub_140a74f90(var_f8)
            
            int64_t rcx_30 = var_118
            
            if (rcx_30 != 0)
                result = sub_140a74f90(rcx_30)
        
        break

__security_check_cookie(result_1 ^ &var_188)
return result
