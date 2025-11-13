// 函数: sub_1408fc1e0
// 地址: 0x1408fc1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cec8d8 s> *rbx_1)
    _Init_thread_header(&data_143cec8d8)
    
    if (data_143cec8d8 == 0xffffffff)
        sub_140b58260(&data_143cec8d0, u"SharedWorldData", 1)
        _Init_thread_footer(&data_143cec8d8)

int32_t result = *rbx_1

if (data_143cec8e8 s> result)
    result = _Init_thread_header(&data_143cec8e8)
    
    if (data_143cec8e8 == 0xffffffff)
        sub_140b58260(&data_143cec8e0, u"AlignmentTransforms", 1)
        return _Init_thread_footer(&data_143cec8e8)

return result
