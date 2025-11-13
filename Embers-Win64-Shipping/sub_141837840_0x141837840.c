// 函数: sub_141837840
// 地址: 0x141837840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rax_2 = *arg1
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x2c)
int32_t var_9c = 0x80
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int64_t var_88 = 0
int32_t var_80 = 0
(*(rax_2 + 0x1a8))(arg1, arg2, &var_c8)
void*** var_68 = nullptr
int64_t* var_50 = &var_c8
void** const var_58 = &data_142da2668
int32_t* (* var_78)(int64_t* arg1, int64_t* arg2) = sub_14182a750
int32_t rax_3 = FindHandler<class __FrameHandler3>(arg1, &var_78, arg3, arg4)

if (var_78 != 0)
    void** const* rcx_1 = &var_58
    
    if (var_68 != 0)
        rcx_1 = var_68
    
    void** const rdx_2 = *rcx_1
    rdx_2[2](rcx_1, rdx_2)

int32_t var_80_1 = 0

if (var_88 != 0)
    sub_140a74f90(var_88)

sub_14059ad90(&var_c8, 0)
int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t rcx_5 = var_c8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rax_3)
