// 函数: sub_141d53d80
// 地址: 0x141d53d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char var_160 = 1
int32_t var_158 = 2
int32_t var_154 = 2
sub_141d56270(arg1, &var_158, 2, arg3, arg5, arg4, arg2, var_160)
int64_t rax_2 = *(arg1 + 8)
int128_t zmm1 = data_142d3f5a0
int32_t var_70 = 0
int32_t var_6c
__builtin_memset(&var_6c, 0xff, 0x14)
int128_t var_58 = zmm1
int64_t var_48
__builtin_memset(&var_48, 0, 0x19)
int64_t var_148 = rax_2
int64_t var_140 = 0
int32_t var_138 = 0xffffffff
int16_t var_134 = 0x900
int64_t var_88
__builtin_memset(&var_88, 0, 0x11)
int32_t var_74 = 0
bool var_2f = *(rax_2 + 0x38) u> 1
void var_130
memset(&var_130, 0, 0xa8)
int64_t rbx_2 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_3 = rbx_2 + 0x1a

if (rax_3 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x1c)
    rbx_2 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_3 = rbx_2 + 0x1a

data_143f02bc8 = rax_3
wchar16 const* const rax_4 = u"ClearTexture"
wchar16 const i

do
    i = *rax_4
    *(rbx_2 - u"ClearTexture" + rax_4) = i
    rax_4 = &rax_4[1]
while (i != 0)
void*** rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_3[0x27]

if (rax_5 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_3[0x27]

data_143f02bac += 1
data_143f02bc8 = rax_5
*data_143f02ba0 = rcx_3
data_143f02ba0 = &rcx_3[1]
sub_1405d11b0(rcx_3, &var_148, rbx_2)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_148)
int64_t var_38
data_143f02d10 = var_38:7.b
data_143f02d11 = 0
data_143f02d5c = 1
sub_141096650(&data_143f02b98)
int64_t rcx_6 = *(arg1 + 8)
int64_t* rbx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
var_158.q = rcx_6
void* rax_9 = &rbx_7[1]

if (rax_9 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x10)
    rcx_6 = var_158.q
    rbx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_9 = &rbx_7[1]

data_143f02bc8 = rax_9
*rbx_7 = rcx_6
void*** rcx_9 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_9[5]

if (rax_10 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_9 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_9[5]

data_143f02bac += 1
data_143f02bc8 = rax_10
*data_143f02ba0 = rcx_9
data_143f02ba0 = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142d549c8
rcx_9[2].d = 1
rcx_9[3] = rbx_7
rcx_9[4].d = 0
int64_t var_40
int64_t result = sub_1405d1550(&var_40)
*(arg1 + 0x59) = 1
__security_check_cookie(rax_1 ^ &var_188)
return result
