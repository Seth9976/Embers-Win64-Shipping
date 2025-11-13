// 函数: sub_140b175a0
// 地址: 0x140b175a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
void* rax = sub_140b17d90()
void* r12 = rax

if (*(rax + 0xfb) == 0)
    int16_t* var_68 = nullptr
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x15)
    int32_t r15_1 = var_60_1 + 0x15
    int32_t var_5c
    
    if (r15_1 s> var_5c)
        sub_140594770(&var_68)
    
    int16_t* r14_1 = var_68
    UnDecorator::getReferenceType(r14_1, u"\:*?"<>|' ,.&!~\n\r\t@#", 0x2a)
    int16_t* rax_1 = sub_140b73b20(1)
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    int32_t rdx_2 = 0
    int32_t rcx_4 = 0
    
    if (rax_1 != 0 && *rax_1 != 0)
        int64_t rbx = -1
        
        do
            rbx += 1
        while (rax_1[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx.d + 1)
            rcx_4 = var_50_1:4.d
            rdx_2 = var_50_1.d
        
        int32_t rax_2 = rdx_2 + rbx.d + 1
        var_50_1.d = rax_2
        
        if (rax_2 s> rcx_4)
            sub_140594770(&var_58)
        
        UnDecorator::getReferenceType(var_58, rax_1, (rbx.d + 1) * 2)
    
    sub_140597df0(r12 + 0x68, &var_58)
    int32_t rsi_1 = 0
    
    while (true)
        int32_t rax_3 = r15_1 - 1
        
        if (r15_1 == 0)
            rax_3 = 0
        
        if (rsi_1 s>= rax_3)
            break
        
        int32_t rbx_2 = r15_1 - 1
        
        if (r15_1 == 0)
            rbx_2 = 0
        
        int32_t rcx_9
        
        if (rsi_1 s>= 0)
            rcx_9 = rbx_2
            
            if (rsi_1 s< rbx_2)
                rcx_9 = rsi_1
        else
            rcx_9 = 0
        
        int64_t r8_3 = sx.q(rcx_9)
        
        if (sx.q(rsi_1) + 1 s< r8_3)
            rbx_2 = rcx_9
        else if (sx.q(rsi_1) + 1 s< sx.q(rbx_2))
            rbx_2 = rsi_1 + 1
        
        int16_t* var_78 = nullptr
        int16_t* const rax_5 = &data_142d40450
        int32_t var_70_1 = 0
        
        if (r15_1 != 0)
            rax_5 = r14_1
        
        int32_t rdi_2 = 0
        int32_t rbx_3 = rbx_2 - rcx_9
        int16_t* r14_2 = nullptr
        void* r12_1 = &rax_5[r8_3]
        int32_t rax_6 = 0
        int32_t var_6c_1 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rbx_3 s> 0)
            if (rbx_3 + 1 s> 0)
                sub_1405947f0(&var_78, rbx_3 + 1)
                rax_6 = var_6c_1
                rdi_2 = var_70_1
                r14_2 = var_78
            
            rdi_2 = rdi_2 + 1 + rbx_3
            
            if (rdi_2 s> rax_6)
                sub_140594770(&var_78)
                r14_2 = var_78
            
            UnDecorator::getReferenceType(r14_2, r12_1, rbx_3 * 2)
            r14_2[sx.q(rdi_2) - 1] = 0
        
        var_78 = nullptr
        int16_t* r8_6 = &data_142d40450
        var_70_1.q = 0
        
        if (rdi_2 != 0)
            r8_6 = r14_2
        
        int64_t var_48
        int64_t* rax_8 = sub_140a300d0(r12 + 0x68, &var_48, r8_6, &data_142d99650, 0)
        
        if (r12 + 0x68 != rax_8)
            int64_t rcx_14 = *(r12 + 0x68)
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            *(r12 + 0x68) = *rax_8
            *rax_8 = 0
            *(r12 + 0x70) = rax_8[1].d
            *(r12 + 0x74) = *(rax_8 + 0xc)
            rax_8[1] = 0
        
        int64_t rcx_16 = var_48
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
        
        r14_1 = var_68
        rsi_1 += 1
    
    r12 = rax
    int64_t rcx_18 = var_58
    *(r12 + 0xfb) = 1
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    result = arg1

sub_140596d10(result, r12 + 0x68)
return result
