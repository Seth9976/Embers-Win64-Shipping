// 函数: sub_14282d19c
// 地址: 0x14282d19c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_14282b1a8(arg1)
*(arg1 + 0x82) = 1
uint128_t zmm6 = zx.o(arg1[1])
int32_t rdi = arg1[2].d
char rax_2 = sub_14282aff8(arg1)
int64_t rbx
rbx.b = rax_2
int32_t rcx_1
rcx_1.b = rax_2 == 0x5b
int32_t var_98 = rcx_1
sub_1428256bc(&arg1[0x1e], &var_98)
int32_t rcx_3
rcx_3.b = rbx.b != 0x5b
int32_t var_88 = 0
int32_t var_84 = rcx_3 + 8
uint64_t var_80 = zmm6.q
int32_t var_78 = rdi
int64_t var_60 = 0
int64_t var_58 = 0xf
char var_70 = 0
int64_t* var_50
__builtin_memset(&var_50, 0, 0x1c)
int32_t* result = sub_142826d60(&arg1[0xb], &var_88)
int64_t* rcx_6 = var_50

if (rcx_6 != 0)
    int128_t var_48
    sub_140688f70(rcx_6, var_48.q)
    int64_t* rcx_7 = var_50
    result = sub_14058ba50(rcx_7, (var_48:8.q - rcx_7) & 0xffffffffffffffe0)
    int64_t var_50_1
    __builtin_memset(&var_50_1, 0, 0x18)

if (var_58 u>= 0x10)
    result = sub_14058ba50(var_70.q, var_58 + 1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
