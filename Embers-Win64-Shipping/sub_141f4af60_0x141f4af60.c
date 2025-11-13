// 函数: sub_141f4af60
// 地址: 0x141f4af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_118
int64_t rax_2 = __security_cookie ^ &var_118
*(arg1 + 0x1f0) = 2
void var_f0
sub_141f2cb90(&var_f0, arg2, arg3)
void* var_30
void* rcx_1 = var_30
void* rsi_1 = &var_f0

if (rcx_1 != 0)
    rsi_1 = rcx_1

int64_t rbp_1 = 0
int32_t var_28
int64_t r14_1 = sx.q(var_28) << 3
uint64_t r14_2 = r14_1 u>> 3

if (rsi_1 u> rsi_1 + r14_1)
    r14_2 = 0

if (r14_2 != 0)
    do
        void* var_f8
        sub_140d3a3a0(&var_f8, *rsi_1)
        int64_t rdi_1 = sx.q(*(arg1 + 0x220))
        int32_t rax_4 = (rdi_1 + 1).d
        *(arg1 + 0x220) = rax_4
        
        if (rax_4 s> *(arg1 + 0x224))
            sub_1405a4d70(arg1 + 0x218)
        
        rsi_1 += 8
        rbp_1 += 1
        *(*(arg1 + 0x218) + (rdi_1 << 3)) = var_f8
    while (rbp_1 != r14_2)
    
    rcx_1 = var_30

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

__security_check_cookie(rax_2 ^ &var_118)
