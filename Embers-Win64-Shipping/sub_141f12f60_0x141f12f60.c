// 函数: sub_141f12f60
// 地址: 0x141f12f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143f3b0b0 s> result.d)
    int64_t r8
    result, r8 = _Init_thread_header(&data_143f3b0b0)
    
    if (data_143f3b0b0 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        r8.b = 1
        int64_t* rax_2 = (*(*rcx + 0xb0))(rcx, u"r.Shadow.DistanceScale", r8)
        int64_t rax_3
        
        if (rax_2 == 0)
            rax_3 = 0
        else
            int64_t rdx = *rax_2
            rax_3 = (*(rdx + 0x60))(rax_2, rdx)
        
        data_143f3b0a8 = rax_3
        result = _Init_thread_footer(&data_143f3b0b0)

if (arg3 s> 0)
    result = data_143f3b0a8
    float zmm6[0x4] = zx.o(0)
    float zmm0[0x4] = *(result + 4)
    
    if (not(zmm0[0] < 0f))
        zmm6 = __minss_xmmss_memss(zmm0[0], 0x40000000)
    
    if (arg2 == 0)
        int64_t rdi_1 = data_143f3ae38
        
        if (data_143de5480 != 0)
            result = GetCurrentThreadId()
            rbx.b = result.d != data_143de5470
        
        zmm0 = *(rdi_1 + (rbx << 2))
    else
        zmm0 = *(arg1 + 0x1ac)
    
    zmm0[0] = zmm0[0] * zmm6[0]

return result
