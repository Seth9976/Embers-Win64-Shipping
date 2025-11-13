// 函数: sub_140fb4180
// 地址: 0x140fb4180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2b7f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b7f0)
    
    if (data_143e2b7f0 == 0xffffffff)
        data_143e2b7e0 = 0
        data_143e2b7e8 = 0
        sub_1405947f0(&data_143e2b7e0, 0xf)
        int32_t rax_4 = data_143e2b7e8.d + 0xf
        bool cond:0 = rax_4 s<= data_143e2b7e8:4.d
        data_143e2b7e8.d = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143e2b7e0)
        
        UnDecorator::getReferenceType(data_143e2b7e0, u"FColorDragDrop", 0x1e)
        atexit(&data_142ccc1b0)
        _Init_thread_footer(&data_143e2b7f0)

return &data_143e2b7e0
