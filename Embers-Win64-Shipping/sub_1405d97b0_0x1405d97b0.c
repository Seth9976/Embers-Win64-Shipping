// 函数: sub_1405d97b0
// 地址: 0x1405d97b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd7ef0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd7ef0)
    
    if (data_143cd7ef0 == 0xffffffff)
        __builtin_memcpy(&data_143cd7eb0, 
            "\x81\x0a\x95\x3f\x00\x00\x00\x00\x9d\x4a\xcc\x3f\x00\x00\x00\x00\x81\x0a\x95\x3f\x07\x95\x"
        "c8\xbe\xac\x1e\x50\xbf\x00\x00\x00\x00\x81\x0a\x95\x3f\x54\x1a\x01\x40\x00\x00\x00\x00\x00"
        "00\x00\x00", 
            0x30)
        data_143cd7ee0 = zx.o(0)
        _Init_thread_footer(&data_143cd7ef0)

return &data_143cd7eb0
