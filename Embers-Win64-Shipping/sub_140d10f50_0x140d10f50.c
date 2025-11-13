// 函数: sub_140d10f50
// 地址: 0x140d10f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_40 = 0xffffffff
int64_t var_3c = 0
int64_t arg_10 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x18)
int64_t rcx_4

if (arg3 == 0)
    int64_t arg_18 = 0
    rcx_4 = 0
    var_30 = 0
    var_3c:4.d = 0
else
    void var_58
    sub_140b97b00(&var_30, sub_140d21d60(&var_58, arg3))
    int64_t var_50
    
    if (var_50 != 0)
        sub_140a74f90(var_50)
    
    sub_140d3a3a0(&var_40, arg3)
    int32_t rax_2 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_2 = data_1439aaa30
    
    rcx_4 = var_30
    rbx = rax_2
    var_3c:4.d = rax_2

*arg2 = var_40.q
arg2[1].d = rbx
arg2[2] = rcx_4
int64_t var_28
int64_t* result = sub_140597df0(&arg2[3], &var_28)
int64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
