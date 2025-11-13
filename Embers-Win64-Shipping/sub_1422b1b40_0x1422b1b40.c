// 函数: sub_1422b1b40
// 地址: 0x1422b1b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int16_t i = *(arg2 + 0x10)
char r8 = arg1[1].b & 1
void* r10 = arg2
int32_t* rdi = arg1
char arg_20 = r8

if (i u< *(arg2 + 0x12))
    do
        int64_t* r14_3 = (zx.q(i) << 5) + **(rdi + 0x18)
        int64_t* r15_3 = zx.q(*(r14_3 + 0x16)) * 0x30 + **(rdi + 0x10)
        int32_t rcx = *(r15_3 + 0x2c)
        
        if (((rcx u>> 3).b & 1) == 0)
            char rax_6 = *(r14_3 + 0x1c)
            
            if (rax_6 != 0)
                int16_t arg_18
                
                if (*(rdi + 8) != 0 && r15_3[5].d != 0xffffffff)
                    arg_18.b = 1
                    
                    if (*(r15_3 + 0x24) == 1)
                        goto label_1422b1edd
                    
                    goto label_1422b1ce3
                
                arg_18.b = 0
            label_1422b1ce3:
                int16_t** rsi_3 = sx.q(r14_3[2].d) + *r10
                int32_t* r10_2 = sx.q(*(r14_3 + 0xc)) + *(arg2 + 8)
                int16_t* const var_98
                
                if (zx.d(rax_6) - 2 u> 0x15)
                    void* rcx_17 = *r14_3
                    int16_t* var_88
                    int32_t var_80
                    
                    if (rcx_17 == 0)
                        var_88 = nullptr
                        var_80 = 0
                        sub_1405947f0(&var_88, 5)
                        int32_t rax_23 = var_80 + 5
                        var_80 = rax_23
                        
                        if (rax_23 s> 0)
                            sub_140594770(&var_88)
                        
                        UnDecorator::getReferenceType(var_88, u"None", 0xa)
                    else
                        sub_140b63b70(rcx_17 + 0x28, &var_88)
                    
                    int16_t* const rax_24 = &data_142d40450
                    
                    if (var_80 != 0)
                        rax_24 = var_88
                    
                    var_98 = rax_24
                    sub_140af98a0("Unknown", 0x290, 
                        PropertiesAreIdentical: Unsupported type! %i (%s)", zx.q(*(r14_3 + 0x1c)))
                    int16_t* rcx_22 = var_88
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    sub_140afbb40()
                    goto label_1422b1ed5
                
                int16_t* rax_17
                bool z_1
                
                switch (rax_6)
                    case 2, 3, 0x16
                        int64_t* rcx_16 = *r14_3
                        rax_17 = (*(*rcx_16 + 0x80))(rcx_16, r10_2, rsi_3, 0, var_98)
                        goto label_1422b1e21
                    case 4
                        r10 = arg2
                        
                        if (*rsi_3 f!= *r10_2)
                            goto label_1422b1edd
                    case 5, 9
                        rax_17.b = *r10_2 == *rsi_3
                        goto label_1422b1e21
                    case 6, 0x15
                        rax_17.b = *r10_2 == *rsi_3
                    label_1422b1e21:
                        
                        if (rax_17.b == 0)
                            goto label_1422b1ed5
                        
                        r10 = arg2
                    case 7, 0x14
                        rax_17.b = *r10_2 == *rsi_3
                        goto label_1422b1e21
                    case 8
                        int64_t* rdi_2 = *r14_3
                        int64_t rax_19 = (*(*rdi_2 + 0x140))(rdi_2, r10_2)
                        int64_t r8_2 = *rdi_2
                        rdi = arg1
                        rax_17.b = rax_19 == (*(r8_2 + 0x140))(rdi_2, rsi_3, r8_2)
                        goto label_1422b1e21
                    case 0xa, 0xb, 0xd, 0x10, 0x11, 0x12
                        if (not(*rsi_3 f!= *r10_2) && not(*(rsi_3 + 4) f!= r10_2[1]))
                            float zmm0 = rsi_3[1].d
                            float temp0_1 = r10_2[2]
                            zmm0 - temp0_1
                            z_1 = zmm0 == temp0_1
                            r10 = arg2
                            goto label_1422b1d9f
                        
                    label_1422b1ed5:
                        r10 = arg2
                    label_1422b1edd:
                        r13.b = 1
                        
                        if (arg_20 != 0 && (*rdi & *(r15_3 + 0x2c)) != 0)
                            int64_t rdx_12 = sx.q(*(r14_3 + 0xc)) + *(r10 + 8)
                            int64_t rcx_24 = sx.q(r14_3[2].d) + *r10
                            int64_t* r10_3 = *r14_3
                            
                            if (rcx_24 != rdx_12)
                                if (not(test_bit(zx.q(r10_3[8].d), 0x1e)))
                                    (*(*r10_3 + 0xb0))(r10_3, rcx_24, rdx_12, 1, var_98)
                                else
                                    memcpy(rcx_24, rdx_12, *(r10_3 + 0x3c))
                            
                            if (arg_18.b != 0)
                                sub_1405a7050(*(rdi + 8), r15_3)
                            
                            r10 = arg2
                    case 0xc
                        rax_17 = sub_1422b1900(r10_2, rsi_3)
                        goto label_1422b1e21
                    case 0xe
                        rax_17 = sub_14094dfb0(r10_2, rsi_3)
                        goto label_1422b1e21
                    case 0xf
                        rax_17 = sub_1422b1930(r10_2, rsi_3)
                        goto label_1422b1e21
                    case 0x13
                        rax_17 = sub_1420bca70(r10_2, rsi_3)
                        goto label_1422b1e21
                    case 0x17
                        int64_t rcx_10 = *r10_2
                        int16_t* rax_20 = *rsi_3
                        r10 = arg2
                        
                        if (rcx_10.d != rax_20.d)
                            goto label_1422b1edd
                        
                        z_1 = (rcx_10 u>> 0x20).d == (rax_20 u>> 0x20).d
                    label_1422b1d9f:
                        
                        if (not(z_1))
                            goto label_1422b1edd
            else
                int16_t rsi_1 = i + 1
                int64_t* r15_5 = sx.q(*(r14_3 + 0xc)) + *(r10 + 8)
                int64_t* rbx_2 = sx.q(r14_3[2].d) + *r10
                int32_t rdx = r15_5[1].d
                i = r14_3[1].w - 1
                
                if (rdx == rbx_2[1].d)
                    goto label_1422b1c57
                
                r13.b = 1
                
                if (r8 != 0 && (*rdi & rcx) == 0)
                    void* rax_7 = *r14_3
                    void* rcx_1 = *(rax_7 + 0x78)
                    int32_t r8_1 = *(rax_7 + 0x80)
                    int32_t rax_8 = *(rcx_1 + 0x3c)
                    void* var_60 = rcx_1
                    int32_t var_50_1 = rax_8
                    int32_t var_4c_1 = r8_1
                    int64_t* var_58_1 = rbx_2
                    sub_1422cf5a0(&var_60, rdx)
                    r10 = arg2
                label_1422b1c57:
                    int64_t rbx_3 = *rbx_2
                    int64_t rdi_1 = *r15_5
                    int16_t var_68_1 = rsi_1
                    int32_t j = 0
                    int64_t var_78 = rbx_3
                    int64_t var_70_1 = rdi_1
                    int16_t i_1 = i
                    
                    if (r15_5[1].d s> 0)
                        do
                            int64_t rcx_3 = sx.q(zx.d(*(r14_3 + 0xa)) * j)
                            int64_t var_70_2 = rcx_3 + rdi_1
                            var_78 = rcx_3 + rbx_3
                            r13.b |= sub_1422b1b40(arg1, &var_78)
                            j += 1
                        while (j s< r15_5[1].d)
                        
                        r10 = arg2
        else
            i = *(r15_3 + 0x1e) - 1
        
        rdi = arg1
        r8 = arg_20
        i += 1
    while (i u< *(r10 + 0x12))

return zx.q(r13.b)
