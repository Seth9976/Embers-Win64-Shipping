// 函数: sub_141f80ba0
// 地址: 0x141f80ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = data_143a2d8ec + 1
int64_t r15 = sx.q(arg3)
*arg2 = rax_1
int64_t rdi = sx.q(arg1[1].d)
data_143a2d8ec = rax_1
int32_t i_1 = r15.d - rdi.d + 1

if (i_1 s> 0)
    int32_t rax_2 = rdi.d + i_1
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    void* rax_4 = (rdi << 3) + 4 + *arg1
    int32_t i
    
    do
        *rax_4 = 0
        rax_4 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rbp = arg1[1].d
int32_t rbx_2 = *arg2
arg1[1].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t rdi_1 = r15 << 3
int64_t rdx_3 = *arg1 + rdi_1
memmove(rdx_3 + 8, rdx_3, (rbp - r15.d) << 3)
int64_t rax_6 = *arg1
*(rdi_1 + rax_6) = rbx_2
*(rdi_1 + rax_6 + 4) = 1
int32_t var_40
sub_14090a150(&arg1[2], &var_40)
int32_t* var_38
*var_38 = *arg2
int32_t rdx_6 = var_40
var_38[1] = r15.d
var_38[2] = 0xffffffff
void var_48
sub_141f86230(&arg1[2], &var_48, *var_38, var_38, rdx_6, nullptr)
return arg2
