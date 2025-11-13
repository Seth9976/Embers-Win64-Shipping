// 函数: sub_141fce700
// 地址: 0x141fce700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rax_2 = *(arg1 + 0x50)
void* r15 = arg1
void* var_180 = arg1
int64_t* rcx = *(rax_2 + 0x58)
char result = (*(*rcx + 0x368))(rcx)

if (result == 0)
    void** rdx_1 = *(r15 + 0x30)
    int32_t r9_1 = 0
    void* var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    int32_t var_1b8 = 0
    void** const var_178
    int64_t var_170
    int128_t var_168
    int32_t var_60
    
    if (rdx_1 != 0)
        void* rcx_1 = *(r15 + 0x50)
        var_170 = *(rcx_1 + 0x58)
        int16_t var_a8_1 = 0xffff
        int64_t* var_d8_1 = &var_178
        int64_t* var_c0_1 = &var_88
        int32_t* var_b8_1 = &var_1b8
        int64_t var_c8_1 = *(r15 + 0x48)
        var_178 = &data_14328ac98
        int64_t var_d0_1 = 0
        __builtin_memset(&var_168, 0, 0x21)
        int64_t var_140_1 = 0
        int64_t* var_138_1 = nullptr
        int128_t var_118
        __builtin_memset(&var_118, 0, 0x40)
        int64_t var_b0_1 = 0
        int64_t var_a0_1 = 0
        int64_t var_98_1 = 0
        var_d0_1:7.b = (*(rcx_1 + 0xa4) u>> 1).b & 1
        sub_1422c5480(*(r15 + 0x20), *rdx_1, &var_118, &var_88, &var_1b8)
        
        if (var_a0_1 != 0)
            sub_140a74f90(var_a0_1)
        
        if (var_138_1 != 0)
            var_138_1[1].d -= 1
            
            if (var_138_1[1].d == 1)
                (**var_138_1)(var_138_1)
                int32_t temp4_1 = *(var_138_1 + 0xc)
                *(var_138_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_138_1 + 8))(var_138_1, 1)
        
        int128_t var_158
        int64_t* rbx_2 = var_158:8.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        r9_1 = var_60
    
    void* r13_1 = *(r15 + 0x78)
    void* rax_14 = sx.q(*(r15 + 0x80)) * 0x70 + r13_1
    int128_t var_1b0
    int32_t var_188
    int128_t zmm0
    int128_t zmm1
    
    if (r13_1 != rax_14)
        void* rbx_3 = r13_1 + 0x40
        
        do
            int32_t r10_1 = *(rbx_3 + 8)
            void* r9_3 = rbx_3 - 0x10
            void* var_1d0_1 = r9_3
            int32_t rcx_8 = 0
            int32_t var_1d8_1 = 0
            int32_t r8_2 = 0
            int32_t var_1d4_1 = 1
            int32_t var_1c8_1 = 0xffffffff
            int64_t var_1c4_1 = 0
            
            if (r10_1 != 0)
                void* rax_15 = *rbx_3
                
                if (rax_15 != 0)
                    r9_3 = rax_15
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(r10_1 - 1)
                int32_t rdx_5 = *r9_3
                
                if (rdx_5 != 0)
                label_141fce9ad:
                    int32_t rax_22 = neg.d(rdx_5) & rdx_5
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
                    int32_t var_1d4_2 = rax_22
                    int32_t rax_23
                    
                    if (rax_22 == 0)
                        rax_23 = 0x20
                    else
                        rax_23 = 0x1f - temp0_2
                    
                    var_1c4_1.d = r8_2 - rax_23 + 0x1f
                    
                    if (r8_2 - rax_23 + 0x1f s> r10_1)
                        var_1c4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_6 = sx.q(rcx_8)
                        r8_2 += 0x20
                        rcx_8 += 1
                        var_1c4_1:4.d = r8_2
                        var_1d8_1 = rcx_8
                        
                        if (rdx_6.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_5 = *(r9_3 + (rdx_6 << 2) + 4)
                        int32_t var_1c8_2 = 0xffffffff
                        
                        if (rdx_5 != 0)
                            goto label_141fce9ad
                    
                    var_1c4_1.d = r10_1
            
            int32_t rdi_1 = *(rbx_3 + 8)
            var_168 = 0xffffffff
            var_178 = rbx_3 - 0x20
            var_170.o = var_1d8_1.o
            zmm0 = var_178.o
            int32_t r12_1 = 0xffffffff << (r10_1.b & 0x1f)
            zmm1 = var_168
            int32_t r8_5 = r10_1 s>> 5
            int32_t r9_5 = r10_1 & 0xffffffe0
            int64_t var_190_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_1c8_3 = r12_1
            var_1c4_1.d = r10_1
            var_1b0 = zmm0
            int128_t var_1a0_1 = zmm1
            
            if (r10_1 != rdi_1)
                void* rax_25 = *rbx_3
                void* r10_2 = rbx_3 - 0x10
                
                if (rax_25 != 0)
                    r10_2 = rax_25
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(rdi_1 - 1)
                int32_t rdx_10 = *(r10_2 + (sx.q(r8_5) << 2)) & r12_1
                
                if (rdx_10 != 0)
                label_141fcea93:
                    int32_t rax_32 = neg.d(rdx_10) & rdx_10
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_32)
                    int32_t rax_33
                    
                    if (rax_32 == 0)
                        rax_33 = 0x20
                    else
                        rax_33 = 0x1f - temp0_4
                    
                    var_1c4_1.d = r9_5 - rax_33 + 0x1f
                    
                    if (r9_5 - rax_33 + 0x1f s> rdi_1)
                        var_1c4_1.d = rdi_1
                else
                    while (true)
                        int64_t rcx_13 = sx.q(r8_5)
                        r9_5 += 0x20
                        r8_5 += 1
                        
                        if (rcx_13.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_10 = *(r10_2 + (rcx_13 << 2) + 4)
                        var_1c8_3 = 0xffffffff
                        
                        if (rdx_10 != 0)
                            goto label_141fcea93
                    
                    var_1c4_1.d = rdi_1
            
            while (true)
                int64_t rax_35 = sx.q(var_1a0_1:0xc.d)
                int64_t* rdx_11 = var_1b0.q
                
                if (rax_35.d == (var_1c8_3.q u>> 0x20).d && var_1a0_1.q == rbx_3 - 0x10
                        && rdx_11 == rbx_3 - 0x20)
                    break
                
                sub_141f77ab0(&var_88, &var_188, *rdx_11 + rax_35 * 0xc, nullptr)
                int32_t rcx_18 = var_1b8 + ((((*(rbx_3 + 0xc) + 0x1f) u>> 5) + *(rbx_3 - 0x14) * 3
                    + *(rbx_3 + 0x28)) << 2)
                int32_t rax_39 = var_1b0:0xc.d
                var_1b8 = rcx_18
                var_1a0_1:8.d &= not.d(rax_39)
                var_1b8 = rcx_18 + *(rbx_3 - 0x30)
                sub_14059bdd0(&var_1b0:8)
            
            r13_1 += 0x70
            rbx_3 += 0x70
        while (r13_1 != rax_14)
        
        r9_1 = var_60
        r15 = var_180
    
    int32_t var_1d4_3 = 1
    int32_t rcx_21 = 0
    int32_t var_1d8_2 = 0
    int64_t var_78
    int64_t* var_1d0_2 = &var_78
    int32_t r8_7 = 0
    int32_t var_1c8_4 = 0xffffffff
    int64_t var_1c4_2 = 0
    int64_t* var_68
    
    if (r9_1 != 0)
        int64_t* r10_3 = &var_78
        
        if (var_68 != 0)
            r10_3 = var_68
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r9_1 - 1)
        int32_t rdx_20 = *r10_3
        
        if (rdx_20 != 0)
        label_141fcebeb:
            int32_t rax_48 = neg.d(rdx_20) & rdx_20
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_48)
            int32_t var_1d4_4 = rax_48
            int32_t rax_49
            
            if (rax_48 == 0)
                rax_49 = 0x20
            else
                rax_49 = 0x1f - temp0_5
            
            int32_t rax_50 = r8_7 - rax_49 + 0x1f
            
            if (rax_50 s> r9_1)
                rax_50 = r9_1
            
            var_1c4_2.d = rax_50
        else
            while (true)
                int64_t rdx_21 = sx.q(rcx_21)
                r8_7 += 0x20
                rcx_21 += 1
                var_1c4_2:4.d = r8_7
                var_1d8_2 = rcx_21
                
                if (rdx_21.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    var_1c4_2.d = r9_1
                    break
                
                rdx_20 = *(r10_3 + (rdx_21 << 2) + 4)
                int32_t var_1c8_5 = 0xffffffff
                
                if (rdx_20 != 0)
                    goto label_141fcebeb
    
    var_178 = &var_88
    var_168 = 0xffffffff
    var_1c4_2.d = r9_1
    var_170.o = var_1d8_2.o
    zmm0 = var_178.o
    zmm1 = var_168
    int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_1b0 = zmm0
    int128_t var_1a0_2 = zmm1
    int64_t var_190_2 = temp0_6
    
    while (true)
        int64_t rax_51 = sx.q(var_1a0_2:0xc.d)
        int64_t* rdx_23 = var_1b0.q
        
        if (rax_51.d == ((0xffffffff << (r9_1.b & 0x1f)).q u>> 0x20).d && var_1a0_2.q == &var_78
                && rdx_23 == &var_88)
            break
        
        int32_t* r10_4 = *rdx_23 + rax_51 * 0xc
        
        if (*(r15 + 0x90) == *(r15 + 0xbc))
        label_141fced0e:
            void* rax_55 = *(r15 + 0x50)
            int32_t rdx_26 = *r10_4
            var_180 = r15
            sub_140812a70(sub_141fa24d0(*(rax_55 + 0x58) + 0x4c0, rdx_26, r10_4), &var_188, 
                &var_180, nullptr)
        else
            void* rdx_24 = *(r15 + 0xc8)
            void* r8_9 = r15 + 0xc0
            int64_t r9_7 = sx.q(*r10_4)
            
            if (rdx_24 != 0)
                r8_9 = rdx_24
            
            int32_t rax_54 = *(r8_9 + (((sx.q(*(r15 + 0xd0)) - 1) & r9_7) << 2))
            
            if (rax_54 == 0xffffffff)
                goto label_141fced0e
            
            void* r8_10 = *(r15 + 0x88)
            
            while (true)
                int64_t rdx_25 = sx.q(rax_54) * 3
                
                if (*(r8_10 + (rdx_25 << 2)) == r9_7.d)
                    break
                
                rax_54 = *(r8_10 + (rdx_25 << 2) + 4)
                
                if (rax_54 == 0xffffffff)
                    goto label_141fced0e
            
            if (rax_54 == 0xffffffff)
                goto label_141fced0e
        
        var_1a0_2:8.d &= not.d(var_1b0:0xc.d)
        sub_14059bdd0(&var_1b0:8)
    
    int32_t r11_1 = *(r15 + 0xb0)
    int32_t var_1d4_5 = 1
    int32_t rcx_34 = 0
    int32_t var_1d8_3 = 0
    int32_t r8_13 = 0
    void* var_1d0_3 = r15 + 0x98
    int32_t var_1c8_7 = 0xffffffff
    int64_t var_1c4_3 = 0
    
    if (r11_1 != 0)
        void* rax_59 = *(r15 + 0xa8)
        void* r9_8 = r15 + 0x98
        
        if (rax_59 != 0)
            r9_8 = rax_59
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r11_1 - 1)
        int32_t rdx_30 = *r9_8
        
        if (rdx_30 != 0)
        label_141fceddb:
            int32_t rax_66 = neg.d(rdx_30) & rdx_30
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_66)
            int32_t var_1d4_6 = rax_66
            int32_t rax_67
            
            if (rax_66 == 0)
                rax_67 = 0x20
            else
                rax_67 = 0x1f - temp0_7
            
            var_1c4_3.d = r8_13 - rax_67 + 0x1f
            
            if (r8_13 - rax_67 + 0x1f s> r11_1)
                var_1c4_3.d = r11_1
        else
            while (true)
                int64_t rdx_31 = sx.q(rcx_34)
                r8_13 += 0x20
                rcx_34 += 1
                var_1c4_3:4.d = r8_13
                var_1d8_3 = rcx_34
                
                if (rdx_31.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_30 = *(r9_8 + (rdx_31 << 2) + 4)
                int32_t var_1c8_8 = 0xffffffff
                
                if (rdx_30 != 0)
                    goto label_141fceddb
            
            var_1c4_3.d = r11_1
    
    int32_t rdx_32 = *(r15 + 0xb0)
    var_178 = r15 + 0x88
    var_168 = 0xffffffff
    int32_t rsi_2 = 0xffffffff << (rdx_32.b & 0x1f)
    var_170.o = var_1d8_3.o
    int32_t r8_16 = rdx_32 s>> 5
    int32_t r9_10 = rdx_32 & 0xffffffe0
    int64_t var_190_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_1c8_9 = rsi_2
    var_1c4_3.d = rdx_32
    zmm1 = var_168
    var_1b0 = var_178.o
    int128_t var_1a0_3 = zmm1
    
    if (rdx_32 != r11_1)
        void* rax_69 = *(r15 + 0xa8)
        void* r10_5 = r15 + 0x98
        
        if (rax_69 != 0)
            r10_5 = rax_69
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(r11_1 - 1)
        int32_t rdx_36 = *(r10_5 + (sx.q(r8_16) << 2)) & rsi_2
        
        if (rdx_36 != 0)
        label_141fceeb3:
            int32_t rax_76 = neg.d(rdx_36) & rdx_36
            uint64_t rflags_5
            int32_t temp0_9
            temp0_9, rflags_5 = _bit_scan_reverse(rax_76)
            int32_t r14_2
            
            if (rax_76 == 0)
                r14_2 = 0x20
            else
                r14_2 = 0x1f - temp0_9
            
            var_1c4_3.d = r9_10 - r14_2 + 0x1f
            
            if (r9_10 - r14_2 + 0x1f s> r11_1)
                var_1c4_3.d = r11_1
        else
            while (true)
                int64_t rcx_39 = sx.q(r8_16)
                r9_10 += 0x20
                r8_16 += 1
                
                if (rcx_39.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_36 = *(r10_5 + (rcx_39 << 2) + 4)
                var_1c8_9 = 0xffffffff
                
                if (rdx_36 != 0)
                    goto label_141fceeb3
            
            var_1c4_3.d = r11_1
    
    int64_t var_80
    void var_50
    
    while (true)
        int64_t rax_78 = sx.q(var_1a0_3:0xc.d)
        int64_t* rdx_37 = var_1b0.q
        
        if (rax_78.d == (var_1c8_9.q u>> 0x20).d && var_1a0_3.q == r15 + 0x98
                && rdx_37 == r15 + 0x88)
            break
        
        int32_t* rdi_6 = *rdx_37 + rax_78 * 0xc
        
        if (var_80.d == var_54_1)
        label_141fcef86:
            void* r9_13 = *(*(r15 + 0x50) + 0x58)
            int32_t* rdx_44
            
            if (*(r9_13 + 0x4c8) == *(r9_13 + 0x4f4))
            label_141fceff2:
                rdx_44 = nullptr
            else
                void* r8_18 = r9_13 + 0x4f8
                void* rdx_41 = *(r8_18 + 8)
                int64_t r10_6 = sx.q(*rdi_6)
                
                if (rdx_41 != 0)
                    r8_18 = rdx_41
                
                int32_t rax_87 = *(r8_18 + (((sx.q(*(r9_13 + 0x508)) - 1) & r10_6) << 2))
                
                if (rax_87 == 0xffffffff)
                label_141fceff2_1:
                    rdx_44 = nullptr
                else
                    while (true)
                        rdx_44 = sx.q(rax_87) * 0x60 + *(r9_13 + 0x4c0)
                        
                        if (*rdx_44 == r10_6.d)
                            break
                        
                        rax_87 = rdx_44[0x16]
                        
                        if (rax_87 == 0xffffffff)
                            goto label_141fceff2_2
                    
                    if (rax_87 == 0xffffffff)
                    label_141fceff2_2:
                        rdx_44 = nullptr
            
            if (rdx_44[4] != rdx_44[0xf])
                void* rsi_3 = &rdx_44[0x10]
                int64_t r14_4 = sx.q(rdx_44[0x14]) - 1
                uint32_t r9_15 = (r15 u>> 4).d
                int32_t r8_21 = (0x9e3779b9 - r9_15) ^ r9_15 << 8
                int32_t rcx_50 = neg.d(r8_21 + r9_15) ^ r8_21 u>> 0xd
                int32_t r9_18 = (r9_15 - r8_21 - rcx_50) ^ rcx_50 u>> 0xc
                int32_t r8_24 = (r8_21 - r9_18 - rcx_50) ^ r9_18 << 0x10
                int32_t rcx_53 = (rcx_50 - r8_24 - r9_18) ^ r8_24 u>> 5
                int32_t r9_21 = (r9_18 - r8_24 - rcx_53) ^ rcx_53 u>> 3
                int32_t r8_27 = (r8_24 - r9_21 - rcx_53) ^ r9_21 << 0xa
                void* rax_103 = *(rdx_44 + 0x48)
                
                if (rax_103 != 0)
                    rsi_3 = rax_103
                
                int32_t i =
                    *(rsi_3 + (((sx.q(rcx_53 - r8_27 - r9_21) ^ zx.q(r8_27) u>> 0xf) & r14_4) << 2))
                
                if (i != 0xffffffff)
                    void* r10_7 = *(rdx_44 + 8)
                    
                    do
                        int64_t i_1 = sx.q(i)
                        int64_t rax_107 = i_1 * 2
                        
                        if (*(r10_7 + (rax_107 << 3)) == r15)
                            int64_t r9_22 = i_1 * 2
                            int64_t rax_109 = sx.q(*(r10_7 + (r9_22 << 3) + 0xc)) & r14_4
                            void* rcx_59 = rsi_3 + (rax_109 << 2)
                            
                            for (int32_t j = *(rsi_3 + (rax_109 << 2)); j != 0xffffffff; 
                                    j = *rcx_59)
                                if (j == i)
                                    *rcx_59 = *(r10_7 + (r9_22 << 3) + 8)
                                    break
                                
                                rcx_59 = r10_7 + 8 + (sx.q(j) << 4)
                            
                            void* r11_3 = &rdx_44[6]
                            int32_t r10_8 = rol.d(1, i.b)
                            
                            if (rdx_44[0xf] != 0)
                                *(*(rdx_44 + 8) + sx.q(rdx_44[0xe]) * 0x10) = i
                            
                            int64_t rcx_64 = *(rdx_44 + 8)
                            *(rcx_64 + (r9_22 << 3)) = 0xffffffff
                            int32_t rax_114
                            
                            if (rdx_44[0xf] s<= 0)
                                rax_114 = -1
                            else
                                rax_114 = rdx_44[0xe]
                            
                            *(rcx_64 + (r9_22 << 3) + 4) = rax_114
                            rdx_44[0xf] += 1
                            rdx_44[0xe] = i
                            void* rax_115 = *(r11_3 + 0x10)
                            
                            if (rax_115 != 0)
                                r11_3 = rax_115
                            
                            if (i s< 0)
                                i += 0x1f
                            
                            int64_t rax_116 = sx.q(i s>> 5)
                            *(r11_3 + (rax_116 << 2)) &= not.d(r10_8)
                            break
                        
                        i = *(r10_7 + (rax_107 << 3) + 8)
                    while (i != 0xffffffff)
            
            if (rdx_44[4] == rdx_44[0xf])
                sub_141fc3770(*(*(r15 + 0x50) + 0x58) + 0x4c0, rdi_6)
        else
            void* rcx_42 = &var_50
            int64_t r8_17 = sx.q(*rdi_6)
            
            if (var_48_1 != 0)
                rcx_42 = var_48_1
            
            int32_t rax_84 = *(rcx_42 + ((sx.q(var_40_1 - 1) & r8_17) << 2))
            
            if (rax_84 == 0xffffffff)
                goto label_141fcef86
            
            void* r9_12 = var_88
            
            while (true)
                int64_t rdx_40 = sx.q(rax_84) * 3
                
                if (*(r9_12 + (rdx_40 << 2)) == r8_17.d)
                    break
                
                rax_84 = *(r9_12 + (rdx_40 << 2) + 4)
                
                if (rax_84 == 0xffffffff)
                    goto label_141fcef86
            
            if (rax_84 == 0xffffffff)
                goto label_141fcef86
        
        var_1a0_3:8.d &= not.d(var_1b0:0xc.d)
        sub_14059bdd0(&var_1b0:8)
    
    void* rcx_68 = *(*(r15 + 0x50) + 0x58)
    *(rcx_68 + 0x510) -= *(r15 + 4)
    void* rax_123 = *(r15 + 0x50)
    int32_t rdx_46 = var_1b8
    *(r15 + 4) = rdx_46
    void* rcx_69 = *(rax_123 + 0x58)
    *(rcx_69 + 0x510) += rdx_46
    void* rcx_73
    
    if (r15 + 0x88 == &var_88)
        rcx_73 = var_48_1
    else
        sub_140780e10(r15 + 0x88, &var_88)
        void* rdi_7 = var_48_1
        
        if (rdi_7 == 0)
            memmove(r15 + 0xc0, &var_50, (rdi_7 + 4).d)
        
        int64_t rcx_72 = *(r15 + 0xc8)
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
            rdi_7 = var_48_1
        
        *(r15 + 0xc8) = rdi_7
        rcx_73 = nullptr
        int64_t var_48_2 = 0
        *(r15 + 0xd0) = var_40_1
    
    int32_t var_40_2 = 0
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)
    
    bool cond:7_1 = var_80:4.d == 0
    var_80.d = 0
    
    if (not(cond:7_1))
        sub_140638cc0(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    result = sub_14059a8e0(&var_78, 0)
    
    if (var_68 != 0)
        result = sub_140a74f90(var_68)
    
    void* rcx_77 = var_88
    
    if (rcx_77 != 0)
        result = sub_140a74f90(rcx_77)

__security_check_cookie(rax_1 ^ &var_208)
return result
