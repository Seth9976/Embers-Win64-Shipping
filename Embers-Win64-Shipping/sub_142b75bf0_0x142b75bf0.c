// 函数: sub_142b75bf0
// 地址: 0x142b75bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x60)
int32_t rbp = 0
sub_142b74dc0(arg1, 5, arg2, arg3.w, 0, arg6)

if (*arg6 s> 0)
    return 0

char rax_2 = (*(arg1 + 0x18)).b
int32_t rcx = arg2 + arg3
void* rsi_1

if ((rax_2 & 0x11) == 0)
    rsi_1 = arg1 + 0x1a
    
    if ((rax_2 & 2) == 0)
        rsi_1 = *(arg1 + 0x28)
else
    rsi_1 = nullptr

int16_t rax_3 = *(arg1 + 0x18)
int32_t rdx_1

if (rax_3 s< 0)
    rdx_1 = *(arg1 + 0x1c)
else
    rdx_1 = sx.d(rax_3) s>> 5

int16_t* rax_5 = sub_142b138d0(rsi_1 + (sx.q(rcx) << 1), rdx_1 - rcx)
int16_t rax_6 = *(arg1 + 0x18)
int32_t r15_2 = ((rax_5 - rsi_1) s>> 1).d
int32_t rax_8

if (rax_6 s< 0)
    rax_8 = *(arg1 + 0x1c)
else
    rax_8 = sx.d(rax_6) s>> 5

if (r15_2 == rax_8)
    sub_142b77300(arg1, arg5, 0)
    *arg6 = 0x10109
    return 0

char rax_10 = (*(arg1 + 0x18)).b
void* r12_1

if ((rax_10 & 0x11) == 0)
    r12_1 = arg1 + 0x1a
    
    if ((rax_10 & 2) == 0)
        r12_1 = *(arg1 + 0x28)
else
    r12_1 = nullptr

int16_t rax_11 = *(arg1 + 0x18)
int32_t rdx_5

if (rax_11 s< 0)
    rdx_5 = *(arg1 + 0x1c)
else
    rdx_5 = sx.d(rax_11) s>> 5

int32_t rsi_4 = ((sub_142b13770(r12_1 + (sx.q(r15_2) << 1), rdx_5 - r15_2) - r12_1) s>> 1).d
int32_t rax_14 = sub_142b76090(arg1 + 0x10, r15_2, rsi_4)
int32_t var_58_1
int32_t* var_50_1
int32_t rdx_8
int32_t r9_2

if (rax_14 s>= 0)
    r9_2 = rsi_4 - r15_2
    
    if (r9_2 s> 0xffff || rax_14 s> 0x7fff)
    label_142b75d70:
        sub_142b77300(arg1, arg5, r15_2)
        *arg6 = 8
        return 0
    
    var_50_1 = arg6
    rdx_8 = 7
    var_58_1 = rax_14
    *(arg1 + 0x7d) = 1
    goto label_142b75db0

if (rax_14 != 0xffffffff)
label_142b75fc7:
    sub_142b77300(arg1, arg5, r15_2)
    *arg6 = 0x10107
    return 0

r9_2 = rsi_4 - r15_2

if (r9_2 s> 0xffff)
    goto label_142b75d70

var_50_1 = arg6
rdx_8 = rax_14 + 9
var_58_1 = 0
*(arg1 + 0x7c) = 1
label_142b75db0:
int128_t zmm0_1 = sub_142b74dc0(arg1, rdx_8, r15_2, r9_2.w, var_58_1.w, var_50_1)
int32_t rsi_5 = sub_142b77510(arg1, rsi_4)
int16_t rax_16 = *(arg1 + 0x18)
int32_t rax_18

if (rax_16 s< 0)
    rax_18 = *(arg1 + 0x1c)
else
    rax_18 = sx.d(rax_16) s>> 5

