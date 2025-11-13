// 函数: sub_141cb02d0
// 地址: 0x141cb02d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_2 = 0
int64_t result = sub_141caf5b0(arg1 - 0x28, arg2, &var_18, arg3, 2, nullptr, nullptr)
int32_t i_1 = i_2
int64_t* rbx = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_18 == 0)
    return result

return sub_140a74f90(var_18)
