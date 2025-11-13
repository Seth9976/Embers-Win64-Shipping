// 函数: sub_140ace3c0
// 地址: 0x140ace3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140ad89e0()
int32_t r13 = arg4[3]
int32_t rbp = arg4[2]
int32_t rsi = arg4[1]
int32_t rcx = data_143dbb224
int32_t r15 = data_143dbb220
int32_t rdi = data_143dbb21c
int32_t rbx_1 = *arg4
int32_t r12 = data_143dbb218
sub_140ad89e0()
void* rcx_1 = &arg3[6]

if (((data_143dbb224 ^ arg3[3]) | (data_143dbb220 ^ arg3[2]) | (data_143dbb21c ^ arg3[1])
        | (*arg3 ^ data_143dbb218)) != 0)
    rcx_1 = nullptr

void* rax_11 = &arg4[6]

if (((r12 ^ rbx_1) | (rsi ^ rdi) | (r15 ^ rbp) | (rcx ^ r13)) != 0)
    rax_11 = nullptr

uint128_t zmm6
zmm6.q = *rcx_1 f+ *rax_11
*(arg2 + 0x18) = 0
sub_140ad89e0()
uint64_t var_70 = zmm6.q
int128_t var_88 = data_143dbb218.o
void** const var_78 = &data_142e6d638
sub_140b0a670(arg2 + 0x20, &var_88)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
