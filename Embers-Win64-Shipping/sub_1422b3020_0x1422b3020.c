// 函数: sub_1422b3020
// 地址: 0x1422b3020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint32_t r12 = zx.d(*(arg2 + 0x10))
int64_t r13
r13.b = 0
int64_t** rdi = arg1

if (r12 s< *(arg2 + 0x14))
    do
        int64_t* r14_3 = (zx.q(r12.w) << 5) + *rdi[3]
        int64_t* r15_3 = zx.q(*(r14_3 + 0x16)) * 0x30 + *rdi[2]
        int32_t rcx = *(r15_3 + 0x2c)
        
        if (((rcx u>> 3).b & 1) == 0)
            char rax_6 = *(r14_3 + 0x1c)
            
            if (rax_6 != 0)
                int16_t** rsi_3 = sx.q(r14_3[2].d) + *(arg2 + 8)
                int32_t* r10_2 = sx.q(*(r14_3 + 0xc)) + *arg2
                int16_t* const var_88
                
                if (zx.d(rax_6) - 2 u> 0x15)
                    void* rcx_17 = *r14_3
                    int16_t* var_78
                    int32_t var_70
                    
                    if (rcx_17 == 0)
                        var_78 = nullptr
                        var_70 = 0
                        sub_1405947f0(&var_78, 5)
                        int32_t rax_26 = var_70 + 5
                        var_70 = rax_26
                        
                        if (rax_26 s> 0)
                            sub_140594770(&var_78)
                        
                        UnDecorator::getReferenceType(var_78, u"None", 0xa)
                    else
                        sub_140b63b70(rcx_17 + 0x28, &var_78)
                    
                    int16_t* const rax_27 = &data_142d40450
                    
                    if (var_70 != 0)
                        rax_27 = var_78
                    
                    var_88 = rax_27
                    sub_140af98a0("Unknown", 0x290, 
                        PropertiesAreIdentical: Unsupported type! %i (%s)", zx.q(*(r14_3 + 0x1c)))
                    int16_t* rcx_22 = var_78
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    sub_140afbb40()
                    goto label_1422b33c9
                
                int16_t* rax_20
                
                switch (rax_6)
                    case 2, 3, 0x16
                        int64_t* rcx_16 = *r14_3
                        rax_20 = (*(*rcx_16 + 0x80))(rcx_16, r10_2, rsi_3, 0, var_88)
                        goto label_1422b3315
                    case 4
                        if (*rsi_3 f!= *r10_2)
                        label_1422b33c9:
                            r13.b = 1
                            
                            if ((*(r15_3 + 0x2c) & 1) != 0)
                                int64_t* rbx_5 = *r14_3
                                
                                if (not(test_bit(zx.q(rbx_5[8].d), 0xd)))
                                    char rax_29 = *(r14_3 + 0x1c)
                                    
                                    if ((rax_29 != 8 && rax_29 - 0x16 u> 1) || rbx_5 == 0)
                                    label_1422b3546:
                                        int64_t* r10_3 = *r14_3
                                        int64_t rdx_19 = sx.q(r14_3[2].d) + *(arg_10 + 8)
                                        int64_t rcx_34 = sx.q(*(r14_3 + 0xc)) + *arg_10
                                        
                                        if (rcx_34 != rdx_19)
                                            if (not(test_bit(zx.q(r10_3[8].d), 0x1e)))
                                                (*(*r10_3 + 0xb0))(r10_3, rcx_34, rdx_19, 1, var_88)
                                            else
                                                memcpy(rcx_34, rdx_19, *(r10_3 + 0x3c))
                                        
                                        rdi = arg1
                                        int64_t* rcx_36 = *rdi
                                        
                                        if (rcx_36 != 0 && r15_3[5].d != 0xffffffff)
                                            sub_1405a7050(rcx_36, r15_3)
                                    else if (rbx_5[0xf] == 0)
                                    label_1422b346f:
                                        void* i = (*(*rbx_5 + 0x140))(rbx_5, 
                                            sx.q(r14_3[2].d) + *(arg_10 + 8))
                                        
                                        if (i == 0)
                                            goto label_1422b3546
                                        
                                        if ((*(i + 8) & 0xc0000) != 0)
                                        label_1422b34e0:
                                            int64_t* rdi_3 = rdi[1]
                                            
                                            if (rdi_3 != 0)
                                                int64_t* rdx_16 = *rdi_3
                                                int64_t r8_4 = sx.q(rdi_3[1].d)
                                                int64_t* rax_45 = rdx_16
                                                void* rcx_31 = &rdx_16[r8_4]
                                                
                                                if (rdx_16 != rcx_31)
                                                    while (*rax_45 != i)
                                                        rax_45 = &rax_45[1]
                                                        
                                                        if (rax_45 == rcx_31)
                                                            goto label_1422b351c
                                                
                                                if (rdx_16 == rcx_31
                                                    || ((rax_45 - rdx_16) s>> 3).d == 0xffffffff)
                                                label_1422b351c:
                                                    int32_t rax_48 = (r8_4 + 1).d
                                                    rdi_3[1].d = rax_48
                                                    
                                                    if (rax_48 s> *(rdi_3 + 0xc))
                                                        sub_1405a4d70(rdi_3)
                                                    
                                                    *(*rdi_3 + (r8_4 << 3)) = i
                                            
                                            goto label_1422b3546
                                        
                                        int32_t rcx_26 = *(i + 0xc)
                                        void* const rax_41
                                        
                                        if (rcx_26 s>= data_143e1d9b4)
                                            rax_41 = nullptr
                                        else
                                            uint32_t rax_38 = zx.d(rcx_26.w)
                                            
                                            if (rcx_26 s< 0)
                                                rcx_26 += 0xffff
                                                rax_38 -= 0x10000
                                            
                                            rax_41 =
                                                *(data_143e1d9a0 + (sx.q(rcx_26 s>> 0x10) << 3))
                                                + sx.q(rax_38) * 0x18
                                        
                                        if (((*(rax_41 + 8) u>> 0x19).b & 1) != 0)
                                            goto label_1422b34e0
                                        
                                        if (sub_140d23cf0(i) != 0)
                                            goto label_1422b34e0
                                    else
                                        void* rax_30 = sub_142452380()
                                        void* rax_31
                                        int64_t rcx_23
                                        
                                        if (rax_30 != 0)
                                            rcx_23 = sx.q(*(rax_30 + 0x38))
                                            rax_31 = rbx_5[0xf]
                                        
                                        if (rax_30 == 0 || rcx_23.d s> *(rax_31 + 0x38)
                                                || *(*(rax_31 + 0x30) + (rcx_23 << 3))
                                                != rax_30 + 0x30)
                                            void* rax_33 = sub_142459c10()
                                            
                                            if (rax_33 == 0)
                                                goto label_1422b346f
                                            
                                            int64_t rdx_12 = sx.q(*(rax_33 + 0x38))
                                            void* rax_34 = rbx_5[0xf]
                                            
                                            if (rdx_12.d s> *(rax_34 + 0x38)
                                                    || *(*(rax_34 + 0x30) + (rdx_12 << 3))
                                                    != rax_33 + 0x30)
                                                goto label_1422b346f
                            
                            arg2 = arg_10
                    case 5, 9
                        rax_20.b = *r10_2 == *rsi_3
                        goto label_1422b3319
                    case 6, 0x15
                        rax_20.b = *r10_2 == *rsi_3
                    label_1422b3319:
                        
                        if (rax_20.b == 0)
                            goto label_1422b33c9
                    case 7, 0x14
                        rax_20.b = *r10_2 == *rsi_3
                        goto label_1422b3319
                    case 8
                        int64_t* rdi_2 = *r14_3
                        int64_t rax_22 = (*(*rdi_2 + 0x140))(rdi_2, r10_2)
                        int64_t r8_2 = *rdi_2
                        rdi = arg1
                        rax_20.b = rax_22 == (*(r8_2 + 0x140))(rdi_2, rsi_3, r8_2)
                    label_1422b3315:
                        arg2 = arg_10
                        goto label_1422b3319
                    case 0xa, 0xb, 0xd, 0x10, 0x11, 0x12
                        if (*rsi_3 f!= *r10_2 || *(rsi_3 + 4) f!= r10_2[1]
                                || rsi_3[1].d f!= r10_2[2])
                            goto label_1422b33c9
                    case 0xc
                        rax_20 = sub_1422b1900(r10_2, rsi_3)
                        goto label_1422b3315
                    case 0xe
                        rax_20 = sub_14094dfb0(r10_2, rsi_3)
                        goto label_1422b3315
                    case 0xf
                        rax_20 = sub_1422b1930(r10_2, rsi_3)
                        goto label_1422b3315
                    case 0x13
                        rax_20 = sub_1420bca70(r10_2, rsi_3)
                        goto label_1422b3315
                    case 0x17
                        int64_t rcx_10 = *r10_2
                        int16_t* rax_23 = *rsi_3
                        
                        if (rcx_10.d != rax_23.d || (rcx_10 u>> 0x20).d != (rax_23 u>> 0x20).d)
                            goto label_1422b33c9
            else
                int16_t rsi_1 = r12.w + 1
                int64_t* r15_5 = sx.q(r14_3[2].d) + *(arg2 + 8)
                int64_t* rbx_2 = sx.q(*(r14_3 + 0xc)) + *arg2
                int32_t rdx = r15_5[1].d
                r12.w = r14_3[1].w - 1
                
                if (rdx == rbx_2[1].d)
                    goto label_1422b311e
                
                r13.b = 1
                
                if ((1 & rcx.b) != 0)
                    void* rax_7 = *r14_3
                    void* rcx_1 = *(rax_7 + 0x78)
                    int32_t r8_1 = *(rax_7 + 0x80)
                    int32_t rax_8 = *(rcx_1 + 0x3c)
                    void* var_50 = rcx_1
                    int32_t var_40_1 = rax_8
                    int32_t var_3c_1 = r8_1
                    int64_t* var_48_1 = rbx_2
                    sub_1422cf5a0(&var_50, rdx)
                label_1422b311e:
                    int64_t rbx_3 = *rbx_2
                    int64_t rdi_1 = *r15_5
                    int32_t i_1 = 0
                    uint32_t var_58_1 = zx.d(rsi_1)
                    uint32_t var_54_1 = zx.d(r12.w)
                    int64_t var_68 = rbx_3
                    int64_t var_60_1 = rdi_1
                    
                    if (r15_5[1].d s> 0)
                        do
                            int64_t rcx_3 = sx.q(zx.d(*(r14_3 + 0xa)) * i_1)
                            int64_t var_60_2 = rcx_3 + rdi_1
                            var_68 = rcx_3 + rbx_3
                            r13.b |= sub_1422b3020(arg1, &var_68)
                            i_1 += 1
                        while (i_1 s< r15_5[1].d)
                        
                        r12 = zx.d(r12.w)
                    
                    rdi = arg1
                
                arg2 = arg_10
        else
            r12.w = *(r15_3 + 0x1e) - 1
        
        r12.w += 1
    while (zx.d(r12.w) s< *(arg2 + 0x14))

return zx.q(r13.b)
