// 函数: sub_141f135e0
// 地址: 0x141f135e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3b0c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3b0c0)
    
    if (data_143f3b0c0 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx + 0xb0))(rcx, u"r.GenerateMeshDistanceFields", r8_1)
        
        if (rax_5 != 0)
            int64_t rdx_2 = *rax_5
            rax_5 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
        
        data_143f3b0b8 = rax_5
        _Init_thread_footer(&data_143f3b0c0)

if (*(data_143f3b0b8 + 4) == 0)
    return (zx.o(0)).d

int32_t zmm0 = 0x38d1b717
int32_t zmm1 = *(data_143f3af08 + 4)

if (not(zmm1 f< 9.99999975e-05f))
    zmm0 = __minss_xmmss_memss(zmm1, 0x461c4000)

return zmm0 f* *(arg1 + 0x1c0)
