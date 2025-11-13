// 函数: sub_141810b40
// 地址: 0x141810b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_10 = 1
int64_t* var_18 = nullptr
sub_1405a4f90(&var_18)
sub_140596d10(var_18, arg3)
int64_t result = (*(*arg1 + 0xb8))(arg1, arg2, &var_18, arg4, var_18, var_10)
int32_t i_1 = var_10.d
int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
