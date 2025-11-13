// 函数: sub_140d6fea0
// 地址: 0x140d6fea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_c8
memset(&var_c8, 0, 0x90)
sub_140b4c2a0(&var_c8)
int64_t var_38 = 0
var_c8 = &data_142d6b230
int64_t var_30 = arg1 + 8
int64_t var_28 = 0x7fffffffffffffff
sub_140b55290(&var_c8, 1)
var_c8[0x1b](&var_c8, 1)
int64_t* var_c0
int64_t* rdx_1 = *var_c0
int64_t arg_8

if (&rdx_1[1] u> var_c0[1])
    int64_t* rdx_2 = &arg_8
    void** const* rcx_5 = &var_c8
    char var_9f
    
    if ((var_9f & 0x20) != 0)
        sub_140b540d0(rcx_5, rdx_2, arg2)
    else
        var_c8[0x2a](rcx_5, rdx_2, 8)
else
    arg_8 = *rdx_1
    *var_c0 += 8

uint128_t zmm6 = zx.o(arg_8)
sub_140b4cb40(&var_c8)
int512_t result
result.o = zmm6
return result
