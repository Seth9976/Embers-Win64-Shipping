// 函数: sub_1429c2a60
// 地址: 0x1429c2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
TEB* gsbase

if (data_143fed234 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143fed234)
    
    if (data_143fed234 == 0xffffffff)
        int64_t* rax_4 = j_sub_140a82f30(0x10)
        int64_t* arg_8 = rax_4
        
        if (rax_4 != 0)
            *rax_4 = 0
            rax_4[1].d = 0
        
        data_143cc6f18 = rax_4
        int64_t* rax_5 = j_sub_140a82f30(8)
        int64_t* rcx_2 = rax_5
        arg_8 = rax_5
        
        if (rax_5 == 0)
            rcx_2 = nullptr
        else
            *rcx_2 = &IlmThread_2_3::x3c722eb3::NullThreadPoolProvider::operator[]::NullThreadPoolProvider::`vftable'{for `IlmThread_2_3::ThreadPoolProvider'}
        
        int64_t** rdi = data_143cc6f18
        int64_t* rbx = *rdi
        int64_t* rax_6 = rbx
        bool z
        
        if (rax_6 == *rdi)
            *rdi = rcx_2
            z = true
        else
            rax_6 = *rdi
            z = false
        
        if (not(z))
            rbx = rax_6
        
        while (rdi[1].d s> 0)
            _Thrd_yield()
        
        if (rbx != 0)
            (*(*rbx + 0x20))(rbx)
            (**rbx)(rbx, 1)
        
        atexit(sub_142d15fa0)
        _Init_thread_footer(&data_143fed234)

return &data_143cc6f10
