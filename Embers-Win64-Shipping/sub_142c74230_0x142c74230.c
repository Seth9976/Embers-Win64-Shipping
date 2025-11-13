// 函数: sub_142c74230
// 地址: 0x142c74230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = 0x314
void* rsi = *arg1
int64_t r15 = sx.q(arg2)
void* r14 = &arg1[r15 * 5]
int32_t* rax_1

if (*(arg1 + 0x164) == 2)
    rax_1 = 0x314
    
    if (arg1[0x48] != -1)
        rax_1 = 0x33c

char rax_2

if (*(arg1 + 0x164) != 2 || *(rax_1 + arg1) == 2)
    rax_2 = *(rsi + 0x488)
else
    rax_2 = *(rsi + 0x528)

if (rax_2 != 0)
    void* rcx = *(r14 + 0x2d8)
    int64_t arg_8 = 0
    void* rax_3 = sub_142857920(rcx)
    sub_142c5ba10(arg1)
    char rax_4
    int64_t r8_1
    rax_4, r8_1 = sub_142c5b510(arg1, &arg_8, nullptr, r15.d)
    
    if (rax_4 != 0)
        goto label_142c74303
    
    if (arg_8 == rax_3)
        sub_1428574d0(rax_3)
    else
        arg3 = sub_142c64850(rsi, "old SSL session ID is stale, removing\n", r8_1, arg3)
        sub_142c5b3e0(arg1, arg_8)
    label_142c74303:
        int32_t rax_5 = sub_142c5ae40(arg1, rax_3, 0, r15.d)
        
        if (rax_5 != 0)
            sub_142c64760(rsi, "failed to store ssl session", sub_142c5ba40(arg1), arg3)
            return rax_5
    
    sub_142c5ba40(arg1)

int32_t rcx_11 = *(arg1 + 0x164)
int32_t* rax_7

if (rcx_11 == 2)
    rax_7 = 0x314
    
    if (arg1[0x48] != -1)
        rax_7 = 0x33c

char rax_8

if (rcx_11 != 2 || *(rax_7 + arg1) == rcx_11)
    rax_8 = arg1[0x6d].b
else
    rax_8 = arg1[0x76].b

char rax_9

if (rax_8 == 0)
    if (rcx_11 == 2 && arg1[0x48] != -1)
        rdi = 0x33c
    
    if (rcx_11 != 2 || *(rdi + arg1) == rcx_11)
        rax_9 = *(arg1 + 0x369)
    else
        rax_9 = *(arg1 + 0x3b1)

int64_t r8

if (rax_8 != 0 || rax_9 != 0)
    r8.b = 1
else
    r8 = 0

int32_t rax_6 = sub_142c74980(arg1, r14 + 0x2c0, r8.b, arg3)

if (rax_6 == 0)
    *(r14 + 0x2c8) = 5

return rax_6
