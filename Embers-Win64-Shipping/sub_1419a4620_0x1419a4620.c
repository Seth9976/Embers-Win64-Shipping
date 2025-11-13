// 函数: sub_1419a4620
// 地址: 0x1419a4620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
uint32_t result

if (sub_140b21a10(&data_143dbb3f0, &data_14300a1d0).b == 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"nohdr").b != 0)
        result.b = 0
        return result
    
    int64_t rbx_1 = 0
    TEB* gsbase
    
    if (data_143f1a998
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        int64_t r8_1
        result, r8_1 = _Init_thread_header(&data_143f1a998)
        
        if (data_143f1a998 == 0xffffffff)
            int64_t* rcx_2 = data_143db18d0
            
            if (rcx_2 == 0)
                sub_140a53c40()
                rcx_2 = data_143db18d0
            
            r8_1.b = 1
            int64_t* rax_2 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.AllowHDR", r8_1)
            int64_t rax_3
            
            if (rax_2 == 0)
                rax_3 = 0
            else
                int64_t rdx_2 = *rax_2
                rax_3 = (*(rdx_2 + 0x58))(rax_2, rdx_2)
            
            data_143f1a990 = rax_3
            _Init_thread_footer(&data_143f1a998)
    
    int64_t rdi_1 = data_143f1a990
    
    if (rdi_1 == 0)
        result.b = 0
        return result
    
    if (data_143de5480 != 0)
        rbx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rbx_1 << 2)) == 0)
        result.b = 0
        return result

result.b = 1
return result
