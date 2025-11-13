// 函数: sub_1408ccab0
// 地址: 0x1408ccab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cebcb4 s> result)
    result = _Init_thread_header(&data_143cebcb4)
    
    if (data_143cebcb4 == 0xffffffff)
        data_143cebcb0 = sub_1426b2d30()
        result = _Init_thread_footer(&data_143cebcb4)

data_143cebcb0 += 1
return result
