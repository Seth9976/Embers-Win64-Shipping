// 函数: sub_1405d9260
// 地址: 0x1405d9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x30)

if (rax != 3 && rax != 0)
    return 0

int64_t rbx = 0
TEB* gsbase

if (data_143cd7e90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd7e90)
    
    if (data_143cd7e90 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.PostProcessing.PropagateAlpha", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143cd7e88 = rax_6
        _Init_thread_footer(&data_143cd7e90)

int64_t rdi = data_143cd7e88

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t result

if (sub_14229df10(*(rdi + (rbx << 2))) == 2)
    result.b = 3
else
    result.b = 4
    
    if (arg2 == 0)
        result.b = 3

return result
