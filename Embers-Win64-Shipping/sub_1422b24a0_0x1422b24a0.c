// 函数: sub_1422b24a0
// 地址: 0x1422b24a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 0
int16_t i = arg2[2].w
char rdi = arg1[1].b & 1
int64_t* rbx = arg2
int32_t* r10 = arg1
char arg_20 = rdi
char arg_18 = 0

if (i u< *(arg2 + 0x12))
    int64_t r13
    int64_t var_30_1 = r13
    
    do
        int64_t* r14_3 = (zx.q(i) << 5) + **(r10 + 0x18)
        int64_t* r15_3 = zx.q(*(r14_3 + 0x16)) * 0x30 + **(r10 + 0x10)
        int32_t rcx = *(r15_3 + 0x2c)
        
        if (((rcx u>> 3).b & 1) == 0)
            char rdx = *(r14_3 + 0x1c)
            
            if (rdx != 0)
                if (*(r10 + 8) != 0 && r15_3[5].d != 0xffffffff)
                    r13.b = 1
                    
                    if (*(r15_3 + 0x24) == 1)
                        goto label_1422b28ae
                    
                    goto label_1422b26a9
                
                r13.b = 0
            label_1422b26a9:
                int64_t rcx_5 = sx.q(*(r14_3 + 0xc))
                int16_t** rsi_3 = *rbx + rcx_5
                int32_t* r10_2 = rbx[1] + rcx_5
                int16_t* const var_a8
                
                if (zx.d(rdx) - 2 u> 0x15)
                    void* rcx_17 = *r14_3
                    int16_t* var_90
                    int32_t var_88
                    
                    if (rcx_17 == 0)
                        var_90 = nullptr
                        var_88 = 0
                        sub_1405947f0(&var_90, 5)
                        int32_t rax_24 = var_88 + 5
                        var_88 = rax_24
                        
                        if (rax_24 s> 0)
                            sub_140594770(&var_90)
                        
                        UnDecorator::getReferenceType(var_90, u"None", 0xa)
                    else
                        sub_140b63b70(rcx_17 + 0x28, &var_90)
                    
                    int16_t* const rax_25 = &data_142d40450
                    
                    if (var_88 != 0)
                        rax_25 = var_90
                    
                    var_a8 = rax_25
                    sub_140af98a0("Unknown", 0x290, 
                        PropertiesAreIdentical: Unsupported type! %i (%s)", zx.q(*(r14_3 + 0x1c)))
                    int16_t* rcx_22 = var_90
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    sub_140afbb40()
                    goto label_1422b28aa
                
                int16_t* rax_18
                
                switch (rdx)
                    case 2, 3, 0x16
                        int64_t* rcx_16 = *r14_3
                        rax_18 = (*(*rcx_16 + 0x80))(rcx_16, r10_2, rsi_3, 0, var_a8)
                        goto label_1422b27fa
                    case 4
                        if (*rsi_3 f!= *r10_2)
                        label_1422b28aa:
                            r10 = arg1
                        label_1422b28ae:
                            r8 = 1
                            arg_18 = 1
                            
                            if (rdi != 0)
                                if ((*r10 & *(r15_3 + 0x2c)) == 0)
                                    r8 = arg_18
                                else
                                    int64_t rcx_23 = sx.q(*(r14_3 + 0xc))
                                    int64_t rdx_13 = rbx[1] + rcx_23
                                    int64_t r10_3 = rcx_23 + *rbx
                                    int64_t* rcx_24 = *r14_3
                                    
                                    if (r10_3 != rdx_13)
                                        if (not(test_bit(zx.q(rcx_24[8].d), 0x1e)))
                                            (*(*rcx_24 + 0xb0))(rcx_24, r10_3, rdx_13, 1, var_a8)
                                        else
                                            memcpy(r10_3, rdx_13, *(rcx_24 + 0x3c))
                                    
                                    if (r13.b == 0)
                                        r8 = arg_18
                                    else
                                        sub_1405a7050(*(arg1 + 8), r15_3)
                                        r8 = 1
                        else
                            r8 = arg_18
                    case 5, 9
                        rax_18.b = *r10_2 == *rsi_3
                        goto label_1422b27fa
                    case 6, 0x15
                        rax_18.b = *r10_2 == *rsi_3
                    label_1422b27fa:
                        
                        if (rax_18.b == 0)
                            goto label_1422b28aa
                        
                        r8 = arg_18
                    case 7, 0x14
                        rax_18.b = *r10_2 == *rsi_3
                        goto label_1422b27fa
                    case 8
                        int64_t* rdi_2 = *r14_3
                        int64_t rax_20 = (*(*rdi_2 + 0x140))(rdi_2, r10_2)
                        int64_t r8_2 = *rdi_2
                        rdi = arg_20
                        rbx = arg2
                        rax_18.b = rax_20 == (*(r8_2 + 0x140))(rdi_2, rsi_3, r8_2)
                        goto label_1422b27fa
                    case 0xa, 0xb, 0xd, 0x10, 0x11, 0x12
                        if (*rsi_3 f!= *r10_2 || *(rsi_3 + 4) f!= r10_2[1]
                                || rsi_3[1].d f!= r10_2[2])
                            goto label_1422b28aa
                        
                        r8 = arg_18
                    case 0xc
                        rax_18 = sub_1422b1900(r10_2, rsi_3)
                        goto label_1422b27fa
                    case 0xe
                        rax_18 = sub_14094dfb0(r10_2, rsi_3)
                        goto label_1422b27fa
                    case 0xf
                        rax_18 = sub_1422b1930(r10_2, rsi_3)
                        goto label_1422b27fa
                    case 0x13
                        rax_18 = sub_1420bca70(r10_2, rsi_3)
                        goto label_1422b27fa
                    case 0x17
                        int64_t rcx_10 = *r10_2
                        int16_t* rax_21 = *rsi_3
                        
                        if (rcx_10.d != rax_21.d || (rcx_10 u>> 0x20).d != (rax_21 u>> 0x20).d)
                            goto label_1422b28aa
                        
                        r8 = arg_18
            else
                int64_t r15_4 = sx.q(*(r14_3 + 0xc))
                int16_t rsi_1 = i + 1
                r13 = rbx[1]
                int64_t* rbx_1 = r15_4 + *rbx
                i = r14_3[1].w - 1
                int32_t rdx_1 = *(r15_4 + r13 + 8)
                
                if (rdx_1 == rbx_1[1].d)
                    goto label_1422b25c5
                
                r8 = 1
                arg_18 = 1
                
                if (rdi != 0)
                    if ((*r10 & rcx) != 0)
                        r8 = arg_18
                    else
                        void* rax_7 = *r14_3
                        void* rcx_1 = *(rax_7 + 0x78)
                        int32_t r8_1 = *(rax_7 + 0x80)
                        int32_t rax_8 = *(rcx_1 + 0x3c)
                        void* var_68 = rcx_1
                        int32_t var_58_1 = rax_8
                        int32_t var_54_1 = r8_1
                        int64_t* var_60_1 = rbx_1
                        sub_1422cf5a0(&var_68, rdx_1)
                        r10 = arg1
                    label_1422b25c5:
                        int64_t rbx_2 = *rbx_1
                        int64_t rdi_1 = *(r15_4 + r13)
                        int16_t var_70_1 = rsi_1
                        int32_t j = 0
                        int64_t var_80 = rbx_2
                        int64_t var_78_1 = rdi_1
                        int16_t i_1 = i
                        
                        if (*(r15_4 + r13 + 8) s> 0)
                            char r12 = arg_18
                            
                            do
                                int64_t rcx_3 = sx.q(zx.d(*(r14_3 + 0xa)) * j)
                                int64_t var_78_2 = rcx_3 + rdi_1
                                var_80 = rcx_3 + rbx_2
                                char rax_13 = sub_1422b24a0(r10, &var_80)
                                r10 = arg1
                                r12 |= rax_13
                                j += 1
                            while (j s< *(r15_4 + r13 + 8))
                            
                            arg_18 = r12
                        
                        r8 = arg_18
                
                rbx = arg2
        else
            i = *(r15_3 + 0x1e) - 1
            r8 = arg_18
        
        r10 = arg1
        rdi = arg_20
        i += 1
    while (i u< *(rbx + 0x12))

return zx.q(r8)
