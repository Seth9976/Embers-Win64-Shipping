// 函数: sub_141d5cc70
// 地址: 0x141d5cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x78) != 0)
    uint128_t zmm7 = *(arg1 + 0xe8)
    
    if (sub_140d3e110(arg1 + 0x108) == 0)
        int32_t rcx_6 = (*(arg1 + 0xf4) ^ *(arg1 + 0x11c)) | (*(arg1 + 0xf0) ^ *(arg1 + 0x118))
            | (*(arg1 + 0xec) ^ *(arg1 + 0x114)) | (*(arg1 + 0xe8) ^ *(arg1 + 0x110))
        
        if (rcx_6 != 0)
            int64_t* var_1a0 = nullptr
            int64_t var_1a8
            
            if (arg1 + 0x140 != &var_1a8)
                *(arg1 + 0x140) = 0
                var_1a8 = 0
                sub_1405aeff0(arg1 + 0x148, &var_1a0)
                int64_t* rcx_9 = var_1a0
                
                if (rcx_9 != 0)
                    rcx_9[1].d -= 1
                    
                    if (rcx_9[1].d == 1)
                        int64_t* rbx_1 = var_1a0
                        (**rbx_1)(rbx_1)
                        int32_t rax_9 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_9 == 1)
                            int64_t* rcx_11 = var_1a0
                            (*(*rcx_11 + 8))(rcx_11, 1)
            
            *(arg1 + 0xe8) = *(arg1 + 0x110)
            goto label_141d5cdec
        
        if ((*(arg1 + 0xbc)).d f!= *(arg1 + 0x128) || (*(arg1 + 0xc0)).d f!= *(arg1 + 0x12c)
                || (*(arg1 + 0xc4)).d f!= *(arg1 + 0x130)
                || (*(arg1 + 0xc8)).d f!= *(arg1 + 0x134))
            goto label_141d5cdec
        
        result.b = *(arg1 + 0x60) & 1
        
        if (*(arg1 + 0x138) != result.b)
            goto label_141d5cdec
    else
        uint128_t zmm6 = sub_141d5d830(arg1)
    label_141d5cdec:
        char rax_11 = *(arg1 + 0x60) & 1
        *(arg1 + 0x128) = *(arg1 + 0xbc)
        *(arg1 + 0x138) = rax_11
        int64_t r14_1 = 0
        uint128_t var_48_1 = zmm6
        int64_t var_a0_1 = 0
        void** result_1 = nullptr
        result = sub_140d3c6e0(arg1 + 0x108)
        void* const* result_2 = result
        void* const* var_88
        uint128_t zmm0
        
        if (result == 0)
            int32_t rax_15
            int32_t rax_16
            int32_t rax_17
            int32_t rcx_18
            int32_t rdx_3
            
            if (*(arg1 + 0xba) == 0)
                rdx_3 = *(arg1 + 0xec)
                rcx_18 = *(arg1 + 0xf0)
                rax_15 = _mm_bsrli_si128(zmm7, 4).d
                rax_16 = _mm_bsrli_si128(zmm7, 8).d
                rax_17 = _mm_bsrli_si128(zmm7, 0xc).d
                result = zx.q(zmm7.d)
            
            if (*(arg1 + 0xba) != 0 || ((rdx_3 ^ rax_15) | (rcx_18 ^ rax_16)
                    | (*(arg1 + 0xf4) ^ rax_17) | (*(arg1 + 0xe8) ^ result.d)) != 0)
                int32_t var_a4
                zmm6 = var_a4
            label_141d5cf2b:
                char rdx_8 = *(arg1 + 0xcd)
                
                if (*(arg1 + 0xcc) != 0)
                    result.b = 2
                
                if (*(arg1 + 0xcc) == 0 || rdx_8 u<= 1)
                    result.b = 1
                
                char r8_1 = *(arg1 + 0x60)
                zmm0 = *(arg1 + 0xbc)
                *(arg1 + 0x5d) = result.b
                r8_1 &= 1
                void* rax_18 = *(arg1 + 0x78)
                uint128_t zmm1 = *(arg1 + 0xe8)
                int32_t var_15c_1 = zmm6.d
                void* rcx_24 = rax_18 - 0x10
                
                if (rax_18 == 0)
                    rcx_24 = nullptr
                
                char var_190 = *(arg1 + 0xba)
                int64_t* result_3 = result_1
                
                if (result_1 != 0)
                    *(result_1 + 0xc) += 1
                
                int128_t entry_zmm2
                int128_t entry_zmm3
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_23
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_23.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_23.b == 0))
                        void var_78
                        void** rax_33 = sub_141d56950(&var_78, nullptr, 0xff)
                        void* rdx_11 = *rax_33
                        *(rdx_11 + 0x10) = rcx_24
                        *(rdx_11 + 0x18) = var_190
                        *(rdx_11 + 0x1c) = zmm0
                        *(rdx_11 + 0x2c) = zmm1
                        *(rdx_11 + 0x3c) = zmm7
                        *(rdx_11 + 0x4c) = var_15c_1.d
                        *(rdx_11 + 0x50) = r14_1
                        *(rdx_11 + 0x58) = result_3
                        result_3 = nullptr
                        int64_t var_158_3 = 0
                        *(rdx_11 + 0x60) = r8_1
                        *(rdx_11 + 0x61) = rdx_8
                        *(rdx_11 + 0x68) = var_88
                        void* rcx_31 = *rax_33
                        int32_t rax_39 = rax_33[2].d
                        int64_t* rdx_12 = rax_33[1]
                        int64_t* rbx_2 = *(rcx_31 + 0x78)
                        int64_t* arg_18 = rbx_2
                        int32_t* rdi_1 = &rbx_2[9]
                        
                        if (rbx_2 != 0)
                            *rdi_1 += 1
                            rbx_2 = arg_18
                        
                        sub_140778260(rcx_31, rdx_12, rax_39, 1)
                        
                        if (rbx_2 != 0)
                            int32_t rax_40 = *rdi_1
                            *rdi_1 -= 1
                            
                            if (rax_40 == 1)
                                sub_140a2f6e0(arg_18)
                    else
                        char var_130 = var_190
                        int64_t var_f8_1 = r14_1
                        int64_t* result_5 = result_3
                        uint128_t var_12c_1 = zmm0
                        char var_e8_1 = r8_1
                        char var_e7_1 = rdx_8
                        uint128_t var_11c_1 = zmm1
                        void* const* var_e0_1 = var_88
                        int32_t var_fc_1 = var_15c_1.d
                        uint128_t var_10c_1 = zmm7
                        result_3 = nullptr
                        int64_t var_158_2 = 0
                        sub_141d5ac90(rcx_24, &var_130, entry_zmm2, entry_zmm3)
                        
                        if (result_5 != 0)
                            int32_t rax_31 = *(result_5 + 0xc)
                            *(result_5 + 0xc) -= 1
                            
                            if (rax_31 == 1 && result_5 != 0)
                                (*(*result_5 + 8))(result_5, 1)
                else
                    sub_141d5ac90(rcx_24, &var_190, entry_zmm2, entry_zmm3)
                
                if (result_3 != 0)
                    int32_t rax_41 = *(result_3 + 0xc)
                    *(result_3 + 0xc) -= 1
                    
                    if (rax_41 == 1 && result_3 != 0)
                        (*(*result_3 + 8))(result_3, 1)
                
                result = result_1
                
                if (result != 0)
                    int32_t rsi_1 = *(result + 0xc)
                    *(result + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        result = (*(*result_1 + 8))(result_1, zx.q(rsi_1))
        else
            if (sub_141d4ee10(result[0x22]) != 0)
            label_141d5ce66:
                int64_t rax_14 = *(arg1 + 0x140)
                
                if (rax_14 != 0)
                    r14_1 = rax_14 + 8
                    var_a0_1 = r14_1
                
                void** result_4 = *(arg1 + 0x148)
                
                if (result_4 != 0)
                    *(result_4 + 0xc) += 1
                    r14_1 = var_a0_1
                    result_1 = result_4
                
                goto label_141d5ce99
            
            if (sub_141d4ee50(result_2[0x22]) != 0)
                goto label_141d5ce66
            
            result = sub_141d4ee90(result_2[0x22])
            
            if (result.b != 0)
                goto label_141d5ce66
            
            if (*(arg1 + 0xba) != 0)
            label_141d5ce99:
                zmm0 = sub_141d4e380(result_2[0x22])
                int32_t var_a4_1 = zmm0.d
                zmm6 = zmm0
                void** arg_20
                sub_141d4e4f0(result_2[0x22], &arg_20)
                var_88 = arg_20
                goto label_141d5cf2b

return result
