// 函数: sub_1417f5180
// 地址: 0x1417f5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = data_143f5b298
int64_t* rcx_1 = result[0x161]

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x100))(rcx_1)
    
    if (result != 0)
        int64_t rdx_1 = *result
        result = (*(rdx_1 + 0xb8))(result, rdx_1)
        
        if (result != 0)
            jump(*(*result + 0x10))

return result
