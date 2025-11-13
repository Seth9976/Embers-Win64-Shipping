// 函数: sub_1410e7000
// 地址: 0x1410e7000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t var_148
__builtin_memset(&var_148, 0, 0x14)
sub_141095f70(&var_148, 0)
int64_t var_130 = 0
int64_t var_128 = 0
void var_88
sub_14108b090(&var_88)
int64_t* rdi = *arg3
int32_t r14 = *(arg3 + 0xc)
int32_t rsi = arg3[1].d
void** const var_120 = &data_142f11938
int64_t* var_118 = &var_148
int64_t* var_110 = &var_130
void* var_108 = &var_88
char arg_18
char* var_100 = &arg_18
int64_t* rcx_2 = *(*rdi + 0x20)
void* rax_2 = (*(*rcx_2 + 0x248))(rcx_2)
void** var_f8
sub_14125c360(&var_f8, rax_2, *(rax_2 + 8), rdi, &var_120)
int64_t var_d0 = 0
var_f8 = &data_142f19058
int64_t rax_3 = data_1439b53d0
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x24)
int64_t var_c8 = rax_3
int32_t var_90 = rsi
int32_t var_8c = r14
var_b8.q = *(rax_2 + 0x20)
var_b8:8.q = *(rax_2 + 0x28)
int128_t var_a8
var_a8:8.q = *(rax_2 + 0x78)

if (*(*arg3 + 0x18b8) s> 0)
    int64_t rdi_1 = 0
    
    do
        void** const* var_168
        var_168.d = 0xffffffff
        int64_t* rcx_4 = *(*arg3 + 0x18b0)
        sub_1410ed650(&var_f8, *(rcx_4 + rdi_1), -1, *(rcx_4 + rdi_1 + 8), 0xffffffff)
        rdi_1 += 0x18
        i += 1
    while (i s< *(*arg3 + 0x18b8))

int32_t rax_11
bool cond:0_1

if (arg4 == 0)
    cond:0_1 = sub_1422eb5d0(arg1) != 0
    rax_11 = 2

if (arg4 != 0 || not(cond:0_1))
    rax_11 = 1

sub_1412680e0(arg1, arg2, &var_130, &var_148, &var_88, &arg_18, rax_11)
var_120 = &data_142d56fa0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_14108ca30(&var_88)
int64_t result = sub_141095f70(&var_148, 0)
int64_t rcx_12 = var_148

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
