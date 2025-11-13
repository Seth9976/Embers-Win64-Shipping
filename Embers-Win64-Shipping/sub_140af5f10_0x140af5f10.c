// 函数: sub_140af5f10
// 地址: 0x140af5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5b98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5b98)
    
    if (data_143de5b98 == 0xffffffff)
        sub_1405947f0(&data_143de5b88, 0xf)
        int32_t rax_4 = data_143de5b90 + 0xf
        bool cond:0 = rax_4 s<= data_143de5b94
        data_143de5b90 = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143de5b88)
        
        UnDecorator::getReferenceType(data_143de5b88, u" -Multiprocess", 0x1e)
        atexit(sub_142cbf600)
        _Init_thread_footer(&data_143de5b98)

return &data_143de5b88
