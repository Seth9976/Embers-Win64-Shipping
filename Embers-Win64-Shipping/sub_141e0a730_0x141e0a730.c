// 函数: sub_141e0a730
// 地址: 0x141e0a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x31) & 0x40) == 0)
    sub_140926490(&arg2[2], *arg2, zx.q(arg2[1].b))
    bool var_10 = arg2[1].b != 0
    int64_t var_18 = *arg2
    return sub_1405a9f90(arg1 + 0x38, &var_18)

int64_t rsi = sx.q(*(arg1 + 0xe0))
int32_t rax = (rsi + 1).d
*(arg1 + 0xe0) = rax

if (rax s> *(arg1 + 0xe4))
    sub_1405c4e40(arg1 + 0xd8)

int64_t* rcx_3 = (rsi << 5) + *(arg1 + 0xd8)
*rcx_3 = *arg2
rcx_3[1].b = arg2[1].b
rcx_3[2] = 0
rcx_3[3].d = 0
return sub_1407473e0(&rcx_3[2], &arg2[2]) __tailcall
