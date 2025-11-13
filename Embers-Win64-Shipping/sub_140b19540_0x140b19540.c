// 函数: sub_140b19540
// 地址: 0x140b19540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6cc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6cc8)
    
    if (data_143de6cc8 == 0xffffffff)
        _vfprintf_p_l(&data_143de6cb0, u"Message", u"MessageDialog")
        atexit(sub_142cbf990)
        _Init_thread_footer(&data_143de6cc8)

return &data_143de6cb0
