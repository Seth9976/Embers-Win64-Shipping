// 函数: sub_140af2bc0
// 地址: 0x140af2bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5dc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5dc0)
    
    if (data_143de5dc0 == 0xffffffff)
        sub_140ae4540(&data_143de5d18)
        data_143de5db8 = &data_143de5d18
        atexit(sub_142cbf5c0)
        _Init_thread_footer(&data_143de5dc0)

return data_143de5db8 + 0x78
