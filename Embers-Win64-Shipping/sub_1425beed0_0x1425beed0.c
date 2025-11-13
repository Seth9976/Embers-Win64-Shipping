// 函数: sub_1425beed0
// 地址: 0x1425beed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f70208 s> *rbx_1)
    _Init_thread_header(&data_143f70208)
    
    if (data_143f70208 == 0xffffffff)
        sub_140b58260(&data_143f70200, u"bHighPriorityLoading", 1)
        _Init_thread_footer(&data_143f70208)

if (data_143f70218 s> *rbx_1)
    _Init_thread_header(&data_143f70218)
    
    if (data_143f70218 == 0xffffffff)
        sub_140b58260(&data_143f70210, u"WorldGravityZ", 1)
        _Init_thread_footer(&data_143f70218)

if (data_143f70228 s> *rbx_1)
    _Init_thread_header(&data_143f70228)
    
    if (data_143f70228 == 0xffffffff)
        sub_140b58260(&data_143f70220, u"TimeDilation", 1)
        _Init_thread_footer(&data_143f70228)

if (data_143f70238 s> *rbx_1)
    _Init_thread_header(&data_143f70238)
    
    if (data_143f70238 == 0xffffffff)
        sub_140b58260(&data_143f70230, u"MatineeTimeDilation", 1)
        _Init_thread_footer(&data_143f70238)

if (data_143f70248 s> *rbx_1)
    _Init_thread_header(&data_143f70248)
    
    if (data_143f70248 == 0xffffffff)
        sub_140b58260(&data_143f70240, u"PauserPlayerState", 1)
        _Init_thread_footer(&data_143f70248)

void* result = *(*arg2 + 0xa0)

if (result != 0)
    return *(result + 0x28)

void* result_1 = result
return result
