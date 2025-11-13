// 函数: sub_142816390
// 地址: 0x142816390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142817350(arg1, 1, "Registering union: %s\n", arg2)
int64_t var_28 = arg2
int64_t var_20 = 0
int64_t var_18 = 0
uint64_t rcx = zx.q(*(arg1 + 0x130))

if ((*(arg1 + 0x134) & 0x7fffffff) u<= rcx.d)
    sub_142816840(arg1 + 0x128, &var_28)
    void* rax_2
    rax_2.b = 1
    return rax_2

int64_t* rcx_3 = *(arg1 + 0x128) + rcx * 0x18

if (rcx_3 != 0)
    *rcx_3 = arg2
    sub_142816680(&rcx_3[1], &var_20)

*(arg1 + 0x130) += 1
uint64_t rax_3
rax_3.b = 1
return rax_3
