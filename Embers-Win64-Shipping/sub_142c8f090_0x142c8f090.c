// 函数: sub_142c8f090
// 地址: 0x142c8f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x58)
void* rdi = *rsi
int32_t rbx = *(rdi + 0x38c)

if (rbx == 0)
    rbx = *(arg1 + 0x50)

int128_t var_38 = *(arg1 + 0x40)
uint64_t var_18[0x2]
int128_t var_28 = *sub_142c59600(&var_18)
int64_t rbx_2 = sx.q(rbx) - sub_142c595d0(&var_28, &var_38)

if (*(rdi + 0x380) == 0)
    return rbx_2

var_28 = *(rsi + 0x218)
var_38 = *sub_142c59600(&var_18)
int64_t rax_3 = sub_142c595d0(&var_38, &var_28)
int64_t rcx_5 = sx.q(*(rdi + 0x380)) - rax_3

if (rbx_2 s< rcx_5)
    return rbx_2

return rcx_5
