// 函数: sub_140ec00f0
// 地址: 0x140ec00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e29ff0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e29ff0)
    
    if (data_143e29ff0 == 0xffffffff)
        data_143e29fe0 = 0
        data_143e29fe8 = 0
        sub_1405947f0(&data_143e29fe0, 0x16)
        int32_t rax_4 = data_143e29fe8.d + 0x16
        bool cond:0 = rax_4 s<= data_143e29fe8:4.d
        data_143e29fe8.d = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143e29fe0)
        
        UnDecorator::getReferenceType(data_143e29fe0, u"FDockingDragOperation", 0x2c)
        atexit(&data_142ccb550)
        _Init_thread_footer(&data_143e29ff0)

return &data_143e29fe0
