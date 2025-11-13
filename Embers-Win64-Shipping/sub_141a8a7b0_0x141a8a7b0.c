// 函数: sub_141a8a7b0
// 地址: 0x141a8a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18
sub_140d3a3a0(&var_18, nullptr)
int64_t var_10 = 0
sub_140d3a3a0(&var_18, arg2)
int32_t rcx_2
rcx_2.b = sub_140b5b8a0(arg4.d, 0) == 0

if ((arg4:4.d != 0 | rcx_2.b) != 0)
    void* rax_1 = sub_140d3c6e0(&var_18)
    
    if (rax_1 != 0)
        sub_140d1fd20(rax_1, arg4)

sub_1408f4c10(arg1)
int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rax_2 = (rbx_1 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t result = *arg1
*(result + rbx_1 * 0x10) = var_18
return result
