// 函数: sub_141d4db20
// 地址: 0x141d4db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t var_28 = 0
int32_t var_20 = 0
uint64_t rdi = 0
uint64_t var_58
uint64_t var_48
void var_38
uint64_t* rcx_2
int32_t rbx_1

if (sub_141d4da20(arg1, arg3, arg4, &var_38) == 0)
    int64_t var_40_1 = 0
    rcx_2 = &var_48
    rbx_1 = 2
else
    var_58 = 0
    int32_t var_50_1 = var_20
    
    if (var_20 != 0)
        sub_1405a4c70(&var_58, var_20, 0)
        rdi = var_58
        memcpy(rdi, var_28, var_20 * 2)
    else
        int32_t var_4c_1 = 0
    
    rcx_2 = &var_58
    rbx_1 = 1

*rcx_2 = 0
int32_t rax_2 = rcx_2[1].d
*arg2 = rdi
arg2[1].d = rax_2
int32_t rax_3 = *(rcx_2 + 0xc)
rcx_2[1] = 0
*(arg2 + 0xc) = rax_3

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_3 = var_48
    rbx_1 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx_1.b & 1) != 0)
    uint64_t rcx_4 = var_58
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if (var_28 != 0)
    sub_140a74f90(var_28)

return arg2
