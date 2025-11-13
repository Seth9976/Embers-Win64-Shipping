// 函数: sub_14203d060
// 地址: 0x14203d060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38

if (arg3 != 0)
    int16_t* rdi = nullptr
    int32_t r14_1 = 0
    int32_t r15_1 = 0
    var_38 = nullptr
    int64_t var_30_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_1.d + 1)
            r15_1 = var_30_1:4.d
            r14_1 = var_30_1.d
            rdi = var_38
        
        r14_1 += rbx_1.d + 1
        var_30_1.d = r14_1
        
        if (r14_1 s> r15_1)
            sub_140594770(&var_38)
            r15_1 = var_30_1:4.d
            r14_1 = var_30_1.d
            rdi = var_38
        
        UnDecorator::getReferenceType(rdi, arg2, (rbx_1.d + 1) * 2)
    
    int64_t* r12_1 = data_143f40650
    int64_t* rbx_3 = r12_1
    void* rsi_3 = &r12_1[sx.q(data_143f40658) * 2]
    
    if (r12_1 != rsi_3)
        while (true)
            int16_t* const rdx_3 = &data_142d40450
            
            if (r14_1 != 0)
                rdx_3 = rdi
            
            int16_t* const rcx_3
            
            if (rbx_3[1].d == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *rbx_3
            
            if (sub_140a54510(rcx_3, rdx_3) == 0)
                break
            
            rbx_3 = &rbx_3[2]
            
            if (rbx_3 == rsi_3)
                goto label_14203d162
    
    if (r12_1 == rsi_3 || ((rbx_3 - r12_1) s>> 4).d == 0xffffffff)
    label_14203d162:
        int64_t rbx_4 = sx.q(data_143f40658)
        int32_t rax_2 = (rbx_4 + 1).d
        bool cond:1_1 = rax_2 s<= data_143f4065c
        data_143f40658 = rax_2
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143f40650)
        
        int64_t* rax_5 = (rbx_4 << 4) + data_143f40650
        *rax_5 = rdi
        rax_5[1].d = r14_1
        *(rax_5 + 0xc) = r15_1
    else if (rdi != 0)
        sub_140a74f90(rdi)
else if (arg4 == 0)
    int32_t rdi_1 = 0
    int64_t var_28 = 0
    int32_t rcx_6 = 0
    int32_t var_1c_1 = 0
    int32_t var_20_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_8 = -1
        
        do
            rbx_8 += 1
        while (arg2[rbx_8] != 0)
        
        if (rbx_8.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_8.d + 1)
            rcx_6 = var_1c_1
            rdi_1 = var_20_1
        
        int32_t rax_8 = rbx_8.d + 1 + rdi_1
        int32_t var_20_2 = rax_8
        
        if (rax_8 s> rcx_6)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, arg2, (rbx_8.d + 1) * 2)
    
    var_38 = &var_28
    sub_140688b80(&data_143f40650, &var_38)
    int64_t rcx_10 = var_28
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else
    int32_t i_1 = data_143f40658
    int64_t* rbx_7 = data_143f40650
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *rbx_7
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_7 = &rbx_7[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    bool cond:0_1 = data_143f4065c == 0
    data_143f40658 = 0
    
    if (cond:0_1)
        return 0
    
    sub_14061cd70(&data_143f40650, 0)
return zx.q(data_143f40658)
