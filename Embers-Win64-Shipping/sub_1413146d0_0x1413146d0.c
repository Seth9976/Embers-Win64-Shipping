// 函数: sub_1413146d0
// 地址: 0x1413146d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eb9138 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb9138)
    
    if (data_143eb9138 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.PostProcessAAQuality", r8_1)
        
        if (rax_6 != 0)
            rax_6 = (*(*rax_6 + 0x58))(rax_6)
        
        data_143eb9130 = rax_6
        _Init_thread_footer(&data_143eb9138)

int64_t rbx = data_143eb9130
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_2 = *(rbx + (rcx_1 << 2))

if (rcx_2 s< 0)
    return 0

if (rcx_2 s< 5)
    return zx.q(rcx_2)

return 5
