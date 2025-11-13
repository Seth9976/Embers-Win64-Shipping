// 函数: sub_141453840
// 地址: 0x141453840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int32_t rdi = 0
int32_t var_4d0 = 0
sub_140b33630("FetchVisibilityForPrimitives")
void* rbx_1 = *(arg2 + 8)
*(arg1 + 8)
data_143ed7708 = 1 - data_143ed7708
int32_t rax_4 = sub_14141f720()
void* rsi = rbx_1 + 0x1248
int32_t rax_5 = *(rbx_1 + 0x214)
void* var_488 = rsi
int32_t r15_5
TEB* gsbase

if (data_143ed57a4 == 0 || data_143f0f1c6 == 0)
    void* rbx_22 = arg2 + 0x1568 + (sx.q(data_143ed7708) << 4)
    int32_t rax_80 = *(rbx_22 + 0xc)
    *(rbx_22 + 8) = 0
    
    if (rax_80 s< 0 && rax_80 != 0)
        sub_1405c5510(rbx_22, 0)
    
    int32_t* rdi_8 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143ed77a8 s> *rdi_8)
        _Init_thread_header(&data_143ed77a8)
        
        if (data_143ed77a8 == 0xffffffff)
            atexit(sub_142ce3e00)
            _Init_thread_footer(&data_143ed77a8)
    
    int32_t rax_83 = data_143ed77a4
    data_143ed77a0 = 0
    
    if (rax_83 s< 0 && rax_83 != 0)
        sub_1405c5660(&data_143ed7798, 0)
    
    if (data_143ed77c0 s> *rdi_8)
        _Init_thread_header(&data_143ed77c0)
        
        if (data_143ed77c0 == 0xffffffff)
            atexit(sub_142ce3e20)
            _Init_thread_footer(&data_143ed77c0)
    
    int32_t rax_85 = data_143ed77bc
    data_143ed77b8 = 0
    
    if (rax_85 s< 0 && rax_85 != 0)
        sub_1405c5570(&data_143ed77b0, 0)
    
    void* rdi_9 = arg2
    void** const var_358 = &data_142f29fd0
    char var_398_1 = arg3
    void** const* var_3a8_1 = &var_358
    int32_t var_39c_1 = *(rdi_9 + 0x15d0)
    void* var_350_1 = rdi_9
    void* var_348_1 = rdi_9
    int64_t* var_340_1 = zx.o(0).q
    int64_t var_330_1 = 0
    void* var_3b8 = arg1
    void* var_3b0_1 = rdi_9
    int32_t var_3a0_1 = 0
    char var_397_1 = arg4
    char var_396_1 = 0
    int64_t var_390
    __builtin_memset(&var_390, 0, 0x18)
    int64_t* var_378_1 = &data_143ed7798
    void* var_368_1 = rbx_22
    sub_141435de0(&var_3b8, arg5)
    int64_t i_19 = sx.q(data_143ed77a0)
    int32_t var_4d0_3 = i_19.d
    
    if (i_19.d != 0)
        int32_t rcx_60 = 2
        int32_t r9_6 = *(rdi_9 + 0x5010)
        
        if (rax_4 s<= 2)
            rcx_60 = rax_4
        
        int32_t temp0_10 = divs.dp.d(sx.q(data_1439c7a10), rcx_60)
        int32_t r15_11
        
        if (temp0_10 s< r9_6 + i_19.d)
            r15_11 = temp0_10 - r9_6
            int32_t rdx_39 = (i_19 + 9).d s/ 0xa
            
            if (temp0_10 s<= rdx_39 + r9_6)
                r15_11 = rdx_39
        
        int64_t var_4c0
        
        if (temp0_10 s>= r9_6 + i_19.d || r15_11 == i_19.d)
            int64_t i_15 = i_19
            
            if (i_19.d s> 0)
                int64_t rdi_12 = 0
                int64_t i
                
                do
                    int64_t* r11_5 = data_143ed7798
                    int64_t rcx_74 = *(r11_5 + rdi_12)
                    int32_t* rbx_28
                    
                    if (*(var_488 + 8) == *(var_488 + 0x34))
                    label_1414549ab:
                        rbx_28 = nullptr
                    else
                        void* r8_25 = *(var_488 + 0x40)
                        void* r9_10 = var_488 + 0x38
                        
                        if (r8_25 != 0)
                            r9_10 = r8_25
                        
                        int32_t rax_112 = *(r9_10 + (((rcx_74 u>> 0x34 ^ sx.q(rcx_74.d))
                            & (sx.q(*(var_488 + 0x48)) - 1)) << 2))
                        
                        if (rax_112 == 0xffffffff)
                        label_1414549ab_1:
                            rbx_28 = nullptr
                        else
                            while (true)
                                rbx_28 = sx.q(rax_112) * 0x70 + *var_488
                                int32_t r8_26 = *rbx_28
                                var_4c0.d = r8_26
                                var_4c0:4.d = rbx_28[0x17]
                                
                                if (r8_26 == rcx_74.d && (var_4c0 u>> 0x20).d == rcx_74:4.d)
                                    break
                                
                                rax_112 = rbx_28[0x1a]
                                
                                if (rax_112 == 0xffffffff)
                                    goto label_1414549ab_2
                            
                            if (rax_112 == 0xffffffff)
                            label_1414549ab_2:
                                rbx_28 = nullptr
                    
                    int64_t* var_4e8_3
                    var_4e8_3.b = 0
                    int32_t* var_3e8
                    sub_141460f30(rbx_28, rax_5, 
                        sub_1414168c0(rdi_9 + 0x4fe0, &var_3e8, &r11_5[1] + rdi_12, 
                            r11_5 + 0x14 + rdi_12, arg5), 
                        rax_4, var_4e8_3.b, var_396_1)
                    int32_t* rax_115 = var_3e8
                    int64_t* var_3e0
                    
                    if (rax_115 != 0)
                        int32_t temp26_1 = *rax_115
                        *rax_115 -= 1
                        
                        if (temp26_1 == 1)
                            int64_t* rcx_77 = var_3e0[1]
                            
                            if (rcx_77 != 0 && *var_3e0 != 0)
                                (*(*rcx_77 + 0x10))(rcx_77, var_3e0)
                                var_3e0[1] = 0
                            
                            sub_14081c9d0(var_3e0)
                            j_sub_140a74f90(var_3e0)
                    
                    rdi_12 += 0x28
                    var_3e0 = nullptr
                    var_3e8 = nullptr
                    i = i_15
                    i_15 -= 1
                while (i != 1)
        else
            if (i_19.d s> data_143ed77bc)
                sub_1405c5570(&data_143ed77b0, i_19.d)
            
            if (i_19.d s> 0)
                int64_t rdi_10 = 0
                uint64_t i_14 = zx.q(i_19.d)
                uint64_t i_1
                
                do
                    int64_t rbx_23 = sx.q(data_143ed77b8)
                    int64_t r14_8 = data_143ed7798 + rdi_10
                    int32_t rax_91 = (rbx_23 + 1).d
                    bool cond:12_1 = rax_91 s<= data_143ed77bc
                    data_143ed77b8 = rax_91
                    
                    if (not(cond:12_1))
                        sub_1405a4d70(&data_143ed77b0)
                    
                    rdi_10 += 0x28
                    *(data_143ed77b0 + (rbx_23 << 3)) = r14_8
                    i_1 = i_14
                    i_14 -= 1
                while (i_1 != 1)
                rsi = var_488
                rdi_9 = arg2
            
            char var_4d8_1 = 0
            sub_1414388e0(data_143ed77b0, data_143ed77b8)
            int64_t r15_12 = sx.q(r15_11)
            
            if (r15_12 s> 0)
                int64_t* rbx_24 = rdi_9 + 0x4fe0
                int64_t* var_420_1 = rbx_24
                int32_t temp1_4 = mods.dp.d(sx.q(rax_5), rax_4)
                int64_t r14_9 = 0
                uint64_t r12_7 = zx.q(temp1_4)
                
                do
                    int64_t* r11_4 = *(data_143ed77b0 + (r14_9 << 3))
                    int64_t rcx_66 = *r11_4
                    int32_t* rsi_13
                    
                    if (*(rsi + 8) == *(rsi + 0x34))
                    label_14145481b:
                        rsi_13 = nullptr
                    else
                        void* r8_22 = *(rsi + 0x40)
                        void* r9_7 = rsi + 0x38
                        
                        if (r8_22 != 0)
                            r9_7 = r8_22
                        
                        int32_t rax_101 = *(r9_7 +
                            (((rcx_66 u>> 0x34 ^ sx.q(rcx_66.d)) & (sx.q(*(rsi + 0x48)) - 1)) << 2))
                        
                        if (rax_101 == 0xffffffff)
                        label_14145481b_1:
                            rsi_13 = nullptr
                        else
                            while (true)
                                rsi_13 = sx.q(rax_101) * 0x70 + *rsi
                                int32_t r8_23 = *rsi_13
                                var_4c0.d = r8_23
                                var_4c0:4.d = rsi_13[0x17]
                                
                                if (r8_23 == rcx_66.d && (var_4c0 u>> 0x20).d == rcx_66:4.d)
                                    break
                                
                                rax_101 = rsi_13[0x1a]
                                
                                if (rax_101 == 0xffffffff)
                                    goto label_14145481b_2
                            
                            if (rax_101 == 0xffffffff)
                            label_14145481b_2:
                                rsi_13 = nullptr
                    
                    int32_t* var_3f8
                    int64_t* rax_103 =
                        sub_1414168c0(rbx_24, &var_3f8, &r11_4[1], r11_4 + 0x14, arg5)
                    void* rbx_25 = &rsi_13[zx.q(temp1_4) * 4]
                    sub_1413de930(rbx_25 + 8)
                    *(rbx_25 + 8) = *rax_103
                    *(rbx_25 + 0x10) = rax_103[1]
                    *rax_103 = 0
                    rax_103[1] = 0
                    rsi_13[r12_7 + 0xe] = rax_5
                    *(rsi_13 + r12_7 + 0x61) = 0
                    rsi_13[0x19].b = var_396_1
                    int32_t* rax_106 = var_3f8
                    int64_t* var_3f0
                    
                    if (rax_106 != 0)
                        int32_t temp42_1 = *rax_106
                        *rax_106 -= 1
                        
                        if (temp42_1 == 1)
                            int64_t* rcx_71 = var_3f0[1]
                            
                            if (rcx_71 != 0 && *var_3f0 != 0)
                                (*(*rcx_71 + 0x10))(rcx_71, var_3f0)
                                var_3f0[1] = 0
                            
                            sub_14081c9d0(var_3f0)
                            j_sub_140a74f90(var_3f0)
                    
                    rbx_24 = var_420_1
                    r14_9 += 1
                    rsi = var_488
                    var_3f0 = nullptr
                    var_3f8 = nullptr
                while (r14_9 s< r15_12)
        int32_t r8_30 = data_143ed77a4
        int32_t rdx_69 = r8_30 - data_143ed77a0
        data_143ed77a0 = 0
        bool cond:10_1
        
        if (rdx_69 s> var_4d0_3 << 2)
            if (r8_30 != 0)
                sub_1405c5660(&data_143ed7798, 0)
            
            cond:10_1 = data_143ed77bc == 0
            goto label_141454a93
        
        if (r8_30 s< 0 && r8_30 != 0)
            sub_1405c5660(&data_143ed7798, 0)
        
        int32_t rax_120 = data_143ed77bc
        cond:10_1 = rax_120 == 0
        
        if (rax_120 s< 0)
        label_141454a93:
            data_143ed77b8 = 0
            
            if (not(cond:10_1))
                sub_1405c5570(&data_143ed77b0, 0)
        else
            data_143ed77b8 = 0
    
    int32_t var_370
    r15_5 = var_370
    
    if (var_340_1 != 0)
        var_340_1[1].d -= 1
        
        if (var_340_1[1].d == 1)
            int64_t r8_31 = *var_340_1
            (*r8_31)(var_340_1, 1, r8_31)
    
    var_358 = &data_142f28578
