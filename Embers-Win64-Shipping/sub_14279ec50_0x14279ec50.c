// 函数: sub_14279ec50
// 地址: 0x14279ec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t r14 = arg3
int64_t var_10 = 0
int64_t rbp = arg2

if (&var_18 != arg4)
    int32_t rbx_1 = arg4[1].d
    int64_t rdi_1 = *arg4
    var_10.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_18, rbx_1, 0)
        memcpy(var_18, rdi_1, rbx_1 * 2)
        r14 = arg3
        rbp = arg2

int64_t rdi_2 = sx.q(arg1[6].d)
int32_t rax = (rdi_2 + 1).d
arg1[6].d = rax

if (rax s> *(arg1 + 0x34))
    sub_1405c4e40(&arg1[5])

int64_t* rcx_5 = (rdi_2 << 5) + arg1[5]
*rcx_5 = rbp
rcx_5[1] = r14
sub_140596d10(&rcx_5[2], &var_18)
int64_t result = (*(*arg1 + 0x2a8))(arg1)
int64_t rcx_8 = var_18

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
