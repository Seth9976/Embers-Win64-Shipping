// 函数: sub_1419a2670
// 地址: 0x1419a2670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)

if ((rbx.d u> 0x1e || not(test_bit(0x6562c800, rbx.d)))
        && (*(&data_143f025fc + rbx * 0x14) & 1) == 0)
    void* rax_1
    rax_1.b = 0
    return &data_143f02500

int64_t rdi = 0
uint32_t result
TEB* gsbase

if (data_143f1b028 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f1b028)
    
    if (data_143f1b028 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.Mobile.UseGPUSceneTexture", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143f1b020 = rax_6
        _Init_thread_footer(&data_143f1b028)

if (rbx.d != 0x18)
    int64_t rbx_1 = data_143f1b020
    
    if (rbx_1 != 0 && data_143de5480 != 0)
        rdi.b = GetCurrentThreadId() != data_143de5470
    
    if (rbx_1 == 0 || *(rbx_1 + (rdi << 2)) == 0)
        return 0

result.b = 1
return result
