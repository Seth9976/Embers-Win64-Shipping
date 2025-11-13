// 函数: sub_1422be6d0
// 地址: 0x1422be6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
uint32_t rsi = zx.d(arg4)
uint32_t rbp = zx.d(arg3)
uint32_t arg_18 = rsi

if (rbp u>= rsi)
    return zx.q(arg5)

int16_t r12 = arg5

do
    r12 += 1
    int64_t* r15_3 = (sx.q(rbp) << 5) + **(arg1 + 0x10)
    int16_t** rbx_2 = sx.q(*(r15_3 + 0xc)) + *arg2
    int32_t* rdi_2 = sx.q(r15_3[2].d) + *(arg2 + 8)
    char rax_2 = *(r15_3 + 0x1c)
    
    if (rax_2 == 0)
        int64_t var_48_1 = *(arg2 + 0x10)
        int16_t** var_58 = rbx_2
        int32_t* var_50_1 = rdi_2
        sub_1422be420(arg1, &var_58, rbp.w, r12)
        rbp = zx.d(r15_3[1].w) - 1
    else
        int16_t* const var_78
        
        if (*(arg1 + 1) != 0)
        label_1422be97b:
            int64_t* rcx_17 = *r15_3
            
            if (rdi_2 != rbx_2)
                if (not(test_bit(zx.q(rcx_17[8].d), 0x1e)))
                    (*(*rcx_17 + 0xb0))(rcx_17, rdi_2, rbx_2, 1, var_78)
                else
                    memcpy(rdi_2, rbx_2, *(rcx_17 + 0x3c))
            
            int64_t* rbx_3 = *(arg2 + 0x10)
            int64_t rdi_3 = sx.q(rbx_3[1].d)
            int32_t rax_18 = (rdi_3 + 1).d
            rbx_3[1].d = rax_18
            
            if (rax_18 s> *(rbx_3 + 0xc))
                sub_140594770(rbx_3)
            
            *(*rbx_3 + (rdi_3 << 1)) = r12
        else
            if (zx.d(rax_2) - 2 u> 0x15)
                void* rcx_11 = *r15_3
                int16_t* var_68
                int32_t var_60
                
                if (rcx_11 == 0)
                    var_68 = nullptr
                    var_60 = 0
                    sub_1405947f0(&var_68, 5)
                    int32_t rax_14 = var_60 + 5
                    var_60 = rax_14
                    
                    if (rax_14 s> 0)
                        sub_140594770(&var_68)
                    
                    UnDecorator::getReferenceType(var_68, u"None", 0xa)
                else
                    sub_140b63b70(rcx_11 + 0x28, &var_68)
                
                int16_t* const rax_15 = &data_142d40450
                
                if (var_60 != 0)
                    rax_15 = var_68
                
                var_78 = rax_15
                sub_140af98a0("Unknown", 0x290, PropertiesAreIdentical: Unsupported type! %i (%s)", 
                    zx.q(*(r15_3 + 0x1c)))
                int16_t* rcx_16 = var_68
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                sub_140afbb40()
                goto label_1422be97b
            
            int16_t* rax_7
            
            switch (rax_2)
                case 2, 3, 0x16
                    int64_t* rcx_10 = *r15_3
                    rax_7 = (*(*rcx_10 + 0x80))(rcx_10, rdi_2, rbx_2, 0, var_78)
                    goto label_1422be8bf
                case 4
                    if (*rbx_2 f!= *rdi_2)
                        goto label_1422be97b
                case 5, 9
                    rax_7.b = *rdi_2 == *rbx_2
                    goto label_1422be8bf
                case 6, 0x15
                    rax_7.b = *rdi_2 == *rbx_2
                label_1422be8bf:
                    
                    if (rax_7.b == 0)
                        goto label_1422be97b
                case 7, 0x14
                    rax_7.b = *rdi_2 == *rbx_2
                    goto label_1422be8bf
                case 8
                    int64_t* r14_1 = *r15_3
                    rsi = arg_18
                    rax_7.b = (*(*r14_1 + 0x140))(r14_1, rdi_2) == (*(*r14_1 + 0x140))(r14_1, rbx_2)
                    goto label_1422be8bf
                case 0xa, 0xb, 0xd, 0x10, 0x11, 0x12
                    if (*rbx_2 f!= *rdi_2 || *(rbx_2 + 4) f!= rdi_2[1] || rbx_2[1].d f!= rdi_2[2])
                        goto label_1422be97b
                case 0xc
                    rax_7 = sub_1422b1900(rdi_2, rbx_2)
                    goto label_1422be8bf
                case 0xe
                    rax_7 = sub_14094dfb0(rdi_2, rbx_2)
                    goto label_1422be8bf
                case 0xf
                    rax_7 = sub_1422b1930(rdi_2, rbx_2)
                    goto label_1422be8bf
                case 0x13
                    rax_7 = sub_1420bca70(rdi_2, rbx_2)
                    goto label_1422be8bf
                case 0x17
                    int64_t rcx_4 = *rdi_2
                    int16_t* rax_11 = *rbx_2
                    
                    if (rcx_4.d != rax_11.d || (rcx_4 u>> 0x20).d != (rax_11 u>> 0x20).d)
                        goto label_1422be97b
    
    arg1 = arg_8
    rbp += 1
while (rbp s< rsi)

return zx.q(r12)
