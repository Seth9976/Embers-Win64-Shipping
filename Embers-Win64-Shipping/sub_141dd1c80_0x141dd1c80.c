// 函数: sub_141dd1c80
// 地址: 0x141dd1c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()
void* result_1 = result

if (result != 0)
    int64_t* rcx = *(result + 0x38)
    
    if (rcx != 0)
        int64_t r9_1 = *rcx
        result = (*(r9_1 + 0x340))(rcx, arg1, arg3, r9_1)
    
    int64_t* rcx_1 = *(result_1 + 0xf0)
    
    if (rcx_1 != 0)
        return (*(*rcx_1 + 0x340))(rcx_1, arg1, arg3)

return result
