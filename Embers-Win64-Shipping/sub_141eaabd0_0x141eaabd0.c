// 函数: sub_141eaabd0
// 地址: 0x141eaabd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result == 0)
    return result

void var_88
sub_142435ed0(result, &var_88)

if (sub_141e80b60(&var_88) != 0)
    int32_t rbx_1 = *(arg1 + 0xc)
    void var_70
    sub_141e70c80(&var_70, &var_88)
    void*** rax_2 = sub_140a82f30(0x28, 8)
    *rax_2 = &data_143259548
    sub_141e70c50(&rax_2[1], &var_70)
    rax_2[4].d = rbx_1
    *rax_2 = &data_143259568
    int64_t (* var_48)(void* arg1)
    int64_t (* rax_3)(void* arg1) = var_48
    
    if (rax_2 != -8)
        rax_3 = sub_141e97350
    
    void*** var_38_1 = rax_2
    var_48 = rax_3
    sub_141e85cb0(&var_48, arg2)
    sub_141e71cd0(&var_70)

return sub_141e71cd0(&var_88)
