// 函数: sub_1428ad6b0
// 地址: 0x1428ad6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = *arg2
int64_t rsi = sx.q(arg3)
int32_t* arg_20 = nullptr
int64_t arg_10 = rax
int64_t rax_1 = sub_1428c36f0(&arg_20, &arg_10, rsi.d)

if (rax_1 == 0)
    return rax_1

int32_t* rcx_1 = arg_20
arg_10 = *(rcx_1 + 8)
int32_t* rax_3 = sub_1428adf40(arg1, &arg_10, sx.q(*rcx_1))

if (rax_3 != 0)
    *arg2 += rsi

sub_1428c3460(arg_20)
return rax_3
