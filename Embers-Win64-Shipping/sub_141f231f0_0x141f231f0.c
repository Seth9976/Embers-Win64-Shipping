// 函数: sub_141f231f0
// 地址: 0x141f231f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (arg1[0x16] == 0)
    int32_t rdi_1 = *(arg8 + 0x48)
    int32_t rbx = *(arg8 + 0x54)
    int64_t arg_8 = *(arg8 + 0x40)
    var_38 = *(arg8 + 0x4c)
    memset(arg8, 0, 0x88)
    int64_t result
    result.b = 0
    *(arg8 + 0x40) = arg_8
    *(arg8 + 0x4c) = var_38
    *(arg8 + 0x54) = rbx
    *(arg8 + 8) = 0x3f800000
    *(arg8 + 0x48) = rdi_1
    return result

int32_t rbx_1 = arg1[0x18].d
int32_t rax_1 = rbx_1 | 0xc

if (data_143f3ad84 != 0)
    rax_1 = rbx_1

arg1[0x18].d = rax_1
char rax_3 = (*(*arg1 + 0x478))(arg5, arg6, arg7, zx.q(arg4), arg8, arg9)
arg1[0x18].d = rbx_1
char r14 = rax_3

if ((*arg8 & 2) != 0 && arg1[0x16] != 0)
    int64_t r9_1 = *arg1
    (*(r9_1 + 0x480))(arg1, &var_38, arg8, r9_1)
    
    if ((*(*arg1 + 0x488))(arg1, &var_38, arg8, arg3) != 0)
        r14 = (*(*arg1 + 0x478))(arg1, arg2, arg3, zx.q(arg4), arg8, arg9)

return zx.q(r14)
