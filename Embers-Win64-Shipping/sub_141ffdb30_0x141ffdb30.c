// 函数: sub_141ffdb30
// 地址: 0x141ffdb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char rax = sub_140b21a10(&data_143dbb3f0, u"Windowed")
char rax_1

if (rax == 0)
    sub_140af2b60()
    rax_1 = sub_140b21a10(&data_143dbb3f0, u"SimMobile")

if (rax != 0 || rax_1 != 0)
    *arg3 = 2
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"FullScreen") != 0)
        TEB* gsbase
        int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
        
        if (data_143f3f410 s> *rsi_2)
            _Init_thread_header(&data_143f3f410)
            
            if (data_143f3f410 == 0xffffffff)
                int64_t* rcx_4 = data_143db18d0
                
                if (rcx_4 == 0)
                    sub_140a53c40()
                    rcx_4 = data_143db18d0
                
                int64_t r8_2
                r8_2.b = 1
                int64_t* rax_9 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.FullScreenMode", r8_2)
                int64_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0
                else
                    int64_t rdx_2 = *rax_9
                    rax_10 = (*(rdx_2 + 0x58))(rax_9, rdx_2)
                
                data_143f3f408 = rax_10
                _Init_thread_footer(&data_143f3f410)
        
        int32_t rcx_1 = *data_143f3f408
        int32_t rdi_1
        rdi_1.b = rcx_1 != 0
        *arg3 = rdi_1
        
        if (rcx_1 == 0)
            if (data_143f3f418 s> *rsi_2)
                _Init_thread_header(&data_143f3f418)
                
                if (data_143f3f418 == 0xffffffff)
                    sub_140af2b60()
                    char rax_11
                    
                    if (sub_140b21a10(&data_143dbb3f0, u"d3d12") != 0)
                        rax_11 = 1
                    else
                        sub_140af2b60()
                        rax_11 = sub_140b21a10(&data_143dbb3f0, u"dx12")
                        
                        if (rax_11 != 0)
                            rax_11 = 1
                    
                    data_143f3f414 = rax_11
                    _Init_thread_footer(&data_143f3f418)
            
            if (data_143f3f414 != 0)
                *arg3 = 1

return sub_1420019f0(arg1, arg2, arg3, 0) __tailcall
