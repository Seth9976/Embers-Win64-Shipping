// 函数: sub_142032860
// 地址: 0x142032860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143f5b298

if (rax != 0)
    rax = *(rax + 0x788)
    
    if (rax != 0 && *(rax + 0xc0) != 0)
        TEB* gsbase
        
        if (data_143f40728
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f40728)
            
            if (data_143f40728 == 0xffffffff)
                int64_t* rcx_1 = data_143db18d0
                
                if (rcx_1 == 0)
                    sub_140a53c40()
                    rcx_1 = data_143db18d0
                
                int64_t r8_1
                r8_1.b = 1
                int64_t* rax_6 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.VSync", r8_1)
                int64_t rax_8
                
                if (rax_6 == 0)
                    rax_8 = 0
                else
                    rax_8 = (*(*rax_6 + 0x58))(rax_6)
                
                data_143f40720 = rax_8
                _Init_thread_footer(&data_143f40728)
        
        int32_t rbx
        rbx.b = *data_143f40720 != 0
        uint32_t rax_4
        rax_4.b = zx.d(*(arg1 + 0x28)) != rbx
        return rax_4

rax.b = 0
return rax
