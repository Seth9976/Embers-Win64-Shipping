// 函数: sub_14245a890
// 地址: 0x14245a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f5f530 s> *rbx_1)
    _Init_thread_header(&data_143f5f530)
    
    if (data_143f5f530 == 0xffffffff)
        sub_140b58260(&data_143f5f528, u"bReplicates", 1)
        _Init_thread_footer(&data_143f5f530)

int32_t result = *rbx_1

if (data_143f5f540 s> result)
    result = _Init_thread_header(&data_143f5f540)
    
    if (data_143f5f540 == 0xffffffff)
        sub_140b58260(&data_143f5f538, u"bIsActive", 1)
        return _Init_thread_footer(&data_143f5f540)

return result
