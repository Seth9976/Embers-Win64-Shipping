// 函数: sub_1422a9f50
// 地址: 0x1422a9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
TEB* gsbase
uint32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143f53328 s> result)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f53328)
    
    if (data_143f53328 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.AllowStaticLighting", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143f53320 = rax_4
        result = _Init_thread_footer(&data_143f53328)

int64_t rbp = data_143f53320

if (data_143de5480 != 0)
    result = GetCurrentThreadId()
    rdi.b = result != data_143de5470

if (*(rbp + (rdi << 2)) != 0)
    if (*(arg1 + 8) != 0)
        *(arg1 + 8) = 0
        
        if (arg2 != 0)
            (*(*arg2 + 0x138))(arg2, arg1)
    
    *(arg1 + 0xc) = data_143dbb1f8.q
    result = data_143dbb200
    *(arg1 + 0x14) = result

return result
