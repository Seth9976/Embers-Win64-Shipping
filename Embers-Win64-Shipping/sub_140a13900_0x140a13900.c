// 函数: sub_140a13900
// 地址: 0x140a13900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x17].d != 1)
    (**arg1)()
    int32_t rsi_1 = arg2[1].d
    
    if (rsi_1 s> 1)
        if (&arg1[0x15] != arg2)
            int64_t rbp_1 = *arg2
            int32_t r8_1 = *(arg1 + 0xb4)
            arg1[0x16].d = rsi_1
            
            if (rsi_1 != 0 || r8_1 != 0)
                sub_1405a4c70(&arg1[0x15], rsi_1, r8_1)
                memcpy(arg1[0x15], rbp_1, rsi_1 * 2)
            else
                *(arg1 + 0xb4) = 0
        
        if (sub_140a32ae0(arg2, u"file://", 1) != 0)
            int32_t rax_2 = arg2[1].d
            int16_t* const rsi_2 = &data_142d40450
            int32_t rcx_3 = rax_2 - 1
            
            if (rax_2 == 0)
                rcx_3 = 0
            
            int16_t* const r8_4
            
            if (rax_2 == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *arg2
            
            int32_t rax_3
            
            if (rcx_3 - 7 s>= 0)
                rax_3 = rcx_3
                
                if (rcx_3 - 7 s< rcx_3)
                    rax_3 = rcx_3 - 7
            else
                rax_3 = 0
            
            int32_t rdx_3 = 0
            int16_t* var_38 = nullptr
            int32_t var_30_1 = 0
            int16_t* rdi_2 = &r8_4[sx.q(rcx_3) - sx.q(rax_3)]
            int32_t rcx_6 = 0
            int32_t var_2c_1 = 0
            int64_t* rbx
            
            if (rdi_2 != 0 && *rdi_2 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rdi_2[rbx_1] != 0)
                
                rbx = zx.q(rbx_1.d + 1)
                
                if (rbx.d s> 0)
                    sub_1405947f0(&var_38, rbx.d)
                    rcx_6 = var_2c_1
                    rdx_3 = var_30_1
                
                int32_t rax_5 = rbx.d + rdx_3
                var_30_1 = rax_5
                
                if (rax_5 s> rcx_6)
                    sub_140594770(&var_38)
                
                UnDecorator::getReferenceType(var_38, rdi_2, rbx.d * 2)
            
            int512_t zmm1_1 = sub_140b21570(&var_38)
            void*** rax_6 = j_sub_140a82f30(0x10)
            
            if (rax_6 == 0)
                rax_6 = nullptr
            else
                *rax_6 = &data_142e4d098
                rax_6[1] = 0
            
            void*** rcx_11 = arg1[0x11]
            void*** r8_7 = rcx_11
            
            if (rcx_11 != rax_6)
                arg1[0x11] = rax_6
                r8_7 = rax_6
                
                if (rcx_11 != 0)
                    (*rcx_11)[2](rcx_11, 1, r8_7)
                    r8_7 = arg1[0x11]
            
            if (var_30_1 != 0)
                rsi_2 = var_38
            
            if (sub_140a13890(r8_7, rsi_2) == 0)
                rbx.b = 0
            else if (sub_140a13620(arg1, zmm1_1) != 0)
                void* rax_11 = j_sub_140a82f30(0x70)
                void* const rbx_2 = rax_11
                
                if (rax_11 == 0)
                    rbx_2 = nullptr
                else
                    void** rax_12 = j_sub_140a82f30(0x10)
                    void** rsi_3 = rax_12
                    
                    if (rax_12 == 0)
                        rsi_3 = nullptr
                    else
                        CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x60)
                        CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
                        
                        if (lpCriticalSection == 0)
                            lpCriticalSection_2 = nullptr
                        else
                            InitializeCriticalSection(lpCriticalSection)
                            SetCriticalSectionSpinCount(lpCriticalSection_2, 0xfa0)
                            lpCriticalSection_2->__offset(0x28).q = 0
                            lpCriticalSection_2->__offset(0x30).q = 0
                            int64_t* rax_13 = j_sub_140a82f30(0x10)
                            
                            if (rax_13 == 0)
                                __builtin_memset(lpCriticalSection_2 + 0x40, 0, 0x18)
                            else
                                *rax_13 = 0
                                lpCriticalSection_2->__offset(0x48).q = rax_13
                                lpCriticalSection_2->__offset(0x40).q = rax_13
                                lpCriticalSection_2->__offset(0x50).q = 0
                        
                        void*** rax_14 = j_sub_140a82f30(0x18)
                        
                        if (rax_14 == 0)
                            rax_14 = nullptr
                        else
                            rax_14[1].d = 1
                            *rax_14 = &data_142e4d590
                            *(rax_14 + 0xc) = 1
                            rax_14[2] = lpCriticalSection_2
                        
                        *rsi_3 = lpCriticalSection_2
                        rsi_3[1] = rax_14
                    
                    *(rbx_2 + 0x38) = rsi_3
                    __builtin_memset(rbx_2 + 0x40, 0, 0x20)
                    *(rbx_2 + 0x60) = &arg1[1]
                    *(rbx_2 + 0x68) = 0
                
                void* rdx_8 = arg1[0xb]
                
                if (rdx_8 != rbx_2)
                    arg1[0xb] = rbx_2
                    sub_140a0f670(&arg1[0xb], rdx_8)
                
                int64_t* rax_16 = j_sub_140a82f30(0x48)
                int64_t* rbx_3 = rax_16
                
                if (rax_16 == 0)
                    rbx_3 = nullptr
                else
                    void** rax_17 = j_sub_140a82f30(0x10)
                    void** rsi_4 = rax_17
                    
                    if (rax_17 == 0)
                        rsi_4 = nullptr
                    else
                        CRITICAL_SECTION* lpCriticalSection_1 = j_sub_140a82f30(0x60)
                        CRITICAL_SECTION* lpCriticalSection_3 = lpCriticalSection_1
                        
                        if (lpCriticalSection_1 == 0)
                            lpCriticalSection_3 = nullptr
                        else
                            InitializeCriticalSection(lpCriticalSection_1)
                            SetCriticalSectionSpinCount(lpCriticalSection_3, 0xfa0)
                            lpCriticalSection_3->__offset(0x28).q = 0
                            lpCriticalSection_3->__offset(0x30).q = 0
                            int64_t* rax_18 = j_sub_140a82f30(0x10)
                            
                            if (rax_18 == 0)
                                __builtin_memset(lpCriticalSection_3 + 0x40, 0, 0x18)
                            else
                                *rax_18 = 0
                                lpCriticalSection_3->__offset(0x48).q = rax_18
                                lpCriticalSection_3->__offset(0x40).q = rax_18
                                lpCriticalSection_3->__offset(0x50).q = 0
                        
                        void*** rax_19 = j_sub_140a82f30(0x18)
                        
                        if (rax_19 == 0)
                            rax_19 = nullptr
                        else
                            rax_19[1].d = 1
                            *rax_19 = &data_142e4d580
                            *(rax_19 + 0xc) = 1
                            rax_19[2] = lpCriticalSection_3
                        
                        *rsi_4 = lpCriticalSection_3
                        rsi_4[1] = rax_19
                    
                    *rbx_3 = rsi_4
                    __builtin_memset(&rbx_3[1], 0, 0x20)
                    rbx_3[5] = &arg1[1]
                    rbx_3[6] = 0
                
                void** rdx_10 = arg1[0xc]
                
                if (rdx_10 != rbx_3)
                    arg1[0xc] = rbx_3
                    sub_140a0f540(&arg1[0xc], rdx_10)
                
                int64_t rax_21 = sx.q(*(arg1 + 0xbc))
                
                if (rax_21.d != 0xffffffff)
                    void* rsi_5 = *(arg1[0xf] + (rax_21 << 3))
                    int64_t arg_8
                    char* rax_23 = sub_142a37ef0(rsi_5, &arg_8)
                    void* r14_1 = arg1[0xc]
                    int32_t rax_24 = sub_140bc8890(rsi_5)
                    int32_t rbx_4 = int.d(sub_142a38630(rsi_5))
                    sub_140a13150(r14_1, sub_141b25240(rsi_5), rbx_4, rax_24, rax_23, arg_8)
                
                int64_t rax_26 = sx.q(arg1[0x18].d)
                
                if (rax_26.d != 0xffffffff)
                    sub_140a13270(arg1[0xb], sub_141b25240(*(arg1[0xd] + (rax_26 << 3))))
                
                arg1[0x17].d = 5
                arg1[0x1a].b = 0
                int64_t rbx_6 = sx.q(arg1[7].d)
                int32_t rax_29 = (rbx_6 + 1).d
                arg1[7].d = rax_29
                
                if (rax_29 s> *(arg1 + 0x3c))
                    sub_1405a4cf0(&arg1[6])
                
                *(arg1[6] + (rbx_6 << 2)) = 9
                rbx = sx.q(arg1[7].d)
                int32_t rax_31 = (rbx + 1).d
                arg1[7].d = rax_31
                
                if (rax_31 s> *(arg1 + 0x3c))
                    sub_1405a4cf0(&arg1[6])
                
                *(arg1[6] + (rbx << 2)) = 3
                rbx.b = 1
            else
                int64_t* rcx_14 = arg1[0x11]
                
                if (rcx_14 != 0)
                    arg1[0x11] = 0
                    (*(*rcx_14 + 0x10))(rcx_14, 1)
                
                rbx.b = 0
            
            int16_t* rcx_15 = var_38
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            return rbx.b

return 0
