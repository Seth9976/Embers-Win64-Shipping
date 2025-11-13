// 函数: sub_142a8fff0
// 地址: 0x142a8fff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r15 = &data_1436145d0

if (arg1 != 2)
    r15 = &data_143614450

void* const var_68 = r15
int32_t r10 = arg7
int32_t rbx = 0
int64_t* rdi = arg8
int32_t r12 = 0
int32_t r14 = 0
int64_t r13 = 0
label_142a90075:

if (r14 s< r10)
    int64_t r9 = arg5
    
    while (true)
        int16_t rbp_1 = *(r9 + (r13 << 1))
        int32_t rax_2
        
        if (rbp_1 u>= 0x17f)
            if (rbp_1 u>= 0xd800)
            label_142a90205:
                int32_t r15_2 = r14
                uint32_t rcx_8 = zx.d(rbp_1)
                r13 += 1
                *(arg6 + 0x14) = r14
                r14 += 1
                
                if ((rcx_8 & 0xfffffc00) == 0xd800 && r14 s< r10)
                    uint32_t rdx_2 = zx.d(*(r9 + (r13 << 1)))
                    
                    if ((rdx_2 & 0xfffffc00) == 0xdc00)
                        r14 += 1
                        rcx_8 = ((rcx_8 - 0xd7f7) << 0xa) + rdx_2
                        r13 += 1
                
                *(arg6 + 0x18) = r14
                int64_t var_58[0x3]
                int32_t rax_17 = sub_142a53c90(rcx_8, sub_142a90920, arg6, &var_58, arg1)
                rdi = arg8
                r10 = arg7
                
                if (rax_17 s>= 0)
                    int32_t rdi_5 = r15_2 - r12
                    
                    if (rdi_5 s> 0)
                        if (arg8 != 0)
                            sub_142afcd10(arg8, rdi_5)
                        
                        if ((arg2 & 0x4000) == 0)
                            if (rdi_5 s<= 0x7fffffff - rbx)
                                int32_t rsi_2 = rdi_5 + rbx
                                
                                if (rsi_2 s<= arg4)
                                    sub_142a8bca0(arg3 + (sx.q(rbx) << 1), arg5 + (sx.q(r12) << 1), 
                                        rdi_5)
                                
                                rbx = rsi_2
                            else
                                rbx = -1
                    
                    if (rbx s< 0)
                        goto label_142a90380
                    
                    rdi = arg8
                    int32_t var_88_1
                    var_88_1.q = var_58[0]
                    int32_t rax_25 =
                        sub_142a8f800(arg3, rbx, arg4, rax_17, var_88_1, r14 - r15_2, arg2, rdi)
                    rbx = rax_25
                    
                    if (rax_25 s< 0)
                        goto label_142a90380
                    
                    r10 = arg7
                    r12 = r14
                
                r15 = var_68
                goto label_142a90075
            
            uint32_t r8 = zx.d(rbp_1)
            int16_t rcx_2 = *(0x143614790
                + (((zx.q(r8) & 0x1f) + (zx.q(*(0x143614790 + (zx.q(r8) u>> 5 << 1))) << 2)) << 1))
            
            if ((rcx_2.b & 8) != 0)
                goto label_142a90205
            
            r14 += 1
            r13 += 1
            
            if ((rcx_2.b & 3) == 1)
                rax_2 = sx.d(rcx_2) s>> 7
                
                if (rax_2 != 0)
                    goto label_142a9011b
        else
            char rcx = *(zx.q(rbp_1) + r15)
            
            if (rcx == 0x80)
                goto label_142a90205
            
            r14 += 1
            r13 += 1
            
            if (rcx != 0)
                rax_2 = sx.d(rcx)
            label_142a9011b:
                
                if (r14 - r12 - 1 s> 0)
                    if (arg8 != 0)
                        sub_142afcd10(arg8, r14 - r12 - 1)
                        r9 = arg5
                    
                    if ((arg2 & 0x4000) == 0)
                        if (r14 - r12 - 1 s<= 0x7fffffff - rbx)
                            int32_t rsi_1 = r14 - r12 - 1 + rbx
                            
                            if (rsi_1 s<= arg4)
                                sub_142a8bca0(arg3 + (sx.q(rbx) << 1), r9 + (sx.q(r12) << 1), 
                                    r14 - r12 - 1)
                            
                            rbx = rsi_1
                        else
                            rbx = -1
                
                if (rbx s< 0)
                    goto label_142a90380
                
                if (rbx s< arg4)
                    *(arg3 + (sx.q(rbx) << 1)) = rbp_1 + rax_2.w
                    rbx += 1
                else if (rbx != 0x7fffffff)
                    rbx += 1
                else
                    rbx = -1
                
                if (arg8 != 0)
                    sub_142afcad0(arg8, 1, 1)
                
                if (rbx s< 0)
                    goto label_142a90380
                
                r9 = arg5
                r12 = r14
                r10 = arg7
        
        if (r14 s>= r10)
            rdi = arg8
            break
        
        r15 = var_68

int32_t r14_1 = r14 - r12

if (r14_1 s> 0)
    if (rdi != 0)
        sub_142afcd10(rdi, r14_1)
    
    if ((arg2 & 0x4000) == 0)
        if (r14_1 s<= 0x7fffffff - rbx)
            int32_t rdi_6 = r14_1 + rbx
            
            if (rdi_6 s<= arg4)
                sub_142a8bca0(arg3 + (sx.q(rbx) << 1), arg5 + (sx.q(r12) << 1), r14_1)
            
            rbx = rdi_6
        else
            rbx = -1

if (rbx s>= 0)
    return zx.q(rbx)

label_142a90380:
*arg9 = 8
return 0
