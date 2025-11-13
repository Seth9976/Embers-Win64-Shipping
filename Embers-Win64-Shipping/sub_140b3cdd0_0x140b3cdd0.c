// 函数: sub_140b3cdd0
// 地址: 0x140b3cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143de8180

if (result != 0)
    return result

TEB* gsbase

if (data_143de82d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de82d0)
    
    if (data_143de82d0 == 0xffffffff)
        sub_140b2daf0(&data_143de8190)
        atexit(sub_142cc05d0)
        _Init_thread_footer(&data_143de82d0)

data_143de8180 = &data_143de8190
return &data_143de8190
