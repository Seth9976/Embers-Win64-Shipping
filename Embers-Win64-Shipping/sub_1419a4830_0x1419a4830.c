// 函数: sub_1419a4830
// 地址: 0x1419a4830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t rbx = sx.q(arg1)
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
uint32_t result

if (data_143f1b008 s> *r14_1)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f1b008)
    
    if (data_143f1b008 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.SimpleForwardShading", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143f1b000 = rax_5
        _Init_thread_footer(&data_143f1b008)

int64_t rsi = data_143f1b000
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

if (*(rsi + (rcx_1 << 2)) == 0)
    result.b = 0
else
    if (data_143f1aff8 s> *r14_1)
        _Init_thread_header(&data_143f1aff8)
        
        if (data_143f1aff8 == 0xffffffff)
            int64_t* rcx_5 = data_143db18d0
            
            if (rcx_5 == 0)
                sub_140a53c40()
                rcx_5 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            int64_t* rax_7 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.SupportSimpleForwardShading", r8_2)
            int64_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0
            else
                int64_t rdx_2 = *rax_7
                rax_8 = (*(rdx_2 + 0x58))(rax_7, rdx_2)
            
            data_143f1aff0 = rax_8
            _Init_thread_footer(&data_143f1aff8)
    
    if ((rbx.d u> 0x1b || not(test_bit(0x857c041, rbx.d)))
            && ((*(&data_143f025fc + rbx * 0x14) u>> 2).b & 1) == 0)
        result.b = 0
    else
        int64_t rbx_1 = data_143f1aff0
        
        if (data_143de5480 != 0)
            rdi.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rbx_1 + (rdi << 2)) == 0)
            result.b = 0
        else
            result.b = 1

return result
