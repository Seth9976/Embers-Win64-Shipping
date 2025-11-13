// 函数: sub_14115b600
// 地址: 0x14115b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r15 = *(arg1 + 8)

if (data_143f3dab0 == 0)
    return 

int32_t rdx = data_143f3dca4
uint64_t rax = zx.q(data_143f3dac4)

if (*(r15 + 0x1a80) s<= 0 && *(r15 + 0x1a90) s<= 0 && *(r15 + 0x1aa0) s<= 0
        && *(r15 + 0x1aac) == rax.d && *(r15 + 0x1ab0) == rdx)
    return 

if (*(r15 + 0x18c8) == 0)
    rdx.b = 1
    sub_14111d2b0(arg1, rdx.b)
    int32_t i = 0
    
    if (*(r15 + 0x18f0) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t rdi_1 = sx.q(*(r15 + 0x1a80))
            int64_t r12_1 = *(rsi_1 + *(r15 + 0x18e8))
            int32_t rax_2 = (rdi_1 + 1).d
            *(r15 + 0x1a80) = rax_2
            
            if (rax_2 s> *(r15 + 0x1a84))
                sub_1405a4d70(r15 + 0x1a78)
            
            i += 1
            rsi_1 = &rsi_1[1]
            *(*(r15 + 0x1a78) + (rdi_1 << 3)) = r12_1
        while (i s< *(r15 + 0x18f0))
    
    *(r15 + 0x18f0) = 0
    
    if (*(r15 + 0x18f4) s<= 0xffffffff)
        sub_1405c5570(r15 + 0x18e8, 0)
    
    int32_t* rax_4 = j_sub_140a82f30(0x48)
    
    if (rax_4 != 0)
        __builtin_memset(&rax_4[2], 0, 0x1c)
        __builtin_memset(&rax_4[0xa], 0, 0x1c)
        *rax_4 = 0
    
    *(r15 + 0x18c8) = rax_4
    rax = zx.q(data_143f3dac4)
    rdx = data_143f3dca4

if (*(r15 + 0x1aac) != rax.d || *(r15 + 0x1ab0) != rdx)
    int32_t i_1 = 0
    *(r15 + 0x1aac) = rax.d
    *(r15 + 0x1ab0) = data_143f3dca4
    
    if (*(r15 + 0x18f0) s> 0)
        int64_t* r12_2 = nullptr
        
        do
            int32_t rcx_2 = 0
            int32_t rdx_2 = *(r15 + 0x1aa0)
            int64_t j_1 = *(r12_2 + *(r15 + 0x18e8))
            
            if (rdx_2 s<= 0)
            label_14115b7ff:
                int64_t* rax_8 = *(r15 + 0x1a78)
                void* rdx_3 = &rax_8[sx.q(*(r15 + 0x1a80))]
                
                if (rax_8 == rdx_3)
                label_14115b82b:
                    int64_t* j = *(r15 + 0x1a88)
                    int64_t rdx_4 = sx.q(*(r15 + 0x1a90))
                    
                    for (; j != &j[rdx_4]; j = &j[1])
                        if (*j == j_1)
                            goto label_14115b86b
                    
                    int32_t rax_10 = (rdx_4 + 1).d
                    *(r15 + 0x1a90) = rax_10
                    
                    if (rax_10 s> *(r15 + 0x1a94))
                        sub_1405a4d70(r15 + 0x1a88)
                    
                    *((rdx_4 << 3) + *(r15 + 0x1a88)) = j_1
                else
                    while (*rax_8 != j_1)
                        rax_8 = &rax_8[1]
                        
                        if (rax_8 == rdx_3)
                            goto label_14115b82b
            else
                int64_t* rax_7 = *(r15 + 0x1a98)
                
                while (*rax_7 != j_1)
                    rcx_2 += 1
                    rax_7 = &rax_7[8]
                    
                    if (rcx_2 s>= rdx_2)
                        goto label_14115b7ff
            
        label_14115b86b:
            i_1 += 1
            r12_2 = &r12_2[1]
        while (i_1 s< *(r15 + 0x18f0))

void* rsi_6 = arg_8
sub_14115c1c0(arg2, *(rsi_6 + 8))
int64_t r14_1 = sx.q(*(r15 + 0x1a80))

if (r14_1.d == 0 && *(r15 + 0x1a90) == r14_1.d)
    return 

int32_t rax_12 = *(r15 + 0x1a90)
int32_t rdi_3 = *(r15 + 0x18b4)
int32_t arg_18 = rax_12
int32_t r12_3 = rax_12 + r14_1.d
int64_t rbx_1 = 0
int64_t var_a8_1
__builtin_memset(&var_a8_1, 0, 0x1c)
int64_t var_88 = 0
int32_t var_7c_1 = 0
int64_t var_a0_1
int64_t var_98

if (r12_3 != 0)
    sub_1405dadb0(&var_98, r12_3)
    var_a0_1 = var_98
    rbx_1 = 0

int32_t rdx_8 = data_143e56f68 * r12_3
int32_t var_80_1 = 0

if (rdx_8 != 0)
    sub_1405a5410(&var_88, rdx_8)
    rbx_1 = var_88
    var_a8_1 = rbx_1

int64_t* var_c8
int64_t r12_4

if (r14_1 s<= 0)
    r12_4 = var_a0_1
else
    int64_t rbx_3 = 0
    
    do
        var_c8 = &var_88
        sub_141135bf0(1, arg2, *(rsi_6 + 8), *(*(r15 + 0x1a78) + (rbx_3 << 3)), rdi_3, &var_98, 
            var_c8)
        rbx_3 += 1
    while (rbx_3 s< r14_1)
    
    r12_4 = var_98
    rbx_1 = var_88
    var_a0_1 = r12_4
    var_a8_1 = rbx_1

int64_t r14_2 = sx.q(arg_18)

if (r14_2 s> 0)
    int64_t rbx_4 = 0
    
    do
        var_c8 = &var_88
        sub_141135bf0(0, arg2, *(rsi_6 + 8), *(*(r15 + 0x1a88) + (rbx_4 << 3)), rdi_3, &var_98, 
            var_c8)
        rbx_4 += 1
    while (rbx_4 s< r14_2)
    
    r12_4 = var_98
    rbx_1 = var_88
    var_a0_1 = r12_4
    var_a8_1 = rbx_1

int32_t rax_13 = *(r15 + 0x1a84)
*(r15 + 0x1a80) = 0

if (rax_13 s< 0 && rax_13 != 0)
    sub_1405c5570(r15 + 0x1a78, 0)

*(r15 + 0x1a90) = 0

if (*(r15 + 0x1a94) != 0)
    sub_1405c5570(r15 + 0x1a88, 0)

int32_t* r8_3 = *(r15 + 0x18c8)
rax = zx.q(*(r15 + 0x18b4))
int32_t rcx_11 = *r8_3
int32_t var_c0
int32_t var_b8
char var_b0
void* var_58
void* var_50

if (rcx_11 s< rax.d)
    if (rcx_11 s<= 0)
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q((rax * 5).d)
        *r8_3 = (temp2_1 + (temp1_1 & 3)) s>> 2
        sub_141131b00(*(r15 + 0x18c8))
    else
        int32_t* rax_14 = j_sub_140a82f30(0x48)
        int32_t* var_60_1 = rax_14
        int32_t* rbx_5 = rax_14
        
        if (rax_14 == 0)
            rbx_5 = nullptr
            var_60_1 = nullptr
        else
            __builtin_memset(&rax_14[2], 0, 0x1c)
            __builtin_memset(&rax_14[0xa], 0, 0x1c)
            *rax_14 = 0
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(*(r15 + 0x18b4) * 5)
        *rbx_5 = (temp6_1 + (temp5_1 & 3)) s>> 2
        sub_141131b00(rbx_5)
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(*(rsi_6 + 8) + 8))]), &var_58, 
            &data_143e5a3f0, 0)
        void* rsi_3 = var_58
        void* rdi_4 = nullptr
        void* var_78_1 = rsi_3
        
        if (rsi_3 != 0)
            int64_t rdx_14 = sx.q(*(rsi_3 + 0x10c))
            int64_t* rsi_4 = *(var_50 + 0x10)
            int64_t* rdi_5 = rsi_4[3]
            
            if (rdi_5[rdx_14] == 0)
                sub_1419ccf30(rsi_4, rdx_14.d)
                rdi_5 = rsi_4[3]
            
            rdi_4 = rdi_5[rdx_14]
            rsi_3 = var_78_1
        
        *(arg2 + 0x1b0) = rdi_4
        sub_14198aa60(rdi_4)
        void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_23 = &rcx_20[3]
        
        if (rax_23 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_23 = &rcx_20[3]
        
        *(arg2 + 0x30) = rax_23
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_20
        *(arg2 + 8) = &rcx_20[1]
        rcx_20[1] = 0
        rcx_20[2] = rdi_4
        *rcx_20 = &data_142dd5b40
        void* rax_26 = *(r15 + 0x18c8)
        int64_t rcx_24 = *(rbx_5 + 0x10)
        int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        arg_18.q = *(arg2 + 0x1b0)
        int64_t rax_28 = *(rbx_5 + 0x30)
        void* rax_29 = &rdi_8[2]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x18)
            rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rdi_8[2]
        
        *(arg2 + 0x30) = rax_29
        *rdi_8 = rcx_24
        rdi_8[1] = rax_28
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_28[6]
        
        if (rax_31 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_28[6]
        
        *(arg2 + 0x30) = rax_31
        void**** rax_32 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_32 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        *rcx_28 = &data_142da7798
        rcx_28[2].d = 2
        rcx_28[3] = rdi_8
        rcx_28[4].d = 2
        *(rcx_28 + 0x24) = 3
        rcx_28[5] = 0
        sub_14077c370(rsi_3 + 0x118, arg2, &arg_18, &rbx_5[2])
        sub_14077c370(rsi_3 + 0x120, arg2, &arg_18, &rbx_5[0xa])
        int32_t rax_34 = data_143f3d918
        var_b0 = 0
        var_b8 = 1
        var_c0 = rax_34
        var_c8.d = rax_34
        sub_14107ee50(var_78_1 + 0x128, arg2, &arg_18, rax_26, rdi_3, data_143f3dab0.d, var_c8.d, 
            var_c0, 1)
        sub_1419cd1c0(arg2, var_78_1, (rdi_3 + 0x3f) u>> 6, 1, 1)
        int64_t rbx_7 = *(arg2 + 0x1b0)
        sub_14077cfd0(var_78_1 + 0x128, arg2, rbx_7)
        sub_14077cfd0(var_78_1 + 0x130, arg2, rbx_7)
        sub_14077cfd0(rsi_3 + 0x118, arg2, *(arg2 + 0x1b0))
        sub_14077cfd0(rsi_3 + 0x120, arg2, *(arg2 + 0x1b0))
        int64_t* rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rax_36 = *(var_60_1 + 0x30)
        int64_t rcx_40 = *(var_60_1 + 0x10)
        void* rax_37 = &rbx_10[2]
        
        if (rax_37 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x18)
            rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_37 = &rbx_10[2]
        
        *(arg2 + 0x30) = rax_37
        *rbx_10 = rcx_40
        rbx_10[1] = rax_36
        void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_44[6]
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_44[6]
        
        *(arg2 + 0x30) = rax_39
        void**** rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_44
        *(arg2 + 8) = &rcx_44[1]
        rcx_44[1] = 0
        *rcx_44 = &data_142da7798
        rcx_44[2].d = 2
        rcx_44[3] = rbx_10
        rcx_44[4].d = 0
        *(rcx_44 + 0x24) = 3
        rcx_44[5] = 0
        void* rbx_13 = *(r15 + 0x18c8)
        sub_1408081b0(rbx_13 + 8)
        sub_1408081b0(rbx_13 + 0x28)
        void* rsi_5 = *(r15 + 0x18c8)
        
        if (rsi_5 != 0)
            sub_1408081b0(rsi_5 + 0x28)
            sub_1405ec8a0(rsi_5 + 0x38)
            sub_1405d1550(rsi_5 + 0x30)
            sub_1405d1550(rsi_5 + 0x28)
            sub_1408081b0(rsi_5 + 8)
            sub_1405ec8a0(rsi_5 + 0x18)
            sub_1405d1550(rsi_5 + 0x10)
            sub_1405d1550(rsi_5 + 8)
            j_sub_140a74f90(rsi_5)
        
        rsi_6 = arg_8
        r12_4 = var_a0_1
        rbx_1 = var_a8_1
        *(r15 + 0x18c8) = var_60_1

int32_t var_90
uint64_t rdi_13 = zx.q(var_90)

if (rdi_13.d != 0)
    int32_t rcx_60 = data_1439b5d38
    
    if (rdi_13.d s> rcx_60)
    label_14115bedf:
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q((rdi_13 * 5).d)
        int32_t rbx_15 = ((temp3_1 & 3) + temp4_1) s>> 2
        data_1439b5d38 = rbx_15
        sub_1405d16e0(&data_1439b5d40, nullptr)
        sub_1405d16e0(&data_1439b5d48, nullptr)
        sub_141131d40(&data_1439b5d30)
        data_1439b5cd8 = rbx_15
        sub_1405d16e0(&data_1439b5ce0, nullptr)
        sub_1405d16e0(&data_1439b5ce8, nullptr)
        sub_141131d40(&data_1439b5cd0)
        rbx_1 = var_a8_1
    else if (rcx_60 s> 0x3e8 && rcx_60 s> (rdi_13 * 2).d)
        goto label_14115bedf
    
    int64_t* rcx_61 = data_143f0f180
    void* r8_13 = data_1439b5d40
    memcpy(
        (*(*rcx_61 + 0x130))(rcx_61, &data_143f02b98, r8_13, 0, *(r8_13 + 0x18), 1, var_c8, var_c0, 
            var_b8, var_b0, var_a8_1, var_a0_1), 
        r12_4, (rdi_13 << 2).d)
    int64_t* rcx_63 = data_143f0f180
    (*(*rcx_63 + 0x138))(rcx_63, &data_143f02b98, data_1439b5d40)
    int64_t* rcx_64 = data_143f0f180
    void* r8_16 = data_1439b5ce0
    memcpy((*(*rcx_64 + 0x130))(rcx_64, &data_143f02b98, r8_16, 0, *(r8_16 + 0x18), 1), rbx_1, 
        var_80_1 << 4)
    int64_t* rcx_66 = data_143f0f180
    (*(*rcx_66 + 0x138))(rcx_66, &data_143f02b98, data_1439b5ce0)
    sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(*(rsi_6 + 8) + 8))]), &var_58, 
        &data_143e5a130, 0)
    void* rax_57 = var_58
    void* r15_1 = nullptr
    arg_8 = rax_57
    
    if (rax_57 != 0)
        int64_t rdx_31 = sx.q(*(rax_57 + 0x10c))
        int64_t r15_2 = rdx_31 << 3
        int64_t* r14_4 = *(var_50 + 0x10)
        int64_t rax_59 = r14_4[3]
        
        if (*(r15_2 + rax_59) == 0)
            sub_1419ccf30(r14_4, rdx_31.d)
            rax_59 = r14_4[3]
        
        r15_1 = *(r15_2 + rax_59)
    
    *(arg2 + 0x1b0) = r15_1
    sub_14198aa60(r15_1)
    void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_60 = &rcx_74[3]
    
    if (rax_60 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_60 = &rcx_74[3]
    
    *(arg2 + 0x30) = rax_60
    *(arg2 + 0x14) += 1
    void* r14_5 = arg_8
    **(arg2 + 8) = rcx_74
    *(arg2 + 8) = &rcx_74[1]
    rcx_74[1] = 0
    *rcx_74 = &data_142dd5b40
    rcx_74[2] = r15_1
    int32_t var_d8_5
    var_d8_5.q = data_1439b5d48
    sub_141142d50(r14_5, arg2, *(rsi_6 + 8), rdi_13.d, var_d8_5, data_1439b5ce8)
    sub_1419cd1c0(arg2, r14_5, (rdi_13 + 0x3f).d u>> 6, 1, 1)
    void* r9_9 = *(rsi_6 + 8)
    arg_8 = *(arg2 + 0x1b0)
    sub_14111a3f0(r14_5 + 0x126, arg2, &arg_8, *(r9_9 + 0x18c8), 1)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (r12_4 != 0)
    sub_140a74f90(r12_4)
