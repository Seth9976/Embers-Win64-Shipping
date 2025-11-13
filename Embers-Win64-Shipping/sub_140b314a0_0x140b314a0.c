// 函数: sub_140b314a0
// 地址: 0x140b314a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140b3ea00()
int32_t r12 = arg4[3]
int32_t rdi = arg4[2]
int32_t rbx = arg4[1]
int32_t rcx = data_143de7a64
int32_t r13 = data_143de7a6c
int32_t rsi = data_143de7a68
int32_t r14_1 = *arg4
int32_t r15 = data_143de7a60
sub_140b3e980()
void* rbp_1 = arg3 + 0x18
bool cond:0 = ((*(arg3 + 0xc) ^ data_143de7cdc) | (*(rbp_1 - 0x10) ^ data_143de7cd8)
    | (*(rbp_1 - 0x14) ^ data_143de7cd4) | (data_143de7cd0 ^ *(rbp_1 - 0x18))) != 0

if (cond:0)
    rbp_1 = nullptr

void* rax_15 = &arg4[6]

if (((rcx ^ rbx) | (rsi ^ rdi) | (r13 ^ r12) | (r15 ^ r14_1)) != 0)
    rax_15 = nullptr

char rbx_1 = *rax_15
bool rax_17

if (*(rbp_1 + 8) s> 1)
    rax_17 = (**arg5)(arg5, rbp_1, zx.q(*(rbp_1 + 0x20)))
    
    if (*(rbp_1 + 0x21) != 0)
        rax_17 = rax_17 == 0

if (*(rbp_1 + 8) s<= 1 || rax_17 != 0 || rbx_1 != 0)
    rbx_1 = 1

*(arg2 + 0x18) = 0
sub_140b3ea00()
char var_70 = rbx_1
void** const var_78 = &data_142e786e8
int128_t var_88 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_88)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
