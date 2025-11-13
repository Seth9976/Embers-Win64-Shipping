// 函数: sub_140a7b410
// 地址: 0x140a7b410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db99d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db99d8)
    
    if (data_143db99d8 == 0xffffffff)
        sub_1405947f0(&data_143db99c8, 0x1d)
        int32_t rax_4 = data_143db99d0 + 0x1d
        bool cond:0 = rax_4 s<= data_143db99d4
        data_143db99d0 = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143db99c8)
        
        UnDecorator::getReferenceType(data_143db99c8, u"<MISSING STRING TABLE ENTRY>", 0x3a)
        atexit(sub_142cbd5c0)
        _Init_thread_footer(&data_143db99d8)

return &data_143db99c8