else
    int32_t r15_1 = 0
    bool cond:2_1 = data_143ed7790
        s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
    int64_t var_2c8
    __builtin_memset(&var_2c8, 0, 0x120)
    
    if (cond:2_1)
        _Init_thread_header(&data_143ed7790)
        
        if (data_143ed7790 == 0xffffffff)
            __builtin_memset(&data_143ed7710, 0, 0x80)
            atexit(sub_142ce3db0)
            _Init_thread_footer(&data_143ed7790)
    
    int32_t* rbx_3 = arg2 + 0x15b8
    int64_t var_2f0
    __builtin_memset(&var_2f0, 0, 0x20)
    int32_t r8 = 1
    int32_t rcx_2 = -1
    int32_t r14_1 = 0
    int32_t r12_1 = rbx_3[6]
    int32_t r9 = 0
    int32_t var_458 = 0
    int32_t r11_1 = 0
    int32_t var_454_1 = 1
    int32_t r10_1 = 0
    int32_t var_448_1 = 0xffffffff
    int32_t var_444_1 = 0
    
    if (r12_1 != 0)
        int32_t* rax_8 = *(rbx_3 + 0x10)
        int32_t* rsi_1 = rbx_3
        r11_1 = r12_1
        
        if (rax_8 != 0)
            rsi_1 = rax_8
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r12_1 - 1)
        int32_t rdx_3 = *rsi_1
        
        if (rdx_3 != 0)
        label_141453adc:
            r8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(r8)
            var_454_1 = r8
            int32_t var_3c8_1 = temp0_1
            int32_t rax_13
            
            if (r8 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            int32_t rax_14 = r10_1 - rax_13 + 0x1f
            
            if (rax_14 s> r12_1)
                rax_14 = r12_1
            
            r11_1 = rax_14
            var_444_1 = rax_14
        else
            while (true)
                int64_t rdx_4 = sx.q(r9)
                r10_1 += 0x20
                r9 += 1
                var_444_1 = r10_1
                var_458 = r9
                
                if (rdx_4.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    var_444_1 = r12_1
                    break
                
                rdx_3 = rsi_1[rdx_4 + 1]
                rcx_2 = -1
                int32_t var_448_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141453adc
    
    if (r11_1 s< r12_1)
        while (true)
            sub_14059bdd0(&var_458)
            r14_1 += 1
            
            if (var_444_1 s>= rbx_3[6])
                break
            
            rcx_2 &= not.d(r8)
            r8 = var_454_1
    
    int32_t* var_470_1 = rbx_3
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r14_1)
    int32_t r10_3 = 0
    int32_t var_478 = 0
    int32_t r9_1 = 0
    int32_t r11_2 = 0
    int32_t r8_4 = 1
    int32_t var_464_1 = 0
    int32_t rcx_6 = -1
    int32_t var_474_1 = 1
    int32_t var_468_1 = 0xffffffff
    int32_t rdx_8 = rbx_3[6]
    int32_t rsi_2 = 0
    uint64_t r13_2 = zx.q(((temp5_1 & 3) + temp6_1) s>> 2)
    
    if (rdx_8 != 0)
        int32_t* rax_18 = *(rbx_3 + 0x10)
        r9_1 = rdx_8
        
        if (rax_18 != 0)
            rbx_3 = rax_18
        
        int32_t temp13_1
        int32_t temp14_1
        temp13_1:temp14_1 = sx.q(rdx_8 - 1)
        int32_t rdx_11 = *rbx_3
        
        if (rdx_11 != 0)
        label_141453bde:
            r8_4 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(r8_4)
            var_474_1 = r8_4
            int32_t var_3cc_1 = temp0_2
            int32_t rax_23
            
            if (r8_4 == 0)
                rax_23 = 0x20
            else
                rax_23 = 0x1f - temp0_2
            
            int32_t rax_24 = r11_2 - rax_23 + 0x1f
            
            if (rax_24 s> r9_1)
                rax_24 = r9_1
            
            r9_1 = rax_24
            var_464_1 = rax_24
        else
            while (true)
                int64_t rdx_12 = sx.q(r10_3)
                r11_2 += 0x20
                r10_3 += 1
                var_464_1 = r11_2
                var_478 = r10_3
                
                if (rdx_12.d s>= (temp14_1 + (temp13_1 & 0x1f)) s>> 5)
                    var_464_1 = r9_1
                    rdx_8 = r9_1
                    break
                
                rdx_11 = rbx_3[rdx_12 + 1]
                rcx_6 = -1
                int32_t var_468_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141453bde
    
    int64_t var_2e0
    
    if (r9_1 s< rdx_8)
        int64_t i_2 = 0
        
        while (i_2 s< 0xc)
            rsi_2 += 1
            
            if (rsi_2 == r13_2.d)
                *(&var_2f0 + i_2) = r15_1
                r15_1 = r9_1 + 1
                *(&var_2e0 + i_2) = rsi_2
                i_2 += 4
                rsi_2 = 0
            
            sub_14059bdd0(&var_478)
            r9_1 = var_464_1
            
            if (r9_1 s>= var_470_1[6])
                break
            
            rcx_6 &= not.d(r8_4)
            r8_4 = var_474_1
    
    int32_t rcx_9 = 0
    int64_t var_2e8
    var_2e8:4.d = r15_1
    void* r15_2 = arg2
    int32_t var_4cc_2 = 0
    void* var_300_1 = nullptr
    int32_t i_22 = 0
    int64_t var_2d8
    var_2d8:4.d = r14_1 - ((r13_2 << 1).d + r13_2.d)
    int32_t r8_8 = *(r15_2 + 0x15d0)
    int128_t var_1c8
    int128_t* r13_3 = &var_1c8
    int32_t rsi_3 = 0
    int32_t var_434_1 = r8_8
    int32_t i_18 = 0
    int32_t temp11_1
    int32_t temp12_1
    temp11_1:temp12_1 = sx.q(r8_8)
    int32_t var_2f4_1 = 4
    int32_t i_24 = 0
    int32_t var_4b8_1 = 0
    int32_t rax_31 = (temp12_1 + (temp11_1 & 3)) s>> 2
    void var_198
    void* r12_2 = &var_198
    int64_t rdx_16 = 0
    int64_t r14_3 = 0
    int64_t var_490_1 = 0
    int64_t var_4c0_1 = 0
    int32_t r9_2 = rax_31
    void var_320
    int64_t var_288
    int64_t var_248
    int64_t var_208
    void var_1a8
    
    while (rcx_9 s< r8_8)
        int32_t rax_33 = r8_8 - rcx_9
        
        if (rsi_3 != 3)
            rax_33 = r9_2
        
        void* rbx_7 = &(&data_143ed7710)[(sx.q(data_143ed7708) + rdx_16) * 2]
        *(rbx_7 + 8) = 0
        
        if (*(rbx_7 + 0xc) s<= 0xffffffff)
            sub_1405c5510(rbx_7, 0)
        
        *(r12_2 - 0x10) = arg1
        *(r12_2 + 8) = *(&var_2f0 + r14_3)
        *(r12_2 + 0xc) = *(&var_2e0 + r14_3)
        *(r12_2 + 0x10) = arg3
        *(r12_2 + 0x11) = arg4
        *(r12_2 - 8) = r15_2
        int64_t r15_3 = sx.q(rsi_3)
        *r12_2 = 0
        *(r12_2 + 0x40) = rbx_7
        *(r12_2 + 0x18) = &(&var_208)[r15_3 * 2]
        *(r12_2 + 0x20) = &(&var_288)[r15_3 * 2]
        *(r12_2 + 0x28) = &(&var_2c8)[r15_3 * 2]
        *(r12_2 + 0x30) = &(&var_248)[r15_3 * 2]
        int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
        int64_t* lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        int64_t* rsi_4 = lpTlsValue[1]
        int32_t rcx_17
        
        if (rsi_4 != 0)
            rcx_17 = lpTlsValue[2].d
        else
            int64_t rax_43 = *lpTlsValue
            
            if (rax_43 == 0)
                int64_t rax_44 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_44
                
                if (rax_44 == 0)
                    int64_t* rax_45 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_45
                    int64_t i_13 = 0x1f
                    int64_t* rcx_16
                    int64_t i_3
                    
                    do
                        rcx_16 = &rax_45[0x20]
                        *rax_45 = rcx_16
                        rax_45 = rcx_16
                        i_3 = i_13
                        i_13 -= 1
                    while (i_3 != 1)
                    *rcx_16 = i_13
            else
                lpTlsValue[1] = rax_43
                *lpTlsValue = rsi_4
            
            rsi_4 = lpTlsValue[1]
            rcx_17 = 0x20
            lpTlsValue[2].d = 0x20
        
        lpTlsValue[1] = *rsi_4
        lpTlsValue[2].d = rcx_17 - 1
        int64_t* var_3d8
        int64_t** rax_48 = sub_140a228d0(&var_3d8)
        rdi = 0
        int64_t* rcx_19 = *rax_48
        *rax_48 = nullptr
        *rsi_4 = &data_142d40498
        int64_t* var_328_1 = rcx_19
        rsi_4[1].d = 0xff
        *(rsi_4 + 0xc) = 1
        *rsi_4 = &data_142f85118
        rsi_4[3].b = 0
        rsi_4[4] = rcx_19
        int64_t* rcx_20 = var_3d8
        
        if (rcx_20 != 0)
            rcx_20[9].d -= 1
            
            if (rcx_20[9].d == 1)
                sub_140a2f6e0(rcx_20)
        
        rsi_4[2] = &var_1a8 + r15_3 * 0x58
        int64_t* r15_4 = rsi_4[4]
        int64_t* rbx_8 = r15_4
        int64_t* var_430 = rbx_8
        
        if (r15_4 != 0)
            r15_4[9].d += 1
            rbx_8 = var_430
        
        sub_1414612a0(rsi_4, nullptr, 0xff, 1)
        
        if (r13_3 != &var_430)
            int64_t* rcx_25 = *r13_3
            *r13_3 = rbx_8
            var_430 = nullptr
            
            if (rcx_25 != 0)
                rcx_25[9].d -= 1
                
                if (rcx_25[9].d == 1)
                    sub_140a2f6e0(rcx_25)
        else if (r15_4 != 0)
            r15_4[9].d -= 1
            
            if (r15_4[9].d == 1)
                sub_140a2f6e0(r15_4)
        
        int64_t i_23 = sx.q(i_18)
        int32_t i_21 = (i_23 + 1).d
        i_18 = i_21
        
        if (i_21 s> var_2f4_1)
            sub_14083a490(&var_320, i_23.d)
        
        void* rcx_27 = &var_320
        void* rdx_19 = *r13_3
        
        if (var_300_1 != 0)
            rcx_27 = var_300_1
        
        *(rcx_27 + (i_23 << 3)) = rdx_19
        
        if (rdx_19 != 0)
            *(rdx_19 + 0x48) += 1
        
        r12_2 += 0x58
        rsi_3 = var_4b8_1 + 1
        rdx_16 = var_490_1 + 2
        r14_3 = var_4c0_1 + 4
        rcx_9 = var_4cc_2 + rax_33
        i_22 = i_24 + 1
        r8_8 = var_434_1
        r13_3 += 8
        r9_2 = rax_31
        r15_2 = arg2
        var_4cc_2 = rcx_9
        var_4b8_1 = rsi_3
        var_490_1 = rdx_16
        var_4c0_1 = r14_3
        i_24 = i_22
        
        if (rsi_3 s>= 4)
            break
    
    void* r12_4 = rbx_1 + 0x138
    int32_t var_4d0_2 = 0
    void* var_428_1 = r12_4
    r15_5 = 0
    int64_t* rax_55 = sub_140a242a0()
    int64_t r9_4 = *rax_55
    (*(r9_4 + 0x48))(rax_55, &var_320, zx.q(data_14399e5e0), r9_4)
    int64_t i_20 = sx.q(i_22)
    int32_t rcx_30 = 0
    int32_t var_4b8_2 = 0
    
    if (i_22 s> 0)
        int64_t i_12 = i_20
        void var_186
        void* var_4b0_1 = &var_186
        int64_t i_4
        
        do
            int32_t j = 0
            
            while (j s>= 0)
                int64_t var_2c0
                
                if (j s>= (&var_2c0)[sx.q(rcx_30) * 2].d)
                    break
                
                void* rsi_6 = (&var_2c8)[sx.q(rcx_30) * 2]
                int64_t rbx_11 = sx.q(j) << 5
                j += 1
                *(*(rbx_11 + rsi_6) + 0x4c) =
                    sub_141415ca0(r12_4, rsi_6 + 8 + rbx_11, rsi_6 + 0x14 + rbx_11)
            
            for (int32_t j_1 = 0; j_1 s>= 0; j_1 += 1)
                int64_t var_280
                
                if (j_1 s>= (&var_280)[sx.q(rcx_30) * 2].d)
                    break
                
                sub_1413de930(*((&var_288)[sx.q(rcx_30) * 2] + (sx.q(j_1) << 3))
                    + (zx.q(mods.dp.d(sx.q(rax_5), rax_4)) << 4) + 8)
            
            void* rbx_12 = &(&var_248)[sx.q(rcx_30) * 2]
            void* var_4a8_1 = rbx_12
            
            for (int32_t j_2 = 0; j_2 s>= 0; j_2 += 1)
                if (j_2 s>= *(rbx_12 + 8))
                    break
                
                void* const rcx_37 = 0x5008
                void* r8_16 = *rbx_12 + sx.q(j_2) * 0x28
                char r10_4 = *(r8_16 + 0x20)
                rdi |= sbb.d(rdi, rdi, r10_4 != 0) + 2
                int32_t* var_418
                int64_t* rdx_27 = &var_418
                int32_t* var_408
                
                if (r10_4 != 0)
                    rdx_27 = &var_408
                
                if (r10_4 == 0)
                    rcx_37 = 0x4fe0
                
                int64_t* rax_63 =
                    sub_1414168c0(rcx_37 + arg2, rdx_27, r8_16 + 8, r8_16 + 0x14, arg5)
                int64_t* rcx_39 = *rbx_12
                int32_t temp1_2 = mods.dp.d(sx.q(rax_5), rax_4)
                char r14_6 = rcx_39[sx.q(j_2) * 5 + 4].b
                void* r15_9 = rcx_39[sx.q(j_2) * 5]
                char r13_4 = *var_4b0_1
                uint64_t rbx_14 = zx.q(temp1_2) << 4
                uint64_t rsi_9 = zx.q(temp1_2)
                sub_1413de930(rbx_14 + 8 + r15_9)
                *(rbx_14 + r15_9 + 8) = *rax_63
                *(rbx_14 + r15_9 + 0x10) = rax_63[1]
                *rax_63 = 0
                rax_63[1] = 0
                *(r15_9 + (rsi_9 << 2) + 0x38) = rax_5
                *(r15_9 + rsi_9 + 0x61) = r14_6
                *(r15_9 + 0x64) = r13_4
                
                if ((rdi.b & 2) != 0)
                    int32_t* rax_70 = var_418
                    rdi &= 0xfffffffd
                    int64_t* var_410
                    
                    if (rax_70 != 0)
                        int32_t temp52_1 = *rax_70
                        *rax_70 -= 1
                        
                        if (temp52_1 == 1)
                            int64_t* rcx_42 = var_410[1]
                            
                            if (rcx_42 != 0 && *var_410 != 0)
                                (*(*rcx_42 + 0x10))(rcx_42, var_410)
                                var_410[1] = 0
                            
                            sub_14081c9d0(var_410)
                            j_sub_140a74f90(var_410)
                    
                    var_410 = nullptr
                    var_418 = nullptr
                
                if ((rdi.b & 1) != 0)
                    int32_t* rax_72 = var_408
                    rdi &= 0xfffffffe
                    int64_t* var_400
                    
                    if (rax_72 != 0)
                        int32_t temp53_1 = *rax_72
                        *rax_72 -= 1
                        
                        if (temp53_1 == 1)
                            int64_t* rcx_45 = var_400[1]
                            
                            if (rcx_45 != 0 && *var_400 != 0)
                                (*(*rcx_45 + 0x10))(rcx_45, var_400)
                                var_400[1] = 0
                            
                            sub_14081c9d0(var_400)
                            j_sub_140a74f90(var_400)
                    
                    var_400 = nullptr
                    var_408 = nullptr
                
                rbx_12 = var_4a8_1
            
            var_4b0_1 += 0x58
            rcx_30 = var_4b8_2 + 1
            i_4 = i_12
            i_12 -= 1
            r12_4 = var_428_1
            var_4b8_2 = rcx_30
        while (i_4 != 1)
        int64_t i_17 = i_20
        void var_160
        void* rsi_10 = &var_160
        r15_5 = var_4d0_2
        int64_t var_200
        int64_t* rdi_3 = &var_200
        int64_t i_5
        
        do
            int32_t j_3 = 0
            
            if (*rdi_3 s> 0)
                do
                    void var_3d0
                    sub_141435830(var_488, &var_3d0, sx.q(j_3) * 0x68 + rdi_3[-1], nullptr)
                    j_3 += 1
                while (j_3 s< *rdi_3)
            
            r15_5 += *rsi_10
            rdi_3 = &rdi_3[2]
            rsi_10 += 0x58
            i_5 = i_17
            i_17 -= 1
        while (i_5 != 1)
    
    void* rcx_51 = var_300_1
    void* rbx_17 = &var_320
    int32_t i_16 = i_18
    
    if (rcx_51 != 0)
        rbx_17 = rcx_51
    
    if (i_16 != 0)
        int32_t i_6
        
        do
            int64_t* rcx_50 = *rbx_17
            
            if (rcx_50 != 0)
                rcx_50[9].d -= 1
                
                if (rcx_50[9].d == 1)
                    sub_140a2f6e0(rcx_50)
            
            rbx_17 += 8
            i_6 = i_16
            i_16 -= 1
        while (i_6 != 1)
        rcx_51 = var_300_1
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    int64_t i_11 = 4
    int64_t* rdi_4 = &var_208
    
    for (int64_t i_7 = 4; i_7 != 0; )
        int64_t rcx_52 = rdi_4[-2]
        rdi_4 = &rdi_4[-2]
        i_7 -= 1
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
    
    int64_t i_8 = 4
    int64_t* rdi_5 = &var_288
    
    do
        int64_t rcx_53 = rdi_5[-2]
        rdi_5 = &rdi_5[-2]
        i_8 -= 1
        
        if (rcx_53 != 0)
            sub_140a74f90(rcx_53)
    while (i_8 != 0)
    
    int64_t i_9 = 4
    int64_t* rdi_6 = &var_248
    
    do
        int64_t rcx_54 = rdi_6[-2]
        rdi_6 = &rdi_6[-2]
        i_9 -= 1
        
        if (rcx_54 != 0)
            sub_140a74f90(rcx_54)
    while (i_9 != 0)
    
    int64_t i_10 = 4
    int128_t* rsi_11 = &var_1c8
    
    do
        int32_t j_5 = *(rsi_11 - 8)
        rsi_11 = &rsi_11[-1]
        int64_t rcx_55 = *rsi_11
        i_10 -= 1
        
        if (j_5 != 0)
            int64_t rbx_18 = rcx_55 + 8
            int32_t j_4
            
            do
                `vector destructor iterator'(rbx_18, 0x10, 3, j_sub_1413de930)
                rbx_18 += 0x68
                j_4 = j_5
                j_5 -= 1
            while (j_4 != 1)
            rcx_55 = *rsi_11
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
    while (i_10 != 0)
    
    void* rbx_19 = &var_1a8
    
    do
        int64_t* rcx_57 = *(rbx_19 - 8)
        rbx_19 -= 8
        i_11 -= 1
        
        if (rcx_57 != 0)
            rcx_57[9].d -= 1
            
            if (rcx_57[9].d == 1)
                sub_140a2f6e0(rcx_57)
    while (i_11 != 0)
sub_140b37f60("FetchVisibilityForPrimitives")
__security_check_cookie(rax_1 ^ &var_508)
return zx.q(r15_5)
