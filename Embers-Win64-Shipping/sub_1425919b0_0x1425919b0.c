// 函数: sub_1425919b0
// 地址: 0x1425919b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f6dad8 s> *rbx_1)
    _Init_thread_header(&data_143f6dad8)
    
    if (data_143f6dad8 == 0xffffffff)
        sub_140b58260(&data_143f6dad0, u"ReplicatedMesh", 1)
        _Init_thread_footer(&data_143f6dad8)

if (data_143f6dae8 s> *rbx_1)
    _Init_thread_header(&data_143f6dae8)
    
    if (data_143f6dae8 == 0xffffffff)
        sub_140b58260(&data_143f6dae0, u"ReplicatedPhysAsset", 1)
        _Init_thread_footer(&data_143f6dae8)

if (data_143f6daf8 s> *rbx_1)
    _Init_thread_header(&data_143f6daf8)
    
    if (data_143f6daf8 == 0xffffffff)
        sub_140b58260(&data_143f6daf0, u"ReplicatedMaterial0", 1)
        _Init_thread_footer(&data_143f6daf8)

int32_t result = *rbx_1

if (data_143f6db08 s> result)
    result = _Init_thread_header(&data_143f6db08)
    
    if (data_143f6db08 == 0xffffffff)
        sub_140b58260(&data_143f6db00, u"ReplicatedMaterial1", 1)
        return _Init_thread_footer(&data_143f6db08)

return result
