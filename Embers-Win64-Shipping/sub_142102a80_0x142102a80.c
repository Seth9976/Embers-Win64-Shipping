// 函数: sub_142102a80
// 地址: 0x142102a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
void* result = __security_cookie ^ &var_158
void* result_1 = result

if (*(arg1 + 0x210) == 0)
    *(arg1 + 0x210) = 1
    int32_t rcx_1 = *(arg1 + 0x38) - *(arg1 + 0x64)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x88888889, rcx_1)
    int32_t rdx_3 = (temp0_1 + rcx_1) s>> 4
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    void* var_68_1 = nullptr
    int32_t i_10 = 0
    int32_t rbx_4 = (rdx_3 u>> 0x1f) + 1 + rdx_3
    
    if ((rdx_3 u>> 0x1f) + 1 != neg.d(rdx_3))
        sub_140679b80(&var_a8, rbx_4)
    
    int32_t var_78_2 = 0xffffffff
    int32_t var_74_2 = 0
    int64_t var_9c
    sub_14059a8e0(&var_9c:4, rbx_4)
    int32_t i_11
    
    if (rbx_4 u< 4)
        i_11 = 1
    else
        uint32_t rax_3 = rbx_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
        int32_t rcx_4
        
        if (rax_3 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_3 + 7)
        char rdx_7
        
        if (rax_3 == 0xfffffff9)
            rdx_7 = 0x20
        else
            rdx_7 = 0x1f - temp0_3
        
        i_11 = 1 << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - rdx_7))
    
    void var_70
    
    if (rbx_4 s> 0 && (i_10 == 0 || i_10 s< i_11 || i_10 s> i_11))
        i_10 = i_11
        sub_142100f30(&var_a8)
    else if (i_10 s> 0)
        int64_t r8_2 = 0
        uint64_t i_9 = zx.q(i_10)
        uint64_t i
        
        do
            void* rcx_10 = &var_70
            int64_t rdx_9 = sx.q(i_10 - 1) & r8_2
            
            if (var_68_1 != 0)
                rcx_10 = var_68_1
            
            r8_2 += 1
            *(rcx_10 + (rdx_9 << 2)) = 0xffffffff
            i = i_9
            i_9 -= 1
        while (i != 1)
    
    int32_t r11_1 = *(arg1 + 0x58)
    void* r9_1 = arg1 + 0x40
    int32_t var_f4_1 = 1
    int32_t rcx_11 = 0
    int32_t var_f8_1 = 0
    int32_t r8_3 = 0
    void* var_f0 = r9_1
    int32_t var_e8_1 = 0xffffffff
    int64_t var_e4_1 = 0
    
    if (r11_1 != 0)
        void* rax_12 = *(r9_1 + 0x10)
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_12 = *r9_1
        
        if (rdx_12 != 0)
        label_142102c7c:
            int32_t rax_19 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
            uint64_t rflags_3
            int32_t temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_19)
            int32_t var_f4_2 = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_4
            
            var_e4_1.d = r8_3 - rax_20 + 0x1f
            
            if (r8_3 - rax_20 + 0x1f s> r11_1)
                var_e4_1.d = r11_1
        else
            while (true)
                int64_t rdx_13 = sx.q(rcx_11)
                r8_3 += 0x20
                rcx_11 += 1
                var_e4_1:4.d = r8_3
                var_f8_1 = rcx_11
                
                if (rdx_13.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
                var_e8_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_142102c7c
            
            var_e4_1.d = r11_1
    
    void* var_100_1 = arg1 + 0x30
    void* var_128 = arg1 + 0x30
    int128_t var_110_1 = 0xffffffff
    int16_t var_c0_1 = 0
    int128_t zmm3 = var_f8_1.o
    int128_t zmm2 = var_128.o
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm0_1
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_f8_1.o = zmm2
    var_e8_1.o = zmm3
    int128_t var_d8_1 = zmm0_1
    var_110_1 = zmm0_1
    int32_t i_6
    int64_t* var_b8
    int32_t var_a0_1
    void* var_88
    
    if (_mm_bsrli_si128(0xffffffff, 4) s< *(zmm3.q + 0x18))
        int32_t i_1 = i_6
        
        do
            zmm6 = zx.o(0)
            zmm7 = zx.o(0)
            __builtin_memset(&var_128, 0, 0x30)
            void* rdi_3 = sx.q(i_1) * 0x50 + *var_f8_1.q
            int64_t* rcx_14 = *(rdi_3 + 0x10)
            
            if (rcx_14 != 0)
                void* rax_27 = (*(*rcx_14 + 0x38))(rcx_14)
                
                if (rax_27 != 0)
                    var_128 = sub_1420e4c50(rax_27, 0)
                    int128_t var_120_1
                    var_120_1.q = sub_1420e4c50(rax_27, 1)
                    var_120_1:8.q = sub_140963350(rax_27)
                    int64_t rax_31 = sub_1405f7040(rax_27)
                    zmm6 = var_128.o
                    var_110_1.q = rax_31
                    zmm7 = var_120_1
                    var_110_1:8.q = *(rax_27 + 0x48)
            
            int64_t* rcx_19 = *(rdi_3 + 0x18)
            
            if (rcx_19 != 0)
                void* rax_34 = (*(*rcx_19 + 0x30))(rcx_19)
                
                if (rax_34 != 0)
                    int64_t var_100_2 = sub_1408d7580(rax_34)
            
            int64_t rdi_4
            
            if (var_74_2 == 0)
                rdi_4 = zx.q(var_a0_1)
                int32_t rax_37 = (rdi_4 + 1).d
                var_a0_1 = rax_37
                
                if (rax_37 s> var_9c.d)
                    sub_1406798d0(&var_a8)
                
                sub_1405b2ba0(&var_9c:4, 0)
            else
                rdi_4 = sx.q(var_78_2)
                int64_t r8_5 = var_a8
                bool cond:5_1 = var_74_2 == 1
                int64_t rax_36 = sx.q(*(rdi_4 * 0x38 + r8_5 + 4))
                var_78_2 = rax_36.d
                var_74_2 -= 1
                
                if (not(cond:5_1))
                    *(rax_36 * 0x38 + r8_5) = 0xffffffff
            
            void* rcx_25 = &var_9c:4
            
            if (var_88 != 0)
                rcx_25 = var_88
            
            int32_t rax_39 = rdi_4.d
            
            if (rdi_4.d s< 0)
                rax_39 = (rdi_4 + 0x1f).d
            
            void* r8_6 = rcx_25 + (sx.q(rax_39 s>> 5) << 2)
            *r8_6 |= 1 << (rdi_4.b & 0x1f)
            int128_t* rbx_7 = sx.q(rdi_4.d) * 0x38 + var_a8
            *rbx_7 = zmm6
            rbx_7[1] = zmm7
            rbx_7[2] = var_110_1
            rbx_7[3].d = 0xffffffff
            sub_1420f7ff0(&var_a8, &var_b8, sub_1420fc1f0(rbx_7), rbx_7, rdi_4.d, nullptr)
            var_e4_1:4.d &= not.d(var_f0:4.d)
            sub_14059bdd0(&var_f0)
            i_1 = i_6
        while (i_1 s< *(var_e8_1.q + 0x18))
        
        if (var_c0_1.b != 0 && var_c0_1:1.b != 0)
            sub_1420f6fd0(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 1)
    
    int32_t rsi_2 = var_a0_1 - var_74_2
    int32_t i_8 = *(arg1 + 0x220)
    void*** rbx_8 = *(arg1 + 0x218)
    
    if (i_8 != 0)
        int32_t i_2
        
        do
            sub_1420d95f0(rbx_8)
            rbx_8 = &rbx_8[0xa]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    int32_t rdi_5 = 0
    *(arg1 + 0x220) = 0
    
    if (*(arg1 + 0x224) != rsi_2)
        sub_1405a5310(arg1 + 0x218, rsi_2)
        rdi_5 = *(arg1 + 0x220)
    
    int32_t i_7 = var_a0_1 - var_74_2
    int32_t rax_47 = rdi_5 + i_7
    *(arg1 + 0x220) = rax_47
    
    if (rax_47 s> *(arg1 + 0x224))
        sub_1405c5060(arg1 + 0x218)
    
    void* rcx_37 = sx.q(rdi_5) * 0x50 + *(arg1 + 0x218)
    
    if (i_7 != 0)
        void* rax_49 = rcx_37 + 0x20
        int32_t i_3
        
        do
            *(rax_49 - 0x18) = 0xffffffff
            rcx_37 += 0x50
            *(rax_49 - 0x14) = 4
            rax_49 += 0x50
            *(rcx_37 - 0x50) = &data_1432c1818
            *(rax_49 - 0x60) = 0
            *(rax_49 - 0x58) = 0
            __builtin_memset(rax_49 - 0x50, 0, 0x30)
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    int32_t r10_1 = *(arg1 + 0x58)
    void* r9_3 = arg1 + 0x40
    int32_t var_f4_3 = 1
    int32_t rcx_38 = 0
    int32_t var_f8_2 = 0
    int32_t r8_9 = 0
    var_f0 = r9_3
    int32_t var_e8_2 = 0xffffffff
    int64_t var_e4_2 = 0
    
    if (r10_1 != 0)
        void* rax_50 = *(r9_3 + 0x10)
        
        if (rax_50 != 0)
            r9_3 = rax_50
        
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(r10_1 - 1)
        int32_t rdx_26 = *r9_3
        
        if (rdx_26 != 0)
        label_14210303c:
            int32_t rax_57 = neg.d(rdx_26) & rdx_26
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_57)
            int32_t var_f4_4 = rax_57
            int32_t r15_1
            
            if (rax_57 == 0)
                r15_1 = 0x20
            else
                r15_1 = 0x1f - temp0_7
            
            var_e4_2.d = r8_9 - r15_1 + 0x1f
            
            if (r8_9 - r15_1 + 0x1f s> r10_1)
                var_e4_2.d = r10_1
        else
            while (true)
                int64_t rdx_27 = sx.q(rcx_38)
                r8_9 += 0x20
                rcx_38 += 1
                var_e4_2:4.d = r8_9
                var_f8_2 = rcx_38
                
                if (rdx_27.d s>= (temp12_1 + (temp11_1 & 0x1f)) s>> 5)
                    break
                
                rdx_26 = *(r9_3 + (rdx_27 << 2) + 4)
                var_e8_2 = 0xffffffff
                
                if (rdx_26 != 0)
                    goto label_14210303c
            
            var_e4_2.d = r10_1
    
    void* var_100_3 = arg1 + 0x30
    var_128 = arg1 + 0x30
    int128_t var_110_2 = 0xffffffff
    int128_t var_120_2 = var_f8_2.o
    int16_t var_c0_2 = 0
    zmm2 = var_128.o
    var_e8_2.o = var_120_2
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_f8_2.o = zmm2
    var_110_2 = zmm0_1
    int128_t var_d8_2 = zmm0_1
    
    if (_mm_bsrli_si128(0xffffffff, 4) s< *(var_120_2.q + 0x18))
        int32_t i_4 = i_6
        
        do
            zmm6 = zx.o(0)
            zmm7 = zx.o(0)
            __builtin_memset(&var_128, 0, 0x30)
            int64_t* rcx_43 = *var_f8_2.q + 0x10 + sx.q(i_4) * 0x50
            var_b8 = rcx_43
            int64_t* rcx_44 = *rcx_43
            void* rax_63
            
            if (rcx_44 != 0)
                rax_63 = (*(*rcx_44 + 0x38))(rcx_44)
            
            int64_t rsi_3
            int64_t rdi_6
            void* r12_2
            int64_t r14_1
            int64_t r15_2
            
            if (rcx_44 == 0 || rax_63 == 0)
                r12_2 = var_128
                rdi_6 = var_120_2.q
                rsi_3 = var_120_2:8.q
                r14_1 = var_110_2.q
                r15_2 = var_110_2:8.q
            else
                void* rax_64 = sub_1420e4c50(rax_63, 0)
                var_128 = rax_64
                r12_2 = rax_64
                int64_t rax_65 = sub_1420e4c50(rax_63, 1)
                var_120_2.q = rax_65
                rdi_6 = rax_65
                int64_t rax_66 = sub_140963350(rax_63)
                var_120_2:8.q = rax_66
                rsi_3 = rax_66
                int64_t rax_67 = sub_1405f7040(rax_63)
                r15_2 = *(rax_63 + 0x48)
                r14_1 = rax_67
                zmm6 = var_128.o
                var_110_2.q = rax_67
                zmm7 = var_120_2
                var_110_2:8.q = r15_2
            
            int64_t* rcx_50 = var_b8[1]
            void* rax_69
            
            if (rcx_50 != 0)
                rax_69 = (*(*rcx_50 + 0x30))(rcx_50)
            
            void* rbx_11
            
            if (rcx_50 == 0 || rax_69 == 0)
                rbx_11 = var_100_3
            else
                void* rax_70 = sub_1408d7580(rax_69)
                rbx_11 = rax_70
                var_100_3 = rax_70
            
            int32_t rax_76
            
            if (var_a0_1 == var_74_2)
            label_142103254:
                rax_76 = -1
            else
                int64_t rdx_31 = sx.q(sub_1420fc1f0(&var_128)) & sx.q(i_10 - 1)
                void* rcx_54 = &var_70
                
                if (var_68_1 != 0)
                    rcx_54 = var_68_1
                
                rax_76 = *(rcx_54 + (rdx_31 << 2))
                
                if (rax_76 == 0xffffffff)
                label_142103254_1:
                    rax_76 = -1
                else
                    int64_t r8_11 = var_a8
                    
                    while (true)
                        int64_t* rdx_32 = sx.q(rax_76) * 0x38
                        int64_t rcx_55
                        
                        if (*(rdx_32 + r8_11) != r12_2 || *(rdx_32 + r8_11 + 8) != rdi_6
                                || *(rdx_32 + r8_11 + 0x10) != rsi_3
                                || *(rdx_32 + r8_11 + 0x18) != r14_1
                                || *(rdx_32 + r8_11 + 0x20) != r15_2
                                || *(rdx_32 + r8_11 + 0x28) != rbx_11)
                            rcx_55.b = 0
                        else
                            rcx_55.b = 1
                        
                        if (rcx_55.b != 0)
                            break
                        
                        rax_76 = *(rdx_32 + r8_11 + 0x30)
                        
                        if (rax_76 == 0xffffffff)
                            goto label_142103254_1
            
            int64_t rax_77 = *(arg1 + 0x218)
            int64_t rdx_34 = sx.q(rax_76) * 0x50
            *(rax_77 + rdx_34 + 0x10) = zmm6
            *(rax_77 + rdx_34 + 0x20) = zmm7
            *(rax_77 + rdx_34 + 0x30) = var_110_2
            var_b8[6] = *(arg1 + 0x218) + rdx_34
            var_e4_2:4.d &= not.d(var_f0:4.d)
            sub_14059bdd0(&var_f0)
            i_4 = i_6
        while (i_4 s< *(var_e8_2.q + 0x18))
        
        if (var_c0_2.b != 0 && var_c0_2:1.b != 0)
            sub_1420f6fd0(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 1)
    
    int64_t* i_5 = *(arg1 + 0x218)
    
    for (void* rdi_9 = &i_5[sx.q(*(arg1 + 0x220)) * 0xa]; i_5 != rdi_9; i_5 = &i_5[0xa])
        sub_141997e80(i_5)
    
    int32_t var_60_1 = 0
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    int32_t var_a0_2 = 0
    
    if (var_9c.d != 0)
        sub_140679b80(&var_a8, 0)
    
    int32_t var_78_3 = 0xffffffff
    int32_t var_74_3 = 0
    result = sub_14059a8e0(&var_9c:4, 0)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)
    
    int64_t rcx_66 = var_a8
    
    if (rcx_66 != 0)
        result = sub_140a74f90(rcx_66)

__security_check_cookie(result_1 ^ &var_158)
return result
