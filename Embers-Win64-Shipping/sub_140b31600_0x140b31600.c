// 函数: sub_140b31600
// 地址: 0x140b31600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140b3ea00()
int32_t r13 = arg4[3]
int32_t r14 = arg4[2]
int32_t rdi = arg4[1]
int32_t rcx = data_143de7a6c
int32_t r15 = data_143de7a68
int32_t rsi = data_143de7a64
int32_t rbx_1 = *arg4
int32_t r12 = data_143de7a60
sub_140b3e980()
void* rbp_1 = arg3 + 0x18
bool cond:0 = ((*(arg3 + 0xc) ^ data_143de7cdc) | (*(rbp_1 - 0x10) ^ data_143de7cd8)
    | (*(rbp_1 - 0x14) ^ data_143de7cd4) | (data_143de7cd0 ^ *(rbp_1 - 0x18))) != 0

if (cond:0)
    rbp_1 = nullptr

void* rax_12 = &arg4[6]

if (((r12 ^ rbx_1) | (rsi ^ rdi) | (r15 ^ r14) | (rcx ^ r13)) != 0)
    rax_12 = nullptr

char rbx_2 = *rax_12

if (*(rbp_1 + 8) s> 1)
    bool rax_14 = (**arg5)(arg5, rbp_1, zx.q(*(rbp_1 + 0x20)))
    
    if (*(rbp_1 + 0x21) != 0)
        rax_14 = rax_14 == 0
    
    if (rax_14 == 0 || rbx_2 == 0)
        rbx_2 = 0
    else
        rbx_2 = 1
else if (rbx_2 == 0)
    rbx_2 = 0
else
    rbx_2 = 1

*(arg2 + 0x18) = 0
sub_140b3ea00()
char var_70 = rbx_2
void** const var_78 = &data_142e786e8
int128_t var_88 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_88)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
