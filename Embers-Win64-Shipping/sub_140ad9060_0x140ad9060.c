// 函数: sub_140ad9060
// 地址: 0x140ad9060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb240 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb240)
    
    if (data_143dbb240 == 0xffffffff)
        data_143dbb230 = 0xcc40a083
        data_143dbb234 = 0xadbf46e2
        data_143dbb238 = 0xa93d12bb
        data_143dbb23c = 0x525d7417
        _Init_thread_footer(&data_143dbb240)

return &data_143dbb230
