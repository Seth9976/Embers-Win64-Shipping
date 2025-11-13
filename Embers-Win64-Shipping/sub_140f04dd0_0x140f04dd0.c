// 函数: sub_140f04dd0
// 地址: 0x140f04dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f10)
    
    if (data_143e20f10 == 0xffffffff)
        data_143e20f00 = 0
        data_143e20f08 = 0
        sub_1405947f0(&data_143e20f00, 0x17)
        int32_t rax_4 = data_143e20f08.d + 0x17
        bool cond:0 = rax_4 s<= data_143e20f08:4.d
        data_143e20f08.d = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143e20f00)
        
        UnDecorator::getReferenceType(data_143e20f00, u"FExternalDragOperation", 0x2e)
        atexit(&data_142cca2d0)
        _Init_thread_footer(&data_143e20f10)

return &data_143e20f00
