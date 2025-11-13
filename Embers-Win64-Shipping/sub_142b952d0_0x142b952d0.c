// 函数: sub_142b952d0
// 地址: 0x142b952d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2[4]
int64_t r12 = *arg1
uint64_t r13 = zx.q(arg3)

if (rax != 0)
    if (rax(arg2, zx.q(r13.d), 0, 0) == 0)
        goto label_142b9531a
else if (r13.d u<= arg2[1].d)
label_142b9531a:
    *(arg2 + 0xc) = r13.d
    uint16_t rcx_1 = 0
    
    if ((r13 + 1).d u< arg2[1].d)
        int64_t rax_4 = arg2[4]
        void* rax_6
        
        if (rax_4 == 0)
            rax_6 = r13 + *arg2
            
            if (r13 == neg.q(*arg2))
                goto label_142b9536a
            
            goto label_142b95367
        
        void arg_8
        
        if (rax_4(arg2, zx.q(r13.d), &arg_8, 2) == 2)
            rax_6 = &arg_8
        label_142b95367:
            rcx_1 = zx.w(*rax_6) << 8 | zx.w(*(rax_6 + 1))
        label_142b9536a:
            *(arg2 + 0xc) += 2
            
            if (sx.d(rcx_1) + 1 s> 0xfef)
                return 8
            
            int32_t rsi_1 = 0
            
            if (sx.d(rcx_1) + 1 s> 0)
                while (true)
                    uint64_t rcx_3 = zx.q(*(arg2 + 0xc))
                    uint32_t rdi_1 = 0
                    
                    if ((rcx_3 + 3).d u< arg2[1].d)
                        int64_t rax_11 = arg2[4]
                        void* rcx_5
                        
                        if (rax_11 == 0)
                            rcx_5 = rcx_3 + *arg2
                            
                            if (rcx_3 == neg.q(*arg2))
                                goto label_142b95428
                            
                            goto label_142b95426
                        
                        void var_48
                        
                        if (rax_11(arg2, zx.q(rcx_3.d), &var_48, 4) == 4)
                            rcx_5 = &var_48
                        label_142b95426:
                            rdi_1 = ((zx.d(*rcx_5) << 8 | zx.d(*(rcx_5 + 1))) << 8
                                | zx.d(*(rcx_5 + 2))) << 8 | zx.d(*(rcx_5 + 3))
                        label_142b95428:
                            *(arg2 + 0xc) += 4
                            uint16_t rcx_7 = 0
                            uint64_t rdx_3 = zx.q(*(arg2 + 0xc))
                            int32_t arg_10 = 0
                            
                            if ((rdx_3 + 1).d u< arg2[1].d)
                                int64_t rax_17 = arg2[4]
                                void* rax_19
                                
                                if (rax_17 == 0)
                                    rax_19 = rdx_3 + *arg2
                                    
                                    if (rdx_3 == neg.q(*arg2))
                                        goto label_142b95483
                                    
                                    goto label_142b95480
                                
                                if (rax_17(arg2, rdx_3, &arg_8, 2) == 2)
                                    rax_19 = &arg_8
                                label_142b95480:
                                    rcx_7 = zx.w(*rax_19) << 8 | zx.w(*(rax_19 + 1))
                                label_142b95483:
                                    *(arg2 + 0xc) += 2
                                    int32_t rcx_10 = sx.d(sub_142b96f00(arg2, &arg_10))
                                    int32_t rax_9 = arg_10
                                    
                                    if (rax_9 != 0)
                                        return rax_9
                                    
                                    if (rdi_1 != arg6)
                                        rsi_1 += 1
                                        
                                        if (rsi_1 s>= sx.d(rcx_1) + 1)
                                            break
                                        
                                        continue
                                    
                                    *arg9 = sx.d(rcx_7) + 1
                                    
                                    if (sx.d(rcx_7) u> 0xaa6)
                                        return 8
                                    
                                    rax_9 = sub_142b97060(arg2, rcx_10 + r13.d, arg5)
                                    
                                    if (rax_9 != 0)
                                        return rax_9
                                    
                                    uint64_t rsi_2 = zx.q(*arg9)
                                    int16_t* _Base = nullptr
                                    int32_t rdi_8 = 0
                                    int32_t temp6_1 = rsi_2.d
                                    
                                    if (temp6_1 s< 0)
                                        rdi_8 = 6
                                    label_142b95547:
                                        arg_10 = rdi_8
                                        
                                        if (rdi_8 == 0)
                                            goto label_142b95553
                                    else
                                        if (temp6_1 != 0)
                                            if (rsi_2.d s> 0xfffffff)
                                                return rax_9 + 0xa
                                            
                                            uint32_t rbp_2 = (rsi_2 << 3).d
                                            int16_t* _Base_1 = (*(r12 + 8))(r12, zx.q(rbp_2))
                                            _Base = _Base_1
                                            
                                            if (_Base_1 == 0)
                                                rdi_8 = (&_Base_1[0x20]).d
                                            else if (rsi_2.d s> 0)
                                                memset(_Base_1, 0, sx.q(rbp_2))
                                            
                                            goto label_142b95547
                                        
                                        arg_10 = 0
                                    label_142b95553:
                                        int32_t rbp_3 = 0
                                        
                                        if (*arg9 s<= 0)
                                        label_142b955e8:
                                            
                                            if (arg7 != 0)
                                                qsort(_Base, sx.q(*arg9), 8, sub_142b9a2c0)
                                            
                                            uint64_t rdi_9 = zx.q(*arg9)
                                            int32_t* rbx_1 = nullptr
                                            int32_t rsi_5 = 0
                                            int32_t temp7_1 = rdi_9.d
                                            
                                            if (temp7_1 s< 0)
                                                rsi_5 = 6
                                            label_142b95665:
                                                rdi_8 = rsi_5
                                                
                                                if (rsi_5 == 0)
                                                    goto label_142b9566b
                                            else if (temp7_1 == 0)
                                            label_142b9566b:
                                                int32_t i = 0
                                                
                                                if (*arg9 s> 0)
                                                    void* r9 = &_Base[2]
                                                    int32_t* r8_5 = rbx_1
                                                    
                                                    do
                                                        int32_t rcx_21 = *r9
                                                        r9 += 8
                                                        i += 1
                                                        *r8_5 = rcx_21 + arg4
                                                        r8_5 = &r8_5[1]
                                                    while (i s< *arg9)
                                                
                                                rdi_8 = 0
                                                *arg8 = rbx_1
                                            else
                                                if (rdi_9.d s<= 0x1fffffff)
                                                    uint32_t rbp_4 = (rdi_9 << 2).d
                                                    int32_t* rax_29 = (*(r12 + 8))(r12, zx.q(rbp_4))
                                                    rbx_1 = rax_29
                                                    
                                                    if (rax_29 == 0)
                                                        rsi_5 = (&rax_29[0x10]).d
                                                    else if (rdi_9.d s> 0)
                                                        memset(rax_29, 0, sx.q(rbp_4))
                                                    
                                                    goto label_142b95665
                                                
                                                rdi_8 = 0xa
                                        else
                                            int16_t* _Base_2 = _Base
                                            
                                            while (true)
                                                int16_t rax_25 = sub_142b96f00(arg2, &arg_10)
                                                rdi_8 = arg_10
                                                *_Base_2 = rax_25
                                                
                                                if (rdi_8 != 0)
                                                    break
                                                
                                                int32_t rax_26 = sub_142b970b0(arg2, rdi_8 + 2)
                                                arg_10 = rax_26
                                                rdi_8 = rax_26
                                                
                                                if (rax_26 != 0)
                                                    break
                                                
                                                int32_t rax_27 = sub_142b96d30(arg2, &arg_10)
                                                rdi_8 = arg_10
                                                
                                                if (rdi_8 != 0)
                                                    break
                                                
                                                int32_t rax_28 = sub_142b970b0(arg2, rdi_8 + 4)
                                                arg_10 = rax_28
                                                rdi_8 = rax_28
                                                
                                                if (rax_28 != 0)
                                                    break
                                                
                                                if (rax_27 s< 0)
                                                    rdi_8 = 8
                                                    break
                                                
                                                rbp_3 += 1
                                                *(_Base_2 + 4) = rax_27 & 0xffffff
                                                _Base_2 = &_Base_2[4]
                                                
                                                if (rbp_3 s>= *arg9)
                                                    goto label_142b955e8
                                        
                                        if (_Base != 0)
                                            (*(r12 + 0x10))(r12, _Base)
                                    
                                    return rdi_8
                    
                    return 0x55
            
            return 1

return 0x55
