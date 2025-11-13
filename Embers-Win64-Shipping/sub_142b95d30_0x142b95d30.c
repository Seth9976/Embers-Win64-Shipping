// 函数: sub_142b95d30
// 地址: 0x142b95d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x80)

if ((*(arg1 + 8) & 1) == 0)
    __builtin_memset(rdi + 0x18, 0, 0x1c)
    *(rdi + 0x1c) = 0x10000
    *(rdi + 0x20) = 0x10000
    return 0

int32_t rcx = *arg2
int32_t rbx = 0
int32_t r8 = 0
int32_t rsi = 0

if (rcx == 0)
    r8 = zx.d(*(arg1 + 0x68))
label_142b95dde:
    rbx = r8
label_142b95de1:
    int32_t rcx_5 = arg2[3]
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(rbx)
    int32_t r8_4 = arg2[1]
    int32_t r10_3 = (temp6_1 ^ temp5_1) - temp5_1
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r8)
    int32_t r9_3 = (temp8_1 ^ temp7_1) - temp7_1
    
    if (rcx_5 == 0)
        rbx = r8_4
    else
        rbx = (rcx_5 * r8_4 + 0x24) s/ 0x48
    
    int32_t rcx_8 = arg2[4]
    
    if (rcx_8 == 0)
        rsi = arg2[2]
    else
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = muls.dp.d(0x38e38e39, rcx_8 * arg2[2] + 0x24)
        int32_t rsi_2 = temp12_1 s>> 4
        rsi = rsi_2 + (rsi_2 u>> 0x1f)
    
    int32_t rcx_11 = 1
    
    if (r8_4 == 0)
        int64_t rdx_9 = sx.q(rsi)
        int64_t r8_7 = sx.q(r9_3)
        
        if (rsi s< 0)
            rdx_9 = neg.q(rdx_9)
            rcx_11 = -1
        
        if (r9_3 s< 0)
            r8_7 = neg.q(r8_7)
            rcx_11 = neg.d(rcx_11)
        
        uint32_t rbp_2
        
        if (r8_7 == 0)
            rbp_2 = 0x7fffffff
        else
            rbp_2 = (divu.dp.q(0:((r8_7 u>> 1) + (rdx_9 << 0x10)), r8_7)).d
        
        if (rcx_11 s< 0)
            rbp_2 = neg.d(rbp_2)
        
        *(rdi + 0x20) = rbp_2
        *(rdi + 0x1c) = rbp_2
        rbx = sub_142b93dd0(rsi, r10_3, r9_3)
    else
        int64_t rdx_4 = sx.q(rbx)
        int64_t r8_5 = sx.q(r10_3)
        
        if (rbx s< 0)
            rdx_4 = neg.q(rdx_4)
            rcx_11 = -1
        
        if (r10_3 s< 0)
            r8_5 = neg.q(r8_5)
            rcx_11 = neg.d(rcx_11)
        
        uint32_t rbp_1
        
        if (r8_5 == 0)
            rbp_1 = 0x7fffffff
        else
            rbp_1 = (divu.dp.q(0:((r8_5 u>> 1) + (rdx_4 << 0x10)), r8_5)).d
        
        if (rcx_11 s< 0)
            rbp_1 = neg.d(rbp_1)
        
        *(rdi + 0x1c) = rbp_1
        
        if (arg2[2] == 0)
            *(rdi + 0x20) = rbp_1
            rsi = sub_142b93dd0(rbx, r9_3, r10_3)
        else
            uint32_t rax_16 = sub_142b91790(rsi, r9_3)
            *(rdi + 0x20) = rax_16
            
            if (*arg2 == 3)
                if (rax_16 s<= rbp_1)
                    *(rdi + 0x1c) = rax_16
                else
                    *(rdi + 0x20) = rbp_1
else
    if (rcx == 1)
        r8 = sx.d(*(arg1 + 0x6a)) - sx.d(*(arg1 + 0x6c))
        goto label_142b95dde
    
    if (rcx == 2)
        rbx = *(arg1 + 0x60) - *(arg1 + 0x58)
        r8 = *(arg1 + 0x64) - *(arg1 + 0x5c)
        goto label_142b95de1
    
    if (rcx == 3)
        rbx = sx.d(*(arg1 + 0x70))
        r8 = sx.d(*(arg1 + 0x6a)) - sx.d(*(arg1 + 0x6c))
        goto label_142b95de1
    
    if (rcx != 4)
        goto label_142b95de1
    
    int32_t rcx_4 = arg2[1]
    *(rdi + 0x1c) = rcx_4
    int32_t rax_1 = arg2[2]
    *(rdi + 0x20) = rax_1
    
    if (rcx_4 == 0)
        *(rdi + 0x1c) = rax_1
    else if (rax_1 == 0)
        *(rdi + 0x20) = rcx_4

if (*arg2 != 0)
    uint64_t rcx_15 = zx.q(*(arg1 + 0x68))
    int64_t rbx_5 = sx.q(*(rdi + 0x1c)) * rcx_15
    int64_t rsi_4 = sx.q(*(rdi + 0x20)) * rcx_15
    rbx = ((rbx_5 - (rbx_5 u>> 0x3f) + 0x8000) s>> 0x10).d
    rsi = ((rsi_4 - (rsi_4 u>> 0x3f) + 0x8000) s>> 0x10).d

*(rdi + 0x18) = ((rbx + 0x20) s>> 6).w
*(rdi + 0x1a) = ((rsi + 0x20) s>> 6).w
int64_t rcx_17 = sx.q(*(arg1 + 0x6a)) * sx.q(*(rdi + 0x20))
int64_t rax_34 = sx.q(*(rdi + 0x20))
*(rdi + 0x24) = (((rcx_17 - (rcx_17 u>> 0x3f) + 0x8000) s>> 0x10).d + 0x3f) & 0xffffffc0
int64_t rcx_24 = sx.q(*(arg1 + 0x6c)) * rax_34
int64_t rax_37 = sx.q(*(rdi + 0x20))
*(rdi + 0x28) = ((rcx_24 - (rcx_24 u>> 0x3f) + 0x8000) s>> 0x10).d & 0xffffffc0
int64_t rcx_30 = sx.q(*(arg1 + 0x6e)) * rax_37
int64_t rax_40 = sx.q(*(rdi + 0x1c))
*(rdi + 0x2c) = (((rcx_30 - (rcx_30 u>> 0x3f) + 0x8000) s>> 0x10).d + 0x20) & 0xffffffc0
int64_t rcx_37 = sx.q(*(arg1 + 0x70)) * rax_40
uint64_t result = rcx_37 u>> 0x3f
*(rdi + 0x30) = (((rcx_37 - result + 0x8000) s>> 0x10).d + 0x20) & 0xffffffc0
return result
