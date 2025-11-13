// 函数: sub_141894f30
// 地址: 0x141894f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[8]
int16_t* const r8

if (arg1[2].d == 0)
    r8 = &data_142d40450
else
    r8 = arg1[1]

int64_t* arg_8
(*(*rcx + 0x48))(rcx, &arg_8, r8, 0)
int64_t* rsi = arg_8

if (rsi == 0)
    int64_t result
    result.b = 0
    return result

int64_t rax_2 = (*(*rsi + 0x20))(rsi)
int32_t var_38
sub_141820450(&var_38)
sub_141824770(rsi, &var_38, arg4)
int64_t r14
r14.b = var_38 u> 0
(*(*rsi + 0x178))(rsi, rax_2)
int64_t var_28

if (var_28 != 0)
    arg4 = sub_140a74f90(var_28)

char rax_4

if (r14.b == 0)
    rax_4 = sub_141880fe0(arg1, rsi, arg2, arg3)
else
    rax_4 = sub_1418800f0(arg1, rsi, arg2, arg4)

int64_t* rcx_7 = arg_8

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)

return zx.q(rax_4)
