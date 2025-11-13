// 函数: sub_1417f0bd0
// 地址: 0x1417f0bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int512_t result

if (data_143ef98d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    r8_1, result = _Init_thread_header(&data_143ef98d8)
    
    if (data_143ef98d8 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"vr.pixeldensity", r8_1)
        
        if (rax_4 != 0)
            int64_t rdx_1 = *rax_4
            rax_4 = (*(rdx_1 + 0x60))(rax_4, rdx_1)
        
        data_143ef98d0 = rax_4
        _Init_thread_footer(&data_143ef98d8)

result.o = *data_143ef98d0
return result
