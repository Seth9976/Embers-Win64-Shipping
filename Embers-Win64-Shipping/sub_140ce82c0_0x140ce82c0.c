// 函数: sub_140ce82c0
// 地址: 0x140ce82c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rsi = *(*arg2 + 8)
int512_t zmm1
int128_t zmm6
zmm1, zmm6 = sub_140ce8e80(arg1, arg2)
(*(*rsi + 0x1d8))(rsi, &data_1439a93f8)
int32_t var_1b8
void* var_188

if ((rsi[5].b & 2) != 0)
    int32_t var_1b4_1 = 1
    int32_t r11_1 = *(arg1 + 0x50)
    void* r9_1 = arg1 + 0x38
    void* var_1b0_1 = r9_1
    int32_t rcx_1 = 0
    var_1b8 = 0
    int32_t r8_1 = 0
    int32_t var_1a8_1 = 0xffffffff
    int64_t var_1a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(r9_1 + 0x10)
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_140ce839d:
            int32_t rax_11 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_1b4_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_1a4_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r11_1)
                var_1a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_1a4_1:4.d = r8_1
                var_1b8 = rcx_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_1a8_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140ce839d
            
            var_1a4_1.d = r11_1
    
    int128_t zmm4_1 = var_1a8_1.o
    void* var_b0_1 = arg1 + 0x28
    int128_t zmm0_1 = var_1b8.o
    var_188 = arg1 + 0x28
    int128_t var_170_1 = zmm4_1
    int16_t var_e0_1 = 0
    void* rax_14 = zmm0_1.q
    int128_t var_108_1 = zmm0_1
    zmm1.o = zmm4_1
    int128_t var_118 = var_188.o
    zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4_1.q)
    zmm0_1.q = (zmm1.o).q
    int128_t var_b8 = zmm0_1
    
    if ((zmm4_1.q u>> 0x20).d s< *(rax_14 + 0x18))
        int32_t i = var_108_1:0xc.d
        
        do
            if (sub_140d3e110(sx.q(i) * 0x60 + *var_118.q) == 0)
                zmm1 = sub_140ce3fb0(zmm0_1:8.q, i)
                var_e0_1.b = 1
            
            var_108_1:8.d &= not.d(var_118:0xc.d)
            sub_14059bdd0(&var_118:8)
            i = var_108_1:0xc.d
        while (i s< *(var_108_1.q + 0x18))
        
        if (var_e0_1.b != 0 && var_e0_1:1.b != 0)
            zmm1 = sub_140cd8730(arg1 + 0x28, *(arg1 + 0x30) - *(arg1 + 0x5c), 1)

void* result

