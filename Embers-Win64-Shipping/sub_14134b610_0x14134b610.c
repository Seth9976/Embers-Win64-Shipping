// 函数: sub_14134b610
// 地址: 0x14134b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void var_a8
sub_141357940(&var_a8, arg2[2], arg3)
void* rsi = &var_a8
void* var_58
void* rcx_1 = var_58
int32_t rax_6 = *(arg2[2] + 0x1548)

if (rcx_1 != 0)
    rsi = rcx_1

*arg1 = *(arg2 + 0x28)
int64_t rdi = 0
int32_t var_50
int64_t r14 = sx.q(var_50) << 3
uint64_t r14_1 = r14 u>> 3

if (rsi u> rsi + r14)
    r14_1 = 0

if (r14_1 != 0)
    do
        void*** rax_9 = sub_14134c9e0(arg2, *rsi, *arg4, 0)
        *arg4 = 0
        (*rax_9)[3](rax_9, 0, arg1)
        (*rax_9)[3](rax_9, 1, arg5)
        (*rax_9)[3](rax_9, 2, arg6)
        (*rax_9)[3](rax_9, 3, arg7)
        
        if (sub_1414c3810(rax_6) == 0)
            (*rax_9)[3](rax_9, 4, arg8)
        
        rsi += 8
        int32_t var_b0_1 = 0
        rdi += 1
        *arg1 = rax_9.o
    while (rdi != r14_1)
    
    rcx_1 = var_58

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
