// 函数: sub_141f9e8a0
// 地址: 0x141f9e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_141efce60(arg1, arg2)
int64_t* result = data_143f5b298
int64_t* rcx = result[0x15f]

if (rcx != 0)
    result = (*(*rcx + 0xc0))(rcx)
    int64_t* result_1 = result
    
    if (result != 0)
        uint128_t buffer2
        uint128_t zmm0_1
        int128_t zmm1
        
        if (*(arg1 + 0x27c) != 0)
            uint128_t var_78
            uint128_t* rax_3 = sub_141f3cf60(arg1, &var_78)
            zmm1 = rax_3[1]
            buffer2 = *rax_3
            zmm0_1 = rax_3[2]
        else
            zmm1 = *(arg1 + 0x1d0)
            buffer2 = *(arg1 + 0x1c0)
            zmm0_1 = *(arg1 + 0x1e0)
        
        char rdi_1 = *(arg1 + 0x28c)
        
        if (rdi_1 == 0)
            int32_t rax_5
            
            if (arg1[0x5a].b == (*(arg1 + 0x14c) u>> 5 & 1))
                rax_5 = memcmp(&arg1[0x54], &buffer2, 0x30)
            
            if (arg1[0x5a].b != (*(arg1 + 0x14c) u>> 5 & 1) || rax_5 != 0)
                *(arg1 + 0x28c) = 1
                rdi_1 = 1
        
        result = arg1[0x3f]
        uint8_t r14_1 = *(arg1 + 0x14c) u>> 5 & 1
        
        if (result == 0 || result[0xf] == 0)
            r14_1 = 0
        
        if (rdi_1 != 0)
            void var_108
            sub_1417eac40(&var_108)
            int64_t* rcx_4 = arg1[0x3f]
            int32_t var_c8_1 = (*(arg1 + 0x20c)).d
            int32_t var_c4_1 = arg1[0x42].d.d
            int32_t var_a4_1 = arg1[0x51].d
            int32_t var_b0_1 = *(arg1 + 0x224)
            int128_t var_e8_1 = zmm1
            uint128_t var_c0_1 = *(arg1 + 0x214)
            uint128_t buffer2_1 = buffer2
            uint128_t var_d8_1 = zmm0_1
            int64_t* var_98
            int32_t var_88
            
            if (rcx_4 != 0)
                sub_142397530(rcx_4, 0x41f00000, 0)
                int64_t* rdi_2 = var_98
                int64_t* rax_9 = *(*(arg1[0x3f] + 0x78) + 0x10)
                var_98 = rax_9
                
                if (rax_9 != 0)
                    rax_9[1].d += 1
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        char rax_11
                        
                        if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                            rax_11 = sub_1405949a0()
                        
                        if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                            (**rdi_2)(rdi_2, 1)
                        else
                            bool z_1
                            
                            if (0 == *(rdi_2 + 0xc))
                                *(rdi_2 + 0xc) = 1
                                z_1 = true
                            else
                                *(rdi_2 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                sub_1405dcc10(&data_143f02390, rdi_2)
                
                int64_t* rcx_7 = arg1[0x3f]
                int32_t rcx_8 = 0
                
                if ((*(*rcx_7 + 0x308))(rcx_7) == 0x800)
                    rcx_8 = 0x10
                
                var_88 |= rcx_8
            
            int64_t* var_90
            
            if (arg1[0x40] != 0)
                sub_142397530(arg1[0x3f], 0x41f00000, 0)
                int64_t* rdi_3 = var_90
                int64_t* rax_17 = *(*(arg1[0x40] + 0x78) + 0x10)
                var_90 = rax_17
                
                if (rax_17 != 0)
                    rax_17[1].d += 1
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        char rax_18
                        
                        if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                            rax_18 = sub_1405949a0()
                        
                        if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_18 != 0))
                            (**rdi_3)(rdi_3, 1)
                        else
                            bool z_2
                            
                            if (0 == *(rdi_3 + 0xc))
                                *(rdi_3 + 0xc) = 1
                                z_2 = true
                            else
                                *(rdi_3 + 0xc)
                                z_2 = false
                            
                            if (z_2)
                                sub_1405dcc10(&data_143f02390, rdi_3)
            
            int32_t rcx_12 = arg1[0x3e].d
            uint32_t rcx_14 = zx.d(*(arg1 + 0x27c))
            int32_t var_88_1 = var_88 | ((arg1[0x41].d & 1) | (rcx_12 & 2)) << 2
                | (zx.d(r14_1) ^ 1) << 5 | (rcx_12 u>> 1 & 2) | (rcx_12 & 1)
            
            if (rcx_14 == 0)
                int32_t var_a0_3 = 0
            else if (rcx_14 == 1)
                int32_t var_a0_2 = 1
            else if (rcx_14 == 2)
                int32_t var_a0_1 = 2
            
            void* rcx_17 = arg1[0x50]
            
            if (rcx_17 == 0)
                void* rax_29 = sub_141f790d0(arg1)
                arg1[0x50] = rax_29
                rcx_17 = rax_29
            
            (*(*rcx_17 + 0x260))(rcx_17, &var_108)
            int32_t rdx_13 = arg1[0x52].d
            int64_t rax_31 = *result_1
            
            if (rdx_13 == 0)
                arg1[0x52].d = (*(rax_31 + 8))(result_1, &var_108)
            else
                (*(rax_31 + 0x48))(result_1, rdx_13, &var_108)
            
            *(arg1 + 0x2a0) = buffer2
            *(arg1 + 0x2c0) = zmm0_1
            *(arg1 + 0x2b0) = zmm1
            arg1[0x5a].b = r14_1
            *(arg1 + 0x28c) = 0
            int64_t* var_80
            
            if (var_80 != 0)
                (*(*var_80 + 0x10))(var_80, 1)
            
            sub_1405d1550(&var_90)
            result = sub_1405d1550(&var_98)
        
        if (*(arg1 + 0x28d) != 0)
            int32_t rdx_15 = arg1[0x52].d
            
            if (rdx_15 != 0)
                result = (*(*result_1 + 0x58))(result_1, rdx_15)
                *(arg1 + 0x28d) = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
