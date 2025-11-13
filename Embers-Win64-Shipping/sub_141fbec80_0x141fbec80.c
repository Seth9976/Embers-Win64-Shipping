// 函数: sub_141fbec80
// 地址: 0x141fbec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0x1f6) & 2) != 0 || *(arg1 + 0x140) != arg3 || *(arg1 + 0xe28) == 0)
    return 

int32_t* rax

if (*(arg1 + 0xb0c) == 0)
    rax = *(arg1 + 0x88)

if (*(arg1 + 0xb0c) == 0 && (rax == 0 || rax[0x4d] == 1))
    rax.b = 0
else
    rax.b = 1

if (rax.b == 0)
    return 

int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
void arg_10

if (*sub_141fb3110(arg1 + 0xab8, &arg_10, arg_20) != 0xffffffff
        || *sub_1408296b0(arg1 + 0xe30, &arg_10, arg2) != 0xffffffff)
    return 

rax = sub_141fb3410(arg1, arg2)

if (*(rax + 0x15) == 0)
    rax[5].b = 1
    return 

if (rax[5].b != 0)
    return 

sub_140d3a3a0(&arg_20, arg2)
int32_t var_18
sub_14090a150(arg1 + 0xab8, &var_18)
int64_t rax_1 = arg_20
int64_t* var_10
*var_10 = rax_1
var_10[1].d = 0xffffffff
sub_141fb0220(arg1 + 0xab8, &arg_10, (rax_1 u>> 0x20).d ^ rax_1.d, var_10, var_18, nullptr)
