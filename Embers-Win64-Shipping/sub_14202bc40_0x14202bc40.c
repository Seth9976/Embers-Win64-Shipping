// 函数: sub_14202bc40
// 地址: 0x14202bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f40778 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f40778)
    
    if (data_143f40778 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143f40770 = (*(*rcx_3 + 0xb0))(rcx_3, u"rhi.syncinterval", r8_1)
        _Init_thread_footer(&data_143f40778)

int64_t* rcx_2 = data_143f40770

if (rcx_2 == 0)
    return 0

jump(*(*rcx_2 + 0x90))
