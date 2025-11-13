// 函数: sub_1422a7a10
// 地址: 0x1422a7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    int64_t* rcx = *(result + 0x130)
    
    if (rcx != 0)
        int64_t r8_1 = *rcx
        (*(r8_1 + 0x678))(rcx, arg1, r8_1)
        int64_t* rcx_1 = *(result + 0x130)
        return (*(*rcx_1 + 0x670))(rcx_1, arg1)

return result
