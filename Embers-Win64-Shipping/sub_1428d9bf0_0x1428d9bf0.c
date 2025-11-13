// 函数: sub_1428d9bf0
// 地址: 0x1428d9bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t r15 = arg5
int32_t rbp = arg6
int64_t rsi = sx.q(arg4)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
int64_t r13 = sx.q((temp1 - temp0) s>> 1)
int32_t rcx = r15 + r13.d

if (rsi.d == 8)
    if (r15 == 0 && rbp == 0)
        return sub_14291daa0(arg1, arg2, arg3) __tailcall
    
    goto label_1428d9c84

int32_t result

if (rsi.d s>= 0x10)
    int32_t rdx_6 = r13.d - rcx
    void* rax_12 = &arg2[r13]
    int32_t rax_13 = sub_142890bb0(arg2, rax_12, rcx, rdx_6)
    arg6 = 0
    arg5 = 0
    void* rax_15 = &arg3[r13]
    int64_t* var_50_1 = rax_15
    int32_t rdx_11 = rax_13 + ((rax_13 + 2) << 1) + sub_142890bb0(rax_15, arg3, r13.d + rbp, rbp)
    int32_t rdx_16
    int64_t* rbx_2
    
    if (rdx_11 u> 8)
        rbx_2 = arg2
        rdx_16 = 0
    else
        switch (rdx_11)
            case 0
                rbx_2 = arg2
                sub_1428da120(arg7, rax_12, rbx_2, r15 + r13.d, r15)
                int32_t rdx_14 = r13.d + rbp
                sub_1428da120(&arg7[r13], arg3, var_50_1, rdx_14, r13.d - rdx_14)
                rdx_16 = 0
            case 1, 3, 4, 5, 7
                rbx_2 = arg2
                rdx_16 = 1
            case 2
                rbx_2 = arg2
                sub_1428da120(arg7, rax_12, rbx_2, r15 + r13.d, r15)
                sub_1428da120(&arg7[r13], var_50_1, arg3, r13.d + rbp, rbp)
                arg6 = 1
                rdx_16 = 0
            case 6
                rbx_2 = arg2
                sub_1428da120(arg7, rbx_2, rax_12, r15 + r13.d, rdx_6)
                int32_t rdx_21 = r13.d + rbp
                sub_1428da120(&arg7[r13], arg3, var_50_1, rdx_21, r13.d - rdx_21)
                arg6 = 1
                rdx_16 = 0
            case 8
                rbx_2 = arg2
                sub_1428da120(arg7, rbx_2, rax_12, r15 + r13.d, rdx_6)
                sub_1428da120(&arg7[r13], var_50_1, arg3, r13.d + rbp, rbp)
                rdx_16 = 0
    
    void* rbx_3
    int64_t r12_1
    
    if (r13.d == 4)
        if (r15 != 0 || rbp != 0)
            goto label_1428d9fb4
        
        r12_1 = rsi << 3
        void* rax_24 = r12_1 + arg7
        
        if (rdx_16 != 0)
            __builtin_memset(rax_24, 0, 0x40)
        else
            sub_14291d320(rax_24, arg7, &arg7[r13])
        
        sub_14291d320(arg1, rbx_2, arg3)
        rbx_3 = r12_1 + arg1
        sub_14291d320(rbx_3, rax_12, var_50_1)
    else if (r13.d != 8 || r15 != 0 || rbp != 0)
    label_1428d9fb4:
        void* r10_3 = &arg7[rsi]
        void* rcx_29 = &arg7[sx.q((rsi * 2).d)]
        
        if (rdx_16 != 0)
            memset(r10_3, 0, rsi << 3)
        else
            sub_1428d9bf0(r10_3, arg7, &arg7[r13], zx.q(r13.d), 0, 0, rcx_29)
        
        sub_1428d9bf0(arg1, rbx_2, arg3, zx.q(r13.d), 0, 0, rcx_29)
        r12_1 = rsi << 3
        rbx_3 = r12_1 + arg1
        sub_1428d9bf0(rbx_3, rax_12, var_50_1, zx.q(r13.d), r15, rbp, rcx_29)
    else
        r12_1 = rsi << 3
        int64_t* rcx_25 = r12_1 + arg7
        
        if (rdx_16 != 0)
            memset(rcx_25, 0, 0x80)
        else
            sub_14291daa0(rcx_25, arg7, &arg7[r13])
        
        sub_14291daa0(arg1, rbx_2, arg3)
        rbx_3 = r12_1 + arg1
        sub_14291daa0(rbx_3, rax_12, var_50_1)
    
    int32_t rax_28 = sub_14291cd80(arg7, arg1, rbx_3, rsi.d)
    int64_t* rbp_1 = r12_1 + arg7
    int32_t r9_19 = rsi.d
    int32_t rbx_5
    
    if (arg6 == 0)
        rbx_5 = rax_28 + sub_14291cd80(rbp_1, rbp_1, arg7, r9_19)
    else
        rbx_5 = rax_28 - sub_142921500(rbp_1, arg7, rbp_1, r9_19)
    
    void* rcx_37 = &arg1[r13]
    result = sub_14291cd80(rcx_37, rcx_37, rbp_1, rsi.d)
    
    if (rbx_5 != neg.d(result))
        int64_t rdx_38 = sx.q(rbx_5 + result)
        result = (rsi + r13).d
        int64_t result_1 = sx.q(result)
        void* r8_33 = &arg1[result_1]
        int64_t rcx_39 = arg1[result_1] + rdx_38
        *r8_33 = rcx_39
        
        if (rcx_39 u< rdx_38)
            int64_t i
            
            do
                i = *(r8_33 + 8)
                *(r8_33 + 8) += 1
                r8_33 += 8
            while (i == -1)
else
label_1428d9c84:
    sub_1428d9560(arg1, arg2, rsi.d + r15, arg3, rsi.d + rbp)
    result = r15 + rbp
    
    if (result s< 0)
        return memset(&arg1[sx.q(r15 + (rsi << 1).d + rbp)], 0, sx.q(neg.d(result)) << 3) __tailcall

return result
