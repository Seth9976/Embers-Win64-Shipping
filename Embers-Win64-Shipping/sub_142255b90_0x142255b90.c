// 函数: sub_142255b90
// 地址: 0x142255b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142249710(arg4, arg1) == 0xffffffff)
    int32_t rax
    rax.b = 0
    return rax

int64_t* i = *arg3
int64_t r8 = sx.q(arg3[1].d)
int64_t r14 = r8 * 0x24

for (void* rcx_1 = r14 + i; i != rcx_1; i += 0x24)
    if (*i == arg1)
        goto label_142255c13

int32_t rax_1 = (r8 + 1).d
arg3[1].d = rax_1

if (rax_1 s> *(arg3 + 0xc))
    sub_140adefe0(arg3)

i = *arg3 + r14
label_142255c13:
*i = *arg2
*(i + 0x10) = arg2[1]
i[4].d = arg2[2].d
*i = arg1
i.b = 1
return i
