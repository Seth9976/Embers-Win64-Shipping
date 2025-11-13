// 函数: sub_142b929a0
// 地址: 0x142b929a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t r14 = arg1[2].d
int32_t rdi_2 = arg1[0x13].d + arg1[0xa].d + arg2
int64_t rax = *arg1

if (rdi_2 u> r14)
    int64_t rbp_1 = arg1[0xb]
    int32_t rdi_4 = (rdi_2 + 1) & 0xfffffffe
    
    if (r14 s< 0 || rdi_4 s< 0)
        rbx = 6
    else if (rdi_4 == 0)
        if (rbp_1 != 0)
            (*(rax + 0x10))(rax, rbp_1)
        
        rbp_1 = 0
    else if (rdi_4 s> 0x3ffffff)
        rbx = 0xa
    else if (r14 != 0)
        int64_t rax_2 = (*(rax + 0x18))(rax, zx.q(r14 << 5), zx.q(rdi_4 << 5), rbp_1)
        
        if (rax_2 != 0)
            rbp_1 = rax_2
        label_142b92a42:
            
            if (rdi_4 s> r14)
                memset(sx.q(r14 << 5) + rbp_1, 0, sx.q((rdi_4 - r14) << 5))
        else
            rbx = (rax_2 + 0x40).d
    else
        int64_t rax_1 = (*(rax + 8))(rax, zx.q(rdi_4 << 5))
        rbp_1 = rax_1
        
        if (rax_1 != 0)
            goto label_142b92a42
        
        rbx = (rax_1 + 0x40).d
    
    arg1[0xb] = rbp_1
    
    if (rbx == 0)
        arg1[2].d = rdi_4
        arg1[0x14] = (zx.q(arg1[0xa].d) << 5) + arg1[0xb]

return zx.q(rbx)
