// 函数: sub_1419a0ce0
// 地址: 0x1419a0ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t var_58 = __security_cookie ^ &var_188
uint32_t r10 = zx.d(arg3[0xa].w)
void* r13 = arg1
uint64_t var_f0 = arg2
uint64_t result

if ((r10.w == 1 ||
        ((r10 - 1).w u<= 7 && arg3[5] != 0 && arg3[6] != 0 && arg3[7] == 0 && *(arg3 + 0x25) == 0))
        && arg3[5] != 0)
    int16_t rbx_1 = *(arg3 + 0x26)
    
    if (rbx_1 == 0 || (r10 - 1).w u> 0xf)
        result.b = 1
    else
        int32_t r11_1 = arg3[0xb]
        
        if (r11_1 == 0)
            result.b = 1
        else
            int32_t r9 = arg3[0xd]
            
            if (not(test_bit(r9, 0x10)) || ((data_1439c7a08 - 1) & 0xfffffffd) == 0)
                int32_t r12_1 = 0
                int64_t var_a0
                __builtin_memset(&var_a0, 0, 0x18)
                bool cond:0_1 = data_143f0f1c7 == 0
                int64_t var_a8 = 1
                int64_t var_88_1 = 1
                int16_t var_80_1 = 1
                wchar16 const* const var_68_1 = u"UnknownTexture"
                int64_t var_7c_1 = 0
                int32_t var_74_1 = 0
                int16_t var_70_1 = 0
                int16_t var_60_1 = 1
                char var_5e_1 = 0
                uint64_t rax_2
                
                if (cond:0_1)
                    rax_2.b = 0
                else
                    arg2 = zx.q(*(data_143f10ac8 + 4))
                    
                    if (arg2.d s<= 0 || (r9 & 0x10005) == 0)
                        rax_2.b = 0
                    else
                        int32_t rcx = arg3[0xc]
                        
                        if (rcx s< 0)
                            rax_2.b = 0
                        else if (arg2.d != 1)
                            bool cond:1_1
                            
                            if (arg2.d != 2)
                                cond:1_1 = arg2.d != 3
                            else
                                if (test_bit(rcx, 0x14))
                                    goto label_1419a0ee2
                                
                                cond:1_1 = arg7 != 1
                            
                            if (not(cond:1_1))
                                goto label_1419a0ee2
                            
                            rax_2.b = 0
                        else if (test_bit(rcx, 0x14))
                        label_1419a0ee2:
                            int64_t var_98
                            var_98.d = arg3[4]
                            var_98:4.d = arg3[5]
                            int64_t var_90
                            var_90.d = arg3[6]
                            var_90:4.d = arg3[7]
                            var_88_1.d = arg3[8]
                            var_88_1:4.b = arg3[9].b
                            var_88_1:5.b = *(arg3 + 0x25)
                            var_70_1.b = arg3[0xe].b
                            var_70_1:1.b = *(arg3 + 0x39)
                            int64_t var_68_2 = *(arg3 + 0x40)
                            var_60_1.b = arg3[0x12].b
                            var_60_1:1.b = *(arg3 + 0x49)
                            char var_5e_2 = *(arg3 + 0x4a)
                            rax_2.b = 1
                            var_a8.o = *arg3
                            var_88_1:6.w = rbx_1
                            int16_t var_80_2 = r10.w
                            var_7c_1.d = r11_1
                            int32_t var_74_2 = r9
                            var_7c_1:4.d = rcx | 0x80000000
                        else
                            rax_2.b = 0
                
                int64_t* i = *arg4
                int32_t* rdi_1 = &var_a8
                
                if (rax_2.b == 0)
                    rdi_1 = arg3
                
                if (i == 0)
                label_1419a0fdb:
                    void*** rsi_1 = nullptr
                    uint64_t r15_1 = zx.q(*(data_143f109b8 + 4))
                    
                    while (true)
                        int32_t r14_1 = *(r13 + 0x18)
                        int32_t rbx_2 = 0
                        
                        if (r14_1 != 0)
                            while (true)
                                rsi_1 = *(*(r13 + 0x10) + (sx.q(rbx_2) << 3))
                                
                                if (rsi_1 != 0)
                                    (*rsi_1)[2](rsi_1)
                                    
                                    if (rsi_1[0x1c].b == 0 && rsi_1[0x11].d == 1)
                                        int32_t* rax_29 = (*rsi_1)[2](rsi_1)
                                        int32_t r10_1 = rdi_1[0xc]
                                        
                                        if (rax_29[5] == rdi_1[5] && rax_29[6] == rdi_1[6]
                                                && rax_29[7] == rdi_1[7]
                                                && rax_29[9].b == rdi_1[9].b
                                                && *(rax_29 + 0x25) == *(rdi_1 + 0x25)
                                                && rax_29[8] == rdi_1[8]
                                                && *(rax_29 + 0x26) == *(rdi_1 + 0x26)
                                                && rax_29[0xa].w == rdi_1[0xa].w
                                                && rax_29[0xb] == rdi_1[0xb]
                                                && (rax_29[0xc] & 0xffefffff)
                                                == (r10_1 & 0xffefffff)
                                                && rax_29[0xd] == rdi_1[0xd]
                                                && rax_29[0xe].b == rdi_1[0xe].b
                                                && *(rax_29 + 0x39) == *(rdi_1 + 0x39))
                                            int32_t rax_40 = *rax_29
                                            
                                            if (rax_40 == *rdi_1)
                                                bool z_1
                                                
                                                if (rax_40 != 1)
                                                    if (rax_40 != 2)
                                                    label_1419a1148:
                                                        
                                                        if (rax_29[0x12].b == rdi_1[0x12].b)
                                                            int32_t rax_44
                                                            
                                                            if (r10_1 s< 0 && r15_1.d == 0)
                                                                rax_44 = (*rsi_1)[9](rsi_1)
                                                            
                                                            if (r10_1 s>= 0 || r15_1.d != 0
                                                                    || rax_44 == 0)
                                                                r15_1.b = 1
                                                                break
                                                    else if (not(rdi_1[1].d f!= rax_29[1]))
                                                        z_1 = rax_29[2] == rdi_1[2]
                                                    label_1419a1142:
                                                        
                                                        if (z_1)
                                                            goto label_1419a1148
                                                else if (not(rdi_1[1].d f!= rax_29[1])
                                                        && not(rdi_1[2].d f!= rax_29[2])
                                                        && not(rdi_1[3].d f!= rax_29[3]))
                                                    int128_t zmm0 = rdi_1[4]
                                                    float temp1_1 = rax_29[4]
                                                    zmm0.d f- temp1_1
                                                    z_1 = zmm0.d f== temp1_1
                                                    goto label_1419a1142
                                
                                rbx_2 += 1
                                
                                if (rbx_2 u>= r14_1)
                                    rsi_1 = nullptr
                                    goto label_1419a117d
                            
                            break
                        
                    label_1419a117d:
                        r12_1 += 1
                        
                        if (r12_1 u>= 1)
                            void*** rax_45 = j_sub_140a82f30(0xf8)
                            
                            if (rax_45 != 0)
                                void*** rax_46 = sub_141992710(rax_45, rdi_1, r13)
                                rsi_1 = rax_46
                                
                                if (rax_46 != 0 && rax_46[0x1c].b == 0)
                                    rax_46[0x11].d += 1
                            
                            int64_t r14_2 = sx.q(*(r13 + 0x18))
                            int32_t rax_47 = (r14_2 + 1).d
                            *(r13 + 0x18) = rax_47
                            
                            if (rax_47 s> *(r13 + 0x1c))
                                sub_1405a4d70(r13 + 0x10)
                            
                            char r12_2 = arg8
                            *(*(r13 + 0x10) + (r14_2 << 3)) = rsi_1
                            r15_1 = zx.q(rdi_1[0xd])
                            int32_t rax_50 = (1 << (data_1439c7a34).b) - 1
                            int128_t var_e8 = zx.o(0)
                            int32_t var_c4_1 = rax_50
                            int32_t var_c8_1 = rdi_1[4]
                            int64_t var_b8_1 = arg5
                            char var_c0_1 = 0
                            int32_t var_b0_1 = 0
                            int128_t var_d8_1 = *rdi_1
                            uint32_t var_160
                            char var_158
                            uint32_t var_150
                            uint32_t var_148
                            int128_t* var_140
                            int128_t* var_138
                            void* const var_120
                            
                            if (r12_2 == 0)
                                int32_t var_168
                                int32_t rax_54
                                
                                if ((r15_1.d & 0x10005) == 0)
                                    int32_t r9_16 = rdi_1[5]
                                    int64_t* rbx_3
                                    
                                    if (r9_16 == 0)
                                    label_1419a18ed:
                                        rax_54.b = 0
                                    label_1419a18ef:
                                        int64_t* rcx_61 = data_143f0f180
                                        rbx_3 = &rsi_1[2]
                                        
                                        if (rax_54.b == 0)
                                            char r8_10 = rdi_1[0xb].b
                                            uint32_t r11_5 = zx.d(*(rdi_1 + 0x26))
                                            uint32_t rdx_54 = rdi_1[0xc] | r15_1.d | 8
                                            
                                            if (rdi_1[9].b == 0)
                                                var_150.q = &var_e8
                                                var_158.d = rdx_54
                                                var_160 = r11_5
                                                var_168.b = r8_10
                                                (*(*rcx_61 + 0x5e8))(rcx_61, &var_120, 
                                                    &data_143f02b98)
                                            else
                                                var_148.q = &var_e8
                                                var_150 = rdx_54
                                                var_158.d = r11_5
                                                var_160.b = r8_10
                                                int32_t var_168_8 = rdi_1[8]
                                                (*(*rcx_61 + 0x5f0))(rcx_61, &var_120, 
                                                    &data_143f02b98)
                                            
                                            sub_1408c8cf0(&rsi_1[1], *sub_1408c8cf0(rbx_3, var_120))
                                            sub_1405d1550(&var_120)
                                        else
                                            var_140 = &var_e8
                                            var_148 = rdi_1[0xc]
                                            var_150 = zx.d(*(rdi_1 + 0x26))
                                            var_158 = rdi_1[0xb].b
                                            var_160 = rdi_1[7]
                                            int32_t var_168_7 = rdi_1[6]
                                            (*(*rcx_61 + 0x580))(rcx_61, &var_120, &data_143f02b98)
                                            sub_1408c8cf0(rbx_3, var_120)
                                            sub_14081c9d0(&var_120)
                                    else
                                        int32_t r11_4 = rdi_1[6]
                                        
                                        if (r11_4 == 0 || rdi_1[7] != 0 || *(rdi_1 + 0x25) != 0)
                                            if (r9_16 == 0 || rdi_1[6] == 0 || rdi_1[7] == 0
                                                    || *(rdi_1 + 0x25) != 0)
                                                goto label_1419a18ed
                                            
                                            rax_54.b = 1
                                            goto label_1419a18ef
                                        
                                        int64_t* rcx_58 = data_143f0f180
                                        var_140 = &var_e8
                                        var_148 = rdi_1[0xc]
                                        var_150 = zx.d(rdi_1[0xa].w)
                                        var_158.d = zx.d(*(rdi_1 + 0x26))
                                        var_160.b = rdi_1[0xb].b
                                        int32_t var_168_6 = r11_4
                                        (*(*rcx_58 + 0x560))(rcx_58, &var_120, &data_143f02b98)
                                        rbx_3 = &rsi_1[2]
                                        sub_1408c8cf0(rbx_3, var_120)
                                        sub_1405d1550(&var_120)
                                    
                                    int64_t* rcx_67 = data_143f0f180
                                    (*(*rcx_67 + 0x2e8))(rcx_67, *rbx_3, arg5)
                                else
                                    int32_t r13_1 = rdi_1[5]
                                    void* r14_3
                                    
                                    if (r13_1 == 0)
                                    label_1419a1714:
                                        rax_54.b = 0
                                    label_1419a1716:
                                        int64_t* rcx_51 = data_143f0f180
                                        
                                        if (rax_54.b == 0)
                                            r14_3 = &rsi_1[1]
                                            char r9_13 = rdi_1[0xb].b
                                            uint32_t r8_8 = zx.d(*(rdi_1 + 0x26))
                                            uint32_t rdx_41 = rdi_1[0xc] | r15_1.d | 8
                                            
                                            if (rdi_1[9].b == 0)
                                                var_150.q = &var_e8
                                                var_158.d = rdx_41
                                                var_160 = r8_8
                                                var_168.b = r9_13
                                                (*(*rcx_51 + 0x5e8))(rcx_51, &var_120, 
                                                    &data_143f02b98, zx.q(r13_1), var_168, var_160, 
                                                    var_158, var_150)
                                            else
                                                var_148.q = &var_e8
                                                var_150 = rdx_41
                                                var_158.d = r8_8
                                                var_160.b = r9_13
                                                (*(*rcx_51 + 0x5f0))(rcx_51, &var_120, 
                                                    &data_143f02b98, zx.q(r13_1), rdi_1[8], 
                                                    var_160, var_158, var_150, var_148)
                                            
                                            sub_1405d16e0(r14_3, 
                                                *sub_1405d1600(&rsi_1[2], &var_120))
                                            sub_1405d1550(&var_120)
                                        else
                                            var_140 = &var_e8
                                            var_148 = r15_1.d | rdi_1[0xc]
                                            var_150 = zx.d(*(rdi_1 + 0x26))
                                            var_158 = rdi_1[0xb].b
                                            var_160 = rdi_1[7]
                                            (*(*rcx_51 + 0x580))(rcx_51, &var_120, &data_143f02b98, 
                                                zx.q(r13_1), rdi_1[6], var_160, var_158, var_150, 
                                                var_148, var_140)
                                            sub_1408c8cf0(&rsi_1[2], var_120)
                                            sub_14081c9d0(&var_120)
                                            r14_3 = &rsi_1[1]
                                            sub_1408c8cf0(r14_3, rsi_1[2])
                                    else
                                        int32_t r9_3 = rdi_1[6]
                                        
                                        if (r9_3 == 0 || rdi_1[7] != 0 || *(rdi_1 + 0x25) != r12_2)
                                            if (r13_1 == 0 || rdi_1[6] == 0 || rdi_1[7] == 0
                                                    || *(rdi_1 + 0x25) != 0)
                                                goto label_1419a1714
                                            
                                            rax_54.b = 1
                                            goto label_1419a1716
                                        
                                        r14_3 = &rsi_1[1]
                                        char r11_2 = rdi_1[0xb].b
                                        uint32_t r10_2 = zx.d(*(rdi_1 + 0x26))
                                        char rax_55 = rdi_1[0xe].b
                                        int32_t r12_3 = rdi_1[0xc]
                                        uint32_t r8_6 = zx.d(rdi_1[0xa].w)
                                        int32_t var_168_2
                                        uint32_t var_118
                                        
                                        if (rdi_1[9].b != 0)
                                            uint32_t r11_3 = rdi_1[8]
                                            var_118 = r11_3
                                            
                                            if (r8_6 u> 1 && *(rdi_1 + 0x39) == 0)
                                                int64_t rax_65 = sx.q(data_143f0f1a0)
                                                
                                                if (rax_65.d == 0xb || rax_65.d == 0x1e)
                                                    goto label_1419a1685
                                                
                                                int64_t rdx_18 = rax_65 * 5
                                                
                                                if ((*(&data_143f025f0 + (rdx_18 << 2))
                                                        != data_143f025b8
                                                        || (*((rdx_18 << 2) + &data_143f025fc) & 1)
                                                        == 0) && rax_65.d != 0x18 && (
                                                        (*((rdx_18 << 2) + &data_143f025fc) u>> 4).b
                                                        & 1) == 0)
                                                    goto label_1419a14d2
                                                
                                                goto label_1419a1685
                                            
                                            void** rcx_37
                                            
                                            if (rax_55 != 0)
                                            label_1419a14d2:
                                                int64_t* rcx_32 = data_143f0f180
                                                var_140.d = r12_3 | r15_1.d
                                                (*(*rcx_32 + 0x578))(rcx_32, &var_120, 
                                                    &data_143f02b98, zx.q(r13_1), r9_3, r11_3, 
                                                    r11_2, r10_2, r8_6, var_140, &var_e8)
                                                sub_1405d1600(r14_3, &var_120)
                                                sub_1405d1550(&var_120)
                                                int64_t* rcx_35 = data_143f0f180
                                                var_138 = &var_e8
                                                var_140.d = (r15_1.d & 4) << 0x18 | r12_3 | 0xa
                                                var_148 = 1
                                                var_150 = r10_2
                                                var_158 = r11_2
                                                var_160 = var_118
                                                var_168_2 = r9_3
                                                (*(*rcx_35 + 0x578))(rcx_35, &var_120, 
                                                    &data_143f02b98, zx.q(r13_1), var_168_2, 
                                                    var_160, var_158, var_150, var_148, var_140, 
                                                    var_138)
                                                sub_1405d1600(&rsi_1[2], &var_120)
                                                rcx_37 = &var_120
                                            else
                                            label_1419a1685:
                                                int64_t* rcx_48 = data_143f0f180
                                                var_138 = &var_e8
                                                var_140.d = r12_3 | r15_1.d | 8
                                                var_148 = r8_6
                                                var_150 = r10_2
                                                var_158 = r11_2
                                                var_160 = r11_3
                                                var_168_2 = r9_3
                                                (*(*rcx_48 + 0x578))(rcx_48, &var_118, 
                                                    &data_143f02b98, zx.q(r13_1), var_168_2, 
                                                    var_160, var_158, var_150, var_148, var_140, 
                                                    var_138)
                                                sub_1405d16e0(r14_3, 
                                                    *sub_1405d1600(&rsi_1[2], &var_118))
                                                rcx_37 = &var_118
                                            
                                            sub_1405d1550(rcx_37)
                                        else
                                            if (r8_6 u> 1 && *(rdi_1 + 0x39) == 0)
                                                int64_t rax_56 = sx.q(data_143f0f1a0)
                                                
                                                if (rax_56.d == 0xb || rax_56.d == 0x1e)
                                                    goto label_1419a13f8
                                                
                                                int64_t rdx_7 = rax_56 * 5
                                                
                                                if ((*(&data_143f025f0 + (rdx_7 << 2))
                                                        != data_143f025b8
                                                        || (*((rdx_7 << 2) + &data_143f025fc) & 1)
                                                        == 0) && rax_56.d != 0x18 && (
                                                        (*((rdx_7 << 2) + &data_143f025fc) u>> 4).b
                                                        & 1) == 0)
                                                    goto label_1419a130d
                                                
                                                goto label_1419a13f8
                                            
                                            if (rax_55 != 0)
                                            label_1419a130d:
                                                int64_t* rcx_21 = data_143f0f180
                                                var_158.d = r10_2
                                                var_160.b = r11_2
                                                (*(*rcx_21 + 0x560))(rcx_21, &var_118, 
                                                    &data_143f02b98, zx.q(r13_1), r9_3, var_160, 
                                                    var_158, r8_6, r12_3 | r15_1.d, &var_e8)
                                                sub_1405d1600(r14_3, &var_118)
                                                sub_1405d1550(&var_118)
                                                int64_t* rcx_24 = data_143f0f180
                                                var_140 = &var_e8
                                                var_148 = (r15_1.d & 4) << 0x18 | r12_3 | 0xa
                                                var_150 = 1
                                                var_158.d = r10_2
                                                var_160.b = r11_2
                                                var_168_2 = r9_3
                                                (*(*rcx_24 + 0x560))(rcx_24, &var_118, 
                                                    &data_143f02b98, zx.q(r13_1), var_168_2, 
                                                    var_160, var_158, var_150, var_148, var_140)
                                                sub_1405d1600(&rsi_1[2], &var_118)
                                                sub_1405d1550(&var_118)
                                            else
                                            label_1419a13f8:
                                                int64_t* rcx_27 = data_143f0f180
                                                var_140 = &var_e8
                                                var_148 = r12_3 | r15_1.d | 8
                                                var_150 = r8_6
                                                var_158.d = r10_2
                                                var_160.b = r11_2
                                                var_168_2 = r9_3
                                                (*(*rcx_27 + 0x560))(rcx_27, &var_118, 
                                                    &data_143f02b98, zx.q(r13_1), var_168_2, 
                                                    var_160, var_158, var_150, var_148, var_140)
                                                sub_1405d16e0(r14_3, 
                                                    *sub_1405d1600(&rsi_1[2], &var_118))
                                                sub_1405d1550(&var_118)
                                        int64_t rax_73 = sx.q(data_143f0f1a0)
                                        
                                        if ((((rax_73 - 2).d & 0xfffffffd) == 0 || (
                                                (*(rax_73 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
                                                && *(rdi_1 + 0x49) != 0)
                                            int64_t* rcx_41 = data_143f0f180
                                            (*(*rcx_41 + 0x5d8))(rcx_41, &var_120, &data_143f02b98, 
                                                *r14_3, var_168_2, var_160, var_158, var_150, 
                                                var_148, var_140, var_138)
                                            sub_1405d1600(&rsi_1[0xc], &var_120)
                                            sub_1405ec8a0(&var_120)
                                        
                                        if (*(rdi_1 + 0x4a) != 0)
                                            int64_t* rcx_44 = data_143f0f180
                                            (*(*rcx_44 + 0x5e0))(rcx_44, &var_120, &data_143f02b98, 
                                                *r14_3, var_168_2, var_160, var_158, var_150, 
                                                var_148, var_140, var_138)
                                            sub_1405d1600(&rsi_1[0xd], &var_120)
                                            sub_1405ec8a0(&var_120)
                                        
                                        r12_2 = arg8
                                    
                                    int64_t* rcx_47 = data_143f0f180
                                    (*(*rcx_47 + 0x2e8))(rcx_47, *r14_3, arg5)
                                    r13 = arg1
                            
                            if (r12_2 == 0)
                                if ((rdi_1[0xd] & 0x10000) != 0)
                                    uint32_t rax_99 = zx.d(*(rdi_1 + 0x26))
                                    int64_t* rbx_4 = &rsi_1[4]
                                    
                                    if (rax_99 s> *(rbx_4 + 0x14))
                                        sub_140809a30(rbx_4, rax_99)
                                        rax_99 = zx.d(*(rdi_1 + 0x26))
                                    
                                    int32_t r14_4 = 0
                                    
                                    if (0 u< rax_99.w)
                                        uint32_t rax_104
                                        
                                        do
                                            int64_t* rcx_69 = data_143f0f180
                                            (*(*rcx_69 + 0x5a0))(rcx_69, &var_120, &data_143f02b98, 
                                                rsi_1[1], r14_4, var_160, var_158, var_150, 
                                                var_148, var_140, var_138)
                                            r15_1 = sx.q(rbx_4[2].d)
                                            int32_t rax_101 = (r15_1 + 1).d
                                            rbx_4[2].d = rax_101
                                            
                                            if (rax_101 s> *(rbx_4 + 0x14))
                                                sub_140809610(rbx_4, r15_1.d)
                                            
                                            int64_t* rax_102 = rbx_4[1]
                                            int64_t* rdx_63 = rbx_4
                                            
                                            if (rax_102 != 0)
                                                rdx_63 = rax_102
                                            
                                            r14_4 += 1
                                            rdx_63[r15_1] = var_120
                                            rax_104 = zx.d(*(rdi_1 + 0x26))
                                            var_120 = nullptr
                                        while (r14_4 u< rax_104)
                                    
                                    int64_t* rax_105 = rbx_4[1]
                                    
                                    if (rax_105 != 0)
                                        rbx_4 = rax_105
                                    
                                    sub_1405d16e0(&rsi_1[3], *rbx_4)
                                
                                uint32_t rax_109 = ((*rsi_1)[4](rsi_1) + 0x3ff) u>> 0xa
                                *(r13 + 0x50) += rax_109
                            
                            r15_1.b = 0
                            break
                    
                    int32_t rdi_2 = rsi_1[0x11].d
                    rsi_1[0x1a] = arg5
                    *(rsi_1 + 0x8c) = 0
                    int64_t* rbx_5 = *arg4
                    *arg4 = rsi_1
                    (*rsi_1)[6](rsi_1)
                    
                    if (rbx_5 != 0)
                        (*(*rbx_5 + 0x38))(rbx_5)
                    
                    if (rdi_2 == 1)
                        void* rbx_6 = rsi_1[1]
                        
                        if (rbx_6 != 0 && *(rbx_6 + 0x11) == 0)
                            if (data_143f0f1c7 != 0)
                                int64_t* rcx_75 = data_143f0f180
                                (*(*rcx_75 + 0x620))(rcx_75, rbx_6)
                            
                            *(rbx_6 + 0x11) = 1
                    
                    if (r15_1.b != 0 && arg6 != 0)
                        int64_t rax_114 = rsi_1[1]
                        int64_t* rbx_9 = (*(var_f0 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rcx_76 = &rbx_9[1]
                        
                        if (rcx_76 u> *(var_f0 + 0x38))
                            sub_140b0e3d0(var_f0 + 0x30, 0x10)
                            rbx_9 = (*(var_f0 + 0x30) + 7) & 0xfffffffffffffff8
                            rcx_76 = &rbx_9[1]
                        
                        *(var_f0 + 0x30) = rcx_76
                        *rbx_9 = rax_114
                        void*** rcx_80 = (*(var_f0 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_115 = &rcx_80[5]
                        
                        if (rax_115 u> *(var_f0 + 0x38))
                            sub_140b0e3d0(var_f0 + 0x30, 0x30)
                            rcx_80 = (*(var_f0 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_115 = &rcx_80[5]
                        
                        *(var_f0 + 0x30) = rax_115
                        void**** rax_116 = *(var_f0 + 8)
                        *(var_f0 + 0x14) += 1
                        *rax_116 = rcx_80
                        *(var_f0 + 8) = &rcx_80[1]
                        rcx_80[1] = 0
                        *rcx_80 = &data_142d549c8
                        rcx_80[2].d = 1
                        rcx_80[3] = rbx_9
                        rcx_80[4].d = 1
                    
                    int64_t rdx_66 = rsi_1[1]
                    
                    if (rdx_66 != 0)
                        int64_t* rcx_84 = data_143f0f180
                        (*(*rcx_84 + 0x2e8))(rcx_84, rdx_66, arg5)
                    
                    result.b = 0
                else
                    uint32_t* rax_4
                    int64_t r8
                    rax_4, r8 = (*(*i + 0x10))(i, arg2)
                    r8.b = 1
                    
                    if (sub_141999730(rax_4, rdi_1).b == 0)
                        int64_t* rcx_7 = *arg4
                        *arg4 = 0
                        
                        if (rcx_7 != 0)
                            (*(*rcx_7 + 0x38))(rcx_7)
                        
                        if (i[0x1c].b == 0 && i[0x11].d == 1)
                            int32_t rax_20 = (*(*i + 0x20))(i)
                            int32_t rdx_2 = *(r13 + 0x18)
                            int32_t rcx_9 = 0
                            *(r13 + 0x50) -= (rax_20 + 0x3ff) u>> 0xa
                            
                            if (rdx_2 == 0)
                            label_1419a0fb6:
                                rcx_9 = -1
                            else
                                while (*(*(r13 + 0x10) + (sx.q(rcx_9) << 3)) != i)
                                    rcx_9 += 1
                                    
                                    if (rcx_9 u>= rdx_2)
                                        goto label_1419a0fb6
                            
                            int64_t rax_24 = *(r13 + 0x10)
                            int64_t rdx_3 = sx.q(rcx_9)
                            int64_t* rcx_10 = *(rax_24 + (rdx_3 << 3))
                            *(rax_24 + (rdx_3 << 3)) = 0
                            
                            if (rcx_10 != 0)
                                sub_1419aa220(rcx_10)
                        
                        goto label_1419a0fdb
                    
                    int64_t rdx_1 = i[1]
                    i[0x1a] = arg5
                    
                    if (rdx_1 != 0)
                        int64_t* rcx_3 = data_143f0f180
                        (*(*rcx_3 + 0x2e8))(rcx_3, rdx_1, arg5)
                    
                    result.b = 1
            else
                result.b = 1
else
    result.b = 1

__security_check_cookie(var_58 ^ &var_188)
return result
