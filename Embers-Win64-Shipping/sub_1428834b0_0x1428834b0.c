// 函数: sub_1428834b0
// 地址: 0x1428834b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x130)
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t* r8 = *(arg1 + 0xa8)
int32_t rdx = *(arg1 + 0x6e4)
int32_t r15 = 0
int32_t* rax_2 = *(r8 + 0x280)
int32_t* rbp = *(r8 + 0x278)
void* rsi = *(r8 + 0x298)
int32_t rax_3 = r8[0xa2]
int32_t var_140_1
void* rax_25
void* rcx_9
int64_t* rsi_1
int64_t* rdi
int32_t r9_1
int64_t* r14_1

if ((arg2.b & 1) == 0)
    *(arg1 + 0x7c) = 1
    int32_t rcx_10 = *r8
    int32_t rcx_11 = rcx_10 | 0x400
    
    if (rdx == 0)
        rcx_11 = rcx_10 & 0xfffffbff
    
    *r8 = rcx_11
    int32_t r8_3 = *(arg1 + 0x128)
    rdi = *(arg1 + 0x460)
    int32_t r8_4 = r8_3 | 2
    
    if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0)
        r8_4 = r8_3 & 0xfffffffd
    
    *(arg1 + 0x128) = r8_4
    
    if (rdi == 0 || (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        int64_t* rax_21 = sub_142892200()
        *(arg1 + 0x460) = rax_21
        rdi = rax_21
        
        if (rax_21 == 0)
            var_140_1 = 0xab
            r9_1 = (rax_21 + 0x41).d
            goto label_142883aba
    else
        r15 = 1
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        int64_t* rax_23 = sub_142852180(arg1 + 0x478, nullptr)
        r14_1 = rax_23
        
        if (rax_23 == 0)
            var_140_1 = 0xbd
            r9_1 = (rax_23 + 0x41).d
            goto label_142883aba
    else
        int64_t* rax_20 = sub_142891ee0()
        r14_1 = rax_20
        
        if (rax_20 == 0)
            var_140_1 = 0xb4
            r9_1 = (rax_20 + 0x41).d
            goto label_142883aba
        
        *(arg1 + 0x478) = rax_20
    
    sub_1428a76a0(*(arg1 + 0x450))
    *(arg1 + 0x450) = 0
    int64_t* rax_22
    
    if (rsi != 0)
        rax_22 = sub_1428a76e0(*(rsi + 0x10))
        *(arg1 + 0x450) = rax_22
    
    if (rsi != 0 && rax_22 == 0)
        var_140_1 = 0xc9
        r9_1 = 0x8e
        goto label_142883aba
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        sub_14285b850(arg1 + 0x800)
    
    rax_25 = *(arg1 + 0xa8)
    rcx_9 = rax_25 + 0x58
    rsi_1 = rax_25 + 0x50
    goto label_1428837ae

int32_t rcx = *r8
int32_t rcx_1 = rcx & 0xfffffeff

if (rdx != 0)
    rcx_1 = rcx | 0x100

*r8 = rcx_1
int32_t r8_1 = *(arg1 + 0x128)
rdi = *(arg1 + 0x430)
int32_t r8_2 = r8_1 | 1

if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0)
    r8_2 = r8_1 & 0xfffffffe

*(arg1 + 0x128) = r8_2
int64_t result
void var_110
void var_f0
void var_c8
void var_88

if (rdi == 0)
    int64_t* rax_9 = sub_142892200()
    *(arg1 + 0x430) = rax_9
    
    if (rax_9 != 0)
        sub_1428922e0(rax_9)
        rdi = *(arg1 + 0x430)
        goto label_1428835bb
    
    var_140_1 = 0x7c
    r9_1 = (rax_9 + 0x41).d
label_142883aba:
    sub_142856580(arg1, 0x50, 0xd1, r9_1, "ssl\t1_enc.c", var_140_1)
label_142883acc:
    sub_1428b8960(&var_c8, 0x40)
    sub_1428b8960(&var_88, 0x40)
    sub_1428b8960(&var_110, 0x20)
    sub_1428b8960(&var_f0, 0x20)
    result = 0
else
    r15 = 1
label_1428835bb:
    int64_t* rax_10 = sub_142852180(arg1 + 0x448, nullptr)
    r14_1 = rax_10
    
    if (rax_10 == 0)
        goto label_142883acc
    
    sub_1428a76a0(*(arg1 + 0x458))
    *(arg1 + 0x458) = 0
    int64_t* rax_11
    
    if (rsi != 0)
        rax_11 = sub_1428a76e0(*(rsi + 0x10))
        *(arg1 + 0x458) = rax_11
    
    if (rsi != 0 && rax_11 == 0)
        var_140_1 = 0x90
        r9_1 = 0x8e
        goto label_142883aba
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        sub_14285b840(arg1 + 0x800)
    
    rax_25 = *(arg1 + 0xa8)
    rcx_9 = rax_25 + 0x10
    rsi_1 = rax_25 + 8
label_1428837ae:
    
    if (r15 != 0)
        sub_1428922e0(rdi)
        rax_25 = *(arg1 + 0xa8)
    
    int64_t r15_1 = *(rax_25 + 0x290)
    int64_t r13_1 = *(rax_25 + 0x270)
    *rsi_1 = r15_1
    int64_t rax_27 = sx.q(sub_140611e60(rbp))
    int32_t rax_29 = sub_142890eb0(rbp) & 0xf0007
    uint64_t rsi_2
    
    if (rax_29 != 6)
        int32_t rax_31 = sub_142890eb0(rbp) & 0xf0007
        
        if (rax_31 != 7)
            rsi_2 = sx.q(sub_140611e40(rbp))
        else
            rsi_2 = zx.q(rax_31 - 3)
    else
        rsi_2 = zx.q(rax_29 - 2)
    
    int64_t rax_35
    int64_t rcx_27
    int64_t rdx_5
    int64_t r9_2
    
    if (arg2 == 0x12 || arg2 == 0x21)
        rdx_5 = r15_1 * 2
        r9_2 = r13_1
        rax_35 = rdx_5 + (rax_27 << 1)
        rcx_27 = rax_35 + (rsi_2 << 1)
    else
        r9_2 = r15_1 + r13_1
        int64_t rcx_25 = rax_27 + (r15_1 << 1)
        rdx_5 = rcx_25
        int64_t rcx_26 = rcx_25 + rax_27 + rsi_2
        rax_35 = rcx_26
        rcx_27 = rcx_26 + rsi_2
    
    int64_t r13_2 = r13_1 + rdx_5
    
    if (rcx_27 u> *(*(arg1 + 0xa8) + 0x268))
        var_140_1 = 0xfc
        r9_1 = 0x44
        goto label_142883aba
    
    memcpy(rcx_9, r9_2, r15_1.d)
    
    if (not(test_bit(sub_142890eb0(rbp), 0x15)))
        int64_t* rax_41 = sub_1428c2ae0(rax_3, nullptr, rcx_9, *rsi_1)
        int32_t rax_42
        
        if (rax_41 != 0)
            rax_42 = sub_1428932d0(r14_1, nullptr, rax_2, nullptr, rax_41)
        
        if (rax_41 == 0 || rax_42 s<= 0)
            sub_1428965a0(rax_41)
            var_140_1 = 0x10a
            r9_1 = 0x44
            goto label_142883aba
        
        sub_1428965a0(rax_41)
    
    int32_t r12_1 = arg2 & 2
    
    if ((sub_142890eb0(rbp) & 0xf0007) != 6)
        if ((sub_142890eb0(rbp) & 0xf0007) != 7)
            if (sub_142892480(rdi, rbp, nullptr, r13_2, rax_35 + r13_1, r12_1) == 0)
                var_140_1 = 0x133
                r9_1 = 0x44
                goto label_142883aba
        else
            *(*(*(arg1 + 0xa8) + 0x238) + 0x24)
            
            if (sub_142892480(rdi, rbp, nullptr, 0, nullptr, r12_1) == 0)
            label_142883a28:
                var_140_1 = 0x12d
                r9_1 = 0x44
                goto label_142883aba
            
            if (sub_142892150(rdi) == 0)
                goto label_142883a28
            
            if (sub_142892150(rdi) == 0)
                goto label_142883a28
            
            if (sub_142892150(rdi) == 0)
                goto label_142883a28
            
            if (sub_142892480(rdi, nullptr, nullptr, r13_2, nullptr, 0xffffffff) == 0)
                goto label_142883a28
    else
        int32_t rax_45 = sub_142892480(rdi, rbp, nullptr, r13_2, nullptr, r12_1)
        int32_t rax_46
        
        if (rax_45 != 0)
            rax_46 = sub_142892150(rdi)
        
        if (rax_45 == 0 || rax_46 == 0)
            var_140_1 = 0x11d
            r9_1 = 0x44
            goto label_142883aba
    
    bool c_2 = test_bit(sub_142890eb0(rbp), 0x15)
    int32_t rax_60
    
    if (c_2 && *rsi_1 != 0)
        rax_60 = sub_142892150(rdi)
    
    if (c_2 && *rsi_1 != 0 && rax_60 == 0)
        var_140_1 = 0x13c
        r9_1 = 0x44
        goto label_142883aba
    
    *(arg1 + 0x7c) = 0
    sub_1428b8960(&var_c8, 0x40)
    sub_1428b8960(&var_88, 0x40)
    sub_1428b8960(&var_110, 0x20)
    sub_1428b8960(&var_f0, 0x20)
    result = 1
__security_check_cookie(rax_1 ^ &var_168)
return result
