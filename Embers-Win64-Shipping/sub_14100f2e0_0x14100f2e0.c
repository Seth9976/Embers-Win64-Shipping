// 函数: sub_14100f2e0
// 地址: 0x14100f2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcf40
int64_t* rcx = arg1[0xb]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

void* rcx_1 = arg1[6]
int32_t result = 0x42efcd90
arg1[5] = &data_142efcd90

if (rcx_1 != 0)
    result = *(rcx_1 + 0x14)
    *(rcx_1 + 0x14) -= 1
    
    if (result == 1)
        int64_t* rcx_2 = arg1[6]
        
        if (rcx_2 != 0)
            return sub_141011360(rcx_2, result.b) __tailcall

return result
