// 函数: sub_1412c5c30
// 地址: 0x1412c5c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint32_t result
TEB* gsbase

if (data_143e2ce00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143e2ce00)
    
    if (data_143e2ce00 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx + 0xb0))(rcx, u"r.Mobile.AllowMovableDirectionalLights", r8_1)
        int64_t rax_3
        
        if (rax_2 == 0)
            rax_3 = 0
        else
            int64_t rdx_1 = *rax_2
            rax_3 = (*(rdx_1 + 0x58))(rax_2, rdx_1)
        
        data_143e2cdf8 = rax_3
        _Init_thread_footer(&data_143e2ce00)

int64_t rdi = data_143e2cdf8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (*(rdi + (rbx << 2)) != 0)
    result.b = not.b(*(arg1 + 0xc))
    
    if ((result.b & 1) != 0)
        result.b = 1
        return result

result.b = 0
return result
