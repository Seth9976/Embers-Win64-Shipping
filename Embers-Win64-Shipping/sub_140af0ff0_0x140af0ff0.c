// 函数: sub_140af0ff0
// 地址: 0x140af0ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6a8
int64_t rax_1 = __security_cookie ^ &var_6a8
int64_t* r15 = arg1
int64_t* var_678 = arg1
char result = sub_140af9190(arg3, arg1[0x1b])

if (result == 0)
    result = 0
else
    if (arg4 != 0)
        sub_140af88b0(arg2, r15)
    
    int64_t* rdi_1 = nullptr
    int32_t var_67c_1 = 0xffffffff
    uint64_t r14
    r14.b = 0
    int16_t* const r12_1 = &data_142d40450
    char r8_1 = 0
    uint32_t var_684_1 = r14.d
    bool rcx_1 = true
    int32_t r13_1 = -1
    double var_580[0x2]
    int64_t var_570
    double var_560[0x2]
    
    if (arg4 != 0)
        int32_t r11_1 = r15[5].d
        void* r9 = &r15[2]
        r12_1.b = 0
        int32_t var_5c4_1 = 1
        void* var_5c0_1 = r9
        int32_t rcx_3 = 0
        int32_t var_5c8_1 = 0
        int32_t r8_2 = 0
        int32_t var_5b8_1 = 0xffffffff
        int64_t var_5b4_1 = 0
        
        if (r11_1 != 0)
            void* rax_3 = *(r9 + 0x10)
            
            if (rax_3 != 0)
                r9 = rax_3
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9
            
            if (rdx_4 != 0)
            label_140af1118:
                int32_t rax_10 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_5c4_2 = rax_10
                int32_t var_420_1 = temp0_1
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_1
                
                var_5b4_1.d = r8_2 - rax_11 + 0x1f
                
                if (r8_2 - rax_11 + 0x1f s> r11_1)
                    var_5b4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8_2 += 0x20
                    rcx_3 += 1
                    var_5b4_1:4.d = r8_2
                    var_5c8_1 = rcx_3
                    
                    if (rdx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                    int32_t var_5b8_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140af1118
                
                var_5b4_1.d = r11_1
        
        var_570 = 0xffffffff
        var_580 = var_5c8_1.o
        double zmm1_1[0x2] = var_580
        var_560 = r15.o
        int64_t var_540_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< r11_1)
            int32_t rcx_5 = zmm1_1[1]:4.d
            
            while (true)
                r12_1 = var_560[0]
                int16_t* r14_1 = nullptr
                int64_t* rsi_1 = sx.q(rcx_5) * 0xb8
                int64_t rax_14 = *r12_1
                uint64_t var_530 = 0
                int32_t rbx_1 = *(rsi_1 + rax_14 + 8)
                int64_t r15_1 = *(rsi_1 + rax_14)
                
                if (rbx_1 != 0)
                    sub_1405a4c70(&var_530, rbx_1, 0)
                    r14_1 = var_530
                    memcpy(r14_1, r15_1, rbx_1 * 2)
                else
                    int32_t var_524_1 = 0
                
                int16_t* const rdx_8 = &data_142d40450
                int16_t* const rcx_8 = &data_142d40450
                
                if (data_143de5628 != 0)
                    rdx_8 = data_143de5620
                
                if (rbx_1 != 0)
                    rcx_8 = r14_1
                
                if (sub_140a54510(rcx_8, rdx_8) != 0)
                    int16_t* const rdx_9 = &data_142d40450
                    int16_t* const rcx_9 = &data_142d40450
                    
                    if (data_143de5618 != 0)
                        rdx_9 = data_143de5610
                    
                    if (rbx_1 != 0)
                        rcx_9 = r14_1
                    
                    if (sub_140a54510(rcx_9, rdx_9) != 0)
                        int16_t* const rdx_10 = &data_142d40450
                        int16_t* const rcx_10 = &data_142d40450
                        
                        if (data_143de5638 != 0)
                            rdx_10 = data_143de5630
                        
                        if (rbx_1 != 0)
                            rcx_10 = r14_1
                        
                        if (sub_140a54510(rcx_10, rdx_10) == 0)
                            int64_t var_228
                            sub_140a3b500(&var_228, *r12_1 + 0x10 + rsi_1)
                            int32_t var_608
                            sub_14093f560(&var_228, &var_608, data_143de5600)
                            int64_t rax_18 = sx.q(var_608)
                            void* const rax_21
                            
                            if (rax_18.d == 0xffffffff)
                                rax_21 = nullptr
                            else
                                rax_21 = rax_18 * 0x30 + var_228
                            
                            int64_t* rcx_13 = rax_21 + 8
                            
                            if (rax_21 == 0)
                                rcx_13 = nullptr
                            
                            if (rcx_13 != 0)
                                int32_t rsi_2 = rcx_13[1].d
                                int16_t* _String_2 = nullptr
                                int64_t r15_2 = *rcx_13
                                uint64_t _String_4 = 0
                                
                                if (rsi_2 != 0)
                                    sub_1405a4c70(&_String_4, rsi_2, 0)
                                    _String_2 = _String_4
                                    memcpy(_String_2, r15_2, rsi_2 * 2)
                                else
                                    int32_t var_514_1 = 0
                                
                                int16_t* const _String = &data_142d40450
                                
                                if (rsi_2 != 0)
                                    _String = _String_2
                                
                                r13_1 = _wtoi(_String)
                                
                                if (_String_2 != 0)
                                    sub_140a74f90(_String_2)
                            
                            sub_140a3c110(&var_228)
                        
                        if (r14_1 != 0)
                            sub_140a74f90(r14_1)
                        
                        zmm1_1[1].d &= not.d(var_560[1]:4.d)
                        sub_14059bdd0(&var_560[1])
                        rcx_5 = zmm1_1[1]:4.d
                        
                        if (rcx_5 s< *(zmm1_1[0] i+ 0x18))
                            continue
                        
                        r12_1.b = 0
                        break
                
                r12_1.b = 1
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                break
            
            r15 = var_678
            r14 = zx.q(var_684_1)
        
        int64_t* rbx_2 = r15[0x1b]
        int32_t var_5fc
        int64_t r9_1 = sub_140a452d0(rbx_2, &var_5fc, &data_143de5630)
        int64_t rax_26 = sx.q(var_5fc)
        void* const rax_28
        
        if (rax_26.d == 0xffffffff)
            rax_28 = nullptr
        else
            rax_28 = rax_26 * 0xb8 + *rbx_2
        
        int64_t* rbx_3 = rax_28 + 0x10
        
        if (rax_28 == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            int32_t var_604
            r9_1 = sub_14093f560(rbx_3, &var_604, data_143de5600)
            int64_t rax_29 = sx.q(var_604)
            void* const rax_32
            
            if (rax_29.d == 0xffffffff)
                rax_32 = nullptr
            else
                rax_32 = rax_29 * 0x30 + *rbx_3
            
            int64_t* rcx_24 = rax_32 + 8
            
            if (rax_32 == 0)
                rcx_24 = nullptr
            
            if (rcx_24 != 0)
                int32_t rbx_4 = rcx_24[1].d
                int64_t rsi_3 = *rcx_24
                uint64_t _String_5 = 0
                int16_t* _String_3
                
                if (rbx_4 != 0)
                    sub_1405a4c70(&_String_5, rbx_4, 0)
                    _String_3 = _String_5
                    memcpy(_String_3, rsi_3, rbx_4 * 2)
                else
                    _String_3 = nullptr
                
                int16_t* const _String_1 = &data_142d40450
                
                if (rbx_4 != 0)
                    _String_1 = _String_3
                
                int32_t rax_33
                rax_33, r9_1 = _wtoi(_String_1)
                uint32_t r14_2 = zx.d(r14.b)
                var_67c_1 = rax_33
                
                if (rax_33 s> r13_1)
                    r14_2 = 1
                
                var_684_1 = r14_2
                
                if (_String_3 != 0)
                    r9_1 = sub_140a74f90(_String_3)
        
        char rax_34
        int64_t r9_2
        
        if (r12_1.b == 0)
            if (data_143dbb3e1 == 0)
                sub_140af98a0("Unknown", 0x22, 
                    Attempting to get the command line but it hasn't been initialized yet.", r9_1)
                
                if (data_143de542b == 0)
                    int64_t* rcx_28 = data_143de5de8
                    data_143de5498 = 1
                    sub_140b1f700(rcx_28, u"%s", &data_143ddb420)
            
            rax_34, r9_2 = sub_140b21a10(&data_143dbb3f0, u"REGENERATEINIS")
        
        if (r12_1.b != 0 || rax_34 == 1)
            r8_1 = 1
            rcx_1 = true
        else
            if (data_143dbb3e1 == 0)
                sub_140af98a0("Unknown", 0x22, 
                    Attempting to get the command line but it hasn't been initialized yet.", r9_2)
                
                if (data_143de542b == 0)
                    int64_t* rcx_29 = data_143de5de8
                    data_143de5498 = 1
                    sub_140b1f700(rcx_29, u"%s", &data_143ddb420)
            
            if (sub_140b21a10(&data_143dbb3f0, u"NOAUTOINIUPDATE") == 0)
                rcx_1 = true
            else
                int32_t rsi_4 = data_1439a0490
                
                if (rsi_4 - 2 u> 1)
                    void var_3b0
                    int64_t* rax_37 = sub_140aae420(&var_3b0, arg2)
                    void var_3d8
                    char* var_3c0
                    char** rax_39 = sub_140a96390(&var_3c0, 
                        _vfprintf_p_l(&var_3d8, 
                            Your ini ({0}) file is outdated. Do you want to automatically update it saving "
                    "the previous version? Not doing so might cause crashes!", 
                        Core"))
                    int64_t rcx_33 = *rax_37
                    int64_t* rcx_34 = rax_37[1]
                    int32_t var_398_1 = 4
                    
                    if (rcx_34 != 0)
                        rcx_34[1].d += 1
                    
                    int32_t rcx_35 = rax_37[2].d
                    char var_370_1 = 1
                    int32_t* var_510 = nullptr
                    int32_t var_508_1 = 1
                    sub_1405a4b40(&var_510, 1, 0)
                    int32_t* rcx_37 = var_510
                    *rcx_37 = var_398_1
                    int64_t var_390
                    *(rcx_37 + 8) = var_390
                    *(rcx_37 + 8) = var_390
                    rcx_37[2] = var_390.d
                    *(rcx_37 + 8) = var_390
                    rcx_37[0xa].b = 0
                    
                    if (var_370_1 != 0)
                        *(rcx_37 + 0x10) = rcx_33
                        *(rcx_37 + 0x18) = rcx_34
                        
                        if (rcx_34 != 0)
                            rcx_34[1].d += 1
                        
                        rcx_37[8] = rcx_35
                        rcx_37[0xa].b = 1
                    
                    char* var_400 = *rax_39
                    void* rax_47 = rax_39[1]
                    void* var_3f8_1 = rax_47
                    
                    if (rax_47 != 0)
                        *(rax_47 + 8) += 1
                    
                    void var_3f0
                    int64_t* rax_48 = sub_140aac870(&var_3f0, &var_400, &var_510)
                    int64_t var_418 = *rax_48
                    int64_t* rcx_40 = rax_48[1]
                    
                    if (rcx_40 != 0)
                        rcx_40[1].d += 1
                    
                    int32_t var_408_1 = rax_48[2].d
                    int64_t* var_3e8
                    
                    if (var_3e8 != 0)
                        var_3e8[1].d -= 1
                        
                        if (var_3e8[1].d == 1)
                            (**var_3e8)(var_3e8)
                            int32_t rax_52 = *(var_3e8 + 0xc)
                            *(var_3e8 + 0xc) -= 1
                            
                            if (rax_52 == 1)
                                (*(*var_3e8 + 8))(var_3e8, 1)
                    
                    sub_140596f50(&var_510)
                    
                    if (var_370_1 != 0)
                        char var_370_2 = 0
                        
                        if (rcx_34 != 0)
                            rcx_34[1].d -= 1
                            
                            if (rcx_34[1].d == 1)
                                (**rcx_34)(rcx_34)
                                int32_t rax_56 = *(rcx_34 + 0xc)
                                *(rcx_34 + 0xc) -= 1
                                
                                if (rax_56 == 1)
                                    (*(*rcx_34 + 8))(rcx_34, 1)
                    
                    int64_t* rbx_7 = rax_39[1]
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            (**rbx_7)(rbx_7)
                            int32_t rax_60 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (rax_60 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    int64_t* rbx_8 = rax_37[1]
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t rax_64 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (rax_64 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
                    
                    rsi_4 = sub_140b21610(5, &var_418, nullptr)
                    
                    if (rcx_40 != 0)
                        rcx_40[1].d -= 1
                        
                        if (rcx_40[1].d == 1)
                            int64_t rdx_26 = *rcx_40
                            (*rdx_26)(rcx_40, rdx_26)
                            int32_t rax_67 = *(rcx_40 + 0xc)
                            *(rcx_40 + 0xc) -= 1
                            
                            if (rax_67 == 1)
                                (*(*rcx_40 + 8))(rcx_40, 1)
                    
                    int64_t* var_3d0
                    
                    if (var_3d0 != 0)
                        var_3d0[1].d -= 1
                        
                        if (var_3d0[1].d == 1)
                            (**var_3d0)(var_3d0)
                            int32_t rax_71 = *(var_3d0 + 0xc)
                            *(var_3d0 + 0xc) -= 1
                            
                            if (rax_71 == 1)
                                (*(*var_3d0 + 8))(var_3d0, 1)
                    
                    if (rsi_4 - 2 u<= 1)
                        data_1439a0490 = rsi_4
                
                rcx_1 = rsi_4 - 1 u<= 1
            
            r8_1 = 0
        
        r12_1 = &data_142d40450
    
    void* rdx_27
    
    if (r15[1].d == *(r15 + 0x34))
        rdx_27 = r15[0x1b]
        *(rdx_27 + 0x34)
    
    if (r15[1].d == *(r15 + 0x34) && *(rdx_27 + 8) == *(rdx_27 + 0x34))
        result = 0
    else
        char result_1
        
        if (r8_1 != 0)
            char result_2 = sub_140af9190(arg3, r15)
            int64_t* rbx_11 = r15[0x1b]
            result_1 = result_2
            
            if (rbx_11 != 0)
                sub_140ae7280(rbx_11)
                j_sub_140a74f90(rbx_11)
                r15[0x1b] = 0
            
            int64_t* rax_77 = j_sub_140a82f30(0x140)
            
            if (rax_77 != 0)
                rdi_1 = sub_140ae68e0(rax_77, r15)
            
            r15[0x1b] = rdi_1
            r15[0xa].b = 1
        else if (var_684_1.b == 0)
            if (rcx_1 != 0)
                sub_140ae98a0(r15, r15[0x1b])
                r15[0xa].b = 1
            
            result_1 = result
        else
            int64_t* rbx_12 = r15[0x1b]
            int64_t var_368
            __builtin_memset(&var_368, 0, 0x2c)
            int32_t var_33c_1 = 0x80
            int32_t var_338_1 = 0xffffffff
            int32_t var_334_1 = 0
            int64_t var_328_1 = 0
            int32_t var_320_1 = 0
            int64_t var_318
            __builtin_memset(&var_318, 0, 0x2c)
            int32_t var_2ec_1 = 0x80
            int32_t var_2e8_1 = 0xffffffff
            int32_t var_2e4_1 = 0
            int64_t var_2d8_1 = 0
            int32_t var_2d0_1 = 0
            int32_t var_600
            sub_140a452d0(rbx_12, &var_600, &data_143de5630)
            int64_t rax_79 = sx.q(var_600)
            void* const rax_81
            
            if (rax_79.d == 0xffffffff)
                rax_81 = nullptr
            else
                rax_81 = rax_79 * 0xb8 + *rbx_12
            
            void* r10_1 = rax_81 + 0x10
            
            if (rax_81 == 0)
                r10_1 = nullptr
            
            double var_628[0x2]
            
            if (r10_1 != 0)
                int32_t r11_2 = *(r10_1 + 0x28)
                void* r9_4 = r10_1 + 0x10
                int32_t var_5e4_1 = 1
                int32_t rcx_59 = 0
                int32_t var_5e8_1 = 0
                int32_t r8_14 = 0
                void* var_5e0_1 = r9_4
                int32_t var_5d8_1 = 0xffffffff
                int64_t var_5d4_1 = 0
                
                if (r11_2 != 0)
                    void* rax_82 = *(r9_4 + 0x10)
                    
                    if (rax_82 != 0)
                        r9_4 = rax_82
                    
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(r11_2 - 1)
                    int32_t rdx_34 = *r9_4
                    
                    if (rdx_34 != 0)
                    label_140af1ae8:
                        int32_t rax_89 = neg.d(rdx_34) & rdx_34
                        uint64_t rflags_2
                        int32_t temp0_15
                        temp0_15, rflags_2 = _bit_scan_reverse(rax_89)
                        int32_t var_5e4_2 = rax_89
                        int32_t rax_90
                        
                        if (rax_89 == 0)
                            rax_90 = 0x20
                        else
                            rax_90 = 0x1f - temp0_15
                        
                        var_5d4_1.d = r8_14 - rax_90 + 0x1f
                        
                        if (r8_14 - rax_90 + 0x1f s> r11_2)
                            var_5d4_1.d = r11_2
                    else
                        while (true)
                            int64_t rdx_35 = sx.q(rcx_59)
                            r8_14 += 0x20
                            rcx_59 += 1
                            var_5d4_1:4.d = r8_14
                            var_5e8_1 = rcx_59
                            
                            if (rdx_35.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_34 = *(r9_4 + (rdx_35 << 2) + 4)
                            int32_t var_5d8_2 = 0xffffffff
                            
                            if (rdx_34 != 0)
                                goto label_140af1ae8
                        
                        var_5d4_1.d = r11_2
                
                var_560[0] = r10_1
                double var_550[0x2] = 0xffffffff
                var_560 = var_5e8_1.o
                int64_t var_630
                var_630.o = var_560
                int64_t var_618 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                var_628 = var_550
                
                if (0 s< r11_2)
                    int32_t i = var_618:4.d
                    
                    do
                        int64_t* rdx_38 = sx.q(i) * 0x30 + *var_630
                        
                        if (*rdx_38 == data_143de5608)
                            sub_140ae48f0(&var_368, rdx_38, &rdx_38[1])
                        
                        var_618.d &= not.d(var_628[0]:4.d)
                        sub_14059bdd0(&var_628)
                        i = var_618:4.d
                    while (i s< *(var_628[1] i+ 0x18))
            
            void var_188
            sub_140ae6a10(&var_188)
            int64_t var_358
            int64_t* var_5a0_1 = &var_358
            int32_t rcx_64 = 0
            int32_t var_5a8_1 = 0
            int32_t r8_17 = 0
            int32_t var_5a4_1 = 1
            int32_t var_598_1 = 0xffffffff
            int64_t var_594_1 = 0
            int32_t var_340
            
            if (var_340 != 0)
                int64_t* r9_5 = &var_358
                int64_t* var_348
                
                if (var_348 != 0)
                    r9_5 = var_348
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(var_340 - 1)
                int32_t rdx_41 = *r9_5
                
                if (rdx_41 != 0)
                label_140af1c38:
                    int32_t rax_105 = neg.d(rdx_41) & rdx_41
                    uint64_t rflags_3
                    int32_t temp0_17
                    temp0_17, rflags_3 = _bit_scan_reverse(rax_105)
                    int32_t var_5a4_2 = rax_105
                    int32_t rsi_6
                    
                    if (rax_105 == 0)
                        rsi_6 = 0x20
                    else
                        rsi_6 = 0x1f - temp0_17
                    
                    int32_t rax_106 = r8_17 - rsi_6 + 0x1f
                    
                    if (rax_106 s> var_340)
                        rax_106 = var_340
                    
                    var_594_1.d = rax_106
                else
                    while (true)
                        int64_t rdx_42 = sx.q(rcx_64)
                        r8_17 += 0x20
                        rcx_64 += 1
                        var_594_1:4.d = r8_17
                        var_5a8_1 = rcx_64
                        
                        if (rdx_42.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            var_594_1.d = var_340
                            break
                        
                        rdx_41 = *(r9_5 + (rdx_42 << 2) + 4)
                        int32_t var_598_2 = 0xffffffff
                        
                        if (rdx_41 != 0)
                            goto label_140af1c38
            
            int64_t* var_630_1 = &var_368
            var_628 = var_5a8_1.o
            int128_t var_618_1 = 0xffffffff
            double zmm1_3[0x2] = var_628
            double var_658[0x2] = var_630_1.o
            int64_t var_638_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            double var_648_1[0x2] = zmm1_3
            
            if (0 s< var_340)
                int32_t i_1 = var_648_1[1]:4.d
                
                do
                    int64_t rsi_7 = 0
                    int64_t var_5f8 = 0
                    int64_t rdx_44 = sx.q(i_1) * 6
                    int64_t rcx_66 = *var_658[0]
                    int32_t rbx_13 = *(rcx_66 + (rdx_44 << 3) + 0x10)
                    int64_t r14_4 = *(rcx_66 + (rdx_44 << 3) + 8)
                    int32_t var_5f0_1 = rbx_13
                    
                    if (rbx_13 != 0)
                        sub_1405a4c70(&var_5f8, rbx_13, 0)
                        rsi_7 = var_5f8
                        memcpy(rsi_7, r14_4, rbx_13 * 2)
                    else
                        int32_t var_5ec_1 = 0
                    
                    sub_140a452d0(r15, &var_678, &var_5f8)
                    int64_t rax_109 = sx.q(var_678.d)
                    void* const rax_111
                    
                    if (rax_109.d == 0xffffffff)
                        rax_111 = nullptr
                    else
                        rax_111 = rax_109 * 0xb8 + *r15
                    
                    void* rbx_14 = rax_111 + 0x10
                    
                    if (rax_111 == 0)
                        rbx_14 = nullptr
                    
                    if (rbx_14 != 0)
                        int32_t var_4e0 = 0
                        int32_t var_4dc_1 = 1
                        int32_t var_4d0_1 = 0xffffffff
                        int64_t var_4cc_1 = 0
                        
                        if (*(rbx_14 + 0x28) != 0)
                            sub_14059bdd0(&var_4e0)
                        
                        double zmm2_1[0x2] = var_4d0_1.o
                        double var_618_2[0x2] = zmm2_1
                        var_628 = var_4e0.o
                        zmm1_3 = var_628
                        double var_470[0x2] = rbx_14.o
                        uint32_t rax_113 = (zmm2_1[0] u>> 0x20).d
                        int64_t var_450_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                        
                        if (rax_113 s< *(rbx_14 + 0x28))
                            int32_t j = zmm1_3[1]:4.d
                            
                            do
                                int64_t* rax_114 = sub_140af00b0(&var_188, &var_5f8)
                                
                                if (rax_114 != 0)
                                    int64_t* rdx_50 = *var_470[0] + sx.q(j) * 0x30
                                    sub_140ae48f0(rax_114, rdx_50, &rdx_50[1])
                                
                                zmm1_3[1].d &= not.d(var_470[1]:4.d)
                                sub_14059bdd0(&var_470[1])
                                j = zmm1_3[1]:4.d
                            while (j s< *(zmm1_3[0] i+ 0x18))
                            
                            rsi_7 = var_5f8
                    
                    if (rsi_7 != 0)
                        sub_140a74f90(rsi_7)
                    
                    var_648_1[1].d &= not.d(var_658[1]:4.d)
                    sub_14059bdd0(&var_658[1])
                    i_1 = var_648_1[1]:4.d
                while (i_1 s< *(var_648_1[0] i+ 0x18))
            
            sub_140aeea20(r15, 0)
            void var_680
            char result_3 = sub_140ae8ea0(&var_680, arg3, r15, arg5)
            result_1 = result_3
            int64_t* rax_121 = sub_140af00b0(r15, &data_143de5630)
            
            if (rax_121 != 0)
                int16_t* string_2 = nullptr
                int64_t var_668_1 = 0
                sub_140a20c40(&string_2, var_67c_1)
                int32_t rdx_53 = var_668_1.d
                int16_t* const string = &data_142d40450
                int16_t* string_1 = string_2
                int32_t var_4f8_1 = rdx_53
                
                if (rdx_53 != 0)
                    string = string_1
                
                int16_t* string_3 = string_1
                string_2 = nullptr
                int32_t var_4f4
                __builtin_memset(&var_4f4, 0, 0x14)
                int64_t var_668_2 = 0
                wchar16* i_5 = wcschr(string, 0x25)
                wchar16* i_4 = i_5
                int64_t var_4f0
                
                if (i_5 != 0)
                    wchar16* i_2
                    
                    do
                        int64_t* rax_122 = sub_140af9950(i_4)
                        
                        if (rax_122 != 0)
                            sub_140aef750(&string_3, &var_4f0)
                            break
                        
                        i_2 = wcschr(&i_4[1], (rax_122 + 0x25).w)
                        i_4 = i_2
                    while (i_2 != 0)
                
                int64_t rax_123 = data_143de5600
                sub_140ae54f0(rax_121, sub_140b5ead0(rax_123.d) + rax_123:4.d, &data_143de5600, 
                    &string_3)
                int64_t rcx_88 = var_4f0
                
                if (rcx_88 != 0)
                    sub_140a74f90(rcx_88)
                
                int16_t* string_4 = string_3
                
                if (string_4 != 0)
                    sub_140a74f90(string_4)
                
                int16_t* string_5 = string_2
                
                if (string_5 != 0)
                    sub_140a74f90(string_5)
            
            void var_178
            void* rcx_90 = &var_178
            int32_t var_4c0 = 0
            void* var_4b8_1 = &var_178
            int32_t var_4bc_1 = 1
            int32_t var_4b0_1 = 0xffffffff
            int64_t var_4ac_1 = 0
            int32_t var_160
            
            if (var_160 != 0)
                sub_14059bdd0(&var_4c0)
                rcx_90 = var_4b8_1
            
            double zmm2_2[0x2] = var_4b0_1.o
            double zmm0_4[0x2] = var_4c0.o
            var_658[0] = &var_188
            double rax_126 = zmm2_2[0]
            var_658 = zmm0_4
            int64_t* var_588
            var_588.o = var_658
            var_570 = (_mm_unpackhi_pd(zmm2_2, zmm2_2[0])).q
            var_580 = zmm2_2
            
            if ((rax_126 u>> 0x20).d s< *(rcx_90 + 0x18))
                int32_t i_3 = var_570:4.d
                
                do
                    int64_t r14_5 = sx.q(i_3) * 0xb8
                    int64_t* rax_129 = sub_140af00b0(r15, *var_588 + r14_5)
                    
                    if (rax_129 != 0)
                        void* rbx_16 = *var_588
                        int64_t var_2c8
                        __builtin_memset(&var_2c8, 0, 0x2c)
                        int32_t var_29c_1 = 0x80
                        int32_t var_298_1 = 0xffffffff
                        int32_t var_294_1 = 0
                        int64_t var_288_1 = 0
                        int32_t var_280_1 = 0
                        sub_140a3c5e0(&var_2c8, rbx_16 + 0x10 + r14_5)
                        void var_278
                        sub_140ae61f0(&var_278, rbx_16 + 0x60 + r14_5)
                        int64_t var_2b8
                        int64_t* rcx_95 = &var_2b8
                        int32_t var_4a0 = 0
                        int64_t* var_498_1 = &var_2b8
                        int32_t var_49c_1 = 1
                        int32_t var_490_1 = 0xffffffff
                        int64_t var_48c_1 = 0
                        int32_t var_2a0
                        
                        if (var_2a0 != 0)
                            sub_14059bdd0(&var_4a0)
                            rcx_95 = var_498_1
                        
                        zmm2_2 = var_490_1.o
                        double zmm0_5[0x2] = var_4a0.o
                        var_658[0] = &var_2c8
                        double rax_130 = zmm2_2[0]
                        var_658 = zmm0_5
                        double var_448[0x2] = var_658
                        int64_t var_428_1 = (_mm_unpackhi_pd(zmm2_2, zmm2_2[0])).q
                        
                        if ((rax_130 u>> 0x20).d s< rcx_95[3].d)
                            int32_t j_1 = zmm2_2[1]:4.d
                            
                            do
                                int64_t* rdx_64 = sx.q(j_1) * 0x30 + *var_448[0]
                                sub_140ae48f0(rax_129, rdx_64, &rdx_64[1])
                                zmm2_2[1].d &= not.d(var_448[1]:4.d)
                                sub_14059bdd0(&var_448[1])
                                j_1 = zmm2_2[1]:4.d
                            while (j_1 s< *(zmm2_2[0] i+ 0x18))
                        
                        sub_140ae6ed0(&var_278)
                        int32_t var_280_2 = 0
                        
                        if (var_288_1 != 0)
                            sub_140a74f90(var_288_1)
                        
                        sub_140a42d40(&var_2c8, 0)
                        int64_t var_2a8
                        
                        if (var_2a8 != 0)
                            sub_140a74f90(var_2a8)
                        
                        int64_t rcx_103 = var_2c8
                        
                        if (rcx_103 != 0)
                            sub_140a74f90(rcx_103)
                    
                    var_570.d &= not.d(var_580[0]:4.d)
                    sub_14059bdd0(&var_580)
                    i_3 = var_570:4.d
                while (i_3 s< *(var_580[1] i+ 0x18))
                
                result_1 = result_3
            
            sub_140ae7280(&var_188)
            sub_140a3c110(&var_368)
        
        int16_t* rcx_108
        
        if (arg2[1].d == 0)
            rcx_108 = &data_142d40450
        else
            rcx_108 = *arg2
        
        if (sub_140b40760(rcx_108, nullptr) == 0)
            if (arg2[1].d != 0)
                r12_1 = *arg2
            
            sub_140b41010(r12_1)
        
        result = result_1

__security_check_cookie(rax_1 ^ &var_6a8)
return result
