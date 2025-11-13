// 函数: sub_141942fd0
// 地址: 0x141942fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_688
int64_t rax_1 = __security_cookie ^ &var_688
void* r15 = arg7
int64_t* rbx = nullptr
void* rdi = arg4
void* rsi = arg6
void* var_600 = arg1
void* var_640 = rsi
void* var_620 = r15

if (r15 == 0)
    void* var_5e0
    sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_5e0, 
        &data_143f10ad0, 0)
    void* rax_5 = var_5e0
    r15 = nullptr
    var_620 = nullptr
    
    if (rax_5 != 0)
        int64_t rdx_1 = sx.q(*(rax_5 + 0x10c))
        int64_t rsi_1 = rdx_1 << 3
        void* var_5d8
        int64_t* rdi_1 = *(var_5d8 + 0x10)
        int64_t rcx_2 = rdi_1[3]
        
        if (*(rsi_1 + rcx_2) == 0)
            sub_1419ccf30(rdi_1, rdx_1.d)
            rcx_2 = rdi_1[3]
        
        r15 = *(rsi_1 + rcx_2)
        rdi = arg4
        rsi = var_640
        var_620 = r15

void* var_660 = arg8
int32_t var_668 = rsi.d
int64_t* rax_7 = sub_1419728f0(arg3, rdi, r15)
int64_t* result
TEB* gsbase

