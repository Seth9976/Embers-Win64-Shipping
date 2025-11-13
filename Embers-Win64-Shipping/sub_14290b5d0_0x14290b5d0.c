// 函数: sub_14290b5d0
// 地址: 0x14290b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t var_20 = 0
int64_t* var_18
int32_t arg_20
sub_1428f1040(nullptr, &var_20, &arg_20, &var_18, arg2)
int32_t* var_10
int32_t arg_18
sub_1428daf50(nullptr, &arg_18, &var_10, var_18)
int64_t* rax_1 = sub_14290ccd0(arg_18, var_10)
int64_t* var_28 = rax_1
int32_t rax_2
int32_t r8_2

if (rax_1 != 0)
    if (sub_1428ef870(&var_28, &var_20, arg_20) != 0)
        sub_142896310(arg1, 0x198, var_28)
        return 1
    
    rax_2 = 0xcc
    r8_2 = 0x8e
else
    rax_2 = 0xd4
    r8_2 = 0x10

void* var_38
var_38.d = rax_2
sub_1428a5670(0x10, 0xd5, r8_2, "crypto\ec\ec_ameth.c", var_38.d)
sub_1428c0b90(var_28)
return 0
