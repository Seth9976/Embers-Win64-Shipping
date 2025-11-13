// 函数: sub_140ec01c0
// 地址: 0x140ec01c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e29fd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e29fd8)
    
    if (data_143e29fd8 == 0xffffffff)
        data_143e29fc8 = 0
        data_143e29fd0 = 0
        sub_1405947f0(&data_143e29fc8, 0x15)
        int32_t rax_4 = data_143e29fd0.d + 0x15
        bool cond:0 = rax_4 s<= data_143e29fd0:4.d
        data_143e29fd0.d = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143e29fc8)
        
        UnDecorator::getReferenceType(data_143e29fc8, u"FUICommandDragDropOp", 0x2a)
        atexit(sub_142ccb3b0)
        _Init_thread_footer(&data_143e29fd8)

return &data_143e29fc8
