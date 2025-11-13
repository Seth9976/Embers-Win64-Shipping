// 函数: sub_141e955f0
// 地址: 0x141e955f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1[0x51]

if (result != 0 && result[0x2d].b != 0)
    result = sub_1422179a0(arg1)
    int64_t* result_1 = result
    
    if (result != 0)
        int64_t r8_1 = *result
        result = (*(r8_1 + 0x580))(result, arg1, r8_1)
        
        if (result.b == 0)
            int64_t* rcx_1 = arg1[0x51]
            int64_t r8_2 = *rcx_1
            return (*(r8_2 + 0x650))(rcx_1, result_1, r8_2)

return result
