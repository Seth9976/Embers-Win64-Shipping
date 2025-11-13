// 函数: sub_1427d6360
// 地址: 0x1427d6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[0xb]
int32_t arg_8
int32_t* rdi = &arg_8
arg_8 = 0x3b

if (rax != 0)
    rdi = rax

int32_t* rax_1 = arg1[0xc]
int32_t rsi = 0

if (rax_1 != 0)
    rsi = *rax_1

sub_1427e5d10(arg1, *arg2)
sub_1427e5d10(arg1, arg2[2])
uint64_t rdx_2 = zx.q(*rdi)
int32_t var_24 = rsi + 0xd0
char var_20 = 1
int64_t* var_18 = arg2
char var_28 = 1
sub_1427de0f0(arg1, rdx_2, &var_28)
*rdi += 1
sub_1427e5c70(arg1)
sub_1427e5d10(arg1, arg2[3])
uint64_t rdx_4 = zx.q(*rdi)
int32_t var_24_1 = rsi + 0xd4
char var_20_1 = 0
var_28 = 1
sub_1427de0f0(arg1, rdx_4, &var_28)
sub_1427e5c70(arg1)
return sub_1427e5c70(arg1) __tailcall