if (rax_7 == 0)
    void* const rsi_3
    
    if (rdi == 0)
        rsi_3 = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        rsi_3 = *(rdi + 0x38)
    
    void* const var_610 = rsi_3
    void* const r14_1
    
    if (r15 == 0)
        r14_1 = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        r14_1 = *(r15 + 0x38)
    
    void* const var_608 = r14_1
    void* rdi_3
    
    if (arg5 == 0)
        rdi_3 = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        rdi_3 = *(arg5 + 0x38)
    
    void* var_638 = rdi_3
    void* const r12_2
    
    if (var_640 == 0)
        r12_2 = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        r12_2 = *(var_640 + 0x38)
    
    void* const r13_1
    
    if (arg8 == 0)
        r13_1 = nullptr
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        r13_1 = *(arg8 + 0x38)
    
    void var_528
    sub_14192a540(&var_528)
    sub_14192bc70(&var_528, rsi_3 + 0x18)
    bool cond:0_1 = data_143eff5c5 == 0
    int32_t var_478_1 = *(rsi_3 + 0x10)
    int32_t var_c8_1 = *(arg4 + 0x28)
    int128_t var_d8 = *(arg4 + 0x18)
    
    if (not(cond:0_1))
        if (rdi_3 != 0)
            var_668 = 0
            int32_t var_5c0_1 = *(arg5 + 0x28)
            int128_t var_5d0 = *(arg5 + 0x18)
            sub_141920520(&var_528, 3, rdi_3, &var_5d0, var_668, rsi_3)
        
        if (r12_2 != 0)
            var_668 = 3
            int32_t var_5ac_1 = *(var_640 + 0x28)
            int128_t var_5bc = *(var_640 + 0x18)
            sub_14191f000(&var_528, 4, r12_2, &var_5bc, var_668, rdi_3)
    
    if (r13_1 != 0)
        void* rcx_17 = &var_528
        
        if (r12_2 == 0)
            var_668 = 0
            int32_t var_584_1 = *(arg8 + 0x28)
            int128_t var_594 = *(arg8 + 0x18)
            sub_14191c5c0(rcx_17, 2, r13_1, &var_594, var_668, rsi_3)
        else
            var_668 = 4
            int32_t var_598_1 = *(arg8 + 0x28)
            int128_t var_5a8 = *(arg8 + 0x18)
            sub_14191dae0(rcx_17, 2, r13_1, &var_5a8, var_668, r12_2)
    
    int32_t rax_29 = *(r15 + 0x28)
    void* rcx_18 = &var_528
    int128_t zmm0_1 = *(r15 + 0x18)
    
    if (r12_2 != 0)
        var_668 = 4
        int128_t var_580 = zmm0_1
        int32_t var_570_1 = rax_29
        sub_14191b0a0(rcx_18, 1, r14_1, &var_580, var_668, r12_2)
    else if (r13_1 == 0)
        var_668 = 0
        int128_t var_558 = zmm0_1
        int32_t var_548_1 = rax_29
        sub_141918660(rcx_18, 1, r14_1, &var_558, var_668, rsi_3)
    else
        var_668 = 2
        int128_t var_56c = zmm0_1
        int32_t var_55c_1 = rax_29
        sub_141919b80(rcx_18, 1, r14_1, &var_56c, var_668, r13_1)
    
    int64_t r14_2 = sx.q(data_143eff900)
    int32_t r15_1 = 0
    int64_t rsi_4 = r14_2
    void* rdi_5
    
    while (true)
        rdi_5 = *((rsi_4 << 3) + &data_143eff8b0)
        
        if (rdi_5 != 0 && sub_14192cef0(rdi_5, &var_528) != 0)
            *((sx.q(r14_2.d) << 3) + &data_143eff8b0) = 0
            sub_14193d1f0()
            
            if (data_1439c77d0 != 0)
                int64_t rax_35 = sx.q(*(rdi_5 + 0x650))
                
                if (rax_35.d == 0xffffffff)
                    sub_14193a270(&data_1439c76c0, rdi_5 + 0x450)
                else
                    void* rax_36 = data_1439c7718
                    void* r8_6 = *(data_1439c76c8 + rax_35 * 0x10)
                    
                    if (r8_6 == rax_36)
                        int64_t rax_37 = *(rax_36 + 0x80)
                        
                        if (rax_37 != 0)
                            data_1439c7718 = rax_37
                    
                    if (r8_6 != data_1439c7720)
                        void* rcx_23 = *(r8_6 + 0x78)
                        
                        if (rcx_23 != 0)
                            *(rcx_23 + 0x80) = *(r8_6 + 0x80)
                        
                        void* rcx_24 = *(r8_6 + 0x80)
                        
                        if (rcx_24 != 0)
                            *(rcx_24 + 0x78) = *(r8_6 + 0x78)
                        
                        *(r8_6 + 0x78) = 0
                        *(r8_6 + 0x80) = 0
                        void* rax_40 = data_1439c7720
                        *(r8_6 + 0x78) = rax_40
                        
                        if (rax_40 != 0)
                            *(rax_40 + 0x80) = r8_6
                        
                        data_1439c7720 = r8_6
                
                if (*(rdi_5 + 0x668) s>= 0)
                    if (data_143eff8a8 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143eff8a8)
                        
                        if (data_143eff8a8 == 0xffffffff)
                            sub_141929790(&data_143eff880)
                            atexit(&data_142cee460)
                            _Init_thread_footer(&data_143eff8a8)
                    
                    if (data_143eff638 != 0)
                        sub_1409740e0(sx.q(*(rdi_5 + 0x668)) * 0x58 + data_143eff880 + 8, rdi_5)
                        *(rdi_5 + 0x668) = 0xffffffff
            
            break
        
        r15_1 += 1
        int32_t rax_31 = (r14_2 + 1).d
        int64_t rcx_20 = rsi_4 + 1
        r14_2 = 0
        
        if (rsi_4 != 9)
            r14_2 = zx.q(rax_31)
        
        bool cond:2_1 = rsi_4 != 9
        rsi_4 = 0
        
        if (cond:2_1)
            rsi_4 = rcx_20
        
        if (r15_1 s>= 0xa)
            r14_2.b = 1
            
            if (arg9 != 0)
                sub_14193d1f0()
                r14_2 = 1
                
                if (data_1439c77d0 != 0)
                    r14_2 = 0
            
            sub_14193d1f0()
            
            if (data_1439c77d0 == 0)
                int32_t var_630
                sub_14193a5e0(&data_1439c7780, &var_630, &var_d8)
                int64_t rax_46 = sx.q(var_630)
                void* const rax_48
                
                if (rax_46.d == 0xffffffff)
                    rax_48 = nullptr
                else
                    rax_48 = rax_46 * 0x88 + data_1439c7780
                
                void** rdi_6 = rax_48 + 0x78
                
                if (rax_48 == 0)
                    rdi_6 = nullptr
                
                if (rdi_6 == 0)
                    goto label_141943688
                
                rdi_5 = *rdi_6
            else
                rdi_5 = sub_14193a110(&data_1439c76c0, &var_d8, r14_2.b)
            
            if (rdi_5 != 0)
            label_14194371d:
                
                if (*(rdi_5 + 0x5ee) == 0 && r14_2.b != 0)
                    sub_14194d8f0(rdi_5, &var_528)
                    sub_141934b30(rdi_5)
            else
            label_141943688:
                void* rcx_28 = data_143eff640
                
                if (rcx_28 == 0)
                label_141943754:
                    void* const rax_54 = var_610
                    
                    if (*(rax_54 + 0x14) == 0)
                        *(rax_54 + 0x14) = 1
                    
                    void* const rax_55 = var_608
                    
                    if (*(rax_55 + 0x14) == 0)
                        *(rax_55 + 0x14) = 1
                    
                    if (r13_1 != 0 && *(r13_1 + 0x14) == 0)
                        *(r13_1 + 0x14) = 1
                    
                    if (data_143eff5c5 != 0)
                        void* rax_56 = var_638
                        
                        if (rax_56 != 0 && *(rax_56 + 0x14) == 0)
                            *(rax_56 + 0x14) = 1
                        
                        if (r12_2 != 0 && *(r12_2 + 0x14) == 0)
                            *(r12_2 + 0x14) = 1
                else
                    if (sub_1419328c0(rcx_28, &var_d8) != 0)
                        sub_14193d1f0()
                        
                        if (data_1439c77d0 == 0)
                            int32_t var_62c
                            sub_14193a5e0(&data_1439c7780, &var_62c, &var_d8)
                            int64_t rax_51 = sx.q(var_62c)
                            void* const rax_53
                            
                            if (rax_51.d == 0xffffffff)
                                rax_53 = nullptr
                            else
                                rax_53 = rax_51 * 0x88 + data_1439c7780
                            
                            void** rdi_7 = rax_53 + 0x78
                            
                            if (rax_53 == 0)
                                rdi_7 = nullptr
                            
                            if (rdi_7 != 0)
                                rdi_5 = *rdi_7
                                goto label_141943718
                        else
                            rdi_5 = sub_14193a110(&data_1439c76c0, &var_d8, r14_2.b)
                        label_141943718:
                            
                            if (rdi_5 != 0)
                                goto label_14194371d
                    
                    if (data_143eff640 == 0)
                        goto label_141943754
                
                void* rdi_8 = var_600
                int64_t i_2 = 5
                *(sub_14190d690(rdi_8, 1) + 0x198) = 0xffffffff
                int32_t* rcx_33 = *(rdi_8 + 0x568) + 0x78
                int64_t i
                
                do
                    rcx_33[-0x14] = 0
                    int32_t rax_58 = *rcx_33
                    rcx_33 = &rcx_33[0x20]
                    rcx_33[-0x33] = rax_58 u>> 4
                    rcx_33[-0x32] = 0
                    rcx_33[-0x31] = rcx_33[-0x20] u>> 4
                    rcx_33[-0x30] = 0
                    rcx_33[-0x2f] = rcx_33[-0x20] u>> 4
                    rcx_33[-0x2e] = 0
                    rcx_33[-0x2d] = rcx_33[-0x20] u>> 4
                    rcx_33[-0x2c] = 0
                    rcx_33[-0x2b] = rcx_33[-0x20] u>> 4
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                *(rdi_8 + 0x560) = 0
                void* rax_68 = sub_14193f470(&var_528)
                rdi_5 = rax_68
                
                if (rax_68 == 0)
                    char* rdx_23 = "FailedProgramLinkDuringPrecompile"
                    
                    if (arg9 == 0)
                        rdx_23 = "FailedProgramLink"
                    
                    int64_t* rcx_35 = &var_608
                    
                    if (arg9 != 0)
                        rcx_35 = &var_610
                    
                    var_600 = *sub_140b58170(rcx_35, rdx_23, (rdi_5 + 1).d)
                    
                    if (data_143f025a0 != 0)
                        int64_t* rcx_37 = data_143f02598
                        
                        if (rcx_37 != 0)
                            int64_t rdx_24 = *rcx_37
                            
                            if ((*(rdx_24 + 0x28))(rcx_37, rdx_24) != 0)
                                int64_t* rcx_38
                                
                                if (data_143f025a0 == 0)
                                    rcx_38 = nullptr
                                else
                                    rcx_38 = data_143f02598
                                
                                (*(*rcx_38 + 0x50))(rcx_38, &var_600)
                    
                    int64_t* var_540
                    int64_t** rax_72 = sub_14194e5d0(&var_d8, &var_540)
                    int64_t* r9_8
                    
                    if (rax_72[1].d == 0)
                        r9_8 = &data_142d40450
                    else
                        r9_8 = *rax_72
                    
                    void* const var_660_5
                    var_660_5.d = zx.d(arg9)
                    var_668 = data_143eff66c
                    sub_140af98a0("Unknown", 0xdc6, 
                        Failed to link program [%s]. Current total programs: %d, precompile: %d", r9_8)
                    int64_t* rcx_40 = var_540
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                    
                    sub_140afbb40()
                
                var_638 = rdi_5
                sub_14193d1f0()
                int128_t* rdx_27 = &var_d8
                
                if (data_1439c77d0 == 0)
                    sub_141926320(&data_1439c7780, rdx_27, &var_638)
                else
                    sub_1419301f0(&data_1439c76c0, rdx_27, rdi_5)
                
                if (r14_2.b == 0)
                    void* rax_75 = data_143eff640
                    
                    if (rax_75 != 0 && *(rax_75 + 0x1c8) - 1 u<= 1)
                        sub_14193d1f0()
                        
                        if (data_1439c76d0 != data_1439c76fc)
                            int128_t* rsi_5 = data_1439c7720
                            void* r12_3 = *(rsi_5 + 0x88)
                            
                            if (rsi_5 != 0)
                                sub_14194b680(&data_1439c76c8, rsi_5)
                                
                                if (rsi_5 == data_1439c7718)
                                    data_1439c7718 = rsi_5[8].q
                                
                                if (rsi_5 == data_1439c7720)
                                    data_1439c7720 = *(rsi_5 + 0x78)
                                
                                void* rcx_42 = *(rsi_5 + 0x78)
                                
                                if (rcx_42 != 0)
                                    *(rcx_42 + 0x80) = rsi_5[8].q
                                
                                void* rcx_43 = rsi_5[8].q
                                
                                if (rcx_43 != 0)
                                    *(rcx_43 + 0x78) = *(rsi_5 + 0x78)
                                
                                *(rsi_5 + 0x78) = 0
                                rsi_5[8].q = 0
                                j_sub_140a74f90(rsi_5)
                            
                            sub_141939cd0(&data_1439c76c0, r12_3)
            
            break
    
    void*** rax_81 = j_sub_140a82f30(0xb0)
    
    if (rax_81 != 0)
        rbx = sub_1419299f0(rax_81, rdi_5, arg3, arg4, var_620, arg8, arg5, var_640)
    
    *arg2 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t i_3 = 6
    int128_t* rdi_9 = &var_d8
    int64_t i_1
    
    do
        rdi_9 -= 0xb8
        sub_14192b980(rdi_9)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result = arg2
else
    void* rdi_2 = *(*rax_7 + 0x78)
    sub_14193d1f0()
    
    if (data_1439c77d0 != 0)
        int64_t rdx_3 = sx.q(*(rdi_2 + 0x650))
        
        if (rdx_3.d == 0xffffffff)
            sub_14193a270(&data_1439c76c0, rdi_2 + 0x450)
        else
            void* rdx_4 = *(data_1439c76c8 + rdx_3 * 0x10)
            void* rax_11 = data_1439c7718
            
            if (rdx_4 == rax_11)
                int64_t rax_12 = *(rax_11 + 0x80)
                
                if (rax_12 != 0)
                    data_1439c7718 = rax_12
            
            if (rdx_4 != data_1439c7720)
                void* rcx_6 = *(rdx_4 + 0x78)
                
                if (rcx_6 != 0)
                    *(rcx_6 + 0x80) = *(rdx_4 + 0x80)
                
                void* rcx_7 = *(rdx_4 + 0x80)
                
                if (rcx_7 != 0)
                    *(rcx_7 + 0x78) = *(rdx_4 + 0x78)
                
                *(rdx_4 + 0x78) = 0
                *(rdx_4 + 0x80) = 0
                void* rax_15 = data_1439c7720
                *(rdx_4 + 0x78) = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 0x80) = rdx_4
                
                data_1439c7720 = rdx_4
        
        if (*(rdi_2 + 0x668) s>= 0)
            if (data_143eff8a8 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143eff8a8)
                
                if (data_143eff8a8 == 0xffffffff)
                    sub_141929790(&data_143eff880)
                    atexit(&data_142cee460)
                    _Init_thread_footer(&data_143eff8a8)
            
            if (data_143eff638 != 0)
                sub_1409740e0(data_143eff880 + 8 + sx.q(*(rdi_2 + 0x668)) * 0x58, rdi_2)
                *(rdi_2 + 0x668) = 0xffffffff
    
    void* rcx_12 = *rax_7
    result = arg2
    *arg2 = rcx_12
    
    if (rcx_12 != 0)
        *(rcx_12 + 8) += 1
__security_check_cookie(rax_1 ^ &var_688)
return result
