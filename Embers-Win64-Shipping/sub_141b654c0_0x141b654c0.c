// 函数: sub_141b654c0
// 地址: 0x141b654c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_141b5cae0(arg1 + 0x20, 0)
*(arg1 + 0x44) = *arg2
uint64_t result = zx.q(arg2[1])
*(arg1 + 0x48) = result.d
bool cond:0 = *(arg1 + 0x44) s<= 0
*(arg1 + 0x40) = 2

if (not(cond:0) && result.d s> 0)
    int32_t i = 0
    
    if (*(arg1 + 0x4c) s> 0)
        do
            int32_t rdx = *(arg1 + 0x48)
            int128_t zmm1_1 = data_143dbb1e0
            uint64_t r9_1 = zx.q(*(arg1 + 0x44))
            int128_t var_78
            int128_t* var_a0_1 = &var_78
            int64_t* rcx_2 = data_143f0f180
            int32_t var_a8_1 = 9
            int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
            char rax_5 = *(arg1 + 0x40)
            int32_t var_b0_1 = 1
            var_78 = zx.o(0)
            int32_t var_68_1 = 1
            int128_t var_64_1 = zmm1_1
            char var_50_1 = 0
            int64_t var_48_1 = 0
            int32_t var_40_1 = 0
            int64_t r10_1 = *rcx_2
            int32_t var_b8_1 = 1
            int64_t* result_1 = nullptr
            int64_t* var_88
            (*(r10_1 + 0x560))(rcx_2, &var_88, &data_143f02b98, r9_1, rdx, rax_5, var_b8_1, 
                var_b0_1, var_a8_1, var_a0_1, result_1)
            int64_t* rbx_1 = var_88
            int64_t* var_80_1 = rbx_1
            var_88 = nullptr
            sub_1405d16e0(&result_1, rbx_1)
            sub_1405d1550(&var_88)
            int64_t rdi_1 = sx.q(*(arg1 + 0x38))
            int32_t rax_6 = (rdi_1 + 1).d
            *(arg1 + 0x38) = rax_6
            
            if (rax_6 s> *(arg1 + 0x3c))
                sub_1408092e0(arg1 + 0x20, rdi_1.d)
            
            void* rax_7 = *(arg1 + 0x30)
            void* rdx_4 = arg1 + 0x20
            
            if (rax_7 != 0)
                rdx_4 = rax_7
            
            result = result_1
            *(rdx_4 + (rdi_1 << 3)) = result
            
            if (result != 0)
                *(result + 8) += 1
                result = result_1
                rbx_1 = var_80_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    if (var_80_1[2].b != 0)
                        (**var_80_1)(var_80_1, 1)
                    else
                        char rax_9
                        
                        if (data_143f0f1d0 == 0)
                            rax_9 = sub_1405949a0()
                        
                        if (data_143f0f1d0 == 0 && rax_9 != 0)
                            (**var_80_1)(var_80_1, 1)
                        else
                            bool z_1
                            
                            if (0 == *(var_80_1 + 0xc))
                                *(var_80_1 + 0xc) = 1
                                z_1 = true
                            else
                                *(var_80_1 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_11 = sub_140a20af0()
                                uint64_t rdx_5 = zx.q(rax_11)
                                void* const rcx_6
                                
                                if (rax_11 != 0)
                                    rcx_6 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                                else
                                    rcx_6 = nullptr
                                
                                *(rcx_6 + 8) = var_80_1
                                sub_1405a42f0(&data_143f02390, rdx_5.d)
                
                result = result_1
            
            if (result != 0)
                int32_t rcx_11 = *(result + 8)
                *(result + 8) -= 1
                
                if (rcx_11 == 1)
                    int64_t* result_2 = result_1
                    char rax_17
                    
                    if (result_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_17 = sub_1405949a0()
                    
                    if (result_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
                        result = (**result_2)(result_2, 1)
                    else
                        result = 0
                        bool z_2
                        
                        if (0 == *(result_2 + 0xc))
                            *(result_2 + 0xc) = 1
                            z_2 = true
                        else
                            result = zx.q(*(result_2 + 0xc))
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_18 = sub_140a20af0()
                            uint64_t rdx_6 = zx.q(rax_18)
                            void* const rcx_12
                            
                            if (rax_18 != 0)
                                rcx_12 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                            else
                                rcx_12 = nullptr
                            
                            *(rcx_12 + 8) = result_1
                            result = sub_1405a42f0(&data_143f02390, rdx_6.d)
            
            i += 1
        while (i s< *(arg1 + 0x4c))

__security_check_cookie(rax_1 ^ &var_e8)
return result
