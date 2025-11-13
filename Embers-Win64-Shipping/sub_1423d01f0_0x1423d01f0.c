// 函数: sub_1423d01f0
// 地址: 0x1423d01f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2

if (rsi == 0)
    return arg1

int64_t* r14 = *(arg1 + 0x158)
int32_t arg_8
sub_140865c40(r14, &arg_8, rsi)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *r14 + rax * 0x18

int64_t* r8_1 = rcx_1 + 8

if (rcx_1 == 0)
    r8_1 = nullptr

if (r8_1 == 0)
    int64_t rdx_12 = *(arg1 + 0x90)
    char rax_21
    
    if (rsi != rdx_12)
        rax_21 = sub_140d23d40(rsi, rdx_12)
    
    if (rsi == rdx_12 || rax_21 != 0)
        arg_8.b = 0
        int32_t arg_10
        sub_140b91690(arg1 + 0xa0, &arg_10, arg2, &arg_8)
        
        if (arg_8.b == 0)
            int64_t rbp_1 = sx.q(*(arg1 + 0xf8))
            int32_t rax_23 = (rbp_1 + 1).d
            *(arg1 + 0xf8) = rax_23
            
            if (rax_23 s> *(arg1 + 0xfc))
                sub_1405a4d70(arg1 + 0xf0)
            
            *(*(arg1 + 0xf0) + (rbp_1 << 3)) = *arg2
    else if (*(arg1 + 0x150) != 0)
        if ((*(*arg2 + 8) & 1) == 0)
            *arg2 = 0
else
    int64_t r8_2 = *r8_1
    *arg2 = r8_2
    int64_t i = *(arg1 + 0x78)
    uint32_t r8_3 = (r8_2 u>> 4).d
    int32_t rcx_3 = (0x9e3779b9 - r8_3) ^ r8_3 << 8
    int32_t rdx_4 = neg.d(rcx_3 + r8_3) ^ rcx_3 u>> 0xd
    int32_t r8_6 = (r8_3 - rcx_3 - rdx_4) ^ rdx_4 u>> 0xc
    int32_t rcx_6 = (rcx_3 - r8_6 - rdx_4) ^ r8_6 << 0x10
    int32_t rdx_7 = (rdx_4 - rcx_6 - r8_6) ^ rcx_6 u>> 5
    int32_t r8_9 = (r8_6 - rcx_6 - rdx_7) ^ rdx_7 u>> 3
    int32_t rcx_9 = (rcx_6 - r8_9 - rdx_7) ^ r8_9 << 0xa
    void* rax_16 = sub_1423ccfd0(arg1 + 0x100, (rdx_7 - rcx_9 - r8_9) ^ rcx_9 u>> 0xf, arg2)
    int64_t* r9_1 = *rax_16
    int64_t r8_11 = sx.q(*(rax_16 + 8))
    int64_t* rcx_12 = r9_1
    void* rax_17 = &r9_1[r8_11]
    
    if (r9_1 != rax_17)
        while (*rcx_12 != i)
            rcx_12 = &rcx_12[1]
            
            if (rcx_12 == rax_17)
                goto label_1423d031c
    
    if (r9_1 == rax_17 || ((rcx_12 - r9_1) s>> 3).d == 0xffffffff)
    label_1423d031c:
        int32_t rax_18 = (r8_11 + 1).d
        *(rax_16 + 8) = rax_18
        
        if (rax_18 s> *(rax_16 + 0xc))
            sub_1405a4d70(rax_16)
        
        *((r8_11 << 3) + *rax_16) = i
    
    *(arg1 + 0x98) += 1

return arg1
