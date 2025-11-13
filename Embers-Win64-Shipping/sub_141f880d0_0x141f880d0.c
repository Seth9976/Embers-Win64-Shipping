// 函数: sub_141f880d0
// 地址: 0x141f880d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
char rax

if (arg3 s< 0 || rsi.d s>= arg1[1].d)
    rax = 0
else
    rax = 1

if (rax != 0)
    int64_t rcx = *arg1
    
    if (*(rcx + (rsi << 3) + 4) != 0)
        *arg2 = *(rcx + (rsi << 3))
        return arg2

int32_t rdx_2 = rsi.d - arg1[1].d + 1

if (rdx_2 s> 0)
    sub_141f7f4b0(arg1, rdx_2)

int64_t rcx_2 = *arg1
int32_t rbx_1 = data_143a2d8ec + 1
data_143a2d8ec = rbx_1
int32_t* rdx_3 = rcx_2 + (rsi << 3)
void arg_18

if (&arg_18 != rdx_3)
    *rdx_3 = rbx_1
    rdx_3[1].b = 1

int32_t var_18
sub_14090a150(&arg1[2], &var_18)
int32_t rax_3 = var_18
int32_t* var_10
*var_10 = rbx_1
var_10[1] = rsi.d
var_10[2] = 0xffffffff
sub_141f86230(&arg1[2], &arg_18, rbx_1, var_10, rax_3, nullptr)
*arg2 = rbx_1
return arg2
