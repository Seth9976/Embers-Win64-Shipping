// 函数: sub_140b1aa70
// 地址: 0x140b1aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6ce0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6ce0)
    
    if (data_143de6ce0 == 0xffffffff)
        sub_1405947f0(&data_143de6cd0, 6)
        int32_t rax_4 = data_143de6cd8 + 6
        bool cond:0 = rax_4 s<= data_143de6cdc
        data_143de6cd8 = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143de6cd0)
        
        UnDecorator::getReferenceType(data_143de6cd0, u"1.0.0", 0xc)
        atexit(sub_142cbfc70)
        _Init_thread_footer(&data_143de6ce0)

return &data_143de6cd0
