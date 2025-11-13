// 函数: sub_141dc7460
// 地址: 0x141dc7460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* result = arg2
int64_t rsi = 0
void* var_58 = nullptr
int32_t var_4c = 0x18
int32_t var_50 = 0
void* const r14_1

if (arg3 == 0)
    r14_1 = nullptr
else
    void* rax_2 = sub_142459c10()
    
    if (rax_2 == 0)
        r14_1 = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(arg3 + 0x38))
            r14_1 = nullptr
        else
            r14_1 = arg3
            
            if (*(*(arg3 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                r14_1 = nullptr

void var_118
void* r8 = &var_118

if (r14_1 != sub_142459c10())
    sub_1419f71f0(arg1, arg3, r8)
else
    sub_1419f6fe0(arg1, arg3, r8)

int32_t rax_6 = var_50
int32_t rbx_1 = 0
int32_t var_130 = 0
int64_t r15_1 = 0
int64_t var_138 = 0
int32_t r12 = 0
int32_t var_12c = 0

if (rax_6 s> 0)
    sub_1405c5570(&var_138, rax_6)
    rax_6 = var_50
    r12 = var_12c
    rbx_1 = var_130
    r15_1 = var_138

void* rcx_5 = var_58
void* r14_2 = &var_118

if (rcx_5 != 0)
    r14_2 = rcx_5

int64_t rdx_3 = sx.q(rax_6) << 3
uint64_t rdx_4 = rdx_3 u>> 3

if (r14_2 u> r14_2 + rdx_3)
    rdx_4 = 0

if (rdx_4 != 0)
    do
        void* r13_1 = *r14_2
        
        if (sub_141edd040(r13_1, arg4) != 0)
            int64_t rbp = sx.q(rbx_1)
            rbx_1 = (rbp + 1).d
            
            if (rbx_1 s> r12)
                sub_1405a4d70(&var_138)
                r12 = var_12c
                r15_1 = var_138
            
            *(r15_1 + (rbp << 3)) = r13_1
        
        r14_2 += 8
        rsi += 1
    while (rsi != rdx_4)
    
    rcx_5 = var_58
    result = arg2

*result = r15_1
result[1].d = rbx_1
*(result + 0xc) = r12

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_158)
return result
