// 函数: sub_142881e10
// 地址: 0x142881e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = *(arg1 + 0xa8)
int32_t r14 = 0
int32_t* rbp = *(rax_2 + 0x280)
int32_t* r15 = *(rax_2 + 0x278)
int64_t result
void var_a0
void var_88
int32_t rax_3
int32_t r9_1

if (rbp != 0)
    void* rsi_1 = *(rax_2 + 0x298)
    void* rsi_2
    
    if (rsi_1 != 0)
        rsi_2 = *(rsi_1 + 0x10)
    else
        rsi_2 = nullptr
    
    void* rax_7
    int64_t* rdi_1
    void* r13_1
    
    if ((arg2.b & 1) == 0)
        rdi_1 = *(arg1 + 0x460)
        *(arg1 + 0x7c) = 1
        
        if (rdi_1 == 0)
            int64_t* rax_8 = sub_142892200()
            *(arg1 + 0x460) = rax_8
            
            if (rax_8 == 0)
                rax_3 = 0xa3
                r9_1 = 0x41
                goto label_142882101
            
            sub_1428922e0(rax_8)
            rdi_1 = *(arg1 + 0x460)
        else
            r14 = 1
        
        if (sub_142852180(arg1 + 0x478, rbp) == 0)
            rax_3 = 0xae
            r9_1 = 0x41
            goto label_142882101
        
        sub_1428a76a0(*(arg1 + 0x450))
        *(arg1 + 0x450) = 0
        int64_t* rax_10
        
        if (rsi_2 != 0)
            rax_10 = sub_1428a76e0(rsi_2)
            *(arg1 + 0x450) = rax_10
        
        if (rsi_2 != 0 && rax_10 == 0)
            rax_3 = 0xba
            r9_1 = 0x8e
            goto label_142882101
        
        sub_14285b850(arg1 + 0x800)
        rax_7 = *(arg1 + 0xa8)
        r13_1 = rax_7 + 0x58
    else
        rdi_1 = *(arg1 + 0x430)
        
        if (rdi_1 == 0)
            int64_t* rax_4 = sub_142892200()
            *(arg1 + 0x430) = rax_4
            
            if (rax_4 == 0)
                rax_3 = 0x7e
                r9_1 = 0x41
                goto label_142882101
            
            sub_1428922e0(rax_4)
            rdi_1 = *(arg1 + 0x430)
        else
            r14 = 1
        
        if (sub_142852180(arg1 + 0x448, rbp) == 0)
            rax_3 = 0x8a
            goto label_1428820df
        
        sub_1428a76a0(*(arg1 + 0x458))
        *(arg1 + 0x458) = 0
        int64_t* rax_6
        
        if (rsi_2 != 0)
            rax_6 = sub_1428a76e0(rsi_2)
            *(arg1 + 0x458) = rax_6
        
        if (rsi_2 != 0 && rax_6 == 0)
            rax_3 = 0x96
            r9_1 = 0x8e
            goto label_142882101
        
        sub_14285b840(arg1 + 0x800)
        rax_7 = *(arg1 + 0xa8)
        r13_1 = rax_7 + 0x10
    
    if (r14 != 0)
        sub_1428922e0(rdi_1)
        rax_7 = *(arg1 + 0xa8)
    
    int64_t rsi_3 = *(rax_7 + 0x270)
    int32_t rax_11 = sub_1428916c0(rbp)
    
    if (rax_11 s< 0)
        rax_3 = 0xca
        goto label_1428820df
    
    int64_t r14_1 = sx.q(rax_11)
    int64_t r15_1 = sx.q(sub_140611e60(r15))
    int64_t rdx_2 = sx.q(sub_140611e40(r15))
    void* rcx_16
    int64_t rbp_1
    int64_t r9_2
    int64_t r15_2
    
    if (arg2 == 0x12 || arg2 == 0x21)
        rbp_1 = r14_1 * 2
        r9_2 = rsi_3
        r15_2 = (r15_1 << 1) + rbp_1
        rcx_16 = r15_2 + (rdx_2 << 1)
    else
        int64_t rcx_14 = r15_1 + (r14_1 << 1)
        rbp_1 = rcx_14
        int64_t rcx_15 = rcx_14 + rdx_2 + r15_1
        r9_2 = r14_1 + rsi_3
        r15_2 = rcx_15
        rcx_16 = rcx_15 + rdx_2
    
    if (rcx_16 u> *(*(arg1 + 0xa8) + 0x268))
        rax_3 = 0xe5
        goto label_1428820df
    
    memcpy(r13_1, r9_2, r14_1.d)
    
    if (sub_142892480(rdi_1, r15, nullptr, rsi_3 + rbp_1, r15_2 + rsi_3, arg2 & 2) == 0)
        rax_3 = 0xed
        goto label_1428820df
    
    *(arg1 + 0x7c) = 0
    sub_1428b8960(&var_88, 0x40)
    sub_1428b8960(&var_a0, 0x10)
    result = 1
else
    rax_3 = (rbp + 0x6f).d
label_1428820df:
    r9_1 = 0x44
label_142882101:
    sub_142856580(arg1, 0x50, 0x81, r9_1, "ssl\s3_enc.c", rax_3)
    sub_1428b8960(&var_88, 0x40)
    sub_1428b8960(&var_a0, 0x10)
    result = 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
