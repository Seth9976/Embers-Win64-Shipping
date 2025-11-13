// 函数: sub_1420e6390
// 地址: 0x1420e6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = *(arg1 + 0xb8)
    
    if (rax_1 != 0 && arg1 == *(rax_1 + 0x30))
        rax_1.b = 1
        return rax_1
    
    TEB* gsbase
    
    if (data_143f48458
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f48458)
        
        if (data_143f48458 == 0xffffffff)
            sub_140b58260(&data_143f48450, u"TransLevelMoveBuffer", 1)
            _Init_thread_footer(&data_143f48458)
    
    if (*(arg1 + 0x18) != data_143f48450)
        return *(arg1 + 0x1f4) u>> 5 & 1

int64_t rax
rax.b = 0
return rax
