// 函数: sub_141b04d20
// 地址: 0x141b04d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
char arg_9
char arg_a
char arg_b

if (arg1[0x18] == 0)
    arg_8 = arg1[3]
    arg_9 = arg1[4]
    arg_a = arg1[5]
    arg_b = 0
    return (*(*arg2 + 0x400))(arg2, &arg_8)

bool cond:1_1 = arg2[0x18] != sub_140d3c6e0(&arg1[8])
int64_t rax_1

if (not(cond:1_1))
    rax_1 = *(arg1 + 0x10)

if (cond:1_1 || arg2[0x19] != rax_1)
    arg_8 = *arg1
    arg_9 = arg1[1]
    arg_a = arg1[2]
    arg_b = 0
    rax_1 = sub_141f32b40(arg2, sub_140d3c6e0(&arg1[8]), &arg_8, *(arg1 + 0x10))

int64_t* rcx_3 = arg2[0x18]

if (rcx_3 == 0)
    return rax_1

void var_18
int64_t* rax_7 = (*(*rcx_3 + 0x440))(rcx_3, &var_18)
arg2[0x28] = *rax_7
int32_t rax_8 = rax_7[1].d
arg2[0x29].d = rax_8
return rax_8
