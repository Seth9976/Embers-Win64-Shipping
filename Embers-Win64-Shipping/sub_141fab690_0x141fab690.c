// 函数: sub_141fab690
// 地址: 0x141fab690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (arg1[0x53] == 0)
    *arg2 = 0
    arg2[1] = 0
else
    void* rcx = *(data_143f5b298 + 0x788)
    int64_t rax_2
    
    if (rcx == 0)
        rax_2 = 0
    else
        rax_2 = *(rcx + 0x40)
    
    int64_t var_40_1 = rax_2
    int32_t rax_3 = arg3[1].d
    void** const var_60 = &data_14328a9d8
    int16_t* var_50_1 = nullptr
    int32_t var_48_1 = 0
    int32_t rcx_1 = rax_3 - 1
    int16_t var_58_1 = 0
    
    if (rax_3 == 0)
        rcx_1 = 0
    
    int64_t rax_5 = sub_140a82f30((sx.q(rcx_1) << 1) + 2, 0)
    int16_t* rax_6 = sub_140a82f30((sx.q(rcx_1) << 1) + 2, 0)
    int32_t rcx_4 = arg3[1].d
    int64_t var_80 = rax_5
    int16_t* const r15_2 = &data_142d40450
    int16_t* rax_7
    
    if (rcx_4 == 0)
        rax_7 = &data_142d40450
    else
        rax_7 = *arg3
    
    int32_t rbx_2 = rcx_4 - 1
    
    if (rcx_4 == 0)
        rbx_2 = 0
    
    if (rcx_1 s< 0)
        rbx_2 = 0
    else if (rcx_1 s< rbx_2)
        rbx_2 = rcx_1
    
    int16_t* var_70 = nullptr
    int32_t rdx = 0
    int32_t var_68_1 = 0
    int32_t rcx_6 = 0
    int32_t var_64_1 = 0
    int16_t* r13_1 = nullptr
    int64_t rcx_10
    int16_t* const rcx_11
    
    if (rax_7 != 0 && *rax_7 != 0 && rbx_2 s> 0)
        if (rbx_2 + 1 s> 0)
            sub_1405947f0(&var_70, rbx_2 + 1)
            rcx_6 = var_64_1
            rdx = var_68_1
            r13_1 = var_70
        
        int32_t rax_10 = rbx_2 + 1 + rdx
        
        if (rax_10 s> rcx_6)
            sub_140594770(&var_70)
            r13_1 = var_70
        
        UnDecorator::getReferenceType(r13_1, rax_7, rbx_2 * 2)
        rcx_10 = sx.q(rax_10)
        r13_1[rcx_10 - 1] = 0
        rcx_11 = r13_1
    
    if (rax_7 == 0 || *rax_7 == 0 || rbx_2 s<= 0 || rcx_10.d == 0)
        rcx_11 = &data_142d40450
    
    void* rdx_4 = rax_5 - rcx_11
    int16_t i
    
    do
        i = *rcx_11
        *(rcx_11 + rdx_4) = i
        rcx_11 = &rcx_11[1]
    while (i != 0)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    if (sub_140b1e3e0(&var_80, rax_6, rcx_1 + 1, 0) != 0)
        char i_1
        
        do
            int64_t rbx_3 = *(arg1[0x53] + 0x28)
            int64_t rax_14 = (*(*arg1 + 0x150))(arg1)
            
            if ((*(rbx_3 + 8))(arg1[0x53] + 0x28, rax_14, rax_6, &var_60, rax_7) == 0)
                *(arg1[0x53] + 0x30) = arg1[0xc3]
                int64_t rbx_4 = *(arg1[0x53] + 0x28)
                int64_t rax_19 = (*(*arg1 + 0x150))(arg1)
                (*(rbx_4 + 8))(arg1[0x53] + 0x28, rax_19, rax_6, &var_60)
                *(arg1[0x53] + 0x30) = arg1
            
            i_1 = sub_140b1e3e0(&var_80, rax_6, rcx_1 + 1, 0)
        while (i_1 != 0)
    
    sub_140a74f90(rax_5)
    sub_140a74f90(rax_6)
    int16_t* rcx_24 = var_50_1
    
    if (arg4 != 0)
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        *arg2 = 0
        arg2[1] = 0
    else
        *arg2 = 0
        
        if (var_48_1 != 0)
            r15_2 = rcx_24
        
        arg2[1] = 0
        
        if (r15_2 != 0 && *r15_2 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (r15_2[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(arg2, rbx_5.d + 1)
                rsi = arg2[1].d
            
            int32_t rax_21 = rbx_5.d + 1 + rsi
            arg2[1].d = rax_21
            
            if (rax_21 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            UnDecorator::getReferenceType(*arg2, r15_2, (rbx_5.d + 1) * 2)
            rcx_24 = var_50_1
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)

return arg2
