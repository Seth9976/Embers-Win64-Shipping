// 函数: sub_141461130
// 地址: 0x141461130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_7c
__builtin_memset(&var_7c, 0, 0x43)
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x30)
int128_t var_90 = zx.o(0)
int16_t var_38 = 0
sub_140fdc870(arg1, &var_d8)
void* rcx = *arg2
int64_t var_a8 = arg2[4]
int64_t var_a0 = data_14395da18
int64_t var_98 = arg2[5]
var_d8.q = arg2[6]
int64_t rax_6 = 0

if (rcx != 0)
    int64_t rdx_1 = sx.q(*(rcx + 0x10c))
    int64_t* rdi_1 = *(arg2[1] + 0x10)
    int64_t rsi_1 = rdx_1 << 3
    int64_t rax_8 = rdi_1[3]
    
    if (*(rsi_1 + rax_8) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_8 = rdi_1[3]
    
    rax_6 = *(rsi_1 + rax_8)

void* rcx_2 = arg2[2]
var_d8:8.q = rax_6
int64_t rax_9 = 0

if (rcx_2 != 0)
    int64_t rdx_2 = sx.q(*(rcx_2 + 0x10c))
    int64_t* rbx_1 = *(arg2[3] + 0x10)
    int64_t rdi_2 = rdx_2 << 3
    int64_t rax_11 = rbx_1[3]
    
    if (*(rdi_2 + rax_11) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_11 = rbx_1[3]
    
    rax_9 = *(rdi_2 + rax_11)

int128_t var_b8
var_b8.q = rax_9
int32_t var_80 = 0
void*** result = sub_1419870b0(arg1, &var_d8, 2)
__security_check_cookie(rax_1 ^ &var_f8)
return result