if (rsi_5 != rax_18)
    int16_t rax_19 = sub_142a4a1a0(arg1 + 0x10, rsi_5)
    
    if (rax_19 == 0x7d)
    label_142b7606b:
        var_50_1.d = rbp
        sub_142b74d10(arg1, rax, 6, rsi_5, 1, var_50_1.w, arg6)
        return zx.q(rsi_5 + 1)
    
    if (rax_19 != 0x2c)
        goto label_142b75fc7
    
    char rax_20 = (*(arg1 + 0x18)).b
    void* r12_2
    
    if ((rax_20 & 0x11) == 0)
        r12_2 = arg1 + 0x1a
        
        if ((rax_20 & 2) == 0)
            r12_2 = *(arg1 + 0x28)
    else
        r12_2 = nullptr
    
    int16_t rax_21 = *(arg1 + 0x18)
    int32_t rdx_14
    
    if (rax_21 s< 0)
        rdx_14 = *(arg1 + 0x1c)
    else
        rdx_14 = sx.d(rax_21) s>> 5
    
    int32_t rsi_9 =
        ((sub_142b138d0(r12_2 + (sx.q(rsi_5 + 1) << 1), rdx_14 - (rsi_5 + 1)) - r12_2) s>> 1).d
    int32_t r13_1 = rsi_9
    
    while (true)
        int16_t rax_24 = *(arg1 + 0x18)
        int32_t rcx_12
        
        if (rax_24 s< 0)
            rcx_12 = *(arg1 + 0x1c)
        else
            rcx_12 = sx.d(rax_24) s>> 5
        
        if (rsi_9 s>= rcx_12)
            break
        
        uint32_t rcx_14 = zx.d(sub_142a4a1a0(arg1 + 0x10, rsi_9))
        
        if (rcx_14 - 0x61 u> 0x19 && rcx_14 - 0x41 u> 0x19)
            break
        
        rsi_9 += 1
    
    int32_t r12_4 = rsi_9 - r13_1
    rsi_5 = sub_142b77510(arg1, rsi_9)
    int16_t rax_29 = *(arg1 + 0x18)
    int32_t rax_31
    
    if (rax_29 s< 0)
        rax_31 = *(arg1 + 0x1c)
    else
        rax_31 = sx.d(rax_29) s>> 5
    
    if (rsi_5 != rax_31)
        if (r12_4 == 0)
            goto label_142b75fc7
        
        int16_t rax_32 = sub_142a4a1a0(arg1 + 0x10, rsi_5)
        
        if (rax_32 != 0x2c && rax_32 != 0x7d)
            goto label_142b75fc7
        
        if (r12_4 s> 0xffff)
            goto label_142b75d70
        
        rbp = 1
        
        if (r12_4 == 6)
            if (sub_142b75400(arg1, r13_1) == 0)
                if (sub_142b757c0(arg1, r13_1) == 0)
                    if (sub_142b75980(arg1, r13_1) != 0)
                        rbp = 4
                else
                    rbp = 3
            else
                rbp = r12_4 - 4
        else if (r12_4 == 0xd && sub_142b75980(arg1, r13_1) != 0
                && sub_142b755c0(arg1, r13_1 + 6) != 0)
            rbp = 5
        
        *(**(arg1 + 0x50) + sx.q(rax) * 0x10 + 0xa) = rbp.w
        
        if (rbp == 1)
            var_58_1 = 0
            zmm0_1 = sub_142b74dc0(arg1, rbp + 8, r13_1, r12_4.w, 0, arg6)
        
        if (rax_32 == 0x7d)
            if (rbp == 1)
                goto label_142b7606b
            
            goto label_142b75fc7
        
        int32_t rax_39
        
        if (rbp == 1)
            rax_39 = sub_142b770b0(arg1, rsi_5 + 1, arg5, arg6)
        else if (rbp != 2)
            var_58_1.q = arg5
            rax_39 = sub_142b76b60(arg1, rbp, rsi_5 + 1, arg4, zmm0_1, var_58_1, arg6)
        else
            var_58_1.q = arg6
            rax_39 = sub_142b761c0(arg1, rsi_5 + 1, arg4, arg5, zmm0_1, var_58_1)
        
        rsi_5 = rax_39
        goto label_142b7606b

sub_142b77300(arg1, arg5, 0)
*arg6 = 0x10109
return 0
