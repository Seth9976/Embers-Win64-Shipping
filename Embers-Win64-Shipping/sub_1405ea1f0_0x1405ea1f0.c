// 函数: sub_1405ea1f0
// 地址: 0x1405ea1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2

if (arg3 == 0 || *arg3 == 0)
    sub_140596d10(arg1, arg2)
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    int32_t r14_1 = arg2[1].d
    int32_t rax_1
    
    if (r14_1 == 0)
        rax_1 = 1
    
    if (r14_1 != 0 || rbx_1.d == 0)
        rax_1 = 0
    
    int32_t rcx = rax_1 + rbx_1.d
    int64_t var_30
    int64_t* arg_10 = &var_30
    var_30 = 0
    int64_t rbp_1 = *arg2
    int32_t var_24
    
    if (r14_1 != 0 || rcx != 0)
        sub_1405a4c70(&var_30, r14_1 + rcx, 0)
        memcpy(var_30, rbp_1, r14_1 * 2)
    else
        var_24 = 0
    
    sub_140a20ba0(&var_30, arg3, rbx_1.d)
    arg_10 = arg1
    *arg1 = var_30
    arg1[1].d = r14_1
    *(arg1 + 0xc) = var_24

return arg1
