// 函数: sub_14287fb60
// 地址: 0x14287fb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd8)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rsi = 0
int64_t r15 = *(arg2 + 0x10)
int64_t rax_3 = *(arg2 + 8) - arg3
char* r12 = arg1
int64_t rbp = 0
int64_t result

if (r15 u< arg3 || arg3 u> 0x40)
    result = 0
else
    char var_c8[0x80]
    void* r14_1 = &var_c8 + (zx.q((neg.q(&var_c8)).d) & 0x3f)
    
    if (r15 u> arg3 + 0x100)
        rbp = r15 - arg3 - 0x100
    
    char* rbx_1 = nullptr
    memset(r14_1, 0, arg3)
    char* r9_1 = nullptr
    
    if (rbp u< r15)
        int64_t rcx_1 = *(arg2 + 0x20)
        int64_t r12_1 = 0
        int64_t r10_1 = *(arg2 + 8)
        int64_t var_e0_1 = rcx_1
        int64_t r13_1 = rcx_1 + r10_1
        
        do
            int64_t rcx_2 = rcx_1 + rbp
            int64_t rax_8 = rbp ^ rax_3
            int64_t r8_3 = neg.q((rax_8 - 1) u>> 0x3f & not.q(rax_8) u>> 0x3f)
            rbx_1 |= r8_3 & r9_1
            int64_t rdx_6 = neg.q(((((rcx_2 - r13_1) ^ r10_1) | (rbp ^ r10_1)) ^ rbp) u>> 0x3f)
            rbp += 1
            r12_1 = (r12_1 | r8_3) & rdx_6
            *(r9_1 + r14_1) |= r12_1.b & *rcx_2
            r9_1 = &r9_1[1]
                & neg.q(((((&r9_1[1] - arg3) ^ arg3) | (arg3 ^ &r9_1[1])) ^ &r9_1[1]) u>> 0x3f)
            rcx_1 = var_e0_1
        while (rbp u< r15)
        
        r12 = arg1
    
    if (arg3 != 0)
        do
            r12[rsi] = *(rbx_1 + r14_1)
            rsi += 1
            rbx_1 = &rbx_1[1]
                & neg.q(((((&rbx_1[1] - arg3) ^ arg3) | (arg3 ^ &rbx_1[1])) ^ &rbx_1[1]) u>> 0x3f)
        while (rsi u< arg3)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_108)
return result
