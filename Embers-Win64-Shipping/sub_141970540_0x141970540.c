// 函数: sub_141970540
// 地址: 0x141970540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
uint64_t result = __security_cookie ^ &var_138
uint64_t result_1 = result

for (int64_t* i = *(arg2 + 8); i != 0; i = i[1])
    int64_t* r14_1 = *i
    result = zx.q(*(arg1 + 0x90))
    int64_t r9_1 = sx.q(r14_1[3].d)
    int32_t* rsi_2
    
    if (result.d == *(arg1 + 0xbc))
    label_141970614:
        rsi_2 = nullptr
    else
        void* r8_1 = arg1 + 0xc0
        void* rcx = *(r8_1 + 8)
        
        if (rcx != 0)
            r8_1 = rcx
        
        result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0xd0)) - 1) & r9_1) << 2)))
        
        if (result.d == 0xffffffff)
        label_141970614_1:
            rsi_2 = nullptr
        else
            while (true)
                rsi_2 = sx.q(result.d) * 0xb8 + *(arg1 + 0x88)
                
                if (*rsi_2 == r9_1.d)
                    break
                
                result = zx.q(rsi_2[0x2c])
                
                if (result.d == 0xffffffff)
                    goto label_141970614_2
            
            if (result.d == 0xffffffff)
            label_141970614_2:
                rsi_2 = nullptr
    
    if ((rsi_2[0x2a].b & 1) != 0)
        *(r14_1 + 0x1d) = 0
    else
        int32_t r10_1 = rsi_2[8]
        int32_t r11_1 = rsi_2[7]
        int32_t r8_3 = rsi_2[9]
        int32_t rdx_3 = rsi_2[6]
        void*** rdi_3
        int128_t zmm1
        
        if (((*(arg1 + 0xec) ^ r11_1) | (*(arg1 + 0xf0) ^ r10_1) | (*(arg1 + 0xf4) ^ r8_3)
                | (rdx_3 ^ *(arg1 + 0xe8))) != 0)
            result = zx.q(*(arg1 + 0xe4)) ^ zx.q(r8_3)
            
            if (((*(arg1 + 0xdc) ^ r11_1) | (*(arg1 + 0xe0) ^ r10_1) | result.d
                    | (rdx_3 ^ *(arg1 + 0xd8))) != 0 || *(arg1 + 0xf8) == 0)
                *(r14_1 + 0x1d) = 0
            else
                int64_t rdi_4 = sx.q(r14_1[1].d)
                int32_t rax_19 = rsi_2[4]
                
                if (rax_19 s> rdi_4.d)
                    r14_1[1].d = rax_19
                    
                    if (rax_19 s> *(r14_1 + 0xc))
                        sub_1405daba0(r14_1)
                    
                    memset(rdi_4 + *r14_1, 0, sx.q(rax_19 - rdi_4.d))
                else if (rax_19 s< rdi_4.d && rax_19 != rdi_4.d)
                    r14_1[1].d = rax_19
                    sub_1405dac10(r14_1)
                
                int64_t* rcx_29 = *(arg1 + 0x100)
                int64_t var_f8 = *(arg1 + 0xf8)
                int64_t* var_f0_1 = rcx_29
                
                if (rcx_29 != 0)
                    rcx_29[1].d += 1
                    rcx_29 = var_f0_1
                
                if (&var_f8 != &r14_1[4])
                    zmm1 = var_f8.o
                    int128_t var_58_1 = zmm1
                    var_f8.o = *(r14_1 + 0x20)
                    rcx_29 = var_f0_1
                    *(r14_1 + 0x20) = zmm1
                
                if (rcx_29 != 0)
                    rcx_29[1].d -= 1
                    
                    if (rcx_29[1].d == 1)
                        (**var_f0_1)(var_f0_1)
                        int32_t rax_23 = *(var_f0_1 + 0xc)
                        *(var_f0_1 + 0xc) -= 1
                        
                        if (rax_23 == 1)
                            (*(*var_f0_1 + 8))(var_f0_1, 1)
                
                int64_t* rcx_32 = *(arg1 + 0xf8)
                int64_t rax_26 =
                    (*(*rcx_32 + 0x10))(rcx_32, *(rsi_2 + 8), *(rsi_2 + 0x10), 3, 0, *r14_1)
                void*** rax_27 = j_sub_140a82f30(0x18)
                rdi_3 = rax_27
                
                if (rax_27 == 0)
                    rdi_3 = nullptr
                else
                    rax_27[1].d = 1
                    *(rax_27 + 0xc) = 1
                    *rax_27 = &data_142d42ea8
                    rax_27[2] = rax_26
                
                int64_t var_d0 = rax_26
                void*** var_c8 = rdi_3
                
                if (&r14_1[6] != &var_d0)
                    r14_1[6] = rax_26
                    var_d0 = 0
                    sub_1405aeff0(&r14_1[7], &var_c8)
                    rdi_3 = var_c8
                
            label_141970a23:
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t rax_30 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (rax_30 == 1)
                            (*rdi_3)[1](rdi_3, 1)
                
                *(r14_1 + 0x1d) = 1
                void** const var_88 = &data_142e86ed0
                void*** rax_32 = nullptr
                int64_t* var_b0_1 = r14_1
                int64_t (* var_a8)(void* arg1, int64_t* arg2) = sub_141967680
                void*** var_98_1 = nullptr
                int128_t var_80_1 = arg1.o
                int64_t* rcx_36 = r14_1[2]
                
                if (rcx_36 == 0)
                    goto label_141970aac
                
                result = (*(*rcx_36 + 0x1f8))(rcx_36, &var_a8)
                
                if (result.b == 0)
                    rax_32 = var_98_1
                label_141970aac:
                    int64_t var_c0 = (zx.o(0)).q
                    void*** rcx_37 = &var_88
                    
                    if (rax_32 != 0)
                        rcx_37 = rax_32
                    
                    result = var_a8((*rcx_37)[1](rcx_37), &var_c0)
                
                if (var_a8 != 0)
                    void** const* rcx_39 = &var_88
                    
                    if (var_98_1 != 0)
                        rcx_39 = var_98_1
                    
                    result = (*rcx_39)[2](rcx_39)
        else
            result = zx.q(*(arg1 + 0x38))
            int32_t* rcx_10
            
            if (result.d == *(arg1 + 0x64))
            label_1419706c4:
                rcx_10 = nullptr
            else
                void* rcx_7 = *(arg1 + 0x70)
                void* r8_4 = arg1 + 0x68
                
                if (rcx_7 != 0)
                    r8_4 = rcx_7
                
                result = zx.q(*(r8_4 + (((sx.q(*(arg1 + 0x78)) - 1) & r9_1) << 2)))
                
                if (result.d == 0xffffffff)
                label_1419706c4_1:
                    rcx_10 = nullptr
                else
                    while (true)
                        rcx_10 = sx.q(result.d) * 0xb8 + *(arg1 + 0x30)
                        
                        if (*rcx_10 == r9_1.d)
                            break
                        
                        result = zx.q(rcx_10[0x2c])
                        
                        if (result.d == 0xffffffff)
                            goto label_1419706c4_2
                    
                    if (result.d == 0xffffffff)
                    label_1419706c4_2:
                        rcx_10 = nullptr
            
            void* r12_1 = &rcx_10[2]
            
            if (rcx_10 == 0)
                r12_1 = nullptr
            
            if (r12_1 != 0 && *(arg1 + 0x108) != 0)
                int64_t rdi_1 = sx.q(r14_1[1].d)
                int32_t rax_7 = *(r12_1 + 8)
                
                if (rax_7 s> rdi_1.d)
                    r14_1[1].d = rax_7
                    
                    if (rax_7 s> *(r14_1 + 0xc))
                        sub_1405daba0(r14_1)
                    
                    memset(rdi_1 + *r14_1, 0, sx.q(rax_7 - rdi_1.d))
                else if (rax_7 s< rdi_1.d && rax_7 != rdi_1.d)
                    r14_1[1].d = rax_7
                    sub_1405dac10(r14_1)
                
                int64_t* rcx_15 = *(arg1 + 0x110)
                int64_t var_108 = *(arg1 + 0x108)
                int64_t* var_100_1 = rcx_15
                
                if (rcx_15 != 0)
                    rcx_15[1].d += 1
                    rcx_15 = var_100_1
                
                if (&var_108 != &r14_1[4])
                    zmm1 = var_108.o
                    int128_t var_68_1 = zmm1
                    var_108.o = *(r14_1 + 0x20)
                    rcx_15 = var_100_1
                    *(r14_1 + 0x20) = zmm1
                
                if (rcx_15 != 0)
                    rcx_15[1].d -= 1
                    
                    if (rcx_15[1].d == 1)
                        (**var_100_1)(var_100_1)
                        int32_t rax_11 = *(var_100_1 + 0xc)
                        *(var_100_1 + 0xc) -= 1
                        
                        if (rax_11 == 1)
                            (*(*var_100_1 + 8))(var_100_1, 1)
                
                int64_t* rcx_18 = *(arg1 + 0x108)
                int64_t rax_14 = (*(*rcx_18 + 0x10))(rcx_18, *r12_1, *(r12_1 + 8), 3, 0, *r14_1)
                void*** rax_15 = j_sub_140a82f30(0x18)
                rdi_3 = rax_15
                
                if (rax_15 == 0)
                    rdi_3 = nullptr
                else
                    rax_15[1].d = 1
                    *(rax_15 + 0xc) = 1
                    *rdi_3 = &data_142d42ea8
                    rdi_3[2] = rax_14
                
                int64_t var_e0 = rax_14
                void*** var_d8 = rdi_3
                
                if (&r14_1[6] != &var_e0)
                    r14_1[6] = rax_14
                    var_e0 = 0
                    sub_1405aeff0(&r14_1[7], &var_d8)
                    rdi_3 = var_d8
                
                goto label_141970a23
            
            *(r14_1 + 0x1d) = 0

__security_check_cookie(result_1 ^ &var_138)
return result
