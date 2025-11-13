// 函数: sub_141067460
// 地址: 0x141067460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg6

if (rax == 0)
    TEB* gsbase
    
    if (data_143e2c988
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c988)
        
        if (data_143e2c988 == 0xffffffff)
            int64_t* rcx_6 = data_143db18d0
            
            if (rcx_6 == 0)
                sub_140a53c40()
                rcx_6 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            int64_t* rax_7 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.DefaultBackBufferPixelFormat", r8_2)
            
            if (rax_7 != 0)
                rax_7 = (*(*rax_7 + 0x58))(rax_7)
            
            data_143e2c980 = rax_7
            _Init_thread_footer(&data_143e2c988)
    
    rax = sub_142295d40(sub_14229df30(*data_143e2c980))

char r9 = arg5
arg5.d = rax
return sub_1410682f0(arg2, arg3, arg4, r9, arg5) __tailcall
