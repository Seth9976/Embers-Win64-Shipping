// 函数: sub_141e4bba0
// 地址: 0x141e4bba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int128_t* rax_2 = *arg1
int64_t* rcx = &arg2[2]
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44
__builtin_memset(&var_44, 0, 0x18)
*arg2 = *rax_2
arg2[1].q = 0
*(arg2 + 0x18) = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_3 = rcx[2]

if (rax_3 != 0)
    rcx = rax_3

*rcx = 0
rcx[1] = 0
arg2[4].d = 0xffffffff
*(arg2 + 0x44) = 0
arg2[5].q = 0
*(arg2 + 0x58) = 0
sub_141e51190(&arg2[1], &var_78)
int64_t var_38
int64_t rsi = var_38
int64_t var_40

if (rsi == 0)
    memmove(arg2 + 0x48, &var_40, 4)
int64_t rcx_3 = arg2[5].q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
    rsi = var_38

arg2[5].q = rsi
int32_t var_30
*(arg2 + 0x58) = var_30
int64_t var_38_1 = 0
var_30 = 0
sub_141e508b0(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg2
