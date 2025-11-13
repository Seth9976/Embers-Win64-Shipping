// 函数: sub_1419a8260
// 地址: 0x1419a8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t rbx = sx.q(arg1)
TEB* gsbase

if (data_143f1aff8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1aff8)
    
    if (data_143f1aff8 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SupportSimpleForwardShading", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143f1aff0 = rax_5
        _Init_thread_footer(&data_143f1aff8)

uint32_t result

if ((rbx.d u<= 0x1b && test_bit(0x857c041, rbx.d))
        || ((*(&data_143f025fc + rbx * 0x14) u>> 2).b & 1) != 0)
    int64_t rbx_1 = data_143f1aff0
    
    if (data_143de5480 != 0)
        rdi.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rdi << 2)) != 0)
        result.b = 1
        return result

result.b = 0
return result
