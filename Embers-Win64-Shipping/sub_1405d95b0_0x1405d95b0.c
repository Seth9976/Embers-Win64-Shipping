// 函数: sub_1405d95b0
// 地址: 0x1405d95b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xbc) != 0)
    if (*(arg1 + 0xc0) == 1)
        return 0xa
    
    return 2

int64_t rbx = 0
TEB* gsbase

if (data_143cd7e80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd7e80)
    
    if (data_143cd7e80 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_8 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.DefaultBackBufferPixelFormat", r8_1)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_1 = *rax_8
            rax_9 = (*(rdx_1 + 0x58))(rax_8, rdx_1)
        
        data_143cd7e78 = rax_9
        _Init_thread_footer(&data_143cd7e80)

int64_t rsi = data_143cd7e78

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_3 = sub_142295d40(sub_14229df30(*(rsi + (rbx << 2))))

if (*(arg1 + 0x30) != 3)
    return 2

if (rcx_3 == 0x12)
    rcx_3 = 2

return zx.q(rcx_3)
