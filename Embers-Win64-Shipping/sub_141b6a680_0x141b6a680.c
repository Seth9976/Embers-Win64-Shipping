// 函数: sub_141b6a680
// 地址: 0x141b6a680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f2f130 s> *rdi_1)
    _Init_thread_header(&data_143f2f130)
    
    if (data_143f2f130 == 0xffffffff)
        atexit(sub_142cf5f90)
        _Init_thread_footer(&data_143f2f130)

int64_t rbx = 0

if (data_143f2f140 s> *rdi_1)
    _Init_thread_header(&data_143f2f140)
    
    if (data_143f2f140 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_7 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.OneFrameThreadLag", r8_2)
        int64_t rax_5
        
        if (rax_7 == 0)
            rax_5 = 0
        else
            int64_t rdx_3 = *rax_7
            rax_5 = (*(rdx_3 + 0x58))(rax_7, rdx_3)
        
        data_143f2f138 = rax_5
        _Init_thread_footer(&data_143f2f140)

int64_t rdi_2 = data_143f2f138

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int128_t entry_zmm2
int128_t entry_zmm3
return sub_1423f1ff0(&data_143f2f108, *(rdi_2 + (rbx << 2)) != 0, entry_zmm2, entry_zmm3) __tailcall
