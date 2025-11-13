// 函数: sub_141878ed0
// 地址: 0x141878ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* rbx = arg3
int16_t* var_1a0 = arg1
int64_t* var_1a8 = rbx
sub_14185f320(arg2)
int64_t* rcx_1 = *rbx

if ((*(*rcx_1 + 0x160))(rcx_1) == 0xf)
    int64_t* rcx_2 = *rbx
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    void* var_188 = nullptr
    int32_t var_180_1 = 0
    int64_t var_178
    __builtin_memset(&var_178, 0, 0x1c)
    int32_t var_154_1 = 0
    void* var_148_1 = nullptr
    int32_t var_140_1 = 0
    int64_t* i_3 = nullptr
    int32_t i_5 = 0
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_15c_1 = 0x80
    int32_t var_158_1 = 0xffffffff
    (*(*rcx_2 + 0x1a0))(rcx_2, &i_3)
    bool* var_268
    int32_t var_258
    int32_t var_254
    int64_t* j_2
    
    for (int64_t* i = i_3; i != &i[sx.q(i_5) * 2]; i = &i[2])
        int64_t* rcx_3 = *rbx
        void* rax_6 = (*(*rcx_3 + 0x1c8))(rcx_3, i)
        
        if (rax_6 != 0)
            int64_t* j = *(rax_6 + 0x48)
            
            for (void* rsi_1 = &j[sx.q(*(rax_6 + 0x50)) * 3]; j != rsi_1; j = &j[3])
                int32_t rax_8 = sub_140a6b260(j, 0x10)
                sub_140caa690(&var_138, &var_258, rax_8, j)
                int64_t rax_9 = sx.q(var_258)
                void* rcx_8
                
                if (rax_9.d != 0xffffffff)
                    rcx_8 = var_138 + rax_9 * 0x28
                
                if (rax_9.d == 0xffffffff || rcx_8 == 0)
                    j_2 = j
                    var_268 = nullptr
                    sub_14185b560(&var_138, &var_254, rax_8, &j_2, var_268)
                    rcx_8 = var_138 + sx.q(var_254) * 0x28
                
                sub_1418286b0(rcx_8 + 0x10, zx.q(j[2].d), zx.q(*(j + 0x14)), 0)
            
            rbx = var_1a8
    
    int64_t var_128
    int32_t* var_228_1 = &var_128
    int32_t rcx_12 = 0
    int32_t var_230 = 0
    int32_t var_220_1 = 0xffffffff
    int32_t r8_3 = 0
    int32_t var_22c_1 = 1
    int64_t var_21c_1 = 0
    int32_t var_110
    
    if (var_110 != 0)
        int64_t* r9_3 = &var_128
        int64_t* var_118
        
        if (var_118 != 0)
            r9_3 = var_118
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_110 - 1)
        int32_t rdx_8 = *r9_3
        
        if (rdx_8 != 0)
        label_14187914a:
            int32_t rax_19 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
            int32_t var_22c_2 = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_2
            
            int32_t rax_21 = r8_3 - rax_20 + 0x1f
            
            if (rax_21 s> var_110)
                rax_21 = var_110
            
            var_21c_1.d = rax_21
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_12)
                r8_3 += 0x20
                rcx_12 += 1
                var_21c_1:4.d = r8_3
                var_230 = rcx_12
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_21c_1.d = var_110
                    break
                
                rdx_8 = *(r9_3 + (rdx_9 << 2) + 4)
                var_220_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_14187914a
    
    int512_t zmm2
    zmm2.o = var_220_1.o
    int64_t* var_1e0_1 = &var_138
    int32_t var_23c_1 = var_110
    int128_t var_1d8 = var_230.o
    int64_t var_1c8_1 = zmm2.q
    int512_t zmm1
    zmm1.o = var_1d8
    zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
    int128_t var_208 = var_1e0_1.o
    int128_t var_1f8_1 = zmm1.o
    int64_t var_1e8_1 = (zmm2.o).q
    char* var_260
    
    while (true)
        int64_t rcx_15 = sx.q(var_1f8_1:0xc.d)
        char rax_23
        
        if (rcx_15.d != ((0xffffffff << (var_110.b & 0x1f)).q u>> 0x20).d
                || var_1f8_1.q != &var_128)
            rax_23 = 0
        else
            rax_23 = 1
        
        int64_t* rdx_11 = var_208.q
        
        if (rax_23 == 0 || rdx_11 != &var_138)
            rax_23 = 1
        else
            rax_23 = 0
        
        if (rax_23 == 0)
            break
        
        int128_t* rsi_2 = *rdx_11 + rcx_15 * 0x28
        
        if (sub_14183e350(&rsi_2[1]) != 0 && sub_14183e350(&rsi_2[1]) == sub_1405948a0(&rsi_2[1])
                && sub_14183e350(sub_14183e350(&rsi_2[1])) == 0)
            var_258 = sub_1405948a0(sub_14183e350(&rsi_2[1]))
            sub_1406f3d50(arg2, &var_254, &var_258, nullptr)
            sub_141818040(&arg2[0xa], rsi_2, &var_258)
            int64_t r9_4 = sx.q(var_258)
            int64_t* rdi_2
            
            if (var_180_1 == var_154_1)
            label_1418792fe:
                rdi_2 = sub_14185a8f0(&var_188, r9_4.d, &var_258)
            else
                void var_150
                void* rcx_26 = &var_150
                
                if (var_148_1 != 0)
                    rcx_26 = var_148_1
                
                int32_t rax_35 = *(rcx_26 + ((sx.q(var_140_1 - 1) & r9_4) << 2))
                
                if (rax_35 == 0xffffffff)
                label_1418792fe_1:
                    rdi_2 = sub_14185a8f0(&var_188, r9_4.d, &var_258)
                else
                    void* r8_7 = var_188
                    int64_t rdx_18
                    
                    while (true)
                        rdx_18 = sx.q(rax_35) * 0x60
                        
                        if (*(r8_7 + rdx_18) == r9_4.d)
                            break
                        
                        rax_35 = *(r8_7 + rdx_18 + 0x58)
                        
                        if (rax_35 == 0xffffffff)
                            goto label_1418792fe_3
                    
                    if (rax_35 == 0xffffffff)
                    label_1418792fe_2:
                        rdi_2 = sub_14185a8f0(&var_188, r9_4.d, &var_258)
                    else
                        void* rax_40 = r8_7 + rdx_18
                        
                        if (rax_40 == 0)
                        label_1418792fe_3:
                            rdi_2 = sub_14185a8f0(&var_188, r9_4.d, &var_258)
                        else
                            rdi_2 = rax_40 + 8
            
            sub_140598750(rdi_2, &var_230)
            *var_228_1 = *rsi_2
            var_228_1[4] = 0xffffffff
            int32_t rax_37 = sub_140a6b260(var_228_1, 0x10)
            var_260 = nullptr
            var_268.d = var_230
            sub_14093ebb0(rdi_2, &j_2, rax_37, var_228_1, var_268.d, var_260)
        
        var_1f8_1:8.d &= not.d(var_208:0xc.d)
        sub_14059bdd0(&var_208:8)
    
    int32_t var_160
    int32_t r11_1 = var_160
    int32_t* var_228_2 = &var_178
    int32_t rcx_35 = 0
    var_230 = 0
    int32_t r8_10 = 0
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    int32_t var_bc_1 = 0x80
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    int32_t var_22c_3 = 1
    int32_t var_220_2 = 0xffffffff
    int64_t var_21c_2 = 0
    var_254 = r11_1
    
    if (r11_1 != 0)
        int64_t* r9_6 = &var_178
        int64_t* var_168
        
        if (var_168 != 0)
            r9_6 = var_168
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_24 = *r9_6
        
        if (rdx_24 != 0)
        label_14187945e:
            int32_t rax_48 = ((rdx_24 - 1) & rdx_24) ^ rdx_24
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_48)
            int32_t var_22c_4 = rax_48
            int32_t rax_49
            
            if (rax_48 == 0)
                rax_49 = 0x20
            else
                rax_49 = 0x1f - temp0_4
            
            int32_t rax_51 = r8_10 - rax_49 + 0x1f
            
            if (rax_51 s> r11_1)
                rax_51 = r11_1
            
            var_21c_2.d = rax_51
        else
            while (true)
                int64_t rdx_25 = sx.q(rcx_35)
                r8_10 += 0x20
                rcx_35 += 1
                var_21c_2:4.d = r8_10
                var_230 = rcx_35
                
                if (rdx_25.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    var_21c_2.d = r11_1
                    break
                
                rdx_24 = *(r9_6 + (rdx_25 << 2) + 4)
                var_220_2 = 0xffffffff
                
                if (rdx_24 != 0)
                    goto label_14187945e
    
    zmm2.o = var_220_2.o
    var_208.q = &var_188
    var_208 = var_230.o
    int128_t zmm0 = var_208
    zmm1.o = zmm2.o
    zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
    var_1e0_1.o = zmm0
    var_1d8 = zmm1.o
    var_1c8_1 = (zmm2.o).q
    void* var_98
    int128_t var_80
    
    while (true)
        int64_t rdx_26 = sx.q(var_1c8_1:4.d)
        char rax_50
        
        if (rdx_26.d != r11_1 || var_1d8:8.q != &var_178)
            rax_50 = 0
        else
            rax_50 = 1
        
        if (rax_50 == 0 || var_1e0_1 != &var_188)
            rax_50 = 1
        else
            rax_50 = 0
        
        if (rax_50 == 0)
            break
        
        int32_t* rbx_5 = rdx_26 * 0x60 + *var_1e0_1
        
        if (rbx_5[4] - rbx_5[0xf] s<= 1)
            int32_t r10_2 = arg2[1].d
            int64_t r9_7 = sx.q(*rbx_5)
            
            if (r10_2 != *(arg2 + 0x34))
                void* r11_2 = &arg2[7]
                void* rcx_38 = arg2[8]
                int64_t rdi_3 = sx.q(arg2[9].d - 1)
                
                if (rcx_38 != 0)
                    r11_2 = rcx_38
                
                int64_t rax_57 = r9_7 & rdi_3
                void* rdx_27 = r11_2 + (rax_57 << 2)
                int32_t i_1 = *(r11_2 + (rax_57 << 2))
                
                if (i_1 != 0xffffffff)
                    int64_t r8_12 = *arg2
                    
                    do
                        int64_t rcx_39 = sx.q(i_1) * 3
                        
                        if (*(r8_12 + (rcx_39 << 2)) == r9_7.d)
                            int64_t rdx_29 = sx.q(*rdx_27)
                            
                            if (r10_2 - *(arg2 + 0x34) != 0)
                                int64_t rcx_40 = rdx_29 * 3
                                int64_t rax_60 = sx.q(*(r8_12 + (rcx_40 << 2) + 8)) & rdi_3
                                void* rcx_41 = r11_2 + (rax_60 << 2)
                                int32_t j_1 = *(r11_2 + (rax_60 << 2))
                                
                                while (j_1 != 0xffffffff)
                                    if (j_1 == rdx_29.d)
                                        *rcx_41 = *(r8_12 + (rcx_40 << 2) + 4)
                                        break
                                    
                                    int64_t j_3 = sx.q(j_1)
                                    j_1 = *(r8_12 + ((j_3 * 3 + 1) << 2))
                                    rcx_41 = r8_12 + ((j_3 * 3 + 1) << 2)
                            
                            sub_14090a460(arg2, rdx_29.d, 1)
                            break
                        
                        i_1 = *(r8_12 + 4 + (rcx_39 << 2))
                        rdx_27 = r8_12 + 4 + (rcx_39 << 2)
                    while (i_1 != 0xffffffff)
            
            int32_t r10_4 = rbx_5[0xc]
            int32_t rcx_45 = 0
            int32_t var_24c_1 = 1
            int32_t r8_13 = 0
            int32_t var_250_1 = 0
            void* var_248_1 = &rbx_5[6]
            int32_t var_240_2 = 0xffffffff
            var_23c_1.q = 0
            
            if (r10_4 != 0)
                void* rax_62 = *(rbx_5 + 0x28)
                void* r9_9 = &rbx_5[6]
                
                if (rax_62 != 0)
                    r9_9 = rax_62
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r10_4 - 1)
                int32_t rdx_32 = *r9_9
                int32_t var_23c_3
                
                if (rdx_32 != 0)
                label_141879659:
                    int32_t rax_69 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
                    uint64_t rflags_3
                    int32_t temp0_6
                    temp0_6, rflags_3 = _bit_scan_reverse(rax_69)
                    int32_t var_24c_2 = rax_69
                    int32_t rax_70
                    
                    if (rax_69 == 0)
                        rax_70 = 0x20
                    else
                        rax_70 = 0x1f - temp0_6
                    
                    int32_t var_23c_2 = r8_13 - rax_70 + 0x1f
                    
                    if (r8_13 - rax_70 + 0x1f s> r10_4)
                        var_23c_3 = r10_4
                else
                    while (true)
                        int64_t rdx_33 = sx.q(rcx_45)
                        r8_13 += 0x20
                        rcx_45 += 1
                        int32_t var_238_1 = r8_13
                        var_250_1 = rcx_45
                        
                        if (rdx_33.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_32 = *(r9_9 + (rdx_33 << 2) + 4)
                        int32_t var_240_3 = 0xffffffff
                        
                        if (rdx_32 != 0)
                            goto label_141879659
                    
                    var_23c_3 = r10_4
            
            int32_t rdx_34 = rbx_5[0xc]
            zmm2.o = 0xffffffff
            var_98 = &rbx_5[2]
            var_23c_1 = rdx_34
            var_80 = 0xffffffff
            int128_t var_90_1 = var_250_1.o
            int32_t rdi_4 = 0xffffffff << (rdx_34 & 0x1f).b
            zmm0 = var_98.o
            int32_t r8_16 = rdx_34 s>> 5
            int32_t r9_11 = rdx_34 & 0xffffffe0
            zmm2.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int64_t var_1e8_2 = (zmm2.o).q
            int32_t var_240_4 = rdi_4
            zmm1.o = var_90_1
            var_208 = zmm0
            int128_t var_1f8_2 = zmm1.o
            
            if (rdx_34 != r10_4)
                void* rax_74 = *(rbx_5 + 0x28)
                void* r11_3 = &rbx_5[6]
                
                if (rax_74 != 0)
                    r11_3 = rax_74
                
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(r10_4 - 1)
                int32_t rdx_38 = *(r11_3 + (sx.q(r8_16) << 2)) & rdi_4
                
                if (rdx_38 != 0)
                label_141879744:
                    int32_t rax_80 = ((rdx_38 - 1) & rdx_38) ^ rdx_38
                    uint64_t rflags_4
                    int32_t temp0_8
                    temp0_8, rflags_4 = _bit_scan_reverse(rax_80)
                    int32_t rax_81
                    
                    if (rax_80 == 0)
                        rax_81 = 0x20
                    else
                        rax_81 = 0x1f - temp0_8
                    
                    var_23c_1 = r9_11 - rax_81 + 0x1f
                    
                    if (r9_11 - rax_81 + 0x1f s> r10_4)
                        var_23c_1 = r10_4
                else
                    while (true)
                        int64_t rcx_49 = sx.q(r8_16)
                        r9_11 += 0x20
                        r8_16 += 1
                        
                        if (rcx_49.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_38 = *(r11_3 + (rcx_49 << 2) + 4)
                        var_240_4 = 0xffffffff
                        
                        if (rdx_38 != 0)
                            goto label_141879744
                    
                    var_23c_1 = r10_4
            
            while (true)
                int64_t rcx_51 = sx.q(var_1f8_2:0xc.d)
                int32_t rax_73
                
                if (rcx_51.d != (var_240_4.q u>> 0x20).d || var_1f8_2.q != &rbx_5[6])
                    rax_73.b = 0
                else
                    rax_73.b = 1
                
                int64_t* rdx_39 = var_208.q
                
                if (rax_73.b == 0 || rdx_39 != &rbx_5[2])
                    rax_73.b = 1
                else
                    rax_73.b = 0
                
                if (rax_73.b == 0)
                    break
                
                int64_t* rbx_7 = *rdx_39 + rcx_51 * 0x18
                sub_141892bb0(&arg2[0xa], rbx_7)
                sub_140598750(&var_e8, &var_230)
                *var_228_2 = *rbx_7
                var_228_2[4] = 0xffffffff
                int32_t rax_82 = sub_140a6b260(var_228_2, 0x10)
                var_260 = nullptr
                var_268.d = var_230
                sub_14093ebb0(&var_e8, &j_2, rax_82, var_228_2, var_268.d, var_260)
                var_1f8_2:8.d &= not.d(var_208:0xc.d)
                sub_14059bdd0(&var_208:8)
        
        var_1c8_1.d &= not.d(var_1d8:4.d)
        sub_14059bdd0(&var_1d8)
        r11_1 = var_254
    
    int32_t rcx_60 = 0
    int32_t var_24c_3 = 1
    int32_t r8_18 = 0
    int32_t var_250_2 = 0
    int64_t var_d8
    int64_t* var_248_2 = &var_d8
    int32_t var_240_5 = 0xffffffff
    var_23c_1.q = 0
    int32_t var_c0
    
    if (var_c0 != 0)
        int64_t* r10_5 = &var_d8
        int64_t* var_c8
        
        if (var_c8 != 0)
            r10_5 = var_c8
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(var_c0 - 1)
        int32_t rdx_46 = *r10_5
        
        if (rdx_46 != 0)
        label_1418798d8:
            int32_t rax_94 = neg.d(rdx_46) & rdx_46
            uint64_t rflags_5
            int32_t temp0_9
            temp0_9, rflags_5 = _bit_scan_reverse(rax_94)
            int32_t var_24c_4 = rax_94
            int32_t rsi_5
            
            if (rax_94 == 0)
                rsi_5 = 0x20
            else
                rsi_5 = 0x1f - temp0_9
            
            int32_t rax_95 = r8_18 - rsi_5 + 0x1f
            
            if (rax_95 s> var_c0)
                rax_95 = var_c0
            
            int32_t var_23c_5 = rax_95
        else
            while (true)
                int64_t rdx_47 = sx.q(rcx_60)
                r8_18 += 0x20
                rcx_60 += 1
                int32_t var_238_2 = r8_18
                var_250_2 = rcx_60
                
                if (rdx_47.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    int32_t var_23c_4 = var_c0
                    break
                
                rdx_46 = *(r10_5 + (rdx_47 << 2) + 4)
                int32_t var_240_6 = 0xffffffff
                
                if (rdx_46 != 0)
                    goto label_1418798d8
    
    zmm2.o = 0xffffffff
    int16_t* r12_2 = var_1a0
    var_98 = &var_e8
    int32_t var_23c_6 = var_c0
    int128_t var_90_2 = var_250_2.o
    zmm0 = var_98.o
    var_80 = 0xffffffff
    zmm1.o = var_90_2
    zmm2.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_1e0_1.o = zmm0
    var_1d8 = zmm1.o
    var_1c8_1 = (zmm2.o).q
    
    while (true)
        int64_t rcx_63 = sx.q(var_1c8_1:4.d)
        char rax_97
        
        if (rcx_63.d != ((0xffffffff << (var_c0.b & 0x1f)).q u>> 0x20).d || var_1d8:8.q != &var_d8)
            rax_97 = 0
        else
            rax_97 = 1
        
        if (rax_97 == 0 || var_1e0_1 != &var_e8)
            rax_97 = 1
        else
            rax_97 = 0
        
        if (rax_97 == 0)
            break
        
        int32_t* rdi_6 = *var_1e0_1 + rcx_63 * 0x18
        zmm1 = sub_14183a8a0(&var_1a0, var_1a8, &r12_2[4], rdi_6, zmm1, zmm2)
        sub_140a464c0()
        int16_t* const rdx_50 = &data_142d40450
        int32_t var_198
        
        if (var_198 != 0)
            rdx_50 = var_1a0
        
        char const (* r9_16)[0x4] = data_14399ea08
        int64_t* rax_99 = (*(r9_16 + 0x18))(&data_14399ea08, rdx_50, 0, r9_16, var_268, var_260)
        
        if (rax_99 != 0)
            sub_141820510(&var_98)
            sub_141824b20(rax_99, &var_98, zmm1)
            sub_1406f3d50(arg2, &j_2, &var_80:4, nullptr)
            zmm1 = sub_141818040(&arg2[0xa], rdi_6, &var_80:4)
            (**rax_99)(rax_99, 1)
        
        int16_t* rcx_71 = var_1a0
        
        if (rcx_71 != 0)
            zmm1 = sub_140a74f90(rcx_71)
        
        var_1c8_1.d &= not.d(var_1d8:4.d)
        sub_14059bdd0(&var_1d8)
    
    int32_t var_a0_2 = 0
    
    if (var_a8_1 != 0)
        sub_140a74f90(var_a8_1)
    
    sub_14094b3a0(&var_e8)
    int32_t i_4 = i_5
    int64_t* i_6 = i_3
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rcx_75 = *i_6
            
            if (rcx_75 != 0)
                sub_140a74f90(rcx_75)
            
            i_6 = &i_6[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        i_6 = i_3
    
    if (i_6 != 0)
        sub_140a74f90(i_6)
    
    int32_t var_140_2 = 0
    
    if (var_148_1 != 0)
        sub_140a74f90(var_148_1)
    
    sub_141821e80(&var_188)
    int32_t var_f0_2 = 0
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
    
    sub_141866560(&var_138)

__security_check_cookie(rax_1 ^ &var_288)
return arg2
