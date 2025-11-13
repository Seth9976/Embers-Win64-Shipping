// 函数: sub_140cb2be0
// 地址: 0x140cb2be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
int64_t* result = arg1
int64_t* var_368 = arg1
void* rcx = data_143ddb400
data_143e1b200 = 1

if (rcx != 0)
    result = sub_140af5690(rcx, u"/Script/Engine.Engine", 0, 1, result)
    
    if (result != 0)
        int64_t var_588 = 0
        int64_t var_580_1 = 0
        void var_358
        sub_140bbf860(&var_358, &data_143e1b1d0)
        TEB* gsbase
        
        if (data_143e1b428
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e1b428)
            
            if (data_143e1b428 == 0xffffffff)
                sub_140b58260(&data_143e1b420, u"ActiveClassRedirects", 1)
                _Init_thread_footer(&data_143e1b428)
        
        int32_t r11_1 = result[5].d
        void* r9_1 = &result[2]
        int32_t var_41c_1 = 1
        int32_t rcx_3 = 0
        int32_t var_420_1 = 0
        int32_t r8_2 = 0
        void* var_418_1 = r9_1
        int32_t var_410_1 = 0xffffffff
        int64_t var_40c_1 = 0
        
        if (r11_1 != 0)
            void* rax_3 = *(r9_1 + 0x10)
            
            if (rax_3 != 0)
                r9_1 = rax_3
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_140cb2d31:
                int32_t rax_10 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_41c_2 = rax_10
                int32_t var_35c_1 = temp0_1
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_1
                
                var_40c_1.d = r8_2 - rax_11 + 0x1f
                
                if (r8_2 - rax_11 + 0x1f s> r11_1)
                    var_40c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8_2 += 0x20
                    rcx_3 += 1
                    var_40c_1:4.d = r8_2
                    var_420_1 = rcx_3
                    
                    if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_410_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140cb2d31
                
                var_40c_1.d = r11_1
        
        int64_t* result_2 = result
        int128_t zmm0_1 = var_420_1.o
        int64_t* result_1 = result
        int128_t var_328_1 = 0xffffffff
        int16_t var_370_1 = 0
        void* rax_13 = zmm0_1.q
        int128_t var_398_1 = zmm0_1
        int128_t var_3a8 = result_1.o
        zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_328_1 = zmm0_1
        int128_t var_388_1 = zmm0_1
        
        if (0 s< *(rax_13 + 0x18))
            int32_t i = var_398_1:0xc.d
            
            do
                int64_t* rdi_1 = var_3a8.q
                int64_t rbx_3 = sx.q(i) * 0x30
                int64_t* r8_5 = *rdi_1 + rbx_3
                int64_t* rax_108
                int32_t* rdi_17
                
                if (*r8_5 != data_143e1b420)
                    if (sub_140b5b9d0(r8_5, u"ActiveGameNameRedirects") == 0)
                        if (sub_140b5b9d0(*rdi_1 + rbx_3, u"ActiveStructRedirects") == 0)
                            if (sub_140b5b9d0(*rdi_1 + rbx_3, u"ActivePluginRedirects") == 0)
                                if (sub_140b5b9d0(*rdi_1 + rbx_3, u"KnownMissingPackages") == 0)
                                    if (sub_140b5b9d0(*rdi_1 + rbx_3, TaggedPropertyRedirects")
                                            == 0)
                                        if (sub_140b5b9d0(*rdi_1 + rbx_3, u"EnumRedirects") != 0)
                                            void* rdx_104 = *rdi_1 + rbx_3
                                            void* const rbx_42 = 0x18
                                            int32_t rax_162 = *(rdx_104 + 0x20)
                                            int64_t var_4b8 = 0
                                            int64_t var_490 = 0
                                            int64_t var_498 = 0
                                            int32_t rcx_182 = rax_162 - 1
                                            int64_t var_3c0 = 0
                                            
                                            if (rax_162 == 0)
                                                rcx_182 = 0
                                            
                                            int64_t var_3b8_1 = 0
                                            
                                            if (rcx_182 s<= 0)
                                                rbx_42 = 8
                                            
                                            void* rbx_43 = rbx_42 + rdx_104
                                            int16_t* rcx_183
                                            
                                            if (*(rbx_43 + 8) == 0)
                                                rcx_183 = &data_142d40450
                                            else
                                                rcx_183 = *rbx_43
                                            
                                            sub_140b2ac50(rcx_183, u"EnumName=", &var_4b8)
                                            int16_t* rcx_184
                                            
                                            if (*(rbx_43 + 8) == 0)
                                                rcx_184 = &data_142d40450
                                            else
                                                rcx_184 = *rbx_43
                                            
                                            char rax_163 =
                                                sub_140b2ac50(rcx_184, OldEnumEntry=", &var_490)
                                            int32_t rcx_185 = *(rbx_43 + 8)
                                            
                                            if (rax_163 == 0)
                                                int16_t* rcx_196
                                                
                                                if (rcx_185 == 0)
                                                    rcx_196 = &data_142d40450
                                                else
                                                    rcx_196 = *rbx_43
                                                
                                                sub_140b2acc0(rcx_196, OldEnumSubstring=", 
                                                    &var_3c0, 1)
                                            else
                                                int16_t* rcx_186
                                                
                                                if (rcx_185 == 0)
                                                    rcx_186 = &data_142d40450
                                                else
                                                    rcx_186 = *rbx_43
                                                
                                                sub_140b2ac50(rcx_186, u"NewEnumEntry=", &var_498)
                                                int64_t rbx_44 = sx.q(var_580_1.d)
                                                int32_t rax_164 = (rbx_44 + 1).d
                                                var_580_1.d = rax_164
                                                
                                                if (rax_164 s> var_580_1:4.d)
                                                    sub_140775640(&var_588)
                                                
                                                int64_t rdi_37 = rbx_44 * 0xa0
                                                int32_t* rdi_38 = rdi_37 + var_588
                                                int32_t* rdi_39
                                                
                                                if (rdi_37 == neg.q(var_588))
                                                    rdi_39 = nullptr
                                                else
                                                    void var_150
                                                    int64_t* rax_165 =
                                                        sub_140b63b70(&var_4b8, &var_150)
                                                    void var_140
                                                    rdi_39 = sub_140bd5870(rdi_38, 8, 
                                                        sub_140b63b70(&var_4b8, &var_140), rax_165)
                                                
                                                int64_t var_290
                                                int64_t* rax_168 = sub_140b63b70(&var_498, &var_290)
                                                int64_t var_2a0
                                                sub_140bd2e80(&rdi_39[0x14], 
                                                    sub_140b63b70(&var_490, &var_2a0), rax_168)
                                                int64_t rcx_194 = var_2a0
                                                
                                                if (rcx_194 != 0)
                                                    sub_140a74f90(rcx_194)
                                                
                                                int64_t rcx_195 = var_290
                                                
                                                if (rcx_195 != 0)
                                                    sub_140a74f90(rcx_195)
                                            
                                            int64_t rcx_197 = var_3c0
                                            
                                            if (rcx_197 != 0)
                                                sub_140a74f90(rcx_197)
                                    else
                                        int64_t var_488 = 0
                                        int64_t var_4a0 = 0
                                        int64_t var_4a8 = 0
                                        void* rdx_96 = *rdi_1 + rbx_3
                                        int32_t rax_152 = *(rdx_96 + 0x20)
                                        int32_t rcx_170 = rax_152 - 1
                                        int64_t* rax_153 = 0x18
                                        
                                        if (rax_152 == 0)
                                            rcx_170 = 0
                                        
                                        if (rcx_170 s<= 0)
                                            rax_153 = 8
                                        
                                        int16_t* rcx_171
                                        
                                        if (*(rax_153 + rdx_96 + 8) == 0)
                                            rcx_171 = &data_142d40450
                                        else
                                            rcx_171 = *(rax_153 + rdx_96)
                                        
                                        sub_140b2ac50(rcx_171, u"ClassName=", &var_488)
                                        void* rdx_98 = *rdi_1 + rbx_3
                                        int32_t rax_154 = *(rdx_98 + 0x20)
                                        int32_t rcx_172 = rax_154 - 1
                                        int64_t* rax_155 = 0x18
                                        
                                        if (rax_154 == 0)
                                            rcx_172 = 0
                                        
                                        if (rcx_172 s<= 0)
                                            rax_155 = 8
                                        
                                        int16_t* rcx_173
                                        
                                        if (*(rax_155 + rdx_98 + 8) == 0)
                                            rcx_173 = &data_142d40450
                                        else
                                            rcx_173 = *(rax_155 + rdx_98)
                                        
                                        sub_140b2ac50(rcx_173, u"OldPropertyName=", &var_4a0)
                                        void* rdx_100 = *rdi_1 + rbx_3
                                        int32_t rax_156 = *(rdx_100 + 0x20)
                                        int32_t rcx_174 = rax_156 - 1
                                        int64_t* rax_157 = 0x18
                                        
                                        if (rax_156 == 0)
                                            rcx_174 = 0
                                        
                                        if (rcx_174 s<= 0)
                                            rax_157 = 8
                                        
                                        int16_t* rcx_175
                                        
                                        if (*(rax_157 + rdx_100 + 8) == 0)
                                            rcx_175 = &data_142d40450
                                        else
                                            rcx_175 = *(rax_157 + rdx_100)
                                        
                                        sub_140b2ac50(rcx_175, u"NewPropertyName=", &var_4a8)
                                        int64_t rbx_41 = sx.q(var_580_1.d)
                                        int32_t rax_158 = (rbx_41 + 1).d
                                        var_580_1.d = rax_158
                                        
                                        if (rax_158 s> var_580_1:4.d)
                                            sub_140775640(&var_588)
                                        
                                        int64_t rcx_178 = rbx_41 * 0xa0
                                        int32_t* rcx_179 = rcx_178 + var_588
                                        
                                        if (rcx_178 != neg.q(var_588))
                                            int64_t var_2f0 = var_4a8
                                            int64_t rax_160 = var_488
                                            int64_t var_2e8_1 = rax_160
                                            int64_t var_2d0_1 = rax_160
                                            int64_t var_2e0_1 = 0
                                            int64_t var_2d8 = var_4a0
                                            int64_t var_2c8_1 = 0
                                            sub_140bd57c0(rcx_179, 0x20, &var_2d8, &var_2f0)
                                else
                                    int64_t var_4b0 = 0
                                    void* rdx_92 = *rdi_1 + rbx_3
                                    int32_t rax_147 = *(rdx_92 + 0x20)
                                    int32_t rcx_163 = rax_147 - 1
                                    int64_t* rax_148 = 0x18
                                    
                                    if (rax_147 == 0)
                                        rcx_163 = 0
                                    
                                    if (rcx_163 s<= 0)
                                        rax_148 = 8
                                    
                                    int16_t* rcx_164
                                    
                                    if (*(rax_148 + rdx_92 + 8) == 0)
                                        rcx_164 = &data_142d40450
                                    else
                                        rcx_164 = *(rax_148 + rdx_92)
                                    
                                    sub_140b2ac50(rcx_164, u"PackageName=", &var_4b0)
                                    int64_t rbx_37 = sx.q(var_580_1.d)
                                    int32_t rax_149 = (rbx_37 + 1).d
                                    var_580_1.d = rax_149
                                    
                                    if (rax_149 s> var_580_1:4.d)
                                        sub_140775640(&var_588)
                                    
                                    int64_t rbx_39 = rbx_37 * 0xa0
                                    int32_t* rbx_40 = rbx_39 + var_588
                                    
                                    if (rbx_39 != neg.q(var_588))
                                        int64_t var_350 = 0
                                        int64_t var_348_1 = 0
                                        void var_160
                                        sub_140bd5870(rbx_40, 0x20040, 
                                            sub_140b63b70(&var_4b0, &var_160), &var_350)
                            else
                                int64_t var_520 = 0
                                int32_t var_518_1 = 0
                                int64_t var_530 = 0
                                int32_t var_528_1 = 0
                                void* rdx_68 = *rdi_1 + rbx_3
                                int32_t rax_131 = *(rdx_68 + 0x20)
                                int32_t rcx_119 = rax_131 - 1
                                int64_t* rax_132 = 0x18
                                
                                if (rax_131 == 0)
                                    rcx_119 = 0
                                
                                if (rcx_119 s<= 0)
                                    rax_132 = 8
                                
                                int16_t* rcx_120
                                
                                if (*(rax_132 + rdx_68 + 8) == 0)
                                    rcx_120 = &data_142d40450
                                else
                                    rcx_120 = *(rax_132 + rdx_68)
                                
                                sub_140b2acc0(rcx_120, u"OldPluginName=", &var_520, 1)
                                void* rdx_70 = *rdi_1 + rbx_3
                                int32_t rax_133 = *(rdx_70 + 0x20)
                                int32_t rcx_121 = rax_133 - 1
                                int64_t* rax_134 = 0x18
                                
                                if (rax_133 == 0)
                                    rcx_121 = 0
                                
                                if (rcx_121 s<= 0)
                                    rax_134 = 8
                                
                                int16_t* rcx_122
                                
                                if (*(rax_134 + rdx_70 + 8) == 0)
                                    rcx_122 = &data_142d40450
                                else
                                    rcx_122 = *(rax_134 + rdx_70)
                                
                                sub_140b2acc0(rcx_122, u"NewPluginName=", &var_530, 1)
                                int64_t var_550 = 0
                                int64_t var_548_1 = 0
                                sub_1405947f0(&var_550, 2)
                                int32_t r15_2 = var_548_1:4.d
                                int32_t r14_2 = var_548_1.d + 2
                                var_548_1.d = r14_2
                                
                                if (r14_2 s> r15_2)
                                    sub_140594770(&var_550)
                                    r15_2 = var_548_1:4.d
                                    r14_2 = var_548_1.d
                                
                                int64_t r13_1 = var_550
                                UnDecorator::getReferenceType(r13_1, &data_142d5a024, 4)
                                int64_t var_540 = 0
                                int64_t var_538_1 = 0
                                sub_1405947f0(&var_540, 2)
                                int32_t rsi_1 = var_538_1:4.d
                                int32_t rbx_29 = var_538_1.d + 2
                                var_538_1.d = rbx_29
                                
                                if (rbx_29 s> rsi_1)
                                    sub_140594770(&var_540)
                                    rsi_1 = var_538_1:4.d
                                    rbx_29 = var_538_1.d
                                
                                int64_t r12_2 = var_540
                                UnDecorator::getReferenceType(r12_2, &data_142d5a024, 4)
                                int64_t var_4e0
                                int32_t rbx_30
                                int64_t rdi_27
                                
                                if (rbx_29 s> 1)
                                    int32_t rdi_28
                                    
                                    if (var_518_1 == 0)
                                        rdi_28 = 0
                                    else
                                        rdi_28 = var_518_1 - 1
                                    
                                    int32_t rax_136
                                    
                                    if (rbx_29 != 0 || rdi_28 == 0)
                                        rax_136 = 0
                                    else
                                        rax_136 = rbx_29 + 1
                                    
                                    int64_t var_4f0 = r12_2
                                    r12_2 = 0
                                    int32_t rdx_76 = rbx_29 + rdi_28 + rax_136
                                    var_540 = 0
                                    int64_t var_538_2 = 0
                                    
                                    if (rdx_76 s> rsi_1)
                                        sub_1405947f0(&var_4f0, rdx_76)
                                    
                                    sub_140a20ba0(&var_4f0, var_520, rdi_28)
                                    rdi_27 = var_4f0
                                    rbx_30 = rbx_29
                                    var_4f0 = 0
                                    int32_t var_4e8_1
                                    var_4e8_1.q = 0
                                    var_4e0 = rdi_27
                                    int32_t var_4d8_2 = rbx_30
                                    int32_t var_4d4_2 = rsi_1
                                else
                                    rbx_30 = var_518_1
                                    rdi_27 = 0
                                    int64_t rsi_2 = var_520
                                    var_4e0 = 0
                                    
                                    if (rbx_30 != 0)
                                        sub_1405a4c70(&var_4e0, rbx_30, 0)
                                        rdi_27 = var_4e0
                                        memcpy(rdi_27, rsi_2, rbx_30 * 2)
                                    else
                                        int32_t var_4d4_1 = 0
                                
                                int64_t rbx_31
                                
                                if (rbx_30 s> 1)
                                    int32_t rdi_29 = r14_2 - 1
                                    
                                    if (r14_2 == 0)
                                        rdi_29 = 0
                                    
                                    int32_t rax_138
                                    
                                    if (rbx_30 == 0)
                                        rax_138 = rbx_30 + 1
                                    
                                    if (rbx_30 != 0 || rdi_29 == 0)
                                        rax_138 = 0
                                    
                                    int64_t var_450
                                    sub_140596690(&var_450, &var_4e0, rax_138 + rdi_29)
                                    sub_140a20ba0(&var_450, r13_1, rdi_29)
                                    rbx_31 = var_450
                                    int32_t var_448
                                    r14_2 = var_448
                                    int32_t var_444
                                    r15_2 = var_444
                                    rdi_27 = var_4e0
                                    var_450 = 0
                                    var_448.q = 0
                                else
                                    rbx_31 = r13_1
                                    var_550 = 0
                                    r13_1 = 0
                                    int64_t var_548_2 = 0
                                
                                int64_t rcx_135 = var_520
                                
                                if (rcx_135 != 0)
                                    sub_140a74f90(rcx_135)
                                
                                var_520 = rbx_31
                                var_518_1 = r14_2
                                var_518_1 = r15_2
                                
                                if (rdi_27 != 0)
                                    sub_140a74f90(rdi_27)
                                
                                if (r12_2 != 0)
                                    sub_140a74f90(r12_2)
                                
                                if (r13_1 != 0)
                                    sub_140a74f90(r13_1)
                                
                                int64_t var_560 = 0
                                int64_t var_558_1 = 0
                                sub_1405947f0(&var_560, 2)
                                int32_t r12_3 = var_558_1:4.d
                                int32_t r14_3 = var_558_1.d + 2
                                var_558_1.d = r14_3
                                
                                if (r14_3 s> r12_3)
                                    sub_140594770(&var_560)
                                    r12_3 = var_558_1:4.d
                                    r14_3 = var_558_1.d
                                
                                int64_t r13_2 = var_560
                                UnDecorator::getReferenceType(r13_2, &data_142d5a024, 4)
                                int64_t var_500 = 0
                                int32_t var_4f8_1 = 0
                                sub_1405947f0(&var_500, 2)
                                int32_t rbx_32 = var_4f8_1 + 2
                                
                                if (rbx_32 s> 0)
                                    sub_140594770(&var_500)
                                
                                int64_t r15_3 = var_500
                                UnDecorator::getReferenceType(r15_3, &data_142d5a024, 4)
                                int64_t var_4d0
                                int32_t rbx_33
                                int64_t rdi_30
                                
                                if (rbx_32 s> 1)
                                    int32_t rdi_31 = var_528_1 - 1
                                    
                                    if (var_528_1 == 0)
                                        rdi_31 = 0
                                    
                                    int32_t rax_140
                                    
                                    if (rbx_32 == 0)
                                        rax_140 = rbx_32 + 1
                                    
                                    if (rbx_32 != 0 || rdi_31 == 0)
                                        rax_140 = 0
                                    
                                    int64_t var_440
                                    sub_140596690(&var_440, &var_500, rax_140 + rdi_31)
                                    sub_140a20ba0(&var_440, var_530, rdi_31)
                                    rdi_30 = var_440
                                    int32_t var_438
                                    rbx_33 = var_438
                                    r15_3 = var_500
                                    var_4d0 = rdi_30
                                    int32_t var_434
                                    int32_t var_4c4_2 = var_434
                                    var_438.q = 0
                                    var_440 = 0
                                    int32_t var_4c8_2 = rbx_33
                                else
                                    rbx_33 = var_528_1
                                    rdi_30 = 0
                                    var_4d0 = 0
                                    int64_t rsi_3 = var_530
                                    
                                    if (rbx_33 != 0)
                                        sub_1405a4c70(&var_4d0, rbx_33, 0)
                                        rdi_30 = var_4d0
                                        memcpy(rdi_30, rsi_3, rbx_33 * 2)
                                    else
                                        int32_t var_4c4_1 = 0
                                
                                int64_t rbx_34
                                
                                if (rbx_33 s> 1)
                                    int32_t rdi_32 = r14_3 - 1
                                    
                                    if (r14_3 == 0)
                                        rdi_32 = 0
                                    
                                    int32_t rax_142
                                    
                                    if (rbx_33 == 0)
                                        rax_142 = rbx_33 + 1
                                    
                                    if (rbx_33 != 0 || rdi_32 == 0)
                                        rax_142 = 0
                                    
                                    int64_t var_430
                                    sub_140596690(&var_430, &var_4d0, rax_142 + rdi_32)
                                    sub_140a20ba0(&var_430, r13_2, rdi_32)
                                    rbx_34 = var_430
                                    int32_t var_428
                                    r14_3 = var_428
                                    int32_t var_424
                                    r12_3 = var_424
                                    rdi_30 = var_4d0
                                    var_430 = 0
                                    var_428.q = 0
                                else
                                    rbx_34 = r13_2
                                    var_560 = 0
                                    r13_2 = 0
                                    int64_t var_558_2 = 0
                                
                                int64_t rcx_151 = var_530
                                
                                if (rcx_151 != 0)
                                    sub_140a74f90(rcx_151)
                                
                                var_530 = rbx_34
                                var_528_1 = r14_3
                                var_528_1 = r12_3
                                
                                if (rdi_30 != 0)
                                    sub_140a74f90(rdi_30)
                                
                                if (r15_3 != 0)
                                    sub_140a74f90(r15_3)
                                
                                if (r13_2 != 0)
                                    sub_140a74f90(r13_2)
                                
                                int64_t rbx_35 = sx.q(var_580_1.d)
                                int32_t rax_143 = (rbx_35 + 1).d
                                var_580_1.d = rax_143
                                
                                if (rax_143 s> var_580_1:4.d)
                                    sub_140775640(&var_588)
                                
                                int64_t rdi_34 = rbx_35 * 0xa0
                                int32_t* rdi_35 = rdi_34 + var_588
                                
                                if (rdi_34 != neg.q(var_588))
                                    void var_180
                                    int64_t* rax_144 = sub_140596d10(&var_180, &var_530)
                                    void var_170
                                    sub_140bd5870(rdi_35, 0x40040, 
                                        sub_140596d10(&var_170, &var_520), rax_144)
                                
                                int64_t rcx_159 = var_530
                                
                                if (rcx_159 != 0)
                                    sub_140a74f90(rcx_159)
                                
                                int64_t rcx_160 = var_520
                                
                                if (rcx_160 != 0)
                                    sub_140a74f90(rcx_160)
                        else
                            int64_t var_458 = 0
                            int64_t var_460 = 0
                            void* rdx_62 = *rdi_1 + rbx_3
                            int32_t rax_124 = *(rdx_62 + 0x20)
                            int32_t rcx_110 = rax_124 - 1
                            int64_t* rax_125 = 0x18
                            
                            if (rax_124 == 0)
                                rcx_110 = 0
                            
                            if (rcx_110 s<= 0)
                                rax_125 = 8
                            
                            int16_t* rcx_111
                            
                            if (*(rax_125 + rdx_62 + 8) == 0)
                                rcx_111 = &data_142d40450
                            else
                                rcx_111 = *(rax_125 + rdx_62)
                            
                            sub_140b2ac50(rcx_111, u"OldStructName=", &var_458)
                            void* rdx_64 = *rdi_1 + rbx_3
                            int32_t rax_126 = *(rdx_64 + 0x20)
                            int32_t rcx_112 = rax_126 - 1
                            int64_t* rax_127 = 0x18
                            
                            if (rax_126 == 0)
                                rcx_112 = 0
                            
                            if (rcx_112 s<= 0)
                                rax_127 = 8
                            
                            int16_t* rcx_113
                            
                            if (*(rax_127 + rdx_64 + 8) == 0)
                                rcx_113 = &data_142d40450
                            else
                                rcx_113 = *(rax_127 + rdx_64)
                            
                            sub_140b2ac50(rcx_113, u"NewStructName=", &var_460)
                            int64_t rbx_27 = sx.q(var_580_1.d)
                            int32_t rax_128 = (rbx_27 + 1).d
                            var_580_1.d = rax_128
                            
                            if (rax_128 s> var_580_1:4.d)
                                sub_140775640(&var_588)
                            
                            int64_t rdi_26 = rbx_27 * 0xa0
                            rdi_17 = rdi_26 + var_588
                            
                            if (rdi_26 != neg.q(var_588))
                                void var_1a0
                                rax_108 = sub_140b63b70(&var_460, &var_1a0)
                                void var_190
                                sub_140bd5870(rdi_17, 4, sub_140b63b70(&var_458, &var_190), rax_108)
                    else
                        int64_t var_468 = 0
                        int64_t var_470 = 0
                        void* rdx_55 = *rdi_1 + rbx_3
                        int32_t rax_116 = *(rdx_55 + 0x20)
                        int32_t rcx_100 = rax_116 - 1
                        int64_t* rax_117 = 0x18
                        
                        if (rax_116 == 0)
                            rcx_100 = 0
                        
                        if (rcx_100 s<= 0)
                            rax_117 = 8
                        
                        int16_t* rcx_101
                        
                        if (*(rax_117 + rdx_55 + 8) == 0)
                            rcx_101 = &data_142d40450
                        else
                            rcx_101 = *(rax_117 + rdx_55)
                        
                        sub_140b2ac50(rcx_101, u"OldGameName=", &var_468)
                        void* rdx_57 = *rdi_1 + rbx_3
                        int32_t rax_118 = *(rdx_57 + 0x20)
                        int32_t rcx_102 = rax_118 - 1
                        int64_t* rax_119 = 0x18
                        
                        if (rax_118 == 0)
                            rcx_102 = 0
                        
                        if (rcx_102 s<= 0)
                            rax_119 = 8
                        
                        int16_t* rcx_103
                        
                        if (*(rax_119 + rdx_57 + 8) == 0)
                            rcx_103 = &data_142d40450
                        else
                            rcx_103 = *(rax_119 + rdx_57)
                        
                        sub_140b2ac50(rcx_103, u"NewGameName=", &var_470)
                        int64_t rbx_25 = sx.q(var_580_1.d)
                        int32_t rax_120 = (rbx_25 + 1).d
                        var_580_1.d = rax_120
                        
                        if (rax_120 s> var_580_1:4.d)
                            sub_140775640(&var_588)
                        
                        int64_t rdi_23 = rbx_25 * 0xa0
                        int32_t* rdi_24 = rdi_23 + var_588
                        
                        if (rdi_23 != neg.q(var_588))
                            void var_1c0
                            int64_t* rax_121 = sub_140b63b70(&var_470, &var_1c0)
                            void var_1b0
                            sub_140bd5870(rdi_24, 0x40, sub_140b63b70(&var_468, &var_1b0), rax_121)
                else
                    int64_t var_568 = 0
                    int64_t var_570 = 0
                    int64_t var_4c0 = 0
                    int64_t var_508 = 0
                    int64_t var_510 = 0
                    int64_t var_478 = 0
                    int64_t var_480 = 0
                    char var_578 = 0
                    int32_t rax_16 = r8_5[4].d
                    int32_t rcx_5 = rax_16 - 1
                    int64_t* rax_17 = 0x18
                    
                    if (rax_16 == 0)
                        rcx_5 = 0
                    
                    if (rcx_5 s<= 0)
                        rax_17 = 8
                    
                    int16_t* rcx_6
                    
                    if (*(rax_17 + r8_5 + 8) == 0)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *(rax_17 + r8_5)
                    
                    sub_140b0e8d0(rcx_6, u"InstanceOnly=", &var_578)
                    void* rdx_7 = *rdi_1 + rbx_3
                    int32_t rax_18 = *(rdx_7 + 0x20)
                    int32_t rcx_7 = rax_18 - 1
                    int64_t* rax_19 = 0x18
                    
                    if (rax_18 == 0)
                        rcx_7 = 0
                    
                    if (rcx_7 s<= 0)
                        rax_19 = 8
                    
                    int16_t* rcx_8
                    
                    if (*(rax_19 + rdx_7 + 8) == 0)
                        rcx_8 = &data_142d40450
                    else
                        rcx_8 = *(rax_19 + rdx_7)
                    
                    sub_140b2ac50(rcx_8, u"ObjectName=", &var_4c0)
                    void* rdx_9 = *rdi_1 + rbx_3
                    int32_t rax_20 = *(rdx_9 + 0x20)
                    int32_t rcx_9 = rax_20 - 1
                    int64_t* rax_21 = 0x18
                    
                    if (rax_20 == 0)
                        rcx_9 = 0
                    
                    if (rcx_9 s<= 0)
                        rax_21 = 8
                    
                    int16_t* rcx_10
                    
                    if (*(rax_21 + rdx_9 + 8) == 0)
                        rcx_10 = &data_142d40450
                    else
                        rcx_10 = *(rax_21 + rdx_9)
                    
                    sub_140b2ac50(rcx_10, u"OldClassName=", &var_568)
                    void* rdx_11 = *rdi_1 + rbx_3
                    int32_t rax_22 = *(rdx_11 + 0x20)
                    int32_t rcx_11 = rax_22 - 1
                    int64_t* rax_23 = 0x18
                    
                    if (rax_22 == 0)
                        rcx_11 = 0
                    
                    if (rcx_11 s<= 0)
                        rax_23 = 8
                    
                    int16_t* rcx_12
                    
                    if (*(rax_23 + rdx_11 + 8) == 0)
                        rcx_12 = &data_142d40450
                    else
                        rcx_12 = *(rax_23 + rdx_11)
                    
                    sub_140b2ac50(rcx_12, u"NewClassName=", &var_570)
                    void* rdx_13 = *rdi_1 + rbx_3
                    int32_t rax_24 = *(rdx_13 + 0x20)
                    int32_t rcx_13 = rax_24 - 1
                    int64_t* rax_25 = 0x18
                    
                    if (rax_24 == 0)
                        rcx_13 = 0
                    
                    if (rcx_13 s<= 0)
                        rax_25 = 8
                    
                    int16_t* rcx_14
                    
                    if (*(rax_25 + rdx_13 + 8) == 0)
                        rcx_14 = &data_142d40450
                    else
                        rcx_14 = *(rax_25 + rdx_13)
                    
                    sub_140b2ac50(rcx_14, u"OldSubobjName=", &var_508)
                    void* rdx_15 = *rdi_1 + rbx_3
                    int32_t rax_26 = *(rdx_15 + 0x20)
                    int32_t rcx_15 = rax_26 - 1
                    int64_t* rax_27 = 0x18
                    
                    if (rax_26 == 0)
                        rcx_15 = 0
                    
                    if (rcx_15 s<= 0)
                        rax_27 = 8
                    
                    int16_t* rcx_16
                    
                    if (*(rax_27 + rdx_15 + 8) == 0)
                        rcx_16 = &data_142d40450
                    else
                        rcx_16 = *(rax_27 + rdx_15)
                    
                    sub_140b2ac50(rcx_16, u"NewSubobjName=", &var_510)
                    void* rdx_17 = *rdi_1 + rbx_3
                    int32_t rax_28 = *(rdx_17 + 0x20)
                    int32_t rcx_17 = rax_28 - 1
                    int64_t* rax_29 = 0x18
                    
                    if (rax_28 == 0)
                        rcx_17 = 0
                    
                    if (rcx_17 s<= 0)
                        rax_29 = 8
                    
                    int16_t* rcx_18
                    
                    if (*(rax_29 + rdx_17 + 8) == 0)
                        rcx_18 = &data_142d40450
                    else
                        rcx_18 = *(rax_29 + rdx_17)
                    
                    sub_140b2ac50(rcx_18, u"NewClassClass=", &var_478)
                    void* rdx_19 = *rdi_1 + rbx_3
                    int32_t rax_30 = *(rdx_19 + 0x20)
                    int32_t rcx_19 = rax_30 - 1
                    int64_t* rax_31 = 0x18
                    
                    if (rax_30 == 0)
                        rcx_19 = 0
                    
                    if (rcx_19 s<= 0)
                        rax_31 = 8
                    
                    int16_t* rcx_20
                    
                    if (*(rax_31 + rdx_19 + 8) == 0)
                        rcx_20 = &data_142d40450
                    else
                        rcx_20 = *(rax_31 + rdx_19)
                    
                    sub_140b2ac50(rcx_20, u"NewClassPackage=", &var_480)
                    int32_t rcx_21
                    rcx_21.b = sub_140b5b8a0(var_510.d, 0) == 0
                    
                    if ((var_510:4.d != 0 | rcx_21.b) != 0)
                    label_140cb38e1:
                        int64_t rbx_22 = sx.q(var_580_1.d)
                        int32_t rax_109 = (rbx_22 + 1).d
                        var_580_1.d = rax_109
                        
                        if (rax_109 s> var_580_1:4.d)
                            sub_140775640(&var_588)
                        
                        int64_t rdi_19 = rbx_22 * 0xa0
                        int32_t* rdi_20 = rdi_19 + var_588
                        int32_t* rdi_21
                        
                        if (rdi_19 == neg.q(var_588))
                            rdi_21 = nullptr
                        else
                            void var_1e0
                            int64_t* rax_110 = sub_140b63b70(&var_568, &var_1e0)
                            void var_1d0
                            rdi_21 =
                                sub_140bd5870(rdi_20, 2, sub_140b63b70(&var_568, &var_1d0), rax_110)
                        
                        int64_t var_2b0
                        int64_t* rax_113 = sub_140b63b70(&var_510, &var_2b0)
                        int64_t var_2c0
                        int64_t* var_310 = sub_140b63b70(&var_508, &var_2c0)
                        int64_t* var_308_1 = rax_113
                        void var_360
                        sub_140caa010(&rdi_21[0x14], &var_360, &var_310, nullptr)
                        int64_t rcx_97 = var_2c0
                        
                        if (rcx_97 != 0)
                            sub_140a74f90(rcx_97)
                        
                        int64_t rcx_98 = var_2b0
                        
                        if (rcx_98 != 0)
                            sub_140a74f90(rcx_98)
                    else
                        int32_t rcx_22
                        rcx_22.b = sub_140b5b8a0(var_508.d, 0) == 0
                        
                        if ((var_508:4.d != 0 | rcx_22.b) != 0)
                            goto label_140cb38e1
                        
                        if (var_578 == 0)
                            int32_t rcx_32
                            rcx_32.b = sub_140b5b8a0(var_4c0.d, 0) == 0
                            
                            if ((var_4c0:4.d != 0 | rcx_32.b) == 0)
                                int16_t** var_598_1
                                var_598_1.d = 0xffffffff
                                int64_t var_280
                                int32_t rax_42 = sub_140a23cf0(sub_140b63b70(&var_570, &var_280), 
                                    &data_142d404c4, 0, 1, var_598_1.d)
                                var_598_1.d = 0xffffffff
                                int64_t var_270
                                int32_t rax_44 = sub_140a23cf0(sub_140b63b70(&var_570, &var_270), 
                                    &data_142d404c4, 0, 0, var_598_1.d)
                                int64_t rcx_37 = var_280
                                int32_t rbx_8
                                rbx_8.b = rax_44 != rax_42
                                
                                if (rcx_37 != 0)
                                    sub_140a74f90(rcx_37)
                                
                                int64_t rcx_38 = var_270
                                
                                if (rcx_38 != 0)
                                    sub_140a74f90(rcx_38)
                                
                                int64_t var_400
                                
                                if (rbx_8.b == 0)
                                    int64_t rbx_17 = sx.q(var_580_1.d)
                                    int32_t rax_98 = (rbx_17 + 1).d
                                    var_580_1.d = rax_98
                                    
                                    if (rax_98 s> var_580_1:4.d)
                                        sub_140775640(&var_588)
                                    
                                    int64_t rdi_10 = rbx_17 * 0xa0
                                    int32_t* rdi_11 = rdi_10 + var_588
                                    int32_t* rdx_40
                                    
                                    if (rdi_10 == neg.q(var_588))
                                        rdx_40 = nullptr
                                    else
                                        void var_e0
                                        int64_t* rax_99 = sub_140b63b70(&var_570, &var_e0)
                                        void var_d0
                                        rdx_40 = sub_140bd5870(rdi_11, 2, 
                                            sub_140b63b70(&var_568, &var_d0), rax_99)
                                    
                                    int64_t rcx_79 = var_478
                                    int64_t rax_102 = var_480
                                    
                                    if (rcx_79 != 0 || rax_102 != 0)
                                        var_400 = rcx_79
                                        int64_t var_3f8_2 = 0
                                        *(rdx_40 + 0x34) = var_400.o
                                        *(rdx_40 + 0x44) = rax_102
                                    else
                                        int64_t var_250
                                        char rax_104 = sub_140a32ae0(
                                            sub_140b63b70(&rdx_40[7], &var_250), 
                                            &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
                                            0xc], 0)
                                        int64_t rcx_82 = var_250
                                        
                                        if (rcx_82 != 0)
                                            sub_140a74f90(rcx_82)
                                        
                                        int64_t rbx_20 = sx.q(var_580_1.d)
                                        int32_t rax_105 = (rbx_20 + 1).d
                                        var_580_1.d = rax_105
                                        
                                        if (rax_104 == 0)
                                            if (rax_105 s> var_580_1:4.d)
                                                sub_140775640(&var_588)
                                            
                                            int64_t rdi_16 = rbx_20 * 0xa0
                                            rdi_17 = rdi_16 + var_588
                                            
                                            if (rdi_16 != neg.q(var_588))
                                                void var_200
                                                rax_108 = sub_140b63b70(&var_570, &var_200)
                                                void var_1f0
                                                sub_140bd5870(rdi_17, 4, 
                                                    sub_140b63b70(&var_568, &var_1f0), rax_108)
                                        else
                                            if (rax_105 s> var_580_1:4.d)
                                                sub_140775640(&var_588)
                                            
                                            int64_t rdi_13 = rbx_20 * 0xa0
                                            int32_t* rdi_14 = rdi_13 + var_588
                                            
                                            if (rdi_13 != neg.q(var_588))
                                                void var_c0
                                                int64_t* rax_106 = sub_140b63b70(&var_570, &var_c0)
                                                void var_210
                                                sub_140bd5870(rdi_14, 8, 
                                                    sub_140b63b70(&var_568, &var_210), rax_106)
                                else
                                    void var_b0
                                    int64_t* rax_45 = sub_140aae2b0(&var_b0, &var_570)
                                    int64_t* rax_46 = sub_140aae2b0(&result_1, &data_143e1b420)
                                    void var_228
                                    char* var_f0
                                    char** rax_48 = sub_140a96390(&var_f0, 
                                        _vfprintf_p_l(&var_228, 
                                            {0} cannot contain a rename of nested objects for '{1}'; if you "
                                    "want to leave the outer alone, just spe", 
                                        LinkerLoad"))
                                    int64_t var_88_1 = *rax_46
                                    void* rcx_44 = rax_46[1]
                                    int32_t var_98_1 = 4
                                    void* var_80_1 = rcx_44
                                    
                                    if (rcx_44 != 0)
                                        *(rcx_44 + 8) += 1
                                    
                                    int32_t var_78_1 = rax_46[2].d
                                    int64_t var_58_1 = *rax_45
                                    void* rax_51 = rax_45[1]
                                    char var_70_1 = 1
                                    int32_t var_68_1 = 4
                                    void* var_50_1 = rax_51
                                    
                                    if (rax_51 != 0)
                                        *(rax_51 + 8) += 1
                                    
                                    int32_t var_48_1 = rax_45[2].d
                                    char var_40_1 = 1
                                    void* var_3d0 = nullptr
                                    int32_t var_3c8_1 = 2
                                    sub_1405a4b40(&var_3d0, 2, 0)
                                    void var_90
                                    void* rdx_30 = &var_90
                                    int64_t* rcx_47 = var_3d0 + 8
                                    int32_t j_2 = 2
                                    int32_t j
                                    
                                    do
                                        rcx_47[-1].d = *(rdx_30 - 8)
                                        *rcx_47 = *rdx_30
                                        *rcx_47 = *rdx_30
                                        *rcx_47 = *rdx_30
                                        *rcx_47 = *rdx_30
                                        rcx_47[4].b = 0
                                        
                                        if (*(rdx_30 + 0x20) != 0)
                                            rcx_47[1] = *(rdx_30 + 8)
                                            void* rax_59 = *(rdx_30 + 0x10)
                                            rcx_47[2] = rax_59
                                            
                                            if (rax_59 != 0)
                                                *(rax_59 + 8) += 1
                                            
                                            rcx_47[3].d = *(rdx_30 + 0x18)
                                            rcx_47[4].b = 1
                                        
                                        rcx_47 = &rcx_47[6]
                                        rdx_30 += 0x30
                                        j = j_2
                                        j_2 -= 1
                                    while (j != 1)
                                    char* var_300 = *rax_48
                                    void* rax_62 = rax_48[1]
                                    void* var_2f8_1 = rax_62
                                    
                                    if (rax_62 != 0)
                                        *(rax_62 + 8) += 1
                                    
                                    void var_240
                                    int64_t* rax_63 = sub_140aac870(&var_240, &var_300, &var_3d0)
                                    var_400 = *rax_63
                                    int64_t* rcx_50 = rax_63[1]
                                    
                                    if (rcx_50 != 0)
                                        rcx_50[1].d += 1
                                    
                                    int64_t var_3f0
                                    var_3f0.d = rax_63[2].d
                                    int64_t* var_238
                                    
                                    if (var_238 != 0)
                                        var_238[1].d -= 1
                                        
                                        if (var_238[1].d == 1)
                                            (**var_238)(var_238)
                                            int32_t rax_67 = *(var_238 + 0xc)
                                            *(var_238 + 0xc) -= 1
                                            
                                            if (rax_67 == 1)
                                                (*(*var_238 + 8))(var_238, 1)
                                    
                                    sub_140596f50(&var_3d0)
                                    int64_t j_1 = 2
                                    int64_t __saved_r12
                                    int64_t* rdi_8 = &__saved_r12
                                    
                                    do
                                        j_1 -= 1
                                        rdi_8 = &rdi_8[-6]
                                        
                                        if (*rdi_8 != 0)
                                            *rdi_8 = 0
                                            int64_t* rbx_10 = rdi_8[-2]
                                            
                                            if (rbx_10 != 0)
                                                rbx_10[1].d -= 1
                                                
                                                if (rbx_10[1].d == 1)
                                                    (**rbx_10)(rbx_10)
                                                    int32_t rax_71 = *(rbx_10 + 0xc)
                                                    *(rbx_10 + 0xc) -= 1
                                                    
                                                    if (rax_71 == 1)
                                                        (*(*rbx_10 + 8))(rbx_10, 1)
                                    while (j_1 != 0)
                                    
                                    int64_t* rbx_11 = rax_48[1]
                                    
                                    if (rbx_11 != 0)
                                        rbx_11[1].d -= 1
                                        
                                        if (rbx_11[1].d == 1)
                                            (**rbx_11)(rbx_11)
                                            int32_t rax_75 = *(rbx_11 + 0xc)
                                            *(rbx_11 + 0xc) -= 1
                                            
                                            if (rax_75 == 1)
                                                (*(*rbx_11 + 8))(rbx_11, zx.q((j_1 + 1).d))
                                    
                                    int64_t* rbx_12 = rax_46[1]
                                    
                                    if (rbx_12 != 0)
                                        rbx_12[1].d -= 1
                                        
                                        if (rbx_12[1].d == 1)
                                            (**rbx_12)(rbx_12)
                                            int32_t rax_79 = *(rbx_12 + 0xc)
                                            *(rbx_12 + 0xc) -= 1
                                            
                                            if (rax_79 == 1)
                                                (*(*rbx_12 + 8))(rbx_12, 1)
                                    
                                    int64_t* rbx_13 = rax_45[1]
                                    
                                    if (rbx_13 != 0)
                                        rbx_13[1].d -= 1
                                        
                                        if (rbx_13[1].d == 1)
                                            (**rbx_13)(rbx_13)
                                            int32_t rax_83 = *(rbx_13 + 0xc)
                                            *(rbx_13 + 0xc) -= 1
                                            
                                            if (rax_83 == 1)
                                                (*(*rbx_13 + 8))(rbx_13, 1)
                                    
                                    void var_260
                                    sub_140bc5c10(&var_358, &var_260, &var_400)
                                    int64_t* var_258
                                    
                                    if (var_258 != 0)
                                        var_258[1].d -= 1
                                        
                                        if (var_258[1].d == 1)
                                            (**var_258)(var_258)
                                            int32_t temp29_1 = *(var_258 + 0xc)
                                            *(var_258 + 0xc) -= 1
                                            
                                            if (temp29_1 == 1)
                                                (*(*var_258 + 8))(var_258, 1)
                                    
                                    if (rcx_50 != 0)
                                        rcx_50[1].d -= 1
                                        
                                        if (rcx_50[1].d == 1)
                                            (**rcx_50)(rcx_50)
                                            int32_t rax_89 = *(rcx_50 + 0xc)
                                            *(rcx_50 + 0xc) -= 1
                                            
                                            if (rax_89 == 1)
                                                (*(*rcx_50 + 8))(rcx_50, 1)
                                    
                                    int64_t* var_220
                                    
                                    if (var_220 != 0)
                                        var_220[1].d -= 1
                                        
                                        if (var_220[1].d == 1)
                                            (**var_220)(var_220)
                                            int32_t rax_93 = *(var_220 + 0xc)
                                            *(var_220 + 0xc) -= 1
                                            
                                            if (rax_93 == 1)
                                                (*(*var_220 + 8))(var_220, 1)
                        else
                            int64_t rbx_5 = sx.q(var_580_1.d)
                            int32_t rcx_23
                            rcx_23.b = var_570:4.d == 0
                            int32_t rax_35 = (rbx_5 + 1).d
                            var_580_1.d = rax_35
                            
                            if ((rcx_23.b & sub_140b5b8a0(var_570.d, 0)) == 0)
                                if (rax_35 s> var_580_1:4.d)
                                    sub_140775640(&var_588)
                                
                                int64_t rdi_6 = rbx_5 * 0xa0
                                int32_t* rdi_7 = rdi_6 + var_588
                                
                                if (rdi_6 != neg.q(var_588))
                                    void var_110
                                    int64_t* rax_38 = sub_140b63b70(&var_570, &var_110)
                                    void var_100
                                    sub_140bd5870(rdi_7, 0x10002, 
                                        sub_140b63b70(&var_568, &var_100), rax_38)
                            else
                                if (rax_35 s> var_580_1:4.d)
                                    sub_140775640(&var_588)
                                
                                int64_t rdi_3 = rbx_5 * 0xa0
                                int32_t* rdi_4 = rdi_3 + var_588
                                
                                if (rdi_3 != neg.q(var_588))
                                    void var_130
                                    int64_t* rax_36 = sub_140b63b70(&var_570, &var_130)
                                    void var_120
                                    sub_140bd5870(rdi_4, 0x30002, 
                                        sub_140b63b70(&var_568, &var_120), rax_36)
                var_398_1:8.d &= not.d(var_3a8:0xc.d)
                sub_14059bdd0(&var_3a8:8)
                i = var_398_1:0xc.d
            while (i s< *(var_398_1.q + 0x18))
            
            if (var_370_1.b != 0 && var_370_1:1.b != 0)
                sub_140a6d3f0(result, result[1].d - *(result + 0x34), 1)
        
        sub_140bd8190(&var_588)
        result = sub_140bd6610(&var_588)

__security_check_cookie(rax_1 ^ &var_5b8)
return result
