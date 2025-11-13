// 函数: sub_140b16fc0
// 地址: 0x140b16fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b25880(arg1)
int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_140af2b60()
char rax = sub_140b2acc0(&data_143dbb3f0, u"-saveddirsuffix=", &var_38, 1)
int16_t* r15 = var_38

if (rax == 0)
    sub_140a20ba0(arg1, u"Saved/", 6)
else
    int32_t rbx_1 = var_30.d
    int32_t rdi_1 = 0
    int16_t* rsi_1 = r15
    
    while (true)
        int32_t rax_1 = rbx_1 - 1
        
        if (rbx_1 == 0)
            rax_1 = 0
        
        if (rdi_1 s>= rax_1)
            break
        
        if (wcschr(u"_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", *rsi_1) == 0)
            int32_t rax_3 = rbx_1 - 1
            
            if (rbx_1 == 0)
                rax_3 = 0
            
            int32_t rax_4 = rax_3 - rdi_1
            
            if (rax_4 s> 1)
                rax_4 = 1
            
            if (rax_4 != 0)
                rbx_1 -= rax_4
                
                if (rbx_1 != rdi_1)
                    memmove(&r15[sx.q(rdi_1)], &r15[sx.q(rax_4 + rdi_1)], (rbx_1 - rdi_1) * 2)
            
            rdi_1 -= 1
            rsi_1 -= 2
        
        rdi_1 += 1
        rsi_1 = &rsi_1[1]
    
    if (rbx_1 s> 1)
        int32_t rbx_2
        
        if (rbx_1 == 0)
            rbx_2 = 0
        else
            rbx_2 = rbx_1 - 1
        
        var_38 = nullptr
        var_30:4.d = 0
        int32_t rdx_3 = 0
        var_30.d = 0
        int16_t* rsi_2 = nullptr
        int32_t rdi_2 = 0
        
        if (rbx_2 + 7 s> 0)
            sub_1405947f0(&var_38, rbx_2 + 7)
            rdx_3 = var_30.d
            rdi_2 = var_30:4.d
            rsi_2 = var_38
        
        int32_t r14_2 = rdx_3 + 7 + rbx_2
        var_30.d = r14_2
        
        if (r14_2 s> rdi_2)
            sub_140594770(&var_38)
            rdi_2 = var_30:4.d
            r14_2 = var_30.d
            rsi_2 = var_38
        
        *rsi_2 = 0x65007600610053
        int64_t rbx_3 = sx.q(rbx_2)
        *(rsi_2 + 8) = 0x5f0064
        memcpy(&rsi_2[6], r15, rbx_3.d * 2)
        rsi_2[rbx_3 + 6] = 0
        var_38 = rsi_2
        int32_t rax_8
        rax_8.b = r14_2 == 0
        var_30.d = r14_2
        var_30:4.d = rdi_2
        int32_t rdx_7 = r14_2 + 1 + rax_8
        
        if (rdx_7 s> rdi_2)
            sub_1405947f0(&var_38, rdx_7)
        
        sub_140a20ba0(&var_38, &data_142d5a024, 1)
        int32_t rax_9 = var_30.d
        int16_t* rbx_4 = var_38
        var_38 = nullptr
        int64_t var_30_1 = 0
        int32_t r8_4 = rax_9 - 1
        
        if (rax_9 == 0)
            r8_4 = 0
        
        sub_140a20ba0(arg1, rbx_4, r8_4)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
