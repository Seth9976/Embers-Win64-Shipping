// 函数: sub_140b86a20
// 地址: 0x140b86a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1
int64_t* rax = sub_140b7c590()
void* rax_1 = (*(*rax + 8))(rax)
uint64_t var_2f8 = 0
void* r15 = rax_1
int32_t i_12 = 0
uint64_t rsi = 0
int32_t i_16 = 0
int16_t* var_368

if (rax_1 != 0)
    int64_t var_68
    int64_t* rax_2 = sub_140b256a0(&var_68)
    int16_t* rdi_1
    
    if (rax_2[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *rax_2
    
    int32_t rax_3 = 0
    var_368 = nullptr
    int16_t* r14_1 = nullptr
    int64_t var_360_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_368, rbx_1.d + 1)
            rax_3 = var_360_1:4.d
            rsi = zx.q(var_360_1.d)
            r14_1 = var_368
        
        rsi = zx.q(rsi.d + rbx_1.d + 1)
        var_360_1.d = rsi.d
        
        if (rsi.d s> rax_3)
            sub_140594770(&var_368)
            rsi = zx.q(var_360_1.d)
            r14_1 = var_368
        
        UnDecorator::getReferenceType(r14_1, rdi_1, (rbx_1.d + 1) * 2)
    
    void** const var_100 = &data_142e80510
    uint64_t* var_f8_1 = &var_2f8
    sub_140a464c0()
    int16_t* const rdx_3 = &data_142d40450
    
    if (rsi.d != 0)
        rdx_3 = r14_1
    
    char const (* r9_1)[0x4] = data_14399ea08
    (*(r9_1 + 0x90))(&data_14399ea08, rdx_3, &var_100, r9_1)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int64_t rcx_6 = var_68
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rsi = var_2f8
    i_16 = i_12

int16_t* var_378 = nullptr
int32_t var_370 = 0
void* var_398
void* var_388
void* var_358
void* var_348
void* var_338
void* var_328
void* var_318
void* var_308
int64_t* var_2d8
int128_t var_2d0
int64_t var_2c0
int128_t var_1e8
uint64_t arg_18

if (i_16 != 0)
    int64_t r14_9 = (sx.q(i_16) << 4) + rsi
    
    if (rsi != r14_9)
        do
            uint64_t i_7 = 0
            int32_t var_248_1 = 0
            void var_f0
            sub_140a96170(&var_f0)
            
            if (sub_140b7ed00(&i_7, rsi, &var_f0) == 0)
                int64_t* rax_100 = sub_140ac6680(&var_f0)
                int16_t* const r9_20
                
                if (rax_100[1].d == 0)
                    r9_20 = &data_142d40450
                else
                    r9_20 = *rax_100
                
                sub_140af98a0("Unknown", 0x149, u"%s", r9_20)
                sub_140afbb40()
            
            int64_t var_110
            sub_140b13b30(&var_110)
            int64_t var_180
            sub_140b13d10(&var_180)
            int64_t var_190
            sub_140b14620(&var_190)
            int64_t var_1a0
            sub_140b25370(&var_1a0)
            uint64_t i = i_7
            
            for (int64_t rdi_12 = sx.q(var_248_1) * 0x1c8 + i; i != rdi_12; i += 0x1c8)
                char rax_102 = sub_140a32a50(i, &var_110, 1)
                char rax_103
                
                if (rax_102 == 0)
                    rax_103 = sub_140a32a50(i, &var_180, 1)
                
                int32_t r8_36
                
                if (rax_102 != 0 || rax_103 != 0)
                    r8_36 = 0
                else
                    r8_36 = 1
                    
                    if (sub_140a32a50(i, &var_190, 1) == 0)
                        r8_36 = 2
                        
                        if (sub_140a32a50(i, &var_1a0, 1) != 0)
                            r8_36 = 4
                
                sub_140b7bde0(i, i + 0x10, r8_36, r12, &var_378)
            
            int64_t rcx_121 = var_1a0
            
            if (rcx_121 != 0)
                sub_140a74f90(rcx_121)
            
            int64_t rcx_122 = var_190
            
            if (rcx_122 != 0)
                sub_140a74f90(rcx_122)
            
            int64_t rcx_123 = var_180
            
            if (rcx_123 != 0)
                sub_140a74f90(rcx_123)
            
            int64_t rcx_124 = var_110
            
            if (rcx_124 != 0)
                sub_140a74f90(rcx_124)
            
            int64_t* var_e8
            
            if (var_e8 != 0)
                var_e8[1].d -= 1
                
                if (var_e8[1].d == 1)
                    (**var_e8)(var_e8)
                    int32_t rax_108 = *(var_e8 + 0xc)
                    *(var_e8 + 0xc) -= 1
                    
                    if (rax_108 == 1)
                        (*(*var_e8 + 8))(var_e8, 1)
            
            sub_140b78630(&i_7)
            rsi += 0x10
        while (rsi != r14_9)
        
    label_140b875fb:
        r15 = rax_1
    
    if (r15 != 0)
        int64_t var_98
        sub_140b88720(sub_140b25370(&var_98), 4, r12, &var_378)
        int64_t rcx_99 = var_98
        
        if (rcx_99 != 0)
            sub_140a74f90(rcx_99)
        
        int64_t* i_1 = *(r15 + 0x118)
        
        for (void* rdi_10 = &i_1[sx.q(*(r15 + 0x120)) * 2]; i_1 != rdi_10; i_1 = &i_1[2])
            sub_140b88720(i_1, 3, r12, &var_378)
        
        int64_t var_88
        char rax_88 = sub_140b12f50(sub_140b14810(&var_88))
        int64_t rcx_103 = var_88
        
        if (rcx_103 != 0)
            sub_140a74f90(rcx_103)
        
        if (rax_88 != 0)
            int64_t var_78
            sub_140b88720(sub_140b14810(&var_78), 1, r12, &var_378)
            int64_t rcx_106 = var_78
            
            if (rcx_106 != 0)
                sub_140a74f90(rcx_106)
else
    int64_t var_d8
    int64_t rdx_4
    int512_t zmm2_1
    rdx_4, zmm2_1 = sub_140b88720(sub_140b13e60(&var_d8), 0, r12, &var_378)
    int64_t rcx_9 = var_d8
    
    if (rcx_9 != 0)
        rcx_9, rdx_4 = sub_140a74f90(rcx_9)
    
    sub_140b17fe0(rcx_9, rdx_4, zmm2_1)
    int32_t r11_1 = data_1439a49c8.d
    int32_t rcx_10 = 0
    int32_t var_240_1 = 0
    int32_t var_23c_1 = 1
    int32_t r8_5 = 0
    int32_t var_230_1 = 0xffffffff
    void* var_238_1 = &data_1439a49b0
    int64_t var_22c_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = data_1439a49c0
        void* r9_3 = &data_1439a49b0
        
        if (rax_5 != 0)
            r9_3 = rax_5
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *r9_3
        
        if (rdx_7 != 0)
        label_140b86c71:
            int32_t rax_12 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_23c_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            var_22c_1.d = r8_5 - rax_13 + 0x1f
            
            if (r8_5 - rax_13 + 0x1f s> r11_1)
                var_22c_1.d = r11_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_10)
                r8_5 += 0x20
                rcx_10 += 1
                var_22c_1:4.d = r8_5
                var_240_1 = rcx_10
                
                if (rdx_8.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_3 + (rdx_8 << 2) + 4)
                int32_t var_230_2 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_140b86c71
            
            var_22c_1.d = r11_1
    
    int32_t rdx_9 = data_1439a49c8.d
    var_2d8 = &data_1439a49a0
    var_2d0 = var_240_1.o
    int32_t rdi_2 = 0xffffffff << (rdx_9.b & 0x1f)
    int32_t r8_8 = rdx_9 s>> 5
    int32_t r9_5 = rdx_9 & 0xffffffe0
    int32_t var_160_1 = rdi_2
    int32_t var_15c_1 = rdx_9
    var_2c0 = 0xffffffff
    int64_t var_1a8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_1c8 = var_2d8.o
    int128_t var_2c8
    int128_t var_1b8_1 = var_2c8
    
    if (rdx_9 != r11_1)
        void* rax_15 = data_1439a49c0
        void* r10_1 = &data_1439a49b0
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_13 = *(r10_1 + (sx.q(r8_8) << 2)) & rdi_2
        int32_t var_15c_3
        
        if (rdx_13 != 0)
        label_140b86d65:
            int32_t rax_22 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rax_23
            
            if (rax_22 == 0)
                rax_23 = 0x20
            else
                rax_23 = 0x1f - temp0_3
            
            int32_t var_15c_2 = r9_5 - rax_23 + 0x1f
            
            if (r9_5 - rax_23 + 0x1f s> r11_1)
                var_15c_3 = r11_1
        else
            while (true)
                int64_t rcx_15 = sx.q(r8_8)
                r9_5 += 0x20
                r8_8 += 1
                
                if (rcx_15.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_1 + (rcx_15 << 2) + 4)
                var_160_1 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_140b86d65
            
            var_15c_3 = r11_1
    
    int64_t* rsi_1 = arg1
    uint64_t r12_2 = var_160_1.q u>> 0x20
    arg_18 = r12_2
    
    while (true)
        int64_t rax_25 = sx.q(var_1b8_1:0xc.d)
        int64_t rcx_17 = var_1c8.q
        
        if (rax_25.d == r12_2.d && var_1b8_1.q == &data_1439a49b0 && rcx_17 == &data_1439a49a0)
            break
        
        int64_t* r14_3 = rax_25 * 0x58 + *rcx_17
        void* rbx_4 = r14_3[7]
        void* rsi_4 = (sx.q(r14_3[8].d) << 4) + rbx_4
        
        if (rbx_4 != rsi_4)
            do
                int64_t var_c8
                int64_t* rax_26 = sub_140b13d10(&var_c8)
                int32_t rcx_19 = *(rbx_4 + 8)
                int32_t rdi_3 = rcx_19 - 1
                
                if (rcx_19 == 0)
                    rdi_3 = 0
                
                int32_t rcx_20
                
                if (rax_26[1].d == 0)
                    rcx_20 = 1
                
                if (rax_26[1].d != 0 || rdi_3 == 0xffffffff)
                    rcx_20 = 0
                
                var_388 = nullptr
                var_388 = *rax_26
                *rax_26 = 0
                int32_t rax_28 = rax_26[1].d
                int32_t rax_29 = *(rax_26 + 0xc)
                rax_26[1] = 0
                int32_t rdx_17 = rax_28 + rdi_3 + 1 + rcx_20
                
                if (rdx_17 s> rax_29)
                    sub_1405947f0(&var_388, rdx_17)
                
                int32_t rcx_23 = sub_140a2cf70(&var_388, *rbx_4, rdi_3)
                int32_t var_300_1 = rax_28
                var_308 = var_388
                int32_t rdx_20 = rax_28 + sbb.d(rcx_23, rcx_23, rax_28 != 0) + 9
                var_388 = nullptr
                int32_t var_2fc_1 = rax_29
                int32_t var_380_1
                var_380_1.q = 0
                
                if (rdx_20 s> rax_29)
                    sub_1405947f0(&var_308, rdx_20)
                
                sub_140a2cf70(&var_308, u"Plugins", 7)
                sub_140b88720(&var_308, 0, arg1, &var_378)
                void* rcx_29 = var_308
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                void* rcx_30 = var_388
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                int64_t rcx_31 = var_c8
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                rbx_4 += 0x10
            while (rbx_4 != rsi_4)
            
            r12_2 = arg_18
        
        int64_t var_b8
        int64_t* rax_33 = sub_140b13d10(&var_b8)
        int32_t rcx_33 = r14_3[1].d
        int32_t rbx_5 = rcx_33 - 1
        
        if (rcx_33 == 0)
            rbx_5 = 0
        
        int32_t rcx_34
        
        if (rax_33[1].d == 0)
            rcx_34 = 1
        
        if (rax_33[1].d != 0 || rbx_5 == 0xffffffff)
            rcx_34 = 0
        
        var_398 = nullptr
        var_398 = *rax_33
        *rax_33 = 0
        int32_t rax_35 = rax_33[1].d
        int32_t rax_36 = *(rax_33 + 0xc)
        rax_33[1] = 0
        int32_t rdx_24 = rax_35 + rbx_5 + 1 + rcx_34
        
        if (rdx_24 s> rax_36)
            sub_1405947f0(&var_398, rdx_24)
        
        int32_t rcx_37 = sub_140a2cf70(&var_398, *r14_3, rbx_5)
        int32_t var_288_1 = rax_35
        void* var_290 = var_398
        int32_t rdx_27 = rax_35 + sbb.d(rcx_37, rcx_37, rax_35 != 0) + 9
        var_398 = nullptr
        int32_t var_284_1 = rax_36
        int32_t var_390_1
        var_390_1.q = 0
        
        if (rdx_27 s> rax_36)
            sub_1405947f0(&var_290, rdx_27)
        
        sub_140a2cf70(&var_290, u"Plugins", 7)
        rsi_1 = arg1
        sub_140b88720(&var_290, 0, rsi_1, &var_378)
        void* rcx_43 = var_290
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        void* rcx_44 = var_398
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        int64_t rcx_45 = var_b8
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        var_1b8_1:8.d &= not.d(var_1c8:0xc.d)
        sub_14059bdd0(&var_1c8:8)
    
    if (rax_1 != 0)
        int64_t var_a8
        sub_140b1a660(&var_318, sub_140b1aa20(&var_a8))
        int64_t rcx_49 = var_a8
        
        if (rcx_49 != 0)
            rcx_49 = sub_140a74f90(rcx_49)
        
        void* rbx_6 = var_318
        int32_t var_310
        int32_t var_278_1 = var_310
        int64_t var_280 = 0
        sub_1405a4c70(&var_280, sbb.d(rcx_49.d, rcx_49.d, var_310 != 0) + 9 + var_310, 0)
        memcpy(var_280, rbx_6, var_310 * 2)
        sub_140a2cf70(&var_280, u"Plugins", 7)
        int64_t rdx_32
        int512_t zmm2_2
        rdx_32, zmm2_2 = sub_140b88720(&var_280, 2, rsi_1, &var_378)
        int64_t rcx_55 = var_280
        
        if (rcx_55 != 0)
            rcx_55, rdx_32 = sub_140a74f90(rcx_55)
        
        sub_140b17fe0(rcx_55, rdx_32, zmm2_2)
        int32_t r11_2 = data_1439a49c8.d
        int32_t rcx_56 = 0
        var_368 = &data_1439a49a0
        int64_t* rsi_5 = &data_1439a49a0
        int32_t var_2b0_1 = 0
        int32_t r8_18 = 0
        int32_t var_2ac_1 = 1
        void* r13_1 = &data_1439a49b0
        void* var_2a8_1 = &data_1439a49b0
        int32_t var_2a0_1 = 0xffffffff
        int64_t var_29c_1 = 0
        
        if (r11_2 != 0)
            void* rax_45 = data_1439a49c0
            void* r9_10 = &data_1439a49b0
            
            if (rax_45 != 0)
                r9_10 = rax_45
            
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(r11_2 - 1)
            int32_t rdx_35 = *r9_10
            
            if (rdx_35 != 0)
            label_140b8719e:
                int32_t rax_52 = neg.d(rdx_35) & rdx_35
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_52)
                int32_t var_2ac_2 = rax_52
                int32_t rax_53
                
                if (rax_52 == 0)
                    rax_53 = 0x20
                else
                    rax_53 = 0x1f - temp0_4
                
                var_29c_1.d = r8_18 - rax_53 + 0x1f
                
                if (r8_18 - rax_53 + 0x1f s> r11_2)
                    var_29c_1.d = r11_2
            else
                while (true)
                    int64_t rdx_36 = sx.q(rcx_56)
                    r8_18 += 0x20
                    rcx_56 += 1
                    var_29c_1:4.d = r8_18
                    var_2b0_1 = rcx_56
                    
                    if (rdx_36.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                        var_29c_1.d = r11_2
                        break
                    
                    rdx_35 = *(r9_10 + (rdx_36 << 2) + 4)
                    int32_t var_2a0_2 = 0xffffffff
                    
                    if (rdx_35 != 0)
                        goto label_140b8719e
        
        int32_t rdx_37 = data_1439a49c8.d
        var_2d8 = &data_1439a49a0
        var_2d0 = var_2b0_1.o
        int32_t rdi_5 = 0xffffffff << (rdx_37.b & 0x1f)
        int32_t r8_21 = rdx_37 s>> 5
        int32_t r9_12 = rdx_37 & 0xffffffe0
        int32_t var_140_1 = rdi_5
        int32_t var_13c_1 = rdx_37
        var_2c0 = 0xffffffff
        int64_t var_1d8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        void* var_1f0
        var_1f0.o = var_2d8.o
        var_1e8 = var_2c8
        
        if (rdx_37 != r11_2)
            void* rax_55 = data_1439a49c0
            void* r10_2 = &data_1439a49b0
            
            if (rax_55 != 0)
                r10_2 = rax_55
            
            int32_t temp15_1
            int32_t temp16_1
            temp15_1:temp16_1 = sx.q(r11_2 - 1)
            int32_t rdx_41 = *(r10_2 + (sx.q(r8_21) << 2)) & rdi_5
            int32_t var_13c_3
            
            if (rdx_41 != 0)
            label_140b87295:
                int32_t rax_62 = neg.d(rdx_41) & rdx_41
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_62)
                int32_t rax_63
                
                if (rax_62 == 0)
                    rax_63 = 0x20
                else
                    rax_63 = 0x1f - temp0_6
                
                int32_t var_13c_2 = r9_12 - rax_63 + 0x1f
                
                if (r9_12 - rax_63 + 0x1f s> r11_2)
                    var_13c_3 = r11_2
            else
                while (true)
                    int64_t rcx_61 = sx.q(r8_21)
                    r9_12 += 0x20
                    r8_21 += 1
                    
                    if (rcx_61.d s>= (temp16_1 + (temp15_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_41 = *(r10_2 + (rcx_61 << 2) + 4)
                    var_140_1 = 0xffffffff
                    
                    if (rdx_41 != 0)
                        goto label_140b87295
                
                var_13c_3 = r11_2
        
        uint64_t r12_4 = var_140_1.q u>> 0x20
        arg_18 = r12_4
        
        while (true)
            int64_t rax_65 = sx.q(var_1d8:4.d)
            void* rcx_63 = var_1f0
            
            if (rax_65.d == r12_4.d && var_1e8:8.q == r13_1 && rcx_63 == rsi_5)
                break
            
            int64_t* r15_3 = rax_65 * 0x58 + *rcx_63
            int16_t** rsi_6 = r15_3[7]
            void* r14_6 = &rsi_6[sx.q(r15_3[8].d) * 2]
            
            if (rsi_6 != r14_6)
                do
                    void* rbx_8 = var_318
                    var_348 = nullptr
                    sub_1405a4c70(&var_348, 
                        sbb.d(rcx_63.d, rcx_63.d, var_310 != 0) + 0xb + var_310, 0)
                    memcpy(var_348, rbx_8, var_310 * 2)
                    sub_140a2cf70(&var_348, u"Platforms", 9)
                    int32_t rax_68 = rsi_6[1].d
                    int32_t rbx_9 = rax_68 - 1
                    
                    if (rax_68 == 0)
                        rbx_9 = 0
                    
                    int32_t rcx_68
                    
                    if (var_310 == 0)
                        rcx_68 = var_310 + 2
                    
                    if (var_310 != 0 || rbx_9 == 0xffffffff)
                        rcx_68 = 1
                    
                    var_328 = var_348
                    int32_t rdx_46 = rbx_9 + rcx_68 + var_310
                    var_348 = nullptr
                    int32_t var_340_1
                    var_340_1.q = 0
                    int32_t var_33c
                    
                    if (rdx_46 s> var_33c)
                        sub_1405947f0(&var_328, rdx_46)
                    
                    int32_t rcx_71 = sub_140a2cf70(&var_328, *rsi_6, rbx_9)
                    int32_t var_268_1 = var_310
                    void* var_270 = var_328
                    int32_t rdx_49 = var_310 + sbb.d(rcx_71, rcx_71, var_310 != 0) + 9
                    var_328 = nullptr
                    int32_t var_264_1 = var_33c
                    int32_t var_320_1
                    var_320_1.q = 0
                    
                    if (rdx_49 s> var_33c)
                        sub_1405947f0(&var_270, rdx_49)
                    
                    sub_140a2cf70(&var_270, u"Plugins", 7)
                    sub_140b88720(&var_270, 2, arg1, &var_378)
                    void* rcx_77 = var_270
                    
                    if (rcx_77 != 0)
                        sub_140a74f90(rcx_77)
                    
                    void* rcx_78 = var_328
                    
                    if (rcx_78 != 0)
                        sub_140a74f90(rcx_78)
                    
                    rcx_63 = var_348
                    
                    if (rcx_63 != 0)
                        rcx_63 = sub_140a74f90(rcx_63)
                    
                    rsi_6 = &rsi_6[2]
                while (rsi_6 != r14_6)
                
                r12_4 = arg_18
                r13_1 = var_2a8_1
            
            void* rbx_10 = var_318
            var_358 = nullptr
            sub_1405a4c70(&var_358, sbb.d(rcx_63.d, rcx_63.d, var_310 != 0) + 0xb + var_310, 0)
            memcpy(var_358, rbx_10, var_310 * 2)
            sub_140a2cf70(&var_358, u"Platforms", 9)
            int32_t rax_77 = r15_3[1].d
            int32_t rbx_11 = rax_77 - 1
            
            if (rax_77 == 0)
                rbx_11 = 0
            
            int32_t rcx_83
            
            if (var_310 == 0)
                rcx_83 = 2
            
            if (var_310 != 0 || rbx_11 == 0xffffffff)
                rcx_83 = 1
            
            int32_t rdx_55 = var_310 + rbx_11 + rcx_83
            var_338 = var_358
            var_358 = nullptr
            int32_t var_350_1
            var_350_1.q = 0
            int32_t var_34c
            
            if (rdx_55 s> var_34c)
                sub_1405947f0(&var_338, rdx_55)
            
            int32_t rcx_86 = sub_140a2cf70(&var_338, *r15_3, rbx_11)
            int32_t var_258_1 = var_310
            void* var_260 = var_338
            int32_t rdx_58 = var_310 + sbb.d(rcx_86, rcx_86, var_310 != 0) + 9
            var_338 = nullptr
            int32_t var_254_1 = var_34c
            int32_t var_330_1
            var_330_1.q = 0
            
            if (rdx_58 s> var_34c)
                sub_1405947f0(&var_260, rdx_58)
            
            sub_140a2cf70(&var_260, u"Plugins", 7)
            sub_140b88720(&var_260, 2, arg1, &var_378)
            void* rcx_92 = var_260
            
            if (rcx_92 != 0)
                sub_140a74f90(rcx_92)
            
            void* rcx_93 = var_338
            
            if (rcx_93 != 0)
                sub_140a74f90(rcx_93)
            
            void* rcx_94 = var_358
            
            if (rcx_94 != 0)
                sub_140a74f90(rcx_94)
            
            var_1d8.d &= not.d(var_1e8:4.d)
            sub_14059bdd0(&var_1e8)
            rsi_5 = var_368
        
        void* rcx_96 = var_318
        
        if (rcx_96 != 0)
            sub_140a74f90(rcx_96)
        
        r12 = arg1
        goto label_140b875fb

int32_t r11_3 = *(arg2 + 0x28)
int32_t var_220 = 0
int32_t rcx_107 = 0
int32_t var_21c = 1
int32_t r8_34 = 0
void* var_218 = arg2 + 0x10
int32_t var_210 = 0xffffffff
int64_t var_20c = 0

if (r11_3 != 0)
    void* rax_90 = *(arg2 + 0x20)
    void* r9_19 = arg2 + 0x10
    
    if (rax_90 != 0)
        r9_19 = rax_90
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11_3 - 1)
    int32_t rdx_61 = *r9_19
    
    if (rdx_61 != 0)
    label_140b8778b:
        int32_t rax_97 = neg.d(rdx_61) & rdx_61
        uint64_t rflags_5
        int32_t temp0_7
        temp0_7, rflags_5 = _bit_scan_reverse(rax_97)
        int32_t var_21c_1 = rax_97
        int32_t rax_98
        
        if (rax_97 == 0)
            rax_98 = 0x20
        else
            rax_98 = 0x1f - temp0_7
        
        var_20c.d = r8_34 - rax_98 + 0x1f
        
        if (r8_34 - rax_98 + 0x1f s> r11_3)
            var_20c.d = r11_3
    else
        while (true)
            int64_t rdx_62 = sx.q(rcx_107)
            r8_34 += 0x20
            rcx_107 += 1
            var_20c:4.d = r8_34
            var_220 = rcx_107
            
            if (rdx_62.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                var_20c.d = r11_3
                break
            
            rdx_61 = *(r9_19 + (rdx_62 << 2) + 4)
            int32_t var_210_1 = 0xffffffff
            
            if (rdx_61 != 0)
                goto label_140b8778b

int32_t rdx_69 = *(arg2 + 0x28)
var_1e8 = var_220.o
int32_t rsi_7 = 0xffffffff << (rdx_69.b & 0x1f)
int32_t r8_39 = rdx_69 s>> 5
int32_t r9_23 = rdx_69 & 0xffffffe0
int32_t var_120 = rsi_7
int32_t var_11c = rdx_69
int128_t var_1d8_1 = 0xffffffff
var_2c0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_2d8.o = arg2.o
int64_t var_2c8_1 = var_1e8.q

if (rdx_69 != r11_3)
    void* rax_111 = *(arg2 + 0x20)
    void* r10_3 = arg2 + 0x10
    
    if (rax_111 != 0)
        r10_3 = rax_111
    
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r11_3 - 1)
    int32_t rdx_73 = *(r10_3 + (sx.q(r8_39) << 2)) & rsi_7
    int32_t var_11c_2
    
    if (rdx_73 != 0)
    label_140b87ab5:
        int32_t rax_118 = neg.d(rdx_73) & rdx_73
        uint64_t rflags_6
        int32_t temp0_11
        temp0_11, rflags_6 = _bit_scan_reverse(rax_118)
        int32_t r14_10
        
        if (rax_118 == 0)
            r14_10 = 0x20
        else
            r14_10 = 0x1f - temp0_11
        
        int32_t var_11c_1 = r9_23 - r14_10 + 0x1f
        
        if (r9_23 - r14_10 + 0x1f s> r11_3)
            var_11c_2 = r11_3
    else
        while (true)
            int64_t rcx_131 = sx.q(r8_39)
            r9_23 += 0x20
            r8_39 += 1
            
            if (rcx_131.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                break
            
            rdx_73 = *(r10_3 + (rcx_131 << 2) + 4)
            var_120 = 0xffffffff
            
            if (rdx_73 != 0)
                goto label_140b87ab5
        
        var_11c_2 = r11_3

int64_t* r13_2 = arg1

while (true)
    int64_t rax_120 = sx.q(var_2c0:4.d)
    
    if (rax_120.d == (var_120.q u>> 0x20).d && var_2c8_1 == arg2 + 0x10 && var_2d8 == arg2)
        int16_t* r15_5 = var_378
        void* r12_8 = &r15_5[sx.q(var_370) * 8]
        var_368 = r15_5
        var_388 = r12_8
        
        while (r15_5 != r12_8)
            void* rsi_12 = *(r15_5 + 8)
            void* r14_11 = *r15_5
            var_398 = r14_11
            var_358 = rsi_12
            
            if (rsi_12 != 0)
                *(rsi_12 + 8) += 1
            
            int64_t rbx_15 = 0
            int64_t* var_2e8 = nullptr
            int32_t i_13 = 0
            int64_t var_58
            sub_140a2ccb0(sub_140b18970(&var_58, r14_11 + 0x18), &var_2e8, &data_142d99650, 1)
            int64_t rcx_138 = var_58
            
            if (rcx_138 != 0)
                sub_140a74f90(rcx_138)
            
            if (i_13 == 2)
                int64_t* rax_125 = var_2e8
                int64_t var_200 = 0
                int32_t rdi_15 = rax_125[1].d
                int64_t rsi_8 = *rax_125
                int32_t var_1f8_1 = rdi_15
                
                if (rdi_15 != 0)
                    sub_1405a4c70(&var_200, rdi_15, 0)
                    rbx_15 = var_200
                    memcpy(rbx_15, rsi_8, rdi_15 * 2)
                else
                    int32_t var_1f4_1 = 0
                
                sub_140926e00(r13_2, &arg_18, &var_200)
                int64_t rax_126 = sx.q(arg_18.d)
                void* const rcx_142
                
                if (rax_126.d == 0xffffffff)
                    rcx_142 = nullptr
                else
                    rcx_142 = *r13_2 + rax_126 * 0x28
                
                void* rsi_9 = rcx_142 + 0x10
                
                if (rcx_142 == 0)
                    rsi_9 = nullptr
                
                var_348 = rsi_9
                
                if (rbx_15 != 0)
                    sub_140a74f90(rbx_15)
                
                if (rsi_9 != 0)
                    void* r13_3 = *(r14_11 + 0x100)
                    int64_t rax_128 = sx.q(*(r14_11 + 0x108))
                    var_308 = r13_3
                    void* rax_131 = rax_128 * 0xa0 + r13_3
                    var_328 = rax_131
                    
                    if (r13_3 != rax_131)
                        void* rbx_16 = r13_3 + 0x28
                        var_318 = rbx_16
                        
                        do
                            void* rax_132 = *rsi_9
                            void* rcx_144 = *(rax_132 + 0x100)
                            void* arg_20 = rcx_144
                            void* rax_136 = sx.q(*(rax_132 + 0x108)) * 0xa0 + rcx_144
                            var_338 = rax_136
                            
                            if (rcx_144 != rax_136)
                                void* r14_12 = rcx_144 + 0x18
                                
                                do
                                    if (*rcx_144 == *r13_3 && *(r14_12 - 0x10) == *(rbx_16 - 0x20))
                                        int32_t rax_139 = *r14_12
                                        void* arg_10
                                        
                                        if (rax_139 s> 0)
                                            int32_t i_14 = *(rbx_16 - 0x10)
                                            arg_10.d = i_14
                                            
                                            if (i_14 != 0)
                                                int32_t rdx_81 = rax_139 + i_14
                                                
                                                if (rdx_81 s> *(r14_12 + 4))
                                                    sub_14061cd70(r14_12 - 8, rdx_81)
                                                    rax_139 = *r14_12
                                                
                                                void* rsi_10 = *(rbx_16 - 0x18)
                                                int32_t i_10 = i_14
                                                int64_t* rbx_19 =
                                                    (sx.q(rax_139) << 4) + *(r14_12 - 8)
                                                int32_t i_2
                                                
                                                do
                                                    *rbx_19 = 0
                                                    int32_t rdi_16 = *(rsi_10 + 8)
                                                    int64_t r12_9 = *rsi_10
                                                    rbx_19[1].d = rdi_16
                                                    
                                                    if (rdi_16 != 0)
                                                        sub_1405a4c70(rbx_19, rdi_16, 0)
                                                        memcpy(*rbx_19, r12_9, rdi_16 * 2)
                                                    else
                                                        *(rbx_19 + 0xc) = 0
                                                    
                                                    rbx_19 = &rbx_19[2]
                                                    rsi_10 += 0x10
                                                    i_2 = i_10
                                                    i_10 -= 1
                                                while (i_2 != 1)
                                                rbx_16 = var_318
                                                *r14_12 += arg_10.d
                                                rcx_144 = arg_20
                                        
                                        int32_t i_15 = *rbx_16
                                        arg_10.d = i_15
                                        
                                        if (i_15 != 0)
                                            int32_t rax_140 = *(r14_12 + 0x10)
                                            int32_t rdx_84 = rax_140 + i_15
                                            
                                            if (rdx_84 s> *(r14_12 + 0x14))
                                                sub_14061cd70(r14_12 + 8, rdx_84)
                                                rax_140 = *(r14_12 + 0x10)
                                            
                                            void* rsi_11 = *(rbx_16 - 8)
                                            int32_t i_11 = i_15
                                            int64_t* rbx_22 = (sx.q(rax_140) << 4) + *(r14_12 + 8)
                                            int32_t i_3
                                            
                                            do
                                                *rbx_22 = 0
                                                int32_t rdi_17 = *(rsi_11 + 8)
                                                int64_t r12_10 = *rsi_11
                                                rbx_22[1].d = rdi_17
                                                
                                                if (rdi_17 != 0)
                                                    sub_1405a4c70(rbx_22, rdi_17, 0)
                                                    memcpy(*rbx_22, r12_10, rdi_17 * 2)
                                                else
                                                    *(rbx_22 + 0xc) = 0
                                                
                                                rbx_22 = &rbx_22[2]
                                                rsi_11 += 0x10
                                                i_3 = i_11
                                                i_11 -= 1
                                            while (i_3 != 1)
                                            *(r14_12 + 0x10) += arg_10.d
                                            rcx_144 = arg_20
                                            rbx_16 = var_318
                                        
                                        r13_3 = var_308
                                    
                                    rcx_144 += 0xa0
                                    r14_12 += 0xa0
                                    arg_20 = rcx_144
                                while (rcx_144 != var_338)
                                
                                rsi_9 = var_348
                            
                            r13_3 += 0xa0
                            rbx_16 += 0xa0
                            var_308 = r13_3
                            var_318 = rbx_16
                        while (r13_3 != var_328)
                        
                        r14_11 = var_398
                        r15_5 = var_368
                        r12_8 = var_388
                    
                    if (*(*rsi_9 + 0xd8) != 0)
                        int64_t* i_4 = *(r14_11 + 0xd0)
                        
                        for (void* rdi_20 = &i_4[sx.q(*(r14_11 + 0xd8)) * 2]; i_4 != rdi_20; 
                                i_4 = &i_4[2])
                            sub_140b766a0(*rsi_9 + 0xd0, i_4)
                
                rsi_12 = var_358
            
            int32_t i_8 = i_13
            int64_t* rbx_23 = var_2e8
            
            if (i_8 != 0)
                int32_t i_5
                
                do
                    int64_t rcx_156 = *rbx_23
                    
                    if (rcx_156 != 0)
                        sub_140a74f90(rcx_156)
                    
                    rbx_23 = &rbx_23[2]
                    i_5 = i_8
                    i_8 -= 1
                while (i_5 != 1)
                rbx_23 = var_2e8
            
            if (rbx_23 != 0)
                sub_140a74f90(rbx_23)
            
            if (rsi_12 != 0)
                int32_t temp18_1 = *(rsi_12 + 8)
                *(rsi_12 + 8) -= 1
                
                if (temp18_1 == 1)
                    (**rsi_12)(rsi_12)
                    int32_t temp21_1 = *(rsi_12 + 0xc)
                    *(rsi_12 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*rsi_12 + 8))(rsi_12, 1)
            
            r13_2 = arg1
            r15_5 = &r15_5[8]
            var_368 = r15_5
        
        int64_t result = sub_140596d80(&var_378)
        int32_t i_9 = i_12
        uint64_t rbx_24 = var_2f8
        
        if (i_9 != 0)
            int32_t i_6
            
            do
                int64_t rcx_161 = *rbx_24
                
                if (rcx_161 != 0)
                    result = sub_140a74f90(rcx_161)
                
                rbx_24 += 0x10
                i_6 = i_9
                i_9 -= 1
            while (i_6 != 1)
            rbx_24 = var_2f8
        
        if (rbx_24 == 0)
            return result
        
        return sub_140a74f90(rbx_24)
    
    sub_140b88720(*var_2d8 + rax_120 * 0x18, 3, r13_2, &var_378)
    var_2c0.d &= not.d(var_2d0:4.d)
    sub_14059bdd0(&var_2d0)
