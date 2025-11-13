// 函数: sub_140b2fb80
// 地址: 0x140b2fb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[2].b

if (result != 0)
    sub_140b3db50()
    int64_t* rsi_1 = arg1[1]
    int64_t arg_8 = **arg1
    EnterCriticalSection(&data_143de8120)
    sub_140b2c210(0x143de7d80, &arg_8, rsi_1)
    LeaveCriticalSection(&data_143de8120)
    sub_140b3db50()
    sub_140b34430(&data_143de8088, arg_8, 2)
    result = arg1[2].b
    
    if (result != 0)
        arg1[2].b = 0

return result
