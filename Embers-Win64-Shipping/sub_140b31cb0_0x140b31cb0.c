// 函数: sub_140b31cb0
// 地址: 0x140b31cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_140b3e980()
void* rbp = &arg4[6]

if (((arg4[3] ^ data_143de7cdc) | (arg4[2] ^ data_143de7cd8) | (arg4[1] ^ data_143de7cd4)
        | (*arg4 ^ data_143de7cd0)) != 0)
    rbp = nullptr

sub_140b3e980()
void* rdx_10 = &arg3[6]

if (((arg3[3] ^ data_143de7cdc) | (arg3[2] ^ data_143de7cd8) | (arg3[1] ^ data_143de7cd4)
        | (*arg3 ^ data_143de7cd0)) != 0)
    rdx_10 = nullptr

int16_t* rdx_11

if (*(rdx_10 + 8) == 0)
    rdx_11 = &data_142d40450
else
    rdx_11 = *rdx_10

void var_88
sub_140b58260(&var_88, rdx_11, 1)
int64_t r9
r9.b = 5
bool rax_15 = (*(*arg5 + 8))(arg5, &var_88, rbp, r9, *(rbp + 0x20))
bool rbx_1 = rax_15

if (*(rbp + 0x21) != 0)
    rbx_1 = rax_15 == 0

*(arg2 + 0x18) = 0
sub_140b3ea00()
bool var_60 = rbx_1
void** const var_68 = &data_142e786e8
int128_t var_78 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_78)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_78)
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
