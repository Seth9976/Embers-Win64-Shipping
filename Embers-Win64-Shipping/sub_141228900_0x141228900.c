// 函数: sub_141228900
// 地址: 0x141228900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
int64_t rdi = 0
uint32_t rax_1
TEB* gsbase

if (data_143e83e48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    rax_1, r8_1 = _Init_thread_header(&data_143e83e48)
    
    if (data_143e83e48 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.AllowStaticLighting", r8_1)
        int64_t rax_6
        
        if (rax_4 == 0)
            rax_6 = 0
        else
            rax_6 = (*(*rax_4 + 0x58))(rax_4)
        
        data_143e83e40 = rax_6
        _Init_thread_footer(&data_143e83e48)

int64_t rsi = data_143e83e40

if (rsi != 0 && data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

if (rsi == 0 || *(rsi + (rdi << 2)) != 0)
    rax_1.b = 1
else
    rax_1.b = 0

if (data_1439b6374 != 0 && rax_1.b != 0 && *(arg2 + 0x1148) s> 0)
    int64_t i_1 = sx.q(*(arg3 + 0xa8))
    
    if (i_1 s> 0)
        int64_t* r8 = *(arg3 + 0xa0)
        int64_t i
        
        do
            void* rcx_1 = *r8
            r8 = &r8[0xa48]
            rbx.b |= (*(rcx_1 + 0x28) u>> 0x1a).b & 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q(rbx.b)
