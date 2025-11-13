// 函数: sub_140b03240
// 地址: 0x140b03240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
uint64_t var_48 = __security_cookie ^ &var_548
uint64_t result

if (arg1[0xa].b == 0 || *(arg1 + 0x51) != 0)
    result.b = 1
else
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"nowrite")
    
    if (result.b != 0)
        result.b = 1
    else
        sub_140af2b60()
        char rax_1 = sub_140b21a10(&data_143dbb3f0, u"Multiprocess")
        
        if (rax_1 != 0)
            sub_140af2b60()
            result = sub_140b21a10(&data_143dbb3f0, u"MultiprocessSaveConfig")
        
        if (rax_1 != 0 && result.b == 0)
            result.b = 1
        else
            void var_148
            void* rdi_1 = &var_148
            void* var_160_1 = &var_148
            int32_t i_10 = arg5[1].d
            int32_t rdx_2 = arg1[1].d - *(arg1 + 0x34) + i_10
            uint64_t* var_158_1 = &var_48
            uint64_t r15
            r15.b = 0
            wchar16 const* const var_278 = u"\r\n\r\n"
            int32_t rax_2 = 0
            char var_518_1 = 0
            int32_t var_490_1 = 0x7fffffff
            int16_t var_150_1 = 0x100
            void* var_168 = &var_148
            int32_t var_270_1 = 4
            int64_t* var_4c8 = nullptr
            int32_t var_514_1 = 0
            int32_t var_4c0_1 = 0
            int32_t var_4bc_1 = 0
            
            if (rdx_2 s> 0)
                sub_14061cd70(&var_4c8, rdx_2)
                rax_2 = var_4c0_1
                i_10 = arg5[1].d
                rdi_1 = var_168
                var_514_1 = rax_2
            
            if (i_10 != 0)
                int32_t rdx_3 = i_10 + rax_2
                
                if (rdx_3 s> var_4bc_1)
                    sub_14061cd70(&var_4c8, rdx_3)
                    rax_2 = var_4c0_1
                    var_514_1 = rax_2
                
                int64_t* rsi_1 = *arg5
                int32_t i_7 = i_10
                int64_t* rbx_3 = &var_4c8[sx.q(rax_2) * 2]
                int32_t i
                
                do
                    *rbx_3 = 0
                    int32_t rdi_2 = rsi_1[1].d
                    r15 = *rsi_1
                    rbx_3[1].d = rdi_2
                    
                    if (rdi_2 != 0)
                        sub_1405a4c70(rbx_3, rdi_2, 0)
                        memcpy(*rbx_3, r15, rdi_2 * 2)
                    else
                        *(rbx_3 + 0xc) = 0
                    
                    rbx_3 = &rbx_3[2]
                    rsi_1 = &rsi_1[2]
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                var_514_1 += i_10
                r15.b = 0
                rdi_1 = var_168
            
            int32_t r11_1 = arg1[5].d
            void* r9 = &arg1[2]
            int32_t var_480 = 0
            int32_t r14_1 = 1
            int32_t var_47c_1 = 1
            void* var_478_1 = r9
            int32_t rcx_4 = 0
            int32_t var_470_1 = 0xffffffff
            int32_t r8_2 = 0
            int64_t var_46c_1 = 0
            
            if (r11_1 != 0)
                void* rax_3 = *(r9 + 0x10)
                
                if (rax_3 != 0)
                    r9 = rax_3
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rdx_8 = *r9
                
                if (rdx_8 != 0)
                label_140b034b4:
                    int32_t rax_10 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                    int32_t var_47c_2 = rax_10
                    int32_t rax_11
                    
                    if (rax_10 == 0)
                        rax_11 = 0x20
                    else
                        rax_11 = 0x1f - temp0_2
                    
                    var_46c_1.d = r8_2 - rax_11 + 0x1f
                    
                    if (r8_2 - rax_11 + 0x1f s> r11_1)
                        var_46c_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_4)
                        r8_2 += 0x20
                        rcx_4 += 1
                        var_46c_1:4.d = r8_2
                        var_480 = rcx_4
                        
                        if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_8 = *(r9 + (rdx_9 << 2) + 4)
                        var_470_1 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_140b034b4
                    
                    var_46c_1.d = r11_1
            
            double zmm3[0x2] = var_470_1.o
            int64_t* var_3f0_1 = arg1
            double var_4b0[0x2] = var_480.o
            int16_t var_330_1 = 0
            int16_t* const r13_1 = &data_142d40450
            double var_4a0_1 = zmm3[0]
            double zmm4_1[0x2] = var_4b0
            double rcx_6 = zmm3[0]
            double temp0_3[0x2] = _mm_unpackhi_pd(zmm3, zmm3[0])
            double rax_13 = zmm4_1[0]
            double var_3f8[0x2]
            var_3f8[0] = temp0_3.q
            double var_368[0x2] = arg1.o
            double var_348_1[0x2] = var_3f8
            int32_t var_510
            uint64_t var_4f0
            int64_t var_4e8
            int64_t* var_4d8
            int64_t* var_4b8_1
            void var_3e8
            int64_t var_3e0
            double zmm2[0x2]
            
            if ((rcx_6 u>> 0x20).d s< *(rax_13 i+ 0x18))
                int32_t rcx_8 = zmm4_1[1]:4.d
                
                while (true)
                    int32_t r10_1 = 0
                    double rax_15 = var_368[0]
                    int32_t rcx_9 = 0
                    var_510 = 0
                    void* r9_1 = rdi_1
                    int32_t var_50c_1 = 1
                    int32_t var_500_1 = 0xffffffff
                    int64_t* rsi_3 = sx.q(rcx_8) * 0xb8 + *rax_15
                    int32_t var_188_1 = 0xffffffff
                    int32_t r11_2 = 0
                    uint64_t var_1b8 = 0
                    void* r8_4 = &rsi_3[2]
                    int32_t var_184_1 = 0
                    void* var_178_1 = nullptr
                    int32_t var_170_1 = 0
                    int32_t* rbx_4 = r8_4 + 0x10
                    void* var_160_2 = rdi_1
                    int32_t var_1b0_1 = 0
                    int32_t var_18c_1 = 0x80
                    int64_t var_1a8
                    __builtin_memset(&var_1a8, 0, 0x1c)
                    int32_t r14_2 = rbx_4[6]
                    int32_t r8_5 = 0
                    int64_t* var_4e0_1 = rsi_3
                    int32_t* var_508_1 = rbx_4
                    int64_t var_4fc_1 = 0
                    
                    if (r14_2 != 0)
                        int32_t* rax_16 = *(rbx_4 + 0x10)
                        
                        if (rax_16 != 0)
                            rbx_4 = rax_16
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r14_2 - 1)
                        int32_t rdx_12 = *rbx_4
                        
                        if (rdx_12 != 0)
                        label_140b03667:
                            int32_t rax_23 = neg.d(rdx_12) & rdx_12
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
                            int32_t var_50c_2 = rax_23
                            int32_t rax_24
                            
                            if (rax_23 == 0)
                                rax_24 = 0x20
                            else
                                rax_24 = 0x1f - temp0_4
                            
                            var_4fc_1.d = r8_5 - rax_24 + 0x1f
                            
                            if (r8_5 - rax_24 + 0x1f s> r14_2)
                                var_4fc_1.d = r14_2
                        else
                            while (true)
                                int64_t rdx_13 = sx.q(rcx_9)
                                r8_5 += 0x20
                                rcx_9 += 1
                                var_4fc_1:4.d = r8_5
                                var_510 = rcx_9
                                
                                if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_12 = rbx_4[rdx_13 + 1]
                                var_500_1 = 0xffffffff
                                
                                if (rdx_12 != 0)
                                    goto label_140b03667
                            
                            var_4fc_1.d = r14_2
                    
                    zmm2 = var_500_1.o
                    double var_410_1[0x2] = var_510.o
                    uint32_t rax_28 = (zmm2[0] u>> 0x20).d
                    double var_400_1[0x2] = zmm2
                    double var_398[0x2] = (&rsi_3[2]).o
                    int64_t var_378_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    
                    if (rax_28 s< r14_2)
                        int32_t rcx_11 = var_410_1[1]:4.d
                        
                        while (true)
                            double rcx_12 = var_398[0]
                            int64_t rdx_15 = sx.q(rcx_11) * 0x30
                            int64_t rbx_5 = *(rdx_15 + *rcx_12)
                            int64_t var_488 = rbx_5
                            void* rdi_4 = *rcx_12 + rdx_15
                            
                            if (r10_1 == r11_2)
                            label_140b03788:
                                sub_140b11c80(&var_3e0, arg2)
                                int16_t* var_300
                                int64_t var_268
                                sub_140b11a30(&var_300, sub_140b17c60(&var_268))
                                int64_t rcx_22 = var_268
                                
                                if (rcx_22 != 0)
                                    sub_140a74f90(rcx_22)
                                
                                int64_t var_258
                                int64_t* rax_37 = sub_140b13fb0(&var_258)
                                int16_t* const rcx_24
                                
                                if (rax_37[1].d == 0)
                                    rcx_24 = &data_142d40450
                                else
                                    rcx_24 = *rax_37
                                
                                int16_t* const var_2d8 = rcx_24
                                uint64_t var_450 = 0
                                wchar16 const* const var_2d0_1 = u"Config"
                                int64_t var_448_1 = 0
                                int32_t rcx_26 = sub_140b0f5f0(&var_450, &var_2d8, 2)
                                int32_t rdx_22 = var_448_1.d
                                int32_t var_458_1
                                __builtin_memset(&var_458_1, 0, 0x18)
                                uint64_t var_460 = var_450
                                int32_t rdx_23 = rdx_22 + sbb.d(rcx_26, rcx_26, rdx_22 != 0) + 2
                                
                                if (rdx_23 s> var_448_1:4.d)
                                    sub_1405947f0(&var_460, rdx_23)
                                
                                sub_140a20ba0(&var_460, &data_142d5a024, 1)
                                uint64_t var_3d0 = var_460
                                int32_t var_3c8_1 = var_458_1
                                int32_t var_454
                                int32_t var_3c4_1 = var_454
                                var_458_1.q = 0
                                var_460 = 0
                                int16_t* var_310
                                sub_140b11a30(&var_310, &var_3d0)
                                uint64_t rcx_32 = var_3d0
                                
                                if (rcx_32 != 0)
                                    sub_140a74f90(rcx_32)
                                
                                uint64_t rcx_33 = var_450
                                
                                if (rcx_33 != 0)
                                    sub_140a74f90(rcx_33)
                                
                                int64_t rcx_34 = var_258
                                
                                if (rcx_34 != 0)
                                    sub_140a74f90(rcx_34)
                                
                                int16_t* rdx_25 = &data_142d40450
                                int32_t var_2f8
                                
                                if (var_2f8 != 0)
                                    rdx_25 = var_300
                                
                                int32_t rax_44 = sub_140a23cf0(&var_3e0, rdx_25, 1, 0, 0xffffffff)
                                int32_t rax_45
                                
                                if (rax_44 == 0xffffffff)
                                    int16_t* rdx_26 = &data_142d40450
                                    int32_t var_308
                                    
                                    if (var_308 != 0)
                                        rdx_26 = var_310
                                    
                                    rax_45 = sub_140a23cf0(&var_3e0, rdx_26, 1, 0, 0xffffffff)
                                
                                char r14_3
                                
                                if (rax_44 != 0xffffffff || rax_45 != 0xffffffff)
                                    r14_3 = 0
                                else
                                    r14_3 = 1
                                
                                int16_t* const rdx_27 = &data_142d40450
                                
                                if (data_143de5638 != 0)
                                    rdx_27 = data_143de5630
                                
                                int16_t* const rcx_37
                                
                                if (rsi_3[1].d == 0)
                                    rcx_37 = &data_142d40450
                                else
                                    rcx_37 = *rsi_3
                                
                                int32_t rax_46
                                void* r9_2
                                rax_46, r9_2 = sub_140a54510(rcx_37, rdx_27)
                                rax_46.b = rax_46 == 0
                                char rax_48
                                
                                if (r14_3 == 0 && rax_46.b == 0)
                                    rax_48, r9_2 =
                                        sub_140aed8a0(arg1[0x1b], rsi_3, &var_488, rdi_4 + 8)
                                
                                if (r14_3 != 0 || rax_46.b != 0 || rax_48 == 0)
                                    int32_t rax_51 = ((var_160_2 - var_168) s>> 1).d
                                    
                                    if (rax_51 == 0)
                                        int16_t* const r8_8
                                        
                                        if (rsi_3[1].d == rax_51)
                                            r8_8 = &data_142d40450
                                        else
                                            r8_8 = *rsi_3
                                        
                                        int64_t var_2b8
                                        sub_140a2e390(&var_2b8, u"[%s]\r\n", r8_8)
                                        int64_t var_2c8
                                        sub_140a1dfc0(&var_2b8, &var_2c8)
                                        int32_t var_2c0
                                        int64_t rbx_6 = sx.q(var_2c0)
                                        void* rcx_41 = var_160_2
                                        int64_t rsi_4 = var_2c8
                                        int64_t rdi_5 = rbx_6 * 2
                                        
                                        if (rdi_5 + rcx_41 u>= var_158_1)
                                            sub_140b38e20(&var_168, rbx_6)
                                            rcx_41 = var_160_2
                                        
                                        var_160_2 = rcx_41 + (rbx_6 << 1)
                                        memcpy(rcx_41, rsi_4, rdi_5.d)
                                        int64_t rcx_43 = var_2b8
                                        
                                        if (rcx_43 != 0)
                                            sub_140a74f90(rcx_43)
                                        
                                        int32_t var_50c_3 = 1
                                        int32_t r11_3 = *(r8_4 + 0x78)
                                        r9_2 = r8_4 + 0x60
                                        void* var_508_2 = r9_2
                                        int32_t rcx_44 = 0
                                        var_510 = 0
                                        int32_t r8_10 = 0
                                        int32_t var_500_2 = 0xffffffff
                                        int64_t var_4fc_2 = 0
                                        
                                        if (r11_3 != 0)
                                            void* rax_54 = *(r9_2 + 0x10)
                                            
                                            if (rax_54 != 0)
                                                r9_2 = rax_54
                                            
                                            int32_t temp13_1
                                            int32_t temp14_1
                                            temp13_1:temp14_1 = sx.q(r11_3 - 1)
                                            int32_t rdx_34 = *r9_2
                                            
                                            if (rdx_34 != 0)
                                            label_140b03aa8:
                                                int32_t rax_61 = neg.d(rdx_34) & rdx_34
                                                uint64_t rflags_3
                                                int32_t temp0_6
                                                temp0_6, rflags_3 = _bit_scan_reverse(rax_61)
                                                int32_t var_50c_4 = rax_61
                                                int32_t rax_62
                                                
                                                if (rax_61 == 0)
                                                    rax_62 = 0x20
                                                else
                                                    rax_62 = 0x1f - temp0_6
                                                
                                                var_4fc_2.d = r8_10 - rax_62 + 0x1f
                                                
                                                if (r8_10 - rax_62 + 0x1f s> r11_3)
                                                    var_4fc_2.d = r11_3
                                            else
                                                while (true)
                                                    int64_t rdx_35 = sx.q(rcx_44)
                                                    r8_10 += 0x20
                                                    rcx_44 += 1
                                                    var_4fc_2:4.d = r8_10
                                                    var_510 = rcx_44
                                                    
                                                    if (rdx_35.d s>= (temp14_1 + (temp13_1 & 0x1f))
                                                            s>> 5)
                                                        break
                                                    
                                                    rdx_34 = *(r9_2 + (rdx_35 << 2) + 4)
                                                    var_500_2 = 0xffffffff
                                                    
                                                    if (rdx_34 != 0)
                                                        goto label_140b03aa8
                                                
                                                var_4fc_2.d = r11_3
                                        
                                        zmm2 = var_500_2.o
                                        double var_400_2[0x2] = zmm2
                                        double var_410_2[0x2] = var_510.o
                                        double var_3c0[0x2] = (r8_4 + 0x50).o
                                        uint32_t rax_65 = (zmm2[0] u>> 0x20).d
                                        int64_t var_3a0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                                        
                                        if (rax_65 s>= r11_3)
                                            rsi_3 = var_4e0_1
                                        else
                                            int32_t i_1 = var_410_2[1]:4.d
                                            
                                            do
                                                int64_t rcx_47 = sx.q(i_1) << 5
                                                int64_t rdx_36 = *var_3c0[0]
                                                
                                                if (*(rdx_36 + rcx_47 + 0x10) != 0)
                                                    *(rdx_36 + rcx_47 + 8)
                                                
                                                int64_t var_248
                                                int64_t* rax_67 =
                                                    sub_140b63b70(rcx_47 + rdx_36, &var_248)
                                                int16_t* const r8_12
                                                
                                                if (rax_67[1].d == 0)
                                                    r8_12 = &data_142d40450
                                                else
                                                    r8_12 = *rax_67
                                                
                                                int64_t var_298
                                                sub_140a2e390(&var_298, u"@%s=%s\r\n", r8_12)
                                                int64_t var_2a8
                                                sub_140a1dfc0(&var_298, &var_2a8)
                                                int32_t var_2a0
                                                int64_t rbx_10 = sx.q(var_2a0)
                                                void* rcx_51 = var_160_2
                                                int64_t rsi_5 = var_2a8
                                                int64_t rdi_6 = rbx_10 * 2
                                                
                                                if (rdi_6 + rcx_51 u>= var_158_1)
                                                    sub_140b38e20(&var_168, rbx_10)
                                                    rcx_51 = var_160_2
                                                
                                                var_160_2 = rcx_51 + (rbx_10 << 1)
                                                memcpy(rcx_51, rsi_5, rdi_6.d)
                                                int64_t rcx_53 = var_298
                                                
                                                if (rcx_53 != 0)
                                                    sub_140a74f90(rcx_53)
                                                
                                                int64_t rcx_54 = var_248
                                                
                                                if (rcx_54 != 0)
                                                    sub_140a74f90(rcx_54)
                                                
                                                var_410_2[1].d &= not.d(var_3c0[1]:4.d)
                                                sub_14059bdd0(&var_3c0[1])
                                                i_1 = var_410_2[1]:4.d
                                            while (i_1 s< *(var_410_2[0] i+ 0x18))
                                            
                                            rsi_3 = var_4e0_1
                                    
                                    int64_t rdx_41 = var_488
                                    r9_2.b = 1
                                    var_4d8 = nullptr
                                    int32_t i_8
                                    i_8.q = 0
                                    sub_140ae5e50(&rsi_3[2], rdx_41, &var_4d8, r9_2.b)
                                    int64_t* r12_1
                                    
                                    if (r14_3 == 0)
                                        r12_1 = var_4d8
                                        int64_t* rbx_14 = r12_1
                                        void* rsi_10 = &r12_1[sx.q(i_8) * 4]
                                        
                                        if (r12_1 != rsi_10)
                                            do
                                                int64_t var_288
                                                int64_t var_218
                                                sub_140a1dfc0(
                                                    sub_140af2330(&var_218, 
                                                        sub_140b63b70(&var_488, &var_480), rbx_14), 
                                                    &var_288)
                                                int32_t var_280
                                                int64_t rdi_8 = sx.q(var_280)
                                                void* rcx_77 = var_160_2
                                                int64_t r15_3 = var_288
                                                int64_t r14_5 = rdi_8 * 2
                                                
                                                if (r14_5 + rcx_77 u>= var_158_1)
                                                    sub_140b38e20(&var_168, rdi_8)
                                                    rcx_77 = var_160_2
                                                
                                                var_160_2 = rcx_77 + (rdi_8 << 1)
                                                memcpy(rcx_77, r15_3, r14_5.d)
                                                int64_t rcx_79 = var_218
                                                
                                                if (rcx_79 != 0)
                                                    sub_140a74f90(rcx_79)
                                                
                                                int64_t rcx_80 = var_480.q
                                                
                                                if (rcx_80 != 0)
                                                    sub_140a74f90(rcx_80)
                                                
                                                rbx_14 = &rbx_14[4]
                                            while (rbx_14 != rsi_10)
                                        
                                        rsi_3 = var_4e0_1
                                    else
                                        if (r15.b == 0)
                                            int16_t* var_320
                                            sub_140b18970(&var_320, arg2)
                                            int32_t rcx_58 = 0
                                            var_510 = 0
                                            int32_t r11_4 = arg1[0x11].d
                                            int32_t var_50c_5 = 1
                                            int32_t r8_15 = 0
                                            void* var_508_3 = &arg1[0xe]
                                            int32_t var_500_3 = 0xffffffff
                                            int64_t var_4fc_3 = 0
                                            
                                            if (r11_4 != 0)
                                                void* rax_73 = arg1[0x10]
                                                void* r9_5 = &arg1[0xe]
                                                
                                                if (rax_73 != 0)
                                                    r9_5 = rax_73
                                                
                                                int32_t temp9_1
                                                int32_t temp10_1
                                                temp9_1:temp10_1 = sx.q(r11_4 - 1)
                                                int32_t rdx_45 = *r9_5
                                                
                                                if (rdx_45 != 0)
                                                label_140b03d18:
                                                    int32_t rax_80 = neg.d(rdx_45) & rdx_45
                                                    uint64_t rflags_4
                                                    int32_t temp0_8
                                                    temp0_8, rflags_4 = _bit_scan_reverse(rax_80)
                                                    int32_t var_50c_6 = rax_80
                                                    int32_t rax_81
                                                    
                                                    if (rax_80 == 0)
                                                        rax_81 = 0x20
                                                    else
                                                        rax_81 = 0x1f - temp0_8
                                                    
                                                    var_4fc_3.d = r8_15 - rax_81 + 0x1f
                                                    
                                                    if (r8_15 - rax_81 + 0x1f s> r11_4)
                                                        var_4fc_3.d = r11_4
                                                else
                                                    while (true)
                                                        int64_t rdx_46 = sx.q(rcx_58)
                                                        r8_15 += 0x20
                                                        rcx_58 += 1
                                                        var_4fc_3:4.d = r8_15
                                                        var_510 = rcx_58
                                                        
                                                        if (rdx_46.d
                                                                s>= (temp10_1 + (temp9_1 & 0x1f))
                                                                s>> 5)
                                                            break
                                                        
                                                        rdx_45 = *(r9_5 + (rdx_46 << 2) + 4)
                                                        var_500_3 = 0xffffffff
                                                        
                                                        if (rdx_45 != 0)
                                                            goto label_140b03d18
                                                    
                                                    var_4fc_3.d = r11_4
                                            
                                            int32_t rdx_47 = arg1[0x11].d
                                            zmm2 = var_500_3.o
                                            double var_400_3[0x2] = zmm2
                                            int32_t rbx_11 = 0xffffffff << (rdx_47.b & 0x1f)
                                            int128_t var_410_3 = var_510.o
                                            int32_t r8_18 = rdx_47 s>> 5
                                            int32_t r9_7 = rdx_47 & 0xffffffe0
                                            var_4a0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                                            int32_t var_500_4 = rbx_11
                                            var_4fc_3.d = rdx_47
                                            var_4b8_1.o = (&arg1[0xc]).o
                                            var_4b0 = var_410_3
                                            
                                            if (rdx_47 != r11_4)
                                                void* rax_83 = arg1[0x10]
                                                void* r10_2 = &arg1[0xe]
                                                
                                                if (rax_83 != 0)
                                                    r10_2 = rax_83
                                                
                                                int32_t temp11_1
                                                int32_t temp12_1
                                                temp11_1:temp12_1 = sx.q(r11_4 - 1)
                                                int32_t rdx_51 =
                                                    *(r10_2 + (sx.q(r8_18) << 2)) & rbx_11
                                                
                                                if (rdx_51 != 0)
                                                label_140b03e00:
                                                    int32_t rax_90 = neg.d(rdx_51) & rdx_51
                                                    uint64_t rflags_5
                                                    int32_t temp0_10
                                                    temp0_10, rflags_5 = _bit_scan_reverse(rax_90)
                                                    int32_t rax_91
                                                    
                                                    if (rax_90 == 0)
                                                        rax_91 = 0x20
                                                    else
                                                        rax_91 = 0x1f - temp0_10
                                                    
                                                    var_4fc_3.d = r9_7 - rax_91 + 0x1f
                                                    
                                                    if (r9_7 - rax_91 + 0x1f s> r11_4)
                                                        var_4fc_3.d = r11_4
                                                else
                                                    while (true)
                                                        int64_t rcx_63 = sx.q(r8_18)
                                                        r9_7 += 0x20
                                                        r8_18 += 1
                                                        
                                                        if (rcx_63.d
                                                                s>= (temp12_1 + (temp11_1 & 0x1f))
                                                                s>> 5)
                                                            break
                                                        
                                                        rdx_51 = *(r10_2 + (rcx_63 << 2) + 4)
                                                        var_500_4 = 0xffffffff
                                                        
                                                        if (rdx_51 != 0)
                                                            goto label_140b03e00
                                                    
                                                    var_4fc_3.d = r11_4
                                            
                                            while (true)
                                                int64_t rax_93 = sx.q(var_4a0_1:4.d)
                                                
                                                if (rax_93.d == (var_500_4.q u>> 0x20).d
                                                        && var_4b0[1] == &arg1[0xe]
                                                        && var_4b8_1 == &arg1[0xc])
                                                    break
                                                
                                                int32_t* rbx_13 = rax_93 * 0x38 + *var_4b8_1
                                                int64_t var_238
                                                int64_t* rax_94 =
                                                    sub_140b18970(&var_238, &rbx_13[2])
                                                int16_t* const rdx_53 = &data_142d40450
                                                int32_t var_318
                                                
                                                if (var_318 != 0)
                                                    rdx_53 = var_320
                                                
                                                int16_t* const rcx_67
                                                
                                                if (rax_94[1].d == 0)
                                                    rcx_67 = &data_142d40450
                                                else
                                                    rcx_67 = *rax_94
                                                
                                                int32_t rax_95 = sub_140a54510(rcx_67, rdx_53)
                                                int64_t rcx_68 = var_238
                                                
                                                if (rcx_68 != 0)
                                                    sub_140a74f90(rcx_68)
                                                
                                                if (rax_95 == 0)
                                                    var_490_1 = *rbx_13
                                                    break
                                                
                                                var_4a0_1.d &= not.d(var_4b0[0]:4.d)
                                                sub_14059bdd0(&var_4b0)
                                            
                                            int16_t* rcx_70 = var_320
                                            var_518_1 = 1
                                            
                                            if (rcx_70 != 0)
                                                sub_140a74f90(rcx_70)
                                            
                                            rsi_3 = var_4e0_1
                                        
                                        int32_t var_528_1
                                        var_528_1.q = rsi_3
                                        int64_t var_228
                                        _Open_dir(arg1, var_490_1, &var_4d8, &var_168, var_528_1, 
                                            sub_140b63b70(&var_488, &var_228))
                                        int64_t rcx_73 = var_228
                                        
                                        if (rcx_73 != 0)
                                            sub_140a74f90(rcx_73)
                                        
                                        r12_1 = var_4d8
                                    
                                    sub_1407d1800(&var_1b8, &var_3e8, &var_488, nullptr)
                                    int32_t i_6 = i_8
                                    int64_t* rbx_15 = r12_1
                                    
                                    if (i_6 != 0)
                                        int32_t i_2
                                        
                                        do
                                            int64_t rcx_82 = rbx_15[2]
                                            
                                            if (rcx_82 != 0)
                                                sub_140a74f90(rcx_82)
                                            
                                            int64_t rcx_83 = *rbx_15
                                            
                                            if (rcx_83 != 0)
                                                sub_140a74f90(rcx_83)
                                            
                                            rbx_15 = &rbx_15[4]
                                            i_2 = i_6
                                            i_6 -= 1
                                        while (i_2 != 1)
                                    
                                    if (r12_1 != 0)
                                        sub_140a74f90(r12_1)
                                
                                int16_t* rcx_85 = var_310
                                
                                if (rcx_85 != 0)
                                    sub_140a74f90(rcx_85)
                                
                                int16_t* rcx_86 = var_300
                                
                                if (rcx_86 != 0)
                                    sub_140a74f90(rcx_86)
                                
                                int64_t rcx_87 = var_3e0
                                
                                if (rcx_87 != 0)
                                    sub_140a74f90(rcx_87)
                            else
                                void var_180
                                void* rcx_16 = &var_180
                                int64_t rdx_17 =
                                    sx.q(var_170_1 - 1) & sx.q(sub_140b5ead0(rbx_5.d) + rbx_5:4.d)
                                
                                if (var_178_1 != 0)
                                    rcx_16 = var_178_1
                                
                                int32_t rax_35 = *(rcx_16 + (rdx_17 << 2))
                                
                                if (rax_35 == 0xffffffff)
                                    goto label_140b03788
                                
                                uint64_t rdx_18 = var_1b8
                                
                                while (true)
                                    int64_t rcx_18 = sx.q(rax_35) * 2
                                    
                                    if (*(rdx_18 + (rcx_18 << 3)) == rbx_5)
                                        break
                                    
                                    rax_35 = *(rdx_18 + (rcx_18 << 3) + 8)
                                    
                                    if (rax_35 == 0xffffffff)
                                        goto label_140b03788
                                
                                if (rax_35 == 0xffffffff)
                                    goto label_140b03788
                            
                            var_410_1[1].d &= not.d(var_398[1]:4.d)
                            sub_14059bdd0(&var_398[1])
                            rcx_11 = var_410_1[1]:4.d
                            
                            if (rcx_11 s>= *(var_410_1[0] i+ 0x18))
                                break
                            
                            r11_2 = var_184_1
                            r10_1 = var_1b0_1
                            r15 = zx.q(var_518_1)
                        
                        r9_1 = var_160_2
                        rdi_1 = var_168
                    
                    if (((r9_1 - rdi_1) s>> 1).d s<= 0)
                        sub_140637dd0(arg4, rsi_3)
                    else
                        if (*r9_1 != 0)
                            *r9_1 = 0
                            r9_1 = var_160_2
                            rdi_1 = var_168
                        
                        var_4f0 = 0
                        uint64_t r14_6 = 0
                        int64_t var_4e8_1 = 0
                        int32_t rsi_11 = 0
                        int32_t r15_4 = 0
                        
                        if (rdi_1 != 0 && *rdi_1 != 0)
                            int64_t rbx_16 = -1
                            
                            do
                                rbx_16 += 1
                            while (*(rdi_1 + (rbx_16 << 1)) != 0)
                            
                            if (rbx_16.d + 1 s> 0)
                                sub_1405947f0(&var_4f0, rbx_16.d + 1)
                                r15_4 = var_4e8_1:4.d
                                rsi_11 = var_4e8_1.d
                                r14_6 = var_4f0
                            
                            rsi_11 += rbx_16.d + 1
                            var_4e8_1.d = rsi_11
                            
                            if (rsi_11 s> r15_4)
                                sub_140594770(&var_4f0)
                                r15_4 = var_4e8_1:4.d
                                rsi_11 = var_4e8_1.d
                                r14_6 = var_4f0
                            
                            UnDecorator::getReferenceType(r14_6, rdi_1, (rbx_16.d + 1) * 2)
                            r9_1 = var_160_2
                            rdi_1 = var_168
                        
                        int32_t r9_11 = ((r9_1 - rdi_1) s>> 1).d
                        int32_t rax_110
                        
                        if (rsi_11 == 0)
                            rax_110 = rsi_11 + 1
                        
                        if (rsi_11 != 0 || r9_11 == 0)
                            rax_110 = 0
                        
                        uint64_t var_440 = r14_6
                        int32_t rdx_66 = r9_11 + rsi_11 + rax_110
                        var_4f0 = 0
                        var_4e8 = 0
                        
                        if (rdx_66 s> r15_4)
                            sub_1405947f0(&var_440, rdx_66)
                            r14_6 = var_440
                        
                        int32_t rax_111 = var_4e0_1[1].d
                        int16_t* rdx_67
                        
                        if (rax_111 == 0)
                            rdx_67 = &data_142d40450
                        else
                            rdx_67 = *var_4e0_1
                        
                        int32_t rcx_93 = rax_111 - 1
                        
                        if (rax_111 == 0)
                            rcx_93 = 0
                        
                        uint64_t* rax_113 =
                            sub_140ae55b0(arg4, sub_1405969c0(rcx_93, rdx_67), var_4e0_1)
                        
                        if (rax_113 != &var_440)
                            uint64_t rcx_95 = *rax_113
                            
                            if (rcx_95 != 0)
                                sub_140a74f90(rcx_95)
                            
                            *rax_113 = r14_6
                            var_440 = 0
                            int32_t var_438_1
                            var_438_1.q = 0
                            rax_113[1].d = rsi_11
                            *(rax_113 + 0xc) = r15_4
                        else if (r14_6 != 0)
                            sub_140a74f90(r14_6)
                        
                        int64_t rbx_19 = sx.q(var_514_1)
                        int32_t rsi_12 = (rbx_19 + 1).d
                        var_514_1 = rsi_12
                        
                        if (rsi_12 s> var_4bc_1)
                            sub_1405a4f90(&var_4c8)
                            var_514_1 = rsi_12
                        
                        sub_140596d10(&var_4c8[rbx_19 * 2], var_4e0_1)
                    
                    int32_t var_170_2 = 0
                    
                    if (var_178_1 != 0)
                        sub_140a74f90(var_178_1)
                    
                    sub_140a627d0(&var_1b8)
                    zmm4_1[1].d &= not.d(var_368[1]:4.d)
                    sub_14059bdd0(&var_368[1])
                    rcx_8 = zmm4_1[1]:4.d
                    
                    if (rcx_8 s>= *(zmm4_1[0] i+ 0x18))
                        break
                    
                    rdi_1 = var_168
                    r15 = zx.q(var_518_1)
                
                if (var_330_1.b != 0 && var_330_1:1.b != 0)
                    sub_140aed200(arg1, arg1[1].d - *(arg1 + 0x34), 1)
                
                rdi_1 = var_168
                r14_1 = 1
            
            int64_t r15_5 = -1
            int64_t var_208 = 0
            int32_t var_1d4_1 = 0
            int64_t var_1c8_1 = 0
            int32_t var_1c0_1 = 0
            int32_t rbx_21 = arg4[1].d - *(arg4 + 0x34)
            void* var_160_3 = rdi_1
            int32_t var_200_1 = 0
            int32_t var_1dc_1 = 0x80
            int64_t var_1f8
            __builtin_memset(&var_1f8, 0, 0x1c)
            int32_t var_1d8_1 = 0xffffffff
            
            if (rbx_21 s> 0)
                sub_140976540(&var_208, rbx_21)
                int32_t rax_121
                
                if (rbx_21 u< 4)
                    rax_121 = 1
                else
                    uint32_t rbx_22 = rbx_21 u>> 1
                    uint64_t rflags_6
                    int32_t temp0_11
                    temp0_11, rflags_6 = _bit_scan_reverse(rbx_22 + 8)
                    int32_t rcx_107
                    
                    if (rbx_22 == 0xfffffff8)
                        rcx_107 = 0x20
                    else
                        rcx_107 = 0x1f - temp0_11
                    
                    int32_t rcx_109 = rcx_107 << 0x1a s>> 0x1f
                    uint64_t rflags_7
                    char temp0_12
                    temp0_12, rflags_7 = _bit_scan_reverse(rbx_22 + 7)
                    
                    if (rcx_109 == 0)
                        rax_121 = 1
                    else
                        rax_121 = 1 << ((not.d(rcx_109)).b & (0x20 - (0x1f - temp0_12)))
                
                if (var_1c0_1 == 0 || var_1c0_1 s< rax_121)
                    int32_t var_1c0_2 = rax_121
                    sub_1405a4480(&var_208)
            
            var_510 = 0
            int32_t var_50c_7 = 1
            int32_t var_500_5 = 0xffffffff
            int32_t r8_29 = arg4[5].d
            void* var_508_4 = &arg4[2]
            int64_t var_4fc_4 = 0
            
            if (r8_29 != 0)
                sub_14059bdd0(&var_510)
                r8_29 = arg4[5].d
            
            zmm2 = var_500_5.o
            double var_400_4[0x2] = zmm2
            double var_410_4[0x2] = var_510.o
            var_4fc_4.d = r8_29
            double temp0_13[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_4b8_1.o = arg4.o
            var_4b0 = var_410_4
            var_4a0_1 = temp0_13.q
            
            while (true)
                int64_t rax_122 = sx.q(var_4a0_1:4.d)
                
                if (rax_122.d == ((0xffffffff << (r8_29.b & 0x1f)).q u>> 0x20).d
                        && var_4b0[1] == &arg4[2] && var_4b8_1 == arg4)
                    break
                
                sub_1406b3860(&var_208, &var_3e8, *var_4b8_1 + rax_122 * 0x28, nullptr)
                var_4a0_1.d &= not.d(var_4b0[0]:4.d)
                sub_14059bdd0(&var_4b0)
            
            int64_t* var_478_2 = arg4
            var_480.q = &var_168
            var_470_1.q = &var_208
            var_46c_1 = &var_278
            var_3e0 = 0
            int64_t var_3d8_1 = 0
            sub_140ae8f40(&var_480, &var_3e0)
            int64_t* rax_126 = var_4c8
            uint64_t rsi_15 = sx.q(var_514_1)
            int64_t* rbx_26 = rax_126
            void* rdi_13 = &rax_126[rsi_15 * 2]
            
            if (rax_126 != rdi_13)
                do
                    sub_140ae8f40(&var_480, rbx_26)
                    rbx_26 = &rbx_26[2]
                while (rbx_26 != rdi_13)
            
            if (var_200_1 - var_1d4_1 s> 0)
                int32_t var_1e0
                int32_t rdx_81 = var_1e0
                int32_t var_50c_8 = 1
                var_4d8 = nullptr
                int64_t* rsi_16 = nullptr
                int32_t var_4cc_1 = 0
                int32_t i_5 = 0
                var_510 = 0
                int32_t r14_7 = 0
                int64_t* var_508_5 = &var_1f8
                int32_t var_500_7 = 0xffffffff
                int64_t var_4fc_5 = 0
                
                if (rdx_81 != 0)
                    sub_14059bdd0(&var_510)
                    rdx_81 = var_1e0
                
                zmm2 = var_500_7.o
                int128_t var_410_5 = var_510.o
                var_4fc_5.d = rdx_81
                double var_400_5[0x2] = zmm2
                double temp0_14[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                var_4b8_1.o = (&var_208).o
                var_4b0 = var_410_5
                var_4a0_1 = temp0_14.q
                
                while (true)
                    int64_t rax_129 = sx.q(var_4a0_1:4.d)
                    
                    if (rax_129.d == ((0xffffffff << (rdx_81.b & 0x1f)).q u>> 0x20).d
                            && var_4b0[1] == &var_1f8 && var_4b8_1 == &var_208)
                        break
                    
                    int64_t i_9 = sx.q(i_5)
                    i_5 = (i_9 + 1).d
                    int64_t* r15_6 = *var_4b8_1 + rax_129 * 0x18
                    
                    if (i_5 s> r14_7)
                        sub_1405a4f90(&var_4d8)
                        r14_7 = var_4cc_1
                        rsi_16 = var_4d8
                    
                    sub_140596d10(&rsi_16[i_9 * 2], r15_6)
                    var_4a0_1.d &= not.d(var_4b0[0]:4.d)
                    sub_14059bdd0(&var_4b0)
                
                sub_140688010(rsi_16, i_5, arg3)
                int64_t* rdi_14 = rsi_16
                void* r14_10 = &rsi_16[sx.q(i_5) * 2]
                
                if (rsi_16 != r14_10)
                    do
                        sub_140ae8f40(&var_480, rdi_14)
                        rdi_14 = &rdi_14[2]
                    while (rdi_14 != r14_10)
                
                int64_t* rdi_15 = rsi_16
                
                if (i_5 != 0)
                    int32_t i_3
                    
                    do
                        int64_t rcx_133 = *rdi_15
                        
                        if (rcx_133 != 0)
                            sub_140a74f90(rcx_133)
                        
                        rdi_15 = &rdi_15[2]
                        i_3 = i_5
                        i_5 -= 1
                    while (i_3 != 1)
                
                if (rsi_16 != 0)
                    sub_140a74f90(rsi_16)
                
                rsi_15 = zx.q(var_514_1)
                r15_5 = -1
                r14_1 = 1
            
            void* rcx_136 = var_160_3
            void* rbx_27 = var_168
            
            if (((rcx_136 - rbx_27) s>> 1).d == 0)
                if (rcx_136 + 4 u>= var_158_1)
                    sub_140b38e20(&var_168, 2)
                    rcx_136 = var_160_3
                
                var_160_3 = rcx_136 + 4
                *rcx_136 = 0xa000d
                rcx_136 = var_160_3
                rbx_27 = var_168
            
            if (*rcx_136 != 0)
                *rcx_136 = 0
                rcx_136 = var_160_3
                rbx_27 = var_168
            
            var_4f0 = 0
            int32_t rax_138 = 0
            var_4e8:4.d = 0
            int32_t rdi_16 = 0
            var_4e8.d = 0
            
            if (rbx_27 != 0 && *rbx_27 != 0)
                do
                    r15_5 += 1
                while (*(rbx_27 + (r15_5 << 1)) != 0)
                
                if (r15_5.d + 1 s> 0)
                    sub_1405947f0(&var_4f0, r15_5.d + 1)
                    rax_138 = var_4e8:4.d
                    rdi_16 = var_4e8.d
                
                rdi_16 += r15_5.d + 1
                var_4e8.d = rdi_16
                
                if (rdi_16 s> rax_138)
                    sub_140594770(&var_4f0)
                    rdi_16 = var_4e8.d
                
                UnDecorator::getReferenceType(var_4f0, rbx_27, (r15_5.d + 1) * 2)
                rcx_136 = var_160_3
                rbx_27 = var_168
            
            int32_t rcx_141 = ((rcx_136 - rbx_27) s>> 1).d
            
            if (rdi_16 != 0 || rcx_141 == 0)
                r14_1 = 0
            
            int64_t var_2f0
            sub_140596690(&var_2f0, &var_4f0, rcx_141 + r14_1)
            uint64_t rcx_143 = var_4f0
            
            if (rcx_143 != 0)
                sub_140a74f90(rcx_143)
            
            if (arg3 != 0)
                int16_t* rbx_28
                
                if (arg2[1].d == 0)
                    rbx_28 = &data_142d40450
                else
                    rbx_28 = *arg2
                
                sub_140b4afe0(&data_1439a90f0, rbx_28, &var_2f0)
            
            if (arg2[1].d != 0)
                r13_1 = *arg2
            
            char result_1 = sub_140aff620(r13_1, &var_2f0)
            arg1[0xa].b = result_1 == 0
            int64_t rcx_146 = var_2f0
            
            if (rcx_146 != 0)
                sub_140a74f90(rcx_146)
            
            int32_t var_1c0_3 = 0
            
            if (var_1c8_1 != 0)
                sub_140a74f90(var_1c8_1)
            
            sub_140669e00(&var_208)
            int64_t* r14_11 = var_4c8
            int64_t* rbx_29 = r14_11
            
            if (rsi_15.d != 0)
                int32_t i_4
                
                do
                    int64_t rcx_149 = *rbx_29
                    
                    if (rcx_149 != 0)
                        sub_140a74f90(rcx_149)
                    
                    rbx_29 = &rbx_29[2]
                    i_4 = rsi_15.d
                    rsi_15 = zx.q(rsi_15.d - 1)
                while (i_4 != 1)
            
            if (r14_11 != 0)
                sub_140a74f90(r14_11)
            
            sub_140b301c0(&var_168)
            result = zx.q(result_1)

__security_check_cookie(var_48 ^ &var_548)
return result
