// 函数: sub_142beff40
// 地址: 0x142beff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x30)
int32_t arg_10 = 0
char* rsi = nullptr

if (arg2 != 0)
    int32_t r14_1 = 0x400
    int32_t* var_80_1 = &arg_10
    int32_t var_70_1 = 0x400
    char* rax_1
    int512_t zmm0_1
    rax_1, zmm0_1 = sub_142b99a90(rdx, 1, 0, 0x400, 0, var_80_1)
    rsi = rax_1
    
    if (arg_10 == 0)
        int32_t rcx_1 = 1
        void* rbp_1 = nullptr
        void* rdi_1 = nullptr
        void* r13_1 = nullptr
        int64_t var_60 = arg2
        void* r12_1 = nullptr
        *rax_1 = 0
        int32_t rax_2 = 1
        void* var_68_1 = nullptr
        int32_t var_78_1 = 1
        int32_t var_74_1 = 1
        
        while (true)
            int32_t r15_1 = 0x100
            
            while (true)
                if (rax_2 != 0)
                    int32_t rax_3
                    rax_3, zmm0_1 = sub_142b97130(arg1, rsi + r13_1, r14_1 - r13_1.d, zmm0_1)
                    rcx_1 = var_78_1
                    r12_1 = zx.q(rax_3)
                    var_68_1 = nullptr
                    var_74_1 = 0
                    rbp_1 = r12_1 + r13_1
                
                char* rbx_1 = rdi_1
                int32_t rdi_3
                
                if (rdi_1 s>= rbp_1)
                label_142bf008c:
                    
                    if (r12_1 == 0)
                        rdi_3 = var_78_1
                    else if (rdi_1 != 0)
                        r12_1 = rbp_1 - rdi_1
                        memmove(rsi, rdi_1 + rsi, r12_1.d)
                        rcx_1 = var_78_1
                        rax_2 = 1
                        rbp_1 -= r12_1
                        var_74_1 = 1
                        r13_1 = r12_1
                        var_68_1 = r12_1
                        rdi_1 = nullptr
                        continue
                    else
                        if (r14_1 u>= 0x10000)
                            arg_10 = 6
                            goto label_142bf0251
                        
                        var_80_1 = &arg_10
                        int32_t rbx_2 = r14_1 * 2
                        char* rax_6
                        rax_6, zmm0_1 =
                            sub_142b99a90(rdx, (rdi_1 + 1).d, r14_1, rbx_2, rsi, var_80_1)
                        rsi = rax_6
                        
                        if (arg_10 != rdi_1.d)
                            goto label_142bf0251
                        
                        rcx_1 = var_78_1
                        rax_2 = 1
                        r13_1 = zx.q(r14_1)
                        r14_1 = rbx_2
                        var_68_1 = r13_1
                        var_74_1 = 1
                        var_70_1 = rbx_2
                        continue
                else
                    char* r13_2 = rdi_1 + rsi
                    
                    if (sx.d(*(rdi_1 + rsi)) == r15_1)
                        r13_1 = var_68_1
                        rdi_1 += 1
                        rax_2 = var_74_1
                        break
                    
                    while (true)
                        char rax_5 = *(rbx_1 + rsi)
                        
                        if (rax_5 == 0xa)
                            break
                        
                        if (rax_5 == 0xd)
                            break
                        
                        rbx_1 = &rbx_1[1]
                        
                        if (rbx_1 s>= rbp_1)
                            goto label_142bf008c
                    
                    if (rbx_1 s>= rbp_1)
                        goto label_142bf008c
                    
                    int32_t r14_2 = sx.d(*(rbx_1 + rsi))
                    *(rbx_1 + rsi) = 0
                    char rax_7 = *r13_2
                    
                    if (rax_7 == 0x23 || rax_7 == 0x1a || rbx_1 s<= rdi_1)
                        goto label_142bf018a
                    
                    int32_t r15_3 = rbx_1.d - rdi_1.d
                    int32_t rax_8 = var_60(r13_2, zx.q(r15_3), zx.q(rcx_1), &var_60, arg3, 
                        var_80_1, var_78_1, var_70_1, var_68_1)
                    arg_10 = rax_8
                    
                    if (rax_8 != 0xffffffff)
                        rdi_3 = var_78_1
                    else
                        rdi_3 = var_78_1
                        rax_8 = var_60(r13_2, zx.q(r15_3), zx.q(rdi_3), &var_60, arg3)
                        arg_10 = rax_8
                    
                    if (rax_8 == 0)
                        rcx_1 = var_78_1
                    label_142bf018a:
                        r13_1 = var_68_1
                        rdi_1 = &rbx_1[1]
                        rax_2 = var_74_1
                        rcx_1 += 1
                        var_78_1 = rcx_1
                        *(rbx_1 + rsi) = r14_2.b
                        
                        if (r14_2 != 0xa)
                            r15_1 = 0x100
                            r14_1 = var_70_1
                            
                            if (r14_2 == 0xd)
                                r15_1 = 0xa
                                continue
                            else
                                continue
                        else
                            r15_1 = r14_2 + 3
                            r14_1 = var_70_1
                            continue
                
                *arg4 = rdi_3
                goto label_142bf0251
else
    arg_10 = 6

label_142bf0251:
sub_142b99980(rdx, rsi)
return zx.q(arg_10)
