// 函数: sub_141837960
// 地址: 0x141837960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rdx
int64_t var_d0 = rdx
void** const var_48 = &data_142e345d8
int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = j_sub_141827400
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
int32_t var_70 = 0
void*** var_58 = nullptr
int128_t var_40 = (&var_b8).o
void* var_30 = arg1
int64_t* entry_r8
int64_t* entry_r9
int32_t rax_2 = FindHandler<class __FrameHandler3>(arg1, &var_68, entry_r8, entry_r9)

if (var_68 != 0)
    void** const* rcx = &var_48
    
    if (var_58 != 0)
        rcx = var_58
    
    void** const rdx_3 = *rcx
    rdx_3[2](rcx, rdx_3)

int32_t var_70_1 = 0

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_1405df330(&var_b8)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rax_2)
