// 函数: sub_142bb3830
// 地址: 0x142bb3830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s> arg2)
    return 

int32_t arg_20 = arg4
int32_t arg_18 = arg3
int32_t rdi_1 = arg2
int64_t i = 0
int64_t r10_1 = sx.q(arg4)
int64_t r11_1 = sx.q(arg3)
int64_t r9 = r10_1
int64_t r8 = r11_1
int64_t r14_1 = arg5
int64_t rbx_1 = sx.q(arg1)
int64_t var_60_1 = r11_1
int64_t var_58_1 = r10_1
int64_t var_70_1 = rbx_1
int64_t i_1 = 0

do
    r14_1 += i
    int64_t rdx_1 = arg6 + i
    arg6 = rdx_1
    
    if (*(r14_1 + (r8 << 3)) s> *(r14_1 + (r9 << 3)))
        int64_t rcx = r8
        var_60_1 = r9
        r8 = r9
        var_58_1 = rcx
        r9 = rcx
        arg_18 = r10_1.d
        arg_20 = r11_1.d
    
    int32_t rsi_1 = *(r14_1 + (r8 << 3))
    int32_t r8_1 = *(rdx_1 + (r8 << 3))
    int32_t r15_1 = *(r14_1 + (r9 << 3))
    int32_t rcx_1 = *(rdx_1 + (r9 << 3))
    uint32_t arg_8
    uint32_t rcx_2
    
    if (rsi_1 != r15_1)
        uint32_t rax = sub_142b91790(rcx_1 - r8_1, r15_1 - rsi_1)
        rdx_1 = arg6
        rcx_2 = rax
        arg_8 = rax
    label_142bb3946:
        int64_t rdi_2 = sx.q(rdi_1)
        
        if (rbx_1 s<= rdi_2)
            int32_t* rbx_2 = rdx_1 + (rbx_1 << 3)
            int64_t j_1 = rdi_2 - var_70_1 + 1
            int64_t j
            
            do
                int32_t rax_3 = *(r14_1 - rdx_1 + rbx_2)
                
                if (rax_3 s<= rsi_1)
                    rax = rax_3 + r8_1 - rsi_1
                else if (rax_3 s< r15_1)
                    rax = sub_142b93e80(rax_3 - rsi_1, rcx_2) + r8_1
                else
                    rax = rax_3 + rcx_1 - r15_1
                
                rcx_2 = arg_8
                *rbx_2 = rax
                rbx_2 = &rbx_2[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = i_1
            rbx_1 = var_70_1
        
        rdi_1 = arg2
    else if (r8_1 == rcx_1)
        rcx_2 = 0
        arg_8 = 0
        goto label_142bb3946
    r8 = var_60_1
    i += 4
    r9 = var_58_1
    r10_1 = zx.q(arg_20)
    r11_1 = zx.q(arg_18)
    i_1 = i
while (i s<= 4)
