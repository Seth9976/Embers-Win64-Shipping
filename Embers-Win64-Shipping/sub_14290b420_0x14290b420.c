// 函数: sub_14290b420
// 地址: 0x14290b420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t var_20 = 0
int64_t* var_18
int32_t arg_20
sub_1428a2700(nullptr, &var_20, &arg_20, &var_18, arg2)
int32_t* var_10
int32_t arg_18
sub_1428daf50(nullptr, &arg_18, &var_10, var_18)
int64_t* rax_1 = sub_14290ccd0(arg_18, var_10)
int64_t* var_28 = rax_1
int64_t* var_38

if (rax_1 == 0)
    var_38.d = 0x97
    sub_1428a5670(0x10, 0xd7, 0x10, "crypto\ec\ec_ameth.c", var_38.d)
    return 0

void* rax_3 = sub_1428f0570(&var_28, &var_20, arg_20)

if (rax_3 != 0)
    sub_142896310(arg1, 0x198, var_28)
    return 1

var_38.d = 0x9d
sub_1428a5670((rax_3 + 0x10).d, 0xd7, 0x8e, "crypto\ec\ec_ameth.c", var_38.d)
sub_1428c0b90(var_28)
return 0
