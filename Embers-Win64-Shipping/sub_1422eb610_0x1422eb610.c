// 函数: sub_1422eb610
// 地址: 0x1422eb610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase

if (data_143f564d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f564d0)
    
    if (data_143f564d0 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.Mobile.UseHWsRGBEncoding", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143f564c8 = rax_6
        _Init_thread_footer(&data_143f564d0)

int64_t rdi = data_143f564c8

if (rdi != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rdi == 0 || *(rdi + (rbx << 2)) != 1)
    rbx.b = 0
else
    rbx.b = 1

if (sub_1422eb710() == 0 && rbx.b != 0)
    return 1

return 0
