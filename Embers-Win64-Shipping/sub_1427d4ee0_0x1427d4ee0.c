// 函数: sub_1427d4ee0
// 地址: 0x1427d4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[0xb]
int32_t arg_8
int32_t* rsi = &arg_8
arg_8 = 0x1ce

if (rax != 0)
    rsi = rax

int32_t* rax_1 = arg1[0xc]
int32_t rdi = 0

if (rax_1 != 0)
    rdi = *rax_1

sub_1427e5d10(arg1, *arg2)
sub_1427e5d10(arg1, arg2[2])
char var_30 = 1
int32_t var_34 = rdi + 0x1a8
int64_t* var_28 = arg2
char var_38 = 1
int32_t var_58
int32_t var_54
int32_t var_50
int32_t var_48
int32_t entry_zmm3

if (sub_1427ddbc0(arg1, &var_58) != 0)
    int64_t rdx_3 = arg1[6]
    var_48 = var_58
    int32_t var_40_1 = var_50
    int32_t var_44_1 = var_54
    entry_zmm3 = sub_1427e6d90(&var_38, rdx_3, &var_48, entry_zmm3)

*rsi += 1
sub_1427e5c70(arg1)
sub_1427e5d10(arg1, arg2[3])
char var_30_1 = 0
int32_t var_34_1 = rdi + 0x1b4
var_38 = 1

if (sub_1427ddbc0(arg1, &var_58) != 0)
    int64_t rdx_6 = arg1[6]
    var_48 = var_58
    int32_t var_40_2 = var_50
    int32_t var_44_2 = var_54
    sub_1427e6d90(&var_38, rdx_6, &var_48, entry_zmm3)

sub_1427e5c70(arg1)
return sub_1427e5c70(arg1) __tailcall
