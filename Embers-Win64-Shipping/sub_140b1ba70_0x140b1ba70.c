// 函数: sub_140b1ba70
// 地址: 0x140b1ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbp = *arg2
uint64_t rbx = -1
uint64_t result = -1

do
    result += 1
while (rbp[result] != 0)

if (result.d s>= 0x13)
    int32_t rsi_1 = 0
    int32_t rdi_1 = 0
    int64_t r14_1 = 0
    int32_t r15_1 = 0
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int32_t rax
    
    if (rbp != 0 && *rbp != 0)
        do
            rbx += 1
        while (rbp[rbx] != 0)
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_48, rbx.d)
            r15_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            r14_1 = var_48
        
        rdi_1 += rbx.d
        var_40_1.d = rdi_1
        
        if (rdi_1 s> r15_1)
            sub_140594770(&var_48)
            r15_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            r14_1 = var_48
        
        UnDecorator::getReferenceType(r14_1, rbp, rbx.d * 2)
        rax = rdi_1 - 1
    
    if (rbp == 0 || *rbp == 0 || rdi_1 == 0)
        rax = 0
    
    int32_t r9_1 = rax
    
    if (rax s> 0x13)
        r9_1 = 0x13
    
    int32_t rax_1 = rax - r9_1
    
    if (rdi_1 != 0)
        rsi_1 = rdi_1 - 1
    
    int32_t rsi_2 = rsi_1 - r9_1
    
    if (rax_1 s>= 0)
        if (rax_1 s< rsi_2)
            rsi_2 = rax_1
        
        if (rsi_2 != 0)
            rdi_1 -= rsi_2
            
            if (rdi_1 != r9_1)
                memmove(r14_1 + (sx.q(r9_1) << 1), r14_1 + (sx.q(rsi_2 + r9_1) << 1), 
                    (rdi_1 - r9_1) * 2)
    
    int64_t var_38 = r14_1
    int32_t var_30_1 = rdi_1
    int32_t var_2c_1 = r15_1
    result = sub_140b21b90(&var_38, arg1)
    int64_t rcx_6 = var_38
    rbx.b = result.b == 0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (rbx.b == 0)
        *arg2 += 0x26
        result.b = 1
        return result

result.b = 0
return result
