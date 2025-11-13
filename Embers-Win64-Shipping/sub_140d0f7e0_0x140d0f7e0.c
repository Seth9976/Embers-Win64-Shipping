// 函数: sub_140d0f7e0
// 地址: 0x140d0f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rdi = *arg2
int64_t* r14 = nullptr
int128_t zmm0 = *(arg1 + 0x80)
int64_t* r15 = arg1[0xf]
int64_t* rsi = arg3
int64_t (* var_180)(int64_t* arg1, int64_t* arg2) = arg1
int64_t* r12 = *(rdi + 8)
int64_t* r13 = arg1
int64_t* var_140 = r12
int64_t* var_c0 = r15
int32_t i_9 = arg1[0x12].d

if ((not.b(*(r12 + 0x2a)) & 1) != 0)
    r14 = arg4

int128_t var_b0 = zmm0
void* result
int32_t i_6
int32_t i_7
int64_t var_198
int64_t* var_190
int32_t i_8

if ((r12[5].b & 1) == 0)
    int32_t i_16 = 0
    i_7 = i_9
    int32_t i_10 = i_9
    int32_t i_15 = i_9
    int32_t rax_60 = 0
    int64_t* var_110 = r15
    int64_t* var_108_1 = r14
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t i_18 = 0
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int128_t var_100_1 = zmm0
    int64_t var_90
    
    if (r14 != 0)
        int32_t r9_6 = r14[1].d
        int32_t i_12 = 0
        int32_t i = r9_6 - *(r14 + 0x34)
        bool cond:1_1 = r9_6 == *(r14 + 0x34)
        i_8 = i
        i_6 = 0
        
        if (not(cond:1_1))
            do
                int64_t r13_3 = sx.q(i_10 * i_16) + *r14
                
                if (i_16 s>= 0 && i_16 s< r14[5].d)
                    void* rax_63 = r14[4]
                    void* rdx_26 = &r14[2]
                    
                    if (rax_63 != 0)
                        rdx_26 = rax_63
                    
                    int32_t i_19 = i_16
                    
                    if (i_16 s< 0)
                        i_19 = i_16 + 0x1f
                    
                    if (test_bit(*(rdx_26 + (sx.q(i_19 s>> 5) << 2)), i_16 & 0x1f))
                        int32_t r12_2 = rsi[1].d
                        int32_t rdi_12
                        
                        if (r12_2 != 0)
                            rdi_12 = 0
                            bool cond:8_1 = false
                            
                            while (true)
                                if (not(cond:8_1) && rdi_12 s< rsi[5].d)
                                    void* rax_67 = rsi[4]
                                    void* r8_18 = &rsi[2]
                                    
                                    if (rax_67 != 0)
                                        r8_18 = rax_67
                                    
                                    int32_t rax_68 = rdi_12
                                    
                                    if (rdi_12 s< 0)
                                        rax_68 = rdi_12 + 0x1f
                                    
                                    if (test_bit(*(r8_18 + (sx.q(rax_68 s>> 5) << 2)), 
                                            rdi_12 & 0x1f))
                                        if ((*(*r15 + 0x80))(r15, r13_3, sx.q(rdi_12 * i_9) + *rsi, 
                                                0) != 0)
                                            break
                                        
                                        rsi = arg3
                                
                                int32_t rax_75 = rdi_12 + 1
                                rdi_12 = 0
                                
                                if (rax_75 != r12_2)
                                    rdi_12 = rax_75
                                
                                cond:8_1 = rdi_12 s< 0
                                
                                if (rdi_12 == 0)
                                    goto label_140d0ff96
                        
                        if (r12_2 == 0 || rdi_12 == 0xffffffff)
                        label_140d0ff96:
                            arg5 = sub_14077a5e0(&var_98, &var_198, &i_6, nullptr)
                        
                        rsi = arg3
                        i = i_8 - 1
                        r15 = var_c0
                        i_12 = i_6
                        i_8 = i
                    
                    i_10 = i_7
                
                i_12 += 1
                i_6 = i_12
                i_16 = i_12
            while (i != 0)
            
            rdi = *arg2
            i_16 = i_18
            rax_60 = var_90.d
            r13 = var_180
            r12 = var_140
    
    int32_t var_150 = rax_60 - i_16
    int64_t* rdi_13 = *(rdi + 8)
    int64_t* rcx_54 = rdi_13[1]
    int32_t* rdx_30 = *rcx_54
    
    if (&rdx_30[1] u> rcx_54[1])
        int32_t* rdx_31 = &var_150
        
        if ((*(rdi_13 + 0x29) & 0x20) != 0)
            sub_140b54070(rdi_13, rdx_31, arg5)
        else
            (*(*rdi_13 + 0x150))(rdi_13, rdx_31, 4)
    else
        var_150 = *rdx_30
        int64_t* rax_79 = rdi_13[1]
        *rax_79 += 4
    
    int64_t var_188_2 = r13[0xf]
    var_190 = r12
    
    if (r12[0xf] == r13)
        sub_140bb37e0(&var_190)
    else
        int64_t var_188_3 = 0
    
    int32_t rcx_57 = 0
    int64_t var_88
    int64_t* var_168_1 = &var_88
    int32_t rdi_14 = 0
    int32_t var_170_1 = 0
    int64_t var_15c_1 = 0
    int32_t r12_3 = 1
    int32_t var_16c_1 = 1
    int32_t var_160_1 = 0xffffffff
    int64_t* var_78
    int32_t var_70
    
    if (var_70 != 0)
        int64_t* r8_22 = &var_88
        
        if (var_78 != 0)
            r8_22 = var_78
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(var_70 - 1)
        int32_t rdx_34 = *r8_22
        
        if (rdx_34 != 0)
        label_140d100e6:
            int32_t rax_89 = neg.d(rdx_34) & rdx_34
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_89)
            int32_t var_16c_2 = rax_89
            int32_t rax_90
            
            if (rax_89 == 0)
                rax_90 = 0x20
            else
                rax_90 = 0x1f - temp0_2
            
            int32_t rax_91 = rdi_14 - rax_90 + 0x1f
            
            if (rax_91 s> var_70)
                rax_91 = var_70
            
            var_15c_1.d = rax_91
        else
            while (true)
                int64_t rdx_35 = sx.q(rcx_57)
                rdi_14 += 0x20
                rcx_57 += 1
                var_15c_1:4.d = rdi_14
                var_170_1 = rcx_57
                
                if (rdx_35.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    var_15c_1.d = var_70
                    break
                
                rdx_34 = *(r8_22 + (rdx_35 << 2) + 4)
                int32_t var_160_2 = 0xffffffff
                
                if (rdx_34 != 0)
                    goto label_140d100e6
    
    int64_t (* rsi_4)(int64_t* arg1, int64_t* arg2) = var_180
    var_15c_1.d = var_70
    int32_t i_13 = i_7
    int128_t var_d0_1 = 0xffffffff
    arg5.o = var_170_1.o
    int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int128_t var_138 = (&var_98).o
    int128_t var_128_1 = arg5.o
    int64_t var_118_1 = zmm2
    
    while (true)
        int64_t rcx_61 = sx.q(var_128_1:0xc.d)
        int64_t* rdx_37 = var_138.q
        
        if (rcx_61.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_128_1.q == &var_88
                && rdx_37 == &var_98)
            break
        
        int64_t r8_23
        
        if (r14[1].d != *(r14 + 0x34))
            r8_23 = sx.q(*(*rdx_37 + rcx_61 * 0xc) * i_13) + *r14
        else
            r8_23 = 0
        
        int64_t* rcx_63 = *(rsi_4 + 0x78)
        (*(*rcx_63 + 0x88))(rcx_63, arg2, r8_23, 0)
        var_128_1:8.d &= not.d(var_138:0xc.d)
        sub_14059bdd0(&var_138:8)
    
    sub_140bafac0(&var_190)
    int32_t r13_4 = 0x1f
    
    if (r14 == 0)
        void* rax_135 = *arg2
        i_7 = arg3[1].d - *(arg3 + 0x34)
        int64_t* rdi_23 = *(rax_135 + 8)
        int64_t* rcx_85 = rdi_23[1]
        int32_t* rdx_53 = *rcx_85
        
        if (&rdx_53[1] u> rcx_85[1])
            int32_t* rdx_54 = &i_7
            
            if ((*(rdi_23 + 0x29) & 0x20) != 0)
                sub_140b54070(rdi_23, rdx_54, arg5)
            else
                (*(*rdi_23 + 0x150))(rdi_23, rdx_54, 4)
        else
            i_7 = *rdx_53
            int64_t* rax_138 = rdi_23[1]
            *rax_138 += 4
        
        int64_t* rcx_87 = var_140
        int64_t (* rdi_24)(int64_t* arg1, int64_t* arg2) = rsi_4
        int64_t rax_140 = *(rsi_4 + 0x78)
        var_190 = rcx_87
        int64_t var_188_6 = rax_140
        
        if (rcx_87[0xf] == rsi_4)
            sub_140bb37e0(&var_190)
        else
            int64_t var_188_7 = 0
        
        int32_t i_1 = i_7
        int32_t rsi_8 = 0
        
        if (i_1 != 0)
            int64_t* r9_10 = arg3
            
            do
                if (rsi_8 s>= 0 && rsi_8 s< r9_10[5].d)
                    void* rax_141 = r9_10[4]
                    void* rcx_89 = &r9_10[2]
                    
                    if (rax_141 != 0)
                        rcx_89 = rax_141
                    
                    int32_t rax_142 = rsi_8
                    
                    if (rsi_8 s< 0)
                        rax_142 = rsi_8 + 0x1f
                    
                    if ((*(rcx_89 + (sx.q(rax_142 s>> 5) << 2)) & r12_3) != 0)
                        int64_t* rcx_90 = *(rdi_24 + 0x78)
                        (*(*rcx_90 + 0x88))(rcx_90, arg2, sx.q(i_9 * rsi_8) + *r9_10, 0)
                        r9_10 = arg3
                        i_1 = i_7 - 1
                        rdi_24 = var_180
                        i_7 = i_1
                
                rsi_8 += 1
                r12_3 = rol.d(r12_3, 1)
            while (i_1 != 0)
    else
        if (var_90.d != i_18)
            int32_t rax_98 = var_90:4.d
            var_90.d = 0
            
            if (rax_98 s< 0 && rax_98 != 0)
                sub_140638cc0(&var_98, 0)
            
            int32_t var_68_2 = 0xffffffff
            i_18 = 0
            sub_140774790(&var_88)
            int64_t rcx_68 = sx.q(var_50_1)
            
            if (rcx_68 s> 0)
                void var_60
                void* rdi_18 = &var_60
                
                if (var_58_1 != 0)
                    rdi_18 = var_58_1
                
                __builtin_memset(rdi_18, 0xffffffff, rcx_68 << 2)
        
        int64_t* r8_25 = arg3
        int32_t i_11 = 0
        i_8 = 0
        int32_t rsi_5 = r8_25[1].d
        int32_t i_2 = rsi_5 - *(r8_25 + 0x34)
        
        if (rsi_5 != *(r8_25 + 0x34))
            int32_t i_14 = i_7
            int32_t i_17 = 0
            
            do
                if (i_17 s>= 0 && i_17 s< r8_25[5].d)
                    void* rax_100 = r8_25[4]
                    void* rdx_41 = &r8_25[2]
                    
                    if (rax_100 != 0)
                        rdx_41 = rax_100
                    
                    int32_t i_20 = i_17
                    
                    if (i_17 s< 0)
                        i_20 = i_17 + 0x1f
                    
                    if (test_bit(*(rdx_41 + (sx.q(i_20 s>> 5) << 2)), i_17 & 0x1f))
                        int32_t rax_106 = sub_140cfe6e0(&var_110, sx.q(i_9 * i_11) + *r8_25, 0)
                        
                        if (rax_106 s>= 0 && r14[1].d != *(r14 + 0x34))
                            *r14
                        
                        if (rax_106 s< 0 || r14[1].d == *(r14 + 0x34)
                                || sx.q(rax_106 * i_14) == neg.q(*r14))
                            arg5 = sub_14077a5e0(&var_98, &var_198, &i_8, nullptr)
                        
                        r8_25 = arg3
                        i_2 -= 1
                
                i_11 += 1
                i_8 = i_11
                i_17 = i_11
            while (i_2 != 0)
            
            r13_4 = i_2 + 0x1f
        
        i_6 = var_90.d - i_18
        int64_t* rdi_19 = *(*arg2 + 8)
        int64_t* rcx_73 = rdi_19[1]
        int32_t* rdx_45 = *rcx_73
        
        if (&rdx_45[1] u> rcx_73[1])
            int32_t* rdx_46 = &i_6
            
            if ((*(rdi_19 + 0x29) & 0x20) != 0)
                sub_140b54070(rdi_19, rdx_46, arg5)
            else
                (*(*rdi_19 + 0x150))(rdi_19, rdx_46, 4)
        else
            i_6 = *rdx_45
            int64_t* rax_115 = rdi_19[1]
            *rax_115 += 4
        
        int64_t (* r11_1)(int64_t* arg1, int64_t* arg2) = var_180
        int64_t* rcx_75 = var_140
        var_190 = rcx_75
        int64_t var_188_4 = *(r11_1 + 0x78)
        
        if (rcx_75[0xf] == r11_1)
            sub_140bb37e0(&var_190)
            r11_1 = var_180
        else
            int64_t var_188_5 = 0
        
        int32_t rcx_77 = 0
        int32_t var_16c_3 = 1
        int32_t rdi_20 = 0
        int32_t var_170_2 = 0
        int64_t* var_168_2 = &var_88
        int32_t var_160_4 = 0xffffffff
        int64_t var_15c_2 = 0
        
        if (var_70 != 0)
            int64_t* r9_9 = &var_88
            
            if (var_78 != 0)
                r9_9 = var_78
            
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(var_70 - 1)
            int32_t rdx_49 = *r9_9
            
            if (rdx_49 != 0)
            label_140d103f6:
                int32_t rax_125 = neg.d(rdx_49) & rdx_49
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_125)
                int32_t var_16c_4 = rax_125
                int32_t r13_5
                
                if (rax_125 == 0)
                    r13_5 = 0x20
                else
                    r13_5 = r13_4 - temp0_4
                
                int32_t rax_126 = rdi_20 - r13_5 + 0x1f
                
                if (rax_126 s> var_70)
                    rax_126 = var_70
                
                var_15c_2.d = rax_126
            else
                while (true)
                    int64_t rdx_50 = sx.q(rcx_77)
                    rdi_20 += 0x20
                    rcx_77 += 1
                    var_15c_2:4.d = rdi_20
                    var_170_2 = rcx_77
                    
                    if (rdx_50.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                        var_15c_2.d = var_70
                        break
                    
                    rdx_49 = *(r9_9 + (rdx_50 << 2) + 4)
                    int32_t var_160_5 = 0xffffffff
                    
                    if (rdx_49 != 0)
                        goto label_140d103f6
        
        var_110 = &var_98
        var_108_1.o = var_170_2.o
        int128_t zmm0_1 = var_110.o
        var_15c_2.d = var_70
        arg5.o = 0xffffffff
        zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        var_138 = zmm0_1
        int128_t var_128_2 = arg5.o
        int64_t var_118_2 = zmm2
        
        while (true)
            int64_t rax_127 = sx.q(var_128_2:0xc.d)
            int64_t* r8_28 = var_138.q
            
            if (rax_127.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d
                    && var_128_2.q == &var_88 && r8_28 == &var_98)
                break
            
            int64_t* rcx_81 = *(r11_1 + 0x78)
            (*(*rcx_81 + 0x88))(rcx_81, arg2, sx.q(*(*r8_28 + rax_127 * 0xc) * i_9) + *arg3, 0)
            var_128_2:8.d &= not.d(var_138:0xc.d)
            sub_14059bdd0(&var_138:8)
            r11_1 = var_180
    
    sub_140bafac0(&var_190, arg5, zmm2)
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    result = sub_140909ff0(&var_98)
else
    if (r14 == 0)
        int32_t r12_1 = arg3[1].d
        int32_t i_3 = r12_1 - *(arg3 + 0x34)
        
        if (r12_1 != *(arg3 + 0x34))
            int32_t rdi_1 = 0
            
            if ((r15[8] & 0x1040000000) == 0)
                uint64_t rdx_1 = zx.q(var_b0:8.d)
                int32_t r14_1 = 1
                int64_t r13_1 = *arg3
                i_8.q = rdx_1
                
                do
                    if (rdi_1 s>= 0 && rdi_1 s< rsi[5].d)
                        void* rax_4 = rsi[4]
                        void* rcx = &rsi[2]
                        
                        if (rax_4 != 0)
                            rcx = rax_4
                        
                        int32_t rax_5 = rdi_1
                        
                        if (rdi_1 s< 0)
                            rax_5 = rdi_1 + 0x1f
                        
                        if ((*(rcx + (sx.q(rax_5 s>> 5) << 2)) & r14_1) != 0)
                            if ((not.b((r15[8] u>> 0x24).b) & 1) != 0)
                                (*(*r15 + 0xe8))(r15, sx.q(*(r15 + 0x4c)) + r13_1)
                                rdx_1 = i_8.q
                                rsi = arg3
                                r15 = var_c0
                            
                            i_3 -= 1
                    
                    r13_1 += rdx_1
                    r14_1 = rol.d(r14_1, 1)
                    rdi_1 += 1
                while (i_3 != 0)
                
                r13 = var_180
            
            rsi[1].d = 0
            
            if (*(rsi + 0xc) != 0)
                sub_140ce4fc0(rsi, 0, i_9)
            
            rsi[6].d = 0xffffffff
            *(rsi + 0x34) = 0
            rsi[5].d = 0
            
            if (*(rsi + 0x2c) != 0)
                *(rsi + 0x2c) = 0
                sub_140d0bc80(&rsi[2], 0)
            
            int64_t rcx_4 = sx.q(rsi[9].d)
            void* rdi_2 = &rsi[7]
            void* rax_11 = *(rdi_2 + 8)
            
            if (rcx_4 s> 0)
                if (rax_11 != 0)
                    rdi_2 = rax_11
                
                __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)
    else
        (*(*arg1 + 0xb0))(zmm0, rsi, r14, 1)
    
    var_198 = 0
    i_6 = 0
    int64_t* rdi_3 = *(*arg2 + 8)
    int64_t* rcx_5 = rdi_3[1]
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        int32_t* rdx_5 = &i_6
        
        if ((*(rdi_3 + 0x29) & 0x20) != 0)
            sub_140b54070(rdi_3, rdx_5, arg5)
        else
            (*(*rdi_3 + 0x150))(rdi_3, rdx_5, 4)
    else
        i_6 = *rdx_4
        int64_t* rax_15 = rdi_3[1]
        *rax_15 += 4
    
    if (i_6 != 0)
        int64_t rax_17 = sub_140a82f30(sx.q(r13[0x11].d), 0)
        int64_t* rdi_4 = r13[0xf]
        var_198 = rax_17
        
        if (not(test_bit(zx.q(rdi_4[8].d), 9)))
            (*(*rdi_4 + 0xf0))(rdi_4, rax_17)
        else
            memset(rax_17, 0, sx.q(*(rdi_4 + 0x3c) * rdi_4[7].d))
        
        int64_t (* rcx_13)(int64_t* arg1, int64_t* arg2) = var_140
        int64_t rax_19 = r13[0xf]
        var_180 = rcx_13
        int64_t var_178_1 = rax_19
        
        if (*(rcx_13 + 0x78) == r13)
            sub_140bb37e0(&var_180)
        else
            int64_t var_178_2 = 0
        
        if (i_6 != 0)
            int32_t i_4
            
            do
                int64_t* rcx_15 = r13[0xf]
                (*(*rcx_15 + 0x88))(rcx_15, arg2, var_198, 0)
                int64_t* r9_1 = arg3
                int64_t r15_1 = var_198
                int32_t r14_2 = r9_1[1].d
                
                if (r14_2 != 0)
                    int64_t* rsi_1 = var_c0
                    int32_t j = 0
                    bool cond:11_1 = false
                    
                    do
                        if (not(cond:11_1) && j s< r9_1[5].d)
                            void* rax_21 = r9_1[4]
                            void* r8_4 = &r9_1[2]
                            
                            if (rax_21 != 0)
                                r8_4 = rax_21
                            
                            int32_t j_1 = j
                            
                            if (j s< 0)
                                j_1 = j + 0x1f
                            
                            if (test_bit(*(r8_4 + (sx.q(j_1 s>> 5) << 2)), j & 0x1f))
                                if ((*(*rsi_1 + 0x80))(rsi_1, r15_1, sx.q(i_9 * j) + *r9_1, 0) != 0)
                                    if (j != 0xffffffff)
                                        sub_140d0ca40(&var_c0, j, 1)
                                    
                                    break
                                
                                r9_1 = arg3
                        
                        int32_t j_2 = j + 1
                        j = 0
                        
                        if (j_2 != r14_2)
                            j = j_2
                        
                        cond:11_1 = j s< 0
                    while (j != 0)
                
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
        
        sub_140bafac0(&var_180)
    
    void* rax_28 = *arg2
    i_7 = 0
    int64_t* rdi_5 = *(rax_28 + 8)
    int64_t* rcx_21 = rdi_5[1]
    int32_t* rdx_11 = *rcx_21
    
    if (&rdx_11[1] u> rcx_21[1])
        int32_t* rdx_12 = &i_7
        
        if ((*(rdi_5 + 0x29) & 0x20) != 0)
            sub_140b54070(rdi_5, rdx_12, arg5)
        else
            (*(*rdi_5 + 0x150))(rdi_5, rdx_12, 4)
    else
        i_7 = *rdx_11
        int64_t* rax_31 = rdi_5[1]
        *rax_31 += 4
    
    if (i_7 != 0 && var_198 == 0)
        int64_t rax_33 = sub_140a82f30(sx.q(r13[0x11].d), 0)
        int64_t* rdi_6 = r13[0xf]
        var_198 = rax_33
        
        if (not(test_bit(zx.q(rdi_6[8].d), 9)))
            (*(*rdi_6 + 0xf0))(rdi_6, rax_33)
        else
            memset(rax_33, 0, sx.q(*(rdi_6 + 0x3c) * rdi_6[7].d))
    
    int64_t* rcx_29 = var_140
    int64_t rax_35 = r13[0xf]
    var_190 = rcx_29
    int64_t var_188 = rax_35
    
    if (rcx_29[0xf] == r13)
        sub_140bb37e0(&var_190)
    else
        int64_t var_188_1 = 0
    
    if (i_7 != 0)
        int32_t i_5
        
        do
            int64_t* rcx_31 = r13[0xf]
            (*(*rcx_31 + 0x88))(rcx_31, arg2, var_198, 0)
            int64_t* r9_3 = arg3
            int64_t r15_2 = var_198
            int32_t r14_3 = r9_3[1].d
            
            if (r14_3 == 0)
                goto label_140d0fcf8
            
            int64_t* rsi_2 = var_c0
            int32_t rdi_7 = 0
            bool cond:13_1 = false
            
            while (true)
                if (not(cond:13_1) && rdi_7 s< r9_3[5].d)
                    void* rax_37 = r9_3[4]
                    void* r8_9 = &r9_3[2]
                    
                    if (rax_37 != 0)
                        r8_9 = rax_37
                    
                    int32_t rax_38 = rdi_7
                    
                    if (rdi_7 s< 0)
                        rax_38 = rdi_7 + 0x1f
                    
                    if (test_bit(*(r8_9 + (sx.q(rax_38 s>> 5) << 2)), rdi_7 & 0x1f))
                        if ((*(*rsi_2 + 0x80))(rsi_2, r15_2, sx.q(i_9 * rdi_7) + *r9_3, 0) != 0)
                            break
                        
                        r9_3 = arg3
                
                int32_t rax_45 = rdi_7 + 1
                rdi_7 = 0
                
                if (rax_45 != r14_3)
                    rdi_7 = rax_45
                
                cond:13_1 = rdi_7 s< 0
                
                if (rdi_7 == 0)
                    goto label_140d0fcf8
            
            if (rdi_7 == 0xffffffff)
                r9_3 = arg3
            label_140d0fcf8:
                int32_t rax_46 = sub_140cf1c20(r9_3, &var_b0:0xc)
                int64_t* r9_4 = var_c0
                int64_t r8_12 = r9_4[8]
                int64_t r10_2 = sx.q(i_9 * rax_46) + *arg3
                
                if (((r8_12 u>> 9).b & 1) != 0)
                    memset(r10_2, 0, sx.q(var_b0:8.d))
                else if (not(test_bit(r8_12, 9)))
                    (*(*r9_4 + 0xf0))(r9_4, sx.q(*(r9_4 + 0x4c)) + r10_2)
                else
                    memset(sx.q(*(r9_4 + 0x4c)) + r10_2, 0, sx.q(*(r9_4 + 0x3c) * r9_4[7].d))
                
                int64_t* rdi_10 = r13[0xf]
                int64_t rcx_42 = sx.q(*(rdi_10 + 0x4c))
                int64_t rdx_22 = var_198 + rcx_42
                int64_t r10_5 = sx.q(i_9 * rax_46) + rcx_42 + *arg3
                
                if (r10_5 != rdx_22)
                    if (not(test_bit(zx.q(rdi_10[8].d), 0x1e)))
                        (*(*rdi_10 + 0xb0))(rdi_10, r10_5, rdx_22, zx.q(rdi_10[7].d))
                    else
                        memcpy(r10_5, rdx_22, *(rdi_10 + 0x3c) * rdi_10[7].d)
            
            i_5 = i_7
            i_7 -= 1
        while (i_5 != 1)
    
    var_140 = &var_c0
    void** var_178_3 = &var_140
    var_180 = sub_140cf2f70
    sub_140d0c0d0(arg3, &var_b0, &var_180)
    result = sub_140bafac0(&var_190)
    int64_t rcx_47 = var_198
    
    if (rcx_47 != 0)
        int64_t* rdi_11 = r13[0xf]
        
        if ((not.b((rdi_11[8] u>> 0x24).b) & 1) != 0)
            (*(*rdi_11 + 0xe8))(rdi_11, rcx_47)
            rcx_47 = var_198
        
        result = sub_140a74f90(rcx_47)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
