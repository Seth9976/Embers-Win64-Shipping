// 函数: sub_142a68340
// 地址: 0x142a68340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

int32_t rbx_1 = *(arg1 + 0x24)
int32_t rsi_1 = arg1[0xb].d
int32_t r15_1 = arg1[5].d
int32_t r8_2 = r15_1 - arg1[0x20].d
int32_t r14_2 = (r8_2 + 7) s% 7
int32_t r8_5 = (r8_2 - rbx_1 + 0x1b59) s% 7
int32_t rdx_11 = (rbx_1 - 1 + r8_5) s/ 7
int64_t rax_10 = *arg1
int32_t rbp_1 = rdx_11 + 1

if (7 - r8_5 s< zx.d(*(arg1 + 0x104)))
    rbp_1 = rdx_11

int32_t r8_7

if (rbp_1 != 0)
    int32_t rax_18 = (*(rax_10 + 0x110))(arg1, zx.q(rsi_1))
    r8_7 = rbp_1
    
    if (rbx_1 s>= rax_18 - 5)
        int32_t rcx_14 = rax_18 - rbx_1 + r14_2
        int32_t rcx_15 = rcx_14 s% 7
        int32_t rax_23 = rcx_15 + 7
        
        if (rcx_14 s% 7 s>= 0)
            rax_23 = rcx_15
        
        if (6 - rax_23 s>= zx.d(*(arg1 + 0x104)) && rbx_1 - r14_2 + 7 s> rax_18)
            r8_7 = 1
            rsi_1 += 1
else
    rsi_1 -= 1
    int32_t r9_1 = rbx_1 + (*(rax_10 + 0x110))(arg1, zx.q(rsi_1))
    int32_t rcx_7 = r15_1 - r9_1 - arg1[0x20].d + 1
    int32_t rcx_8 = rcx_7 s% 7
    int32_t r8_6 = rcx_8 + 7
    
    if (rcx_7 s% 7 s>= 0)
        r8_6 = rcx_8
    
    int32_t rdx_20 = (r9_1 - 1 + r8_6) s/ 7
    r8_7 = rdx_20 + 1
    
    if (7 - r8_6 s< zx.d(*(arg1 + 0x104)))
        r8_7 = rdx_20

int32_t r9_3 = arg1[4].d
int32_t r15_4 = r15_1 - r9_3 - arg1[0x20].d + 1
arg1[3].d = r8_7
arg1[0xa].d = rsi_1
int32_t r15_5 = r15_4 s% 7
int32_t r8_8 = r15_5 + 7

if (r15_4 s% 7 s>= 0)
    r8_8 = r15_5

int32_t rdx_33 = (r9_3 - 1 + r8_8) s/ 7
int32_t r8_9 = rdx_33 + 1

if (7 - r8_8 s< zx.d(*(arg1 + 0x104)))
    r8_9 = rdx_33

int32_t temp19_1
int32_t temp20_1
temp19_1:temp20_1 = muls.dp.d(0x92492493, r9_3 - 1)
*(arg1 + 0x1c) = r8_9
int32_t rdx_36 = (temp19_1 + r9_3 - 1) s>> 2
*(arg1 + 0x2c) = (rdx_36 u>> 0x1f) + 1 + rdx_36
