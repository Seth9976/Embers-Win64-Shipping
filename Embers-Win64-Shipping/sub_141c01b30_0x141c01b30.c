// 函数: sub_141c01b30
// 地址: 0x141c01b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rcx_1 = *(arg2 + 0x20)
int64_t rdx_2 = 0
int64_t rax_2
rax_2.b = rcx_1 != 0
*(arg2 + 0x20) = rax_2 + rcx_1
int64_t rax_4 = var_28.q
int64_t var_18 = rax_4

if (rax_4 != 0)
    rdx_2 = var_28:8.q

int64_t var_10 = rdx_2
int64_t result = sub_141bae4a0(&var_18)
*arg3 = result
return result
