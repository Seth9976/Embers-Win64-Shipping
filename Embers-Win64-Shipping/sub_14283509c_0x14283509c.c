// 函数: sub_14283509c
// 地址: 0x14283509c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = sub_142834d98(*arg1, arg2, arg3)

if (rax != 0)
    void*** result
    int64_t r8
    result, r8 = malloc(0x40)
    
    if (result != 0)
        result[7] = 0
        result[2] = XXH32_freeState
        result[3] = sub_142834c3c
        result[4] = sub_142834c34
        result[5] = sub_142834c44
        result[6] = sub_142834c4c
        result[1] = arg1
        *result = rax
        return result
    
    sub_142833a04((result + 1).d, "Out of memory", r8)

return nullptr
