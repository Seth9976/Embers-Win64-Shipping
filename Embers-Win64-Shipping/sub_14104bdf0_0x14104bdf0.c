// 函数: sub_14104bdf0
// 地址: 0x14104bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) == 0)
    return 0

int64_t rdi = sx.q(sub_140a5ff80(arg2, 0))
AcquireSRWLockShared(arg1 + 0x100)

if (*(arg1 + 0x110) == *(arg1 + 0x13c))
label_14104be9e:
    ReleaseSRWLockShared(arg1 + 0x100)
    AcquireSRWLockExclusive(arg1 + 0x100)
    int32_t rcx_7 = *(arg1 + 0x110)
    int32_t r8_2 = *(arg1 + 0x13c)
    int64_t var_38
    int64_t arg_8
    
    if (rcx_7 - r8_2 s> 0x2710)
        sub_140fe5880(arg1 + 0x108, 0x2710)
        sub_140de7870(arg1 + 0x108, &var_38)
        int32_t* var_30
        *var_30 = data_143e2c5f8
        *(var_30 + 8) = 0
        int32_t r12_1 = data_143e2c5f0
        arg_8 = data_143e2c5e8
        var_30[4] = r12_1
        
        if (r12_1 != 0)
            sub_1405a4c70(&var_30[2], r12_1, 0)
            memcpy(*(var_30 + 8), arg_8, r12_1 * 2)
        else
            var_30[5] = r12_1
        
        int32_t rax_7 = var_38.d
        var_30[6] = 0xffffffff
        sub_140619c60(arg1 + 0x108, &arg_8, *var_30, var_30, rax_7, nullptr)
        rcx_7 = *(arg1 + 0x110)
        r8_2 = *(arg1 + 0x13c)
    
    if (rcx_7 == r8_2)
    label_14104bfef:
        int64_t r15_2 = 0
        int32_t rsi_1 = 0
        int32_t r12_2 = 0
        var_38 = 0
        int32_t* var_30_1 = nullptr
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rbx_1.d + 1)
                r12_2 = var_30_1:4.d
                rsi_1 = var_30_1.d
                r15_2 = var_38
            
            rsi_1 += rbx_1.d + 1
            var_30_1.d = rsi_1
            
            if (rsi_1 s> r12_2)
                sub_140594770(&var_38)
                r12_2 = var_30_1:4.d
                rsi_1 = var_30_1.d
                r15_2 = var_38
            
            UnDecorator::getReferenceType(r15_2, arg2, (rbx_1.d + 1) * 2)
        
        sub_140de7870(arg1 + 0x108, &var_38)
        int32_t rdx_18 = var_38.d
        *var_30_1 = rdi.d
        *(var_30_1 + 8) = r15_2
        var_30_1[4] = rsi_1
        var_30_1[5] = r12_2
        var_30_1[6] = 0xffffffff
        sub_140619c60(arg1 + 0x108, &arg_8, *var_30_1, var_30_1, rdx_18, nullptr)
    else
        void* rcx_14 = *(arg1 + 0x148)
        void* r8_6 = arg1 + 0x140
        
        if (rcx_14 != 0)
            r8_6 = rcx_14
        
        int32_t rax_8 = *(r8_6 + (((sx.q(*(arg1 + 0x150)) - 1) & rdi) << 2))
        
        if (rax_8 == 0xffffffff)
            goto label_14104bfef
        
        int32_t* rdx_13
        
        while (true)
            rdx_13 = (sx.q(rax_8) << 5) + *(arg1 + 0x108)
            
            if (*rdx_13 == rdi.d)
                break
            
            rax_8 = rdx_13[6]
            
            if (rax_8 == 0xffffffff)
                goto label_14104bfef
        
        if (rax_8 == 0xffffffff || rdx_13 == 0 || rdx_13 == -8)
            goto label_14104bfef
    
    ReleaseSRWLockExclusive(arg1 + 0x100)
else
    void* rcx_2 = *(arg1 + 0x148)
    void* r8_1 = arg1 + 0x140
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_2 = *(r8_1 + (((sx.q(*(arg1 + 0x150)) - 1) & rdi) << 2))
    
    if (rax_2 == 0xffffffff)
        goto label_14104be9e
    
    int64_t rdx_3 = *(arg1 + 0x108)
    
    while (true)
        int64_t rcx_4 = sx.q(rax_2) << 5
        
        if (*(rcx_4 + rdx_3) == rdi.d)
            break
        
        rax_2 = *(rcx_4 + rdx_3 + 0x18)
        
        if (rax_2 == 0xffffffff)
            goto label_14104be9e
    
    if (rax_2 == 0xffffffff)
        goto label_14104be9e
    
    ReleaseSRWLockShared(arg1 + 0x100)

return zx.q(rdi.d)
