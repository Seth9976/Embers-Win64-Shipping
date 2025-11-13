// 函数: sub_140b0e240
// 地址: 0x140b0e240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 8)

if (rax u>= arg1[2] && rax u<= arg1[3])
    arg1[4] = rax

int64_t rbx = sx.q(arg1[1].d)
int32_t rax_1 = (rbx + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1407755b0(arg1)

int64_t* rbx_2 = rbx * 0x58 + *arg1
int64_t var_48 = 0
int64_t var_40 = 0
sub_140b0c1e0(&var_48, arg3)
*rbx_2 = 0
rbx_2[1] = 0
sub_140b0c1e0(rbx_2, &var_48)
void var_38
void* rcx_2 = &var_38
*(rbx_2 + 0x40) = *arg2
rbx_2[0xa] = arg2[1].q
int32_t result = var_40:4.d | var_40.d | var_48:4.d | var_48.d

if (result == 0)
    rcx_2 = nullptr

if (rcx_2 == 0)
    return result

return (**rcx_2)(rcx_2, 0)
