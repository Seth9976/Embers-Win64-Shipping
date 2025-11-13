// 函数: sub_1420e4310
// 地址: 0x1420e4310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase

if (data_143f483f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f483f0)
    
    if (data_143f483f0 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.ScreenPercentage", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x60))(rax_4, rdx_1)
        
        data_143f483e8 = rax_5
        _Init_thread_footer(&data_143f483f0)

int64_t rdi = data_143f483e8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

float result = *(rdi + (rbx << 2)) * 0.00999999978f

if (result f> (zx.o(0)).d)
    return result

return 0x3f800000
