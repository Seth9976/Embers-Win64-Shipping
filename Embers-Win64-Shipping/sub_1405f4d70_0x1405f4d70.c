// 函数: sub_1405f4d70
// 地址: 0x1405f4d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_88 = -2
int32_t arg_8 = 0

if (*(arg1 + 0x78) != 0)
    void** result_1
    int64_t var_70
    int64_t* rcx_3
    int32_t rbx_1
    
    if (*(arg1 + 0xa0) != 0)
        sub_140a2e390(&var_70, u"%f", _mm_cvtps_pd(*(arg1 + 0x9c)))
        rcx_3 = &var_70
        rbx_1 = 0x22
    else
        result_1 = nullptr
        int32_t var_78_1 = 0
        sub_1405947f0(&result_1, 7)
        int32_t rax = var_78_1 + 7
        var_78_1 = rax
        
        if (rax s> 0)
            sub_140594770(&result_1)
        
        UnDecorator::getReferenceType(result_1, u"<none>", 0xe)
        rcx_3 = &result_1
        rbx_1 = 1
    
    arg_8 = rbx_1
    int64_t var_50
    int64_t* arg_10 = &var_50
    var_50 = *rcx_3
    *rcx_3 = 0
    int32_t var_48_1 = rcx_3[1].d
    int32_t var_44_1 = *(rcx_3 + 0xc)
    rcx_3[1] = 0
    
    if ((rbx_1.b & 2) != 0)
        rbx_1 &= 0xfffffffd
        arg_8 = rbx_1
        int64_t rcx_5 = var_70
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if ((rbx_1.b & 1) != 0)
        rbx_1 &= 0xfffffffe
        arg_8 = rbx_1
        void** result_3 = result_1
        
        if (result_3 != 0)
            sub_140a74f90(result_3)
    
    void** result_2
    wchar16 const* const r14_1
    
    if (*(arg1 + 0xb8) == 0)
        r14_1 = u"<none>"
    else if (*(arg1 + 0xb0) != data_14395f9a0)
        int64_t* rax_5 = sub_140b489f0(arg1 + 0xb0, &result_2)
        rbx_1 |= 4
        arg_8 = rbx_1
        
        if (rax_5[1].d == 0)
            r14_1 = &data_142d40450
        else
            r14_1 = *rax_5
    else
        r14_1 = u"<current>"
    
    int64_t r15_1 = 0
    var_70 = 0
    int32_t rdx_3 = 0
    int32_t var_68_1 = 0
    int32_t rcx_7 = 0
    int32_t var_64_1 = 0
    
    if (r14_1 != 0 && *r14_1 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (r14_1[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_70, rsi_1.d + 1)
            rcx_7 = var_64_1
            rdx_3 = var_68_1
            r15_1 = var_70
        
        int32_t rax_6 = rdx_3 + rsi_1.d + 1
        int32_t var_68_2 = rax_6
        
        if (rax_6 s> rcx_7)
            sub_140594770(&var_70)
            r15_1 = var_70
        
        UnDecorator::getReferenceType(r15_1, r14_1, (rsi_1.d + 1) * 2)
    
    if ((rbx_1.b & 4) != 0)
        rbx_1 &= 0xfffffffb
        arg_8 = rbx_1
        void** result_4 = result_2
        
        if (result_4 != 0)
            sub_140a74f90(result_4)
    
    int64_t r8_4 = *(arg1 + 0xa8)
    void*** rdx_8
    int32_t rbx_2
    
    if (r8_4 != 0)
        sub_140a2e390(&result_2, u"%p", r8_4)
        rdx_8 = &result_2
        rbx_2 = rbx_1 | 0x50
    else
        result_1 = nullptr
        int32_t var_78_2 = 0
        sub_1405947f0(&result_1, (r8_4 + 7).d)
        int32_t rax_7 = var_78_2 + 7
        var_78_2 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&result_1)
        
        UnDecorator::getReferenceType(result_1, u"<none>", 0xe)
        rdx_8 = &result_1
        rbx_2 = rbx_1 | 8
    
    void** var_60
    arg_8.q = &var_60
    void** rcx_15 = *rdx_8
    var_60 = rcx_15
    *rdx_8 = nullptr
    int32_t var_58_1 = rdx_8[1].d
    result = zx.q(*(rdx_8 + 0xc))
    int32_t var_54_1 = result.d
    rdx_8[1] = 0
    
    if ((rbx_2.b & 0x10) != 0)
        rbx_2 &= 0xffffffef
        arg_8 = rbx_2
        result = result_2
        
        if (result != 0)
            result = sub_140a74f90(result)
            rcx_15 = var_60
    
    if ((rbx_2.b & 8) != 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a74f90(result)
            rcx_15 = var_60
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
    
    int64_t rcx_19 = var_50
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)

*(arg1 + 0x78) = 0
int64_t* rbx_3 = *(arg1 + 0xa8)

if (rbx_3 != 0)
    arg_8.q = rbx_3
    (*(*rbx_3 + 8))(rbx_3)
    int64_t* rcx_21 = *(arg1 + 0xa8)
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 0x10))(rcx_21)
        *(arg1 + 0xa8) = 0
    
    sub_1405f2520(arg1, rbx_3)
    
    if (*(arg1 + 0x78) != 0)
        return (*(*rbx_3 + 0x10))(rbx_3)
    
    result = (*(*rbx_3 + 0x10))(rbx_3)

if (*(arg1 + 0xa0) != 0)
    *(arg1 + 0xa0) = 0
    result = sub_1405f20d0(arg1, *(arg1 + 0x9c))

if ((*(arg1 + 0xa0) != 0 && *(arg1 + 0x78) != 0) || *(arg1 + 0xb8) == 0)
    return result

*(arg1 + 0xb8) = 0
return sub_1405f2370(arg1, *(arg1 + 0xb0))
