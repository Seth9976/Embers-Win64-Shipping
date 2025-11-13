// 函数: sub_141bb1400
// 地址: 0x141bb1400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f31930 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31930)
    
    if (data_143f31930 == 0xffffffff)
        data_143f31920 = 0
        data_143f31928 = 0
        sub_1405947f0(&data_143f31920, 0xf)
        int32_t rax_4 = data_143f31928.d + 0xf
        bool cond:0 = rax_4 s<= data_143f31928:4.d
        data_143f31928.d = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143f31920)
        
        UnDecorator::getReferenceType(data_143f31920, u"FUMGDragDropOp", 0x1e)
        atexit(sub_142cf6630)
        _Init_thread_footer(&data_143f31930)

return &data_143f31920