if ((rsi[5].b & 1) != 0)
    uint64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    sub_140cd64a0(arg2, &var_98, zmm1)
    int64_t var_90
    
    if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
        if (var_58_1 != 0)
            var_58_1 = sub_140a84c80(var_58_1, 0, 0)
        
        int32_t var_50_2 = 0
        sub_140cd8730(&var_98, var_90.d - var_64_1, 0)
    
    int128_t var_38_1 = zmm6
    void* var_88
    int64_t var_78
    int128_t zmm3
    
    if (((*(*rsi + 0x18))(rsi) == 0 || ((*(arg1 + 8) u>> 0x15).b & 1) == 0)
            && arg1 + 0x28 != &var_98)
        int128_t zmm2_1 = *(arg1 + 0x28)
        zmm3 = *(arg1 + 0x38)
        int128_t zmm4_2 = *(arg1 + 0x48)
        int128_t zmm5_1 = *(arg1 + 0x58)
        zmm6 = *(arg1 + 0x68)
        *(arg1 + 0x28) = var_98.o
        *(arg1 + 0x38) = var_88.o
        *(arg1 + 0x48) = var_78.o
        *(arg1 + 0x58) = var_68_1.o
        *(arg1 + 0x68) = var_58_1.o
        var_98.o = zmm2_1
        var_88.o = zmm3
        var_78.o = zmm4_2
        var_68_1.o = zmm5_1
        var_58_1.o = zmm6
    
    int32_t var_50_3 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_140cda6f0(&var_98, 0)
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    uint64_t rcx_26 = var_98
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int32_t rax_31
    int512_t zmm1_3
    rax_31, zmm1_3 = sub_140b4e7c0(rsi, &data_1439a93f8)
    
    if (rax_31 s>= 3)
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_2 = 0x80
        var_68_1 = 0xffffffff
        int32_t var_64_2 = 0
        int64_t var_58_2 = 0
        int32_t var_50_4 = 0
        sub_140cd6810(arg2, &var_98, zmm1_3)
        
        if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
            if (var_58_2 != 0)
                var_58_2 = sub_140a84c80(var_58_2, 0, 0)
            
            int32_t var_50_5 = 0
            sub_1405b67e0(&var_98, var_90.d - var_64_2, 0)
        
        if (((*(*rsi + 0x18))(rsi) == 0 || ((*(arg1 + 8) u>> 0x15).b & 1) == 0)
                && arg1 + 0x78 != &var_98)
            int128_t zmm2_2 = *(arg1 + 0x78)
            zmm3 = *(arg1 + 0x88)
            int128_t zmm4_3 = *(arg1 + 0x98)
            int128_t zmm5_2 = *(arg1 + 0xa8)
            int128_t zmm6_1 = *(arg1 + 0xb8)
            *(arg1 + 0x78) = var_98.o
            *(arg1 + 0x88) = var_88.o
            *(arg1 + 0x98) = var_78.o
            *(arg1 + 0xa8) = var_68_1.o
            *(arg1 + 0xb8) = var_58_2.o
            var_98.o = zmm2_2
            var_88.o = zmm3
            var_78.o = zmm4_3
            var_68_1.o = zmm5_2
            var_58_2.o = zmm6_1
        
        int32_t var_50_6 = 0
        
        if (var_58_2 != 0)
            sub_140a74f90(var_58_2)
        
        sub_1407547c0(&var_98, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        uint64_t rcx_36 = var_98
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
    
    sub_140ce0380()
    int512_t zmm6_2
    zmm6_2.o = var_38_1
    int32_t r11_2 = *(arg1 + 0x50)
    void* r9_2 = arg1 + 0x38
    int32_t var_1b4_3 = 1
    int32_t rcx_37 = 0
    var_1b8 = 0
    int32_t r8_5 = 0
    void* var_1b0_2 = r9_2
    int32_t var_1a8_2 = 0xffffffff
    int64_t var_1a4_2 = 0
    
    if (r11_2 != 0)
        void* rax_39 = *(r9_2 + 0x10)
        
        if (rax_39 != 0)
            r9_2 = rax_39
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_2 - 1)
        int32_t rdx_21 = *r9_2
        
        if (rdx_21 != 0)
        label_140ce887b:
            int32_t rax_46 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_46)
            int32_t var_1b4_4 = rax_46
            int32_t rax_47
            
            if (rax_46 == 0)
                rax_47 = 0x20
            else
                rax_47 = 0x1f - temp0_4
            
            var_1a4_2.d = r8_5 - rax_47 + 0x1f
            
            if (r8_5 - rax_47 + 0x1f s> r11_2)
                var_1a4_2.d = r11_2
        else
            while (true)
                int64_t rdx_22 = sx.q(rcx_37)
                r8_5 += 0x20
                rcx_37 += 1
                var_1a4_2:4.d = r8_5
                var_1b8 = rcx_37
                
                if (rdx_22.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r9_2 + (rdx_22 << 2) + 4)
                var_1a8_2 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_140ce887b
            
            var_1a4_2.d = r11_2
    
    double zmm4_4[0x2] = var_1a8_2.o
    void* var_b0_2 = arg1 + 0x28
    int128_t zmm0_4 = var_1b8.o
    var_188 = arg1 + 0x28
    double var_170_2[0x2] = zmm4_4
    var_68_1.q = arg1 + 0x28
    int16_t var_60_1 = 0
    void* rax_49 = zmm0_4.q
    var_88.o = zmm0_4
    var_98.o = var_188.o
    double rcx_39 = zmm4_4[0]
    zmm0_4.q = (_mm_unpackhi_pd(zmm4_4, zmm4_4[0])).q
    var_78.o = zmm0_4
    int32_t var_198
    int32_t var_190
    int32_t var_18c
    int128_t var_180_2
    int128_t var_158
    int128_t var_f8
    
    if ((rcx_39 u>> 0x20).d s< *(rax_49 + 0x18))
        int64_t var_80
        int32_t i_1 = var_80:4.d
        
        do
            int32_t r8_7 = 0
            int32_t rcx_41 = 0
            var_188:4.d = 1
            var_188.d = 0
            var_180_2:8.d = 0xffffffff
            var_180_2:0xc.q = 0
            void* r15_3 = *var_98 + 8 + sx.q(i_1) * 0x60
            int32_t r11_3 = *(r15_3 + 0x28)
            void* r9_3 = r15_3 + 0x10
            var_180_2.q = r9_3
            
            if (r11_3 != 0)
                void* rax_52 = *(r9_3 + 0x10)
                
                if (rax_52 != 0)
                    r9_3 = rax_52
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r11_3 - 1)
                int32_t rdx_27 = *r9_3
                
                if (rdx_27 != 0)
                label_140ce89bb:
                    int32_t rax_59 = neg.d(rdx_27) & rdx_27
                    uint64_t rflags_3
                    int32_t temp0_6
                    temp0_6, rflags_3 = _bit_scan_reverse(rax_59)
                    var_188:4.d = rax_59
                    int32_t rax_60
                    
                    if (rax_59 == 0)
                        rax_60 = 0x20
                    else
                        rax_60 = 0x1f - temp0_6
                    
                    var_180_2:0xc.d = r8_7 - rax_60 + 0x1f
                    
                    if (r8_7 - rax_60 + 0x1f s> r11_3)
                        var_180_2:0xc.d = r11_3
                else
                    while (true)
                        int64_t rdx_28 = sx.q(rcx_41)
                        r8_7 += 0x20
                        rcx_41 += 1
                        var_170_2[0].d = r8_7
                        var_188.d = rcx_41
                        
                        if (rdx_28.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_27 = *(r9_3 + (rdx_28 << 2) + 4)
                        var_180_2:8.d = 0xffffffff
                        
                        if (rdx_27 != 0)
                            goto label_140ce89bb
                    
                    var_180_2:0xc.d = r11_3
            
            zmm4_4 = var_180_2
            var_f8:8.q = r15_3
            int16_t var_120_1 = 0
            double var_c0_1[0x2] = zmm4_4
            int128_t zmm3_1 = var_188.o
            double rax_62 = zmm4_4[0]
            zmm0_4.q = (_mm_unpackhi_pd(zmm4_4, zmm4_4[0])).q
            var_158 = r15_3.o
            int128_t var_148_1 = zmm3_1
            var_f8 = zmm0_4
            
            if ((rax_62 u>> 0x20).d s< r11_3)
                int32_t j = var_148_1:0xc.d
                
                do
                    int64_t* r14_1 = var_158.q
                    int64_t rdi_3 = sx.q(j) << 5
                    int64_t rbx_2 = *(rdi_3 + *r14_1)
                    int64_t var_a8_1 = rbx_2
                    int32_t var_194
                    int32_t rcx_48
                    
                    if (data_1439a9f88 == data_1439a9fb4)
                    label_140ce8ad7:
                        rcx_48 = 0
                        var_194 = 0
                        var_198 = 0
                    else
                        var_190.q = rbx_2
                        int32_t rax_67 = sub_140b5ead0(rbx_2.d) + var_18c
                        void* rcx_46 = data_1439a9fc0
                        void* rax_69 = &data_1439a9fb8
                        
                        if (rcx_46 != 0)
                            rax_69 = rcx_46
                        
                        int32_t rax_70 =
                            *(rax_69 + ((sx.q(data_1439a9fc8 - 1) & sx.q(rax_67)) << 2))
                        
                        if (rax_70 == 0xffffffff)
                            goto label_140ce8ad7
                        
                        int64_t r8_9 = data_1439a9f80
                        int64_t rcx_47
                        
                        while (true)
                            rcx_47 = sx.q(rax_70)
                            int64_t rdx_31 = rcx_47 * 3
                            
                            if (*(r8_9 + (rdx_31 << 3)) == rbx_2)
                                break
                            
                            rax_70 = *(r8_9 + (rdx_31 << 3) + 0x10)
                            
                            if (rax_70 == 0xffffffff)
                                goto label_140ce8ad7
                        
                        if (rax_70 == 0xffffffff)
                            goto label_140ce8ad7
                        
                        void* rax_74 = r8_9 + rcx_47 * 0x18
                        
                        if (rax_74 == 0)
                            goto label_140ce8ad7
                        
                        var_198.q = *(rax_74 + 8)
                        rcx_48 = var_198
                    
                    rcx_48.b = sub_140b5b8a0(rcx_48, 0) == 0
                    
                    if ((var_194 != 0 | rcx_48.b) != 0)
                        int64_t rax_72 = *r14_1
                        var_1b8.q = 0
                        int32_t rbx_3 = *(rdi_3 + rax_72 + 0x10)
                        int64_t rdi_4 = *(rdi_3 + rax_72 + 8)
                        var_1b0_2.d = rbx_3
                        
                        if (rbx_3 != 0)
                            sub_1405a4c70(&var_1b8, rbx_3, 0)
                            memcpy(var_1b8.q, rdi_4, rbx_3 * 2)
                        else
                            var_1b0_2:4.d = 0
                        
                        sub_140afe470(zmm0_4:8.q, j)
                        var_120_1.b = 1
                        sub_14090d470(r15_3, &var_198, &var_1b8)
                        int64_t rcx_53 = var_1b8.q
                        
                        if (rcx_53 != 0)
                            sub_140a74f90(rcx_53)
                    
                    var_148_1:8.d &= not.d(var_158:0xc.d)
                    sub_14059bdd0(&var_158:8)
                    j = var_148_1:0xc.d
                while (j s< *(var_148_1.q + 0x18))
                
                if (var_120_1.b != 0 && var_120_1:1.b != 0)
                    sub_1405b67e0(r15_3, *(r15_3 + 8) - *(r15_3 + 0x34), 1)
            
            var_80.d &= not.d(var_90:4.d)
            sub_14059bdd0(&var_90)
            i_1 = var_80:4.d
        while (i_1 s< *(var_88 + 0x18))
        
        if (var_60_1.b != 0 && var_60_1:1.b != 0)
            void* rcx_57 = var_68_1.q
            sub_140cd8730(rcx_57, *(rcx_57 + 8) - *(rcx_57 + 0x34), 1)
    
    var_188.d = 0
    var_188:4.d = 1
    var_180_2.q = arg1 + 0x88
    var_180_2:8.d = 0xffffffff
    var_180_2:0xc.q = 0
    
    if (*(arg1 + 0xa0) != 0)
        sub_14059bdd0(&var_188)
    
    zmm4_4 = var_180_2
    var_f8:8.q = arg1 + 0x78
    zmm0_4 = var_188.o
    double var_c0_2[0x2] = zmm4_4
    int16_t var_120_2 = 0
    result = zmm0_4.q
    int128_t var_148_2 = zmm0_4
    var_158 = (arg1 + 0x78).o
    double rcx_59 = zmm4_4[0]
    zmm0_4.q = (_mm_unpackhi_pd(zmm4_4, zmm4_4[0])).q
    
    if ((rcx_59 u>> 0x20).d s< *(result + 0x18))
        int32_t i_2 = var_148_2:0xc.d
        
        do
            int64_t* rbx_4 = var_158.q
            int64_t rdi_6 = sx.q(i_2) << 5
            int64_t r8_15 = *(rdi_6 + *rbx_4)
            int64_t var_a8_2 = r8_15
            sub_1409bd4b0(&data_1439a9f80, &var_198, r8_15)
            int64_t rax_84 = sx.q(var_198)
            void* rax_86
            
            if (rax_84.d != 0xffffffff)
                rax_86 = data_1439a9f80 + rax_84 * 0x18
            
            int32_t rcx_61
            
            if (rax_84.d == 0xffffffff || rax_86 == 0)
                rcx_61 = 0
                var_18c = 0
                var_190 = 0
            else
                var_190.q = *(rax_86 + 8)
                rcx_61 = var_190
            
            rcx_61.b = sub_140b5b8a0(rcx_61, 0) == 0
            
            if ((var_18c != 0 | rcx_61.b) != 0)
                int64_t rax_89 = *rbx_4
                var_1b8.q = 0
                int32_t rbx_5 = *(rdi_6 + rax_89 + 0x10)
                int64_t rdi_7 = *(rdi_6 + rax_89 + 8)
                var_1b0_2.d = rbx_5
                
                if (rbx_5 != 0)
                    sub_1405a4c70(&var_1b8, rbx_5, 0)
                    memcpy(var_1b8.q, rdi_7, rbx_5 * 2)
                else
                    var_1b0_2:4.d = 0
                
                sub_140afe470(zmm0_4:8.q, i_2)
                var_120_2.b = 1
                sub_14090d470(arg1 + 0x78, &var_190, &var_1b8)
                int64_t rcx_66 = var_1b8.q
                
                if (rcx_66 != 0)
                    sub_140a74f90(rcx_66)
            
            var_148_2:8.d &= not.d(var_158:0xc.d)
            sub_14059bdd0(&var_158:8)
            result = var_148_2.q
            i_2 = var_148_2:0xc.d
        while (i_2 s< *(result + 0x18))
        
        if (var_120_2.b != 0 && var_120_2:1.b != 0)
            result = sub_1405b67e0(arg1 + 0x78, *(arg1 + 0x80) - *(arg1 + 0xac), 1)
else
    int512_t zmm1_1 = sub_140cd64a0(arg2, arg1 + 0x28, zmm1)
    
    if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
        int64_t rcx_13 = *(arg1 + 0x68)
        
        if (rcx_13 != 0)
            *(arg1 + 0x68) = sub_140a84c80(rcx_13, 0, 0)
        
        *(arg1 + 0x70) = 0
        zmm1_1 = sub_140cd8730(arg1 + 0x28, *(arg1 + 0x30) - *(arg1 + 0x5c), 0)
    
    sub_140cd6810(arg2, arg1 + 0x78, zmm1_1)
    result = *arg2
    
    if ((*(*(result + 8) + 0x28) & 1) != 0)
        int64_t rcx_17 = *(arg1 + 0xb8)
        
        if (rcx_17 != 0)
            *(arg1 + 0xb8) = sub_140a84c80(rcx_17, 0, 0)
        
        *(arg1 + 0xc0) = 0
        result = sub_1405b67e0(arg1 + 0x78, *(arg1 + 0x80) - *(arg1 + 0xac), 0)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
