// 函数: sub_142a8fba0
// 地址: 0x142a8fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* const var_60

if (arg1 == 1)
    var_60 = &data_143614150
else if (arg1 s< 0)
    int32_t rax_4
    rax_4.b = (arg2.b & 7) == 0
    
    if (rax_4 != 0)
        var_60 = &data_143614150
    else
        var_60 = &data_1436142d0
else if (arg1 - 2 u<= 1)
    var_60 = &data_1436142d0
else
    var_60 = &data_143614150

int64_t r12 = sx.q(arg7)
int64_t* rdi = arg9
int32_t r14 = r12.d
int64_t r13 = r12
label_142a8fc10:
int32_t r10_1 = arg8
label_142a8fc23:

if (r14 s< r10_1)
    int64_t r9 = arg5
    
    do
        int16_t rbp_1 = *(r9 + (r13 << 1))
        int32_t rax_3
        
        if (rbp_1 u>= 0x17f)
            if (rbp_1 u>= 0xd800)
            label_142a8fdc6:
                uint32_t rcx_11 = zx.d(rbp_1)
                int32_t r15_2 = r14
                r14 += 1
                r13 += 1
                
                if ((rcx_11 & 0xfffffc00) == 0xd800 && r14 s< r10_1)
                    uint32_t rdx_2 = zx.d(*(r9 + (r13 << 1)))
                    
                    if ((rdx_2 & 0xfffffc00) == 0xdc00)
                        r14 += 1
                        rcx_11 = ((rcx_11 - 0xd7f7) << 0xa) + rdx_2
                        r13 += 1
                
                void* var_58
                int32_t rax_18
                
                if (arg1 s< 0)
                    rax_18 = sub_142a53530(rcx_11, &var_58, arg2.b)
                else
                    *(arg6 + 0x14) = r15_2
                    *(arg6 + 0x18) = r14
                    rax_18 = sub_142a537d0(rcx_11, sub_142a90920, arg6, &var_58, arg1)
                
                rdi = arg9
                r10_1 = arg8
                
                if (rax_18 s< 0)
                    goto label_142a8fc23
                
                int32_t rdi_5 = r15_2 - r12.d
                
                if (rdi_5 s> 0)
                    if (arg9 != 0)
                        sub_142afcd10(arg9, rdi_5)
                    
                    if ((arg2 & 0x4000) == 0)
                        if (rdi_5 s<= 0x7fffffff - rbx)
                            int32_t rsi_2 = rdi_5 + rbx
                            
                            if (rsi_2 s<= arg4)
                                sub_142a8bca0(arg3 + (sx.q(rbx) << 1), arg5 + (sx.q(r12.d) << 1), 
                                    rdi_5)
                            
                            rbx = rsi_2
                        else
                            rbx = -1
                
                if (rbx s< 0)
                    goto label_142a8ff51
                
                rdi = arg9
                int32_t var_88
                var_88.q = var_58
                int32_t rax_26 =
                    sub_142a8f800(arg3, rbx, arg4, rax_18, var_88, r14 - r15_2, arg2, rdi)
                rbx = rax_26
                
                if (rax_26 s< 0)
                    goto label_142a8ff51
                
                r12 = zx.q(r14)
                goto label_142a8fc10
            
            uint32_t r8 = zx.d(rbp_1)
            int16_t rcx_3 = *(0x143614790
                + (((zx.q(r8) & 0x1f) + (zx.q(*(0x143614790 + (zx.q(r8) u>> 5 << 1))) << 2)) << 1))
            
            if ((rcx_3.b & 8) != 0)
                goto label_142a8fdc6
            
            r14 += 1
            r13 += 1
            
            if ((rcx_3.b & 2) != 0)
                rax_3 = sx.d(rcx_3) s>> 7
                
                if (rax_3 != 0)
                    goto label_142a8fce9
        else
            char rcx_1 = *(zx.q(rbp_1) + var_60)
            
            if (rcx_1 == 0x80)
                goto label_142a8fdc6
            
            r14 += 1
            r13 += 1
            
            if (rcx_1 != 0)
                rax_3 = sx.d(rcx_1)
            label_142a8fce9:
                
                if (r14 - r12.d - 1 s> 0)
                    if (arg9 != 0)
                        sub_142afcd10(arg9, r14 - r12.d - 1)
                        r9 = arg5
                    
                    if ((arg2 & 0x4000) == 0)
                        if (r14 - r12.d - 1 s<= 0x7fffffff - rbx)
                            int32_t rsi_1 = r14 - r12.d - 1 + rbx
                            
                            if (rsi_1 s<= arg4)
                                sub_142a8bca0(arg3 + (sx.q(rbx) << 1), r9 + (sx.q(r12.d) << 1), 
                                    r14 - r12.d - 1)
                            
                            rbx = rsi_1
                        else
                            rbx = -1
                
                if (rbx s< 0)
                    goto label_142a8ff51
                
                if (rbx s< arg4)
                    *(arg3 + (sx.q(rbx) << 1)) = rbp_1 + rax_3.w
                    rbx += 1
                else if (rbx != 0x7fffffff)
                    rbx += 1
                else
                    rbx = -1
                
                if (arg9 != 0)
                    sub_142afcad0(arg9, 1, 1)
                
                if (rbx s< 0)
                    goto label_142a8ff51
                
                r9 = arg5
                r12 = zx.q(r14)
                r10_1 = arg8
    while (r14 s< r10_1)
    
    rdi = arg9

int32_t r14_1 = r14 - r12.d

if (r14_1 s> 0)
    if (rdi != 0)
        sub_142afcd10(rdi, r14_1)
    
    if ((arg2 & 0x4000) == 0)
        if (r14_1 s<= 0x7fffffff - rbx)
            int32_t rdi_6 = r14_1 + rbx
            
            if (rdi_6 s<= arg4)
                sub_142a8bca0(arg3 + (sx.q(rbx) << 1), arg5 + (sx.q(r12.d) << 1), r14_1)
            
            rbx = rdi_6
        else
            rbx = -1

if (rbx s>= 0)
    return zx.q(rbx)

label_142a8ff51:
*arg10 = 8
return 0
