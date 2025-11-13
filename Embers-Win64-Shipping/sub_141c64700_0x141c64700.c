// 函数: sub_141c64700
// 地址: 0x141c64700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x358) & 8) != 0)
    int64_t* rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        void* rax_1 = (*(*rcx + 0x38))(rcx)
        int32_t rax_2 = *(rax_1 + 0xc)
        void* const rax_9
        
        if (rax_2 s>= data_143e1d9b4)
            rax_9 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_2)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_4 = temp2_1 + rdx_2
            rax_9 =
                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
        
        *(rax_9 + 8) |= 0x40000000
        int128_t zmm1_1 = sub_141c64a30(arg1, rax_1)
        void var_88
        int64_t* rax_10 = sub_141c5eea0(arg1, &var_88, rax_1)
        int64_t var_d8 = 0
        int64_t var_d0
        sub_141c4d620(&var_d0, &rax_10[1])
        
        if (var_d0 != 0)
            var_d8 = *rax_10
            *rax_10 = 0
        
        sub_141c62780(arg1, rax_1, &var_d8, 0, zmm1_1)
        int64_t* var_80
        
        if (var_80 != 0)
            int32_t rax_11 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rax_11 == 1 && var_80 != 0)
                (*(*var_80 + 8))(var_80, 1)
        
        int64_t* rcx_11 = *(arg1 + 0x40)
        void* var_c8
        result = (*(*rcx_11 + 0x30))(rcx_11, &var_c8)
        void* rcx_12 = var_c8
        int64_t* var_c0
        
        if (rcx_12 != 0)
            result = sub_142366a90(rcx_12)
            
            if (result != 0)
                void var_78
                int64_t* rax_14 = sub_141c5eea0(arg1, &var_78, rax_1)
                int64_t var_e8_1 = 0
                int64_t* var_e0
                sub_141c4d620(&var_e0, &rax_14[1])
                int64_t* rdi_2 = var_e0
                
                if (rdi_2 != 0)
                    var_e8_1 = *rax_14
                    *rax_14 = 0
                
                int64_t* var_70
                
                if (var_70 != 0)
                    int32_t rax_15 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rax_15 == 1 && var_70 != 0)
                        (*(*var_70 + 8))(var_70, 1)
                    
                    rdi_2 = var_e0
                
                int32_t r13_2 = *(result + 0xc)
                int64_t arg_8
                int128_t zmm1_2 = sub_140d3a3a0(&arg_8, rax_1)
                
                if (rdi_2 != 0)
                    *(rdi_2 + 0xc) += 1
                    *(rdi_2 + 0xc) += 1
                    rdi_2 = var_e0
                
                int64_t rbx_2 = arg_8
                void* r12_1 = var_c8
                
                if (var_c0 != 0)
                    var_c0[1].d += 1
                    rdi_2 = var_e0
                
                int32_t var_90_1 = r13_2
                void*** rax_17 = sub_140a82f30(0x38, 8)
                rax_17[1] = var_e8_1
                rax_17[2] = rdi_2
                int64_t var_b0_1 = 0
                rax_17[3] = rbx_2
                rax_17[4] = r12_1
                rax_17[5] = var_c0
                rax_17[6].d = r13_2
                int64_t var_b8 = 0
                int64_t var_98_1 = 0
                int64_t var_a0_2 = 0
                *rax_17 = &data_14320adc0
                void*** var_58_1 = rax_17
                void (* var_68)(int64_t* arg1)
                void (* rax_18)(int64_t* arg1) = var_68
                
                if (rax_17 != -8)
                    rax_18 = j_sub_141c52e20
                
                var_68 = rax_18
                sub_141c56850(arg1, &var_68, zmm1_2)
                result = sub_141c4f660(&var_b8)
                
                if (rdi_2 != 0)
                    int32_t rax_19 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    int64_t* rbx_3 = var_e0
                    
                    if (rax_19 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    result = zx.q(rbx_3[1].d)
                    rbx_3[1].d -= 1
                    
                    if (result.d == 1)
                        int64_t* rcx_22 = var_e0
                        (**rcx_22)(rcx_22)
                        result = zx.q(*(rdi_2 + 0xc))
                        *(rdi_2 + 0xc) -= 1
                        
                        if (result.d == 1)
                            int64_t* rcx_23 = var_e0
                            result = (*(*rcx_23 + 8))(rcx_23, 1)
        
        if (var_c0 != 0)
            result = zx.q(var_c0[1].d)
            var_c0[1].d -= 1
            
            if (result.d == 1)
                result = (**var_c0)(var_c0)
                int32_t rsi_1 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    return (*(*var_c0 + 8))(var_c0, zx.q(rsi_1))

return result
