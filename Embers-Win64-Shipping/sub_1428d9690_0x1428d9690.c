// 函数: sub_1428d9690
// 地址: 0x1428d9690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t r15 = sx.q(arg4)
int32_t r12 = (r15 * 2).d

if (r15.d s< 8)
    return sub_1428d9560(arg1, arg2, r15.d + arg5, arg3, r15.d + arg6) __tailcall

int32_t rcx_2 = r15.d - arg5
int64_t r14 = r15 << 3
int32_t rax_2 = sub_142890bb0(arg2, &arg2[r15], arg5, rcx_2)
int32_t arg_20 = 0
int32_t rcx_5 = arg6 - r15.d
int32_t rdx_5 = rax_2 + ((rax_2 + 2) << 1) + sub_142890bb0(&arg3[r15], arg3, arg6, rcx_5)
int64_t rbx_1

if (rdx_5 u> 8)
    rbx_1 = r14
else
    switch (rdx_5)
        case 0
            rbx_1 = r14
            sub_1428da120(arg7, rbx_1 + arg2, arg2, arg5, arg5 - r15.d)
            sub_1428da120(rbx_1 + arg7, arg3, rbx_1 + arg3, arg6, r15.d - arg6)
        case 1, 2
            rbx_1 = r14
            sub_1428da120(arg7, rbx_1 + arg2, arg2, arg5, arg5 - r15.d)
            sub_1428da120(rbx_1 + arg7, rbx_1 + arg3, arg3, arg6, rcx_5)
            arg_20 = 1
        case 3, 4, 5, 6
            rbx_1 = r14
            sub_1428da120(arg7, arg2, rbx_1 + arg2, arg5, rcx_2)
            sub_1428da120(rbx_1 + arg7, arg3, rbx_1 + arg3, arg6, r15.d - arg6)
            arg_20 = 1
        case 7, 8
            rbx_1 = r14
            sub_1428da120(arg7, arg2, rbx_1 + arg2, arg5, rcx_2)
            sub_1428da120(rbx_1 + arg7, rbx_1 + arg3, arg3, arg6, rcx_5)

int64_t* r8_12 = rbx_1 + arg7
int64_t* r10_1 = &arg7[sx.q(r12)]
int64_t* rbx_3
int64_t* rdi_1

if (r15.d != 8)
    void* rbx_4 = &arg7[sx.q(r12 * 2)]
    int32_t var_58
    var_58.q = rbx_4
    sub_1428d9bf0(r10_1, arg7, r8_12, r15.d, 0, 0, rbx_4)
    sub_1428d9bf0(arg1, arg2, arg3, r15.d, 0, 0, rbx_4)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15.d)
    int32_t rax_30 = (temp1_1 - temp0_1) s>> 1
    int32_t r9_16 = arg6 - rax_30
    int32_t r8_19 = arg5 - rax_30
    int32_t rdx_19 = r8_19
    
    if (arg5 s<= arg6)
        rdx_19 = r9_16
    
    rbx_3 = &arg1[sx.q(r12)]
    
    if (rdx_19 == 0)
        sub_1428d9bf0(rbx_3, &arg2[r15], &arg3[r15], rax_30, r8_19, r9_16, var_58.q)
        rdi_1 = arg1
        int32_t rcx_27 = rax_30 * 2
        memset(&rdi_1[sx.q(rcx_27 + r12)], 0, sx.q(r12 - rcx_27) << 3)
    else if (rdx_19 s<= 0)
        memset(rbx_3, 0, sx.q(r12) << 3)
        
        if (arg5 s>= 0x10 || arg6 s>= 0x10)
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_30)
            int32_t rax_45 = (temp5_1 - temp4_1) s>> 1
            
            if (rax_45 s< arg5)
            label_1428d9ade:
                sub_1428d9690(rbx_3, &arg2[r15], &arg3[r15], zx.q(rax_45), arg5 - rax_45, 
                    arg6 - rax_45, var_58.q)
            else
                while (true)
                    if (rax_45 s< arg6)
                        goto label_1428d9ade
                    
                    if (rax_45 == arg5 || rax_45 == arg6)
                        sub_1428d9bf0(rbx_3, &arg2[r15], &arg3[r15], rax_45, arg5 - rax_45, 
                            arg6 - rax_45, var_58.q)
                        break
                    
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(rax_45)
                    rax_45 = (temp8_1 - temp7_1) s>> 1
                    
                    if (rax_45 s< arg5)
                        goto label_1428d9ade
                    
                    continue
        else
            sub_1428d9560(rbx_3, &arg2[r15], arg5, &arg3[r15], arg6)
        
        rdi_1 = arg1
    else
        sub_1428d9690(rbx_3, &arg2[r15], &arg3[r15], zx.q(rax_30), r8_19, r9_16, var_58.q)
        rdi_1 = arg1
        memset(&rdi_1[sx.q(r12 + arg5 + arg6)], 0, sx.q(r12 - arg5 - arg6) << 3)
else
    sub_14291daa0(r10_1, arg7, r8_12)
    sub_14291daa0(arg1, arg2, arg3)
    rbx_3 = &arg1[sx.q(r12)]
    sub_1428d9560(rbx_3, &arg2[r15], arg5, &arg3[r15], arg6)
    rdi_1 = arg1
    memset(&rdi_1[sx.q(r12 + arg5 + arg6)], 0, sx.q(r12 - arg5 - arg6) << 3)

int32_t rax_48 = sub_14291cd80(arg7, rdi_1, rbx_3, r12)
int64_t* rsi_5 = &arg7[sx.q(r12)]
int32_t rbx_7

if (arg_20 == 0)
    rbx_7 = rax_48 + sub_14291cd80(rsi_5, rsi_5, arg7, r12)
else
    rbx_7 = rax_48 - sub_142921500(rsi_5, arg7, rsi_5, r12)

int64_t* rcx_41 = &rdi_1[r15]
int32_t result = sub_14291cd80(rcx_41, rcx_41, rsi_5, r12)

if (rbx_7 != neg.d(result))
    int64_t rdx_35 = sx.q(rbx_7 + result)
    result = r12 + r15.d
    int64_t result_1 = sx.q(result)
    void* r8_34 = &rdi_1[result_1]
    int64_t rcx_43 = rdi_1[result_1] + rdx_35
    *r8_34 = rcx_43
    
    if (rcx_43 u< rdx_35)
        int64_t i
        
        do
            i = *(r8_34 + 8)
            *(r8_34 + 8) += 1
            r8_34 += 8
        while (i == -1)

return result
