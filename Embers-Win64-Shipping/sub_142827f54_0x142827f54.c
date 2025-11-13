// 函数: sub_142827f54
// 地址: 0x142827f54
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_78 = 0
int32_t rdx
int32_t var_74 = rdx
int64_t var_70 = *(arg1 + 8)
int32_t var_68 = *(arg1 + 0x10)
int64_t var_50 = 0
int64_t var_48 = 0xf
char var_60 = 0
int64_t* var_40
__builtin_memset(&var_40, 0, 0x1c)
sub_142826d60(arg1 + 0x58, &var_78)
int64_t* rcx_1 = var_40

if (rcx_1 != 0)
    int128_t var_38
    sub_140688f70(rcx_1, var_38.q)
    int64_t* rcx_2 = var_40
    sub_14058ba50(rcx_2, (var_38:8.q - rcx_2) & 0xffffffffffffffe0)
    int64_t var_40_1
    __builtin_memset(&var_40_1, 0, 0x18)

if (var_48 u>= 0x10)
    sub_14058ba50(var_60.q, var_48 + 1)

void* var_88 = arg1 + 0x58
int64_t result =
    *(*(arg1 + 0x60) + (((*(arg1 + 0x68) - 1) & (*(arg1 + 0x78) - 1 + *(arg1 + 0x70))) << 3))
__security_check_cookie(rax_1 ^ &var_a8)
return result
