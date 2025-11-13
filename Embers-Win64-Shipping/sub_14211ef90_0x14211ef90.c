// 函数: sub_14211ef90
// 地址: 0x14211ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    char var_30_1 = arg2
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
        return sub_14211ef10(arg1, arg2)
    
    if (data_143f138f4 == rax_1)
        if (data_143de5480 == rax_1)
            return sub_14211ef10(arg1, arg2)
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            return sub_14211ef10(arg1, arg2)
    
    void var_28
    int64_t* rax_3 = sub_142122420(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = arg1.o
    void* rcx_2 = *rax_3
    int32_t r8_2 = rax_3[2].d
    int64_t* rdx = rax_3[1]
    int64_t* rbx_1 = *(rcx_2 + 0x28)
    int64_t* arg_20 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_20
    
    result = sub_1405e48c0(rcx_2, rdx, r8_2, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_20)

return result
