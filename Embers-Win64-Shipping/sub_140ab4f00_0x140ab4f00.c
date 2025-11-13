// 函数: sub_140ab4f00
// 地址: 0x140ab4f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* result = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx, 0)

if (result == 0)
    return result

int16_t* const var_18
int32_t var_10

if (arg2[1].d s> 1)
    arg4 = sub_140aab440(sub_140ab2000(), arg2, &var_18, &var_10)
else
    var_18 = &data_142d40450
    var_10 = 0
char rax_2 = sub_140ab4300(arg1, result, &var_18, arg3, arg4)
int64_t rdx_3 = *result
char rax_3 = (*(rdx_3 + 0x1b8))(result, rdx_3)
int64_t r8_2 = *result
(*r8_2)(result, 1, r8_2)
return zx.q(rax_3) & zx.q(rax_2)
