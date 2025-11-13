// 函数: sub_1411248a0
// 地址: 0x1411248a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e5eb88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e5eb88)
    
    if (data_143e5eb88 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.RefractionQuality", r8_1)
        
        if (rax_5 != 0)
            int64_t rdx_1 = *rax_5
            rax_5 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143e5eb80 = rax_5
        _Init_thread_footer(&data_143e5eb88)

return zx.q(*(data_143e5eb80 + 4))
