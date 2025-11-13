// 函数: sub_141cb4090
// 地址: 0x141cb4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[5].b & 1) == 0
int128_t var_18 = data_143a16ec0

if (not(cond:0))
    *arg2 = 0

sub_1409ac860(arg1, &var_18, arg3)
char rdx_1 = *(arg1 + 0x29)

if ((rdx_1 & 1) != 0 || ((data_143a16ec0:4.d ^ var_18:4.d) | (data_143a16ec0.d ^ var_18.d)
        | (data_143a16ec0:8.d ^ var_18:8.d) | (data_143a16ec0:0xc.d ^ var_18:0xc.d)) != 0)
    int32_t result
    result.b = 0
    return result

int64_t* rcx_5 = arg1[1]
int32_t arg_8 = *arg2
int32_t* r8 = *rcx_5

if (&r8[1] u> rcx_5[1])
    int32_t* rdx_2 = &arg_8
    
    if ((rdx_1 & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *r8
    *rcx_5 += 4

*arg2 = arg_8
void arg_18
int64_t* rax_10 = sub_140b58260(&arg_18, u"AssetRegistry", 1)
sub_140b54f40(arg1, &var_18, arg_8, *rax_10)
return not.b(*(arg1 + 0x29)) & 1
