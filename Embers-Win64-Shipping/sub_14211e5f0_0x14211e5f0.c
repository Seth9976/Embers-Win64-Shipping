// 函数: sub_14211e5f0
// 地址: 0x14211e5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s> 1)
    int64_t rax
    rax.b = 1
    return rax

int64_t rbx = 0
uint32_t rax_2
TEB* gsbase

if (data_143f4c558 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    rax_2, r8_1 = _Init_thread_header(&data_143f4c558)
    
    if (data_143f4c558 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.Mobile.AllowDitheredLODTransition", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143f4c550 = rax_6
        _Init_thread_footer(&data_143f4c558)

int64_t rdi = data_143f4c550

if (rdi != 0)
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi + (rbx << 2)) != 0)
        rax_2.b = 1
        return rax_2

return 0
