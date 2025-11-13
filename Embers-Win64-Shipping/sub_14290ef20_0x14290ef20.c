// 函数: sub_14290ef20
// 地址: 0x14290ef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* var_18
int32_t arg_18
void arg_20
sub_1428a2700(nullptr, &arg_20, &arg_18, &var_18, arg2)
void* rax = sub_142897a40(nullptr, &arg_20, arg_18)

if (rax == 0)
    int64_t* var_28
    var_28.d = 0x69
    sub_1428a5670(4, 0x8b, 4, "crypto\rsa\rsa_ameth.c", var_28.d)
    return 0

if (sub_14290ffb0(rax, var_18) != 0)
    sub_142896310(arg1, **(arg1 + 0x10), rax)
    return 1

sub_142896f90(rax)
return 0
