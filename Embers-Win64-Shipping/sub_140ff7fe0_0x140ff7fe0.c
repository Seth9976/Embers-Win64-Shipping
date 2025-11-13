// 函数: sub_140ff7fe0
// 地址: 0x140ff7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg6

if (rax == 0)
    TEB* gsbase
    
    if (data_143e2c150
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c150)
        
        if (data_143e2c150 == 0xffffffff)
            int64_t* rcx_5 = data_143db18d0
            
            if (rcx_5 == 0)
                sub_140a53c40()
                rcx_5 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_6 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.DefaultBackBufferPixelFormat", r8_1)
            
            if (rax_6 != 0)
                rax_6 = (*(*rax_6 + 0x58))(rax_6)
            
            data_143e2c148 = rax_6
            _Init_thread_footer(&data_143e2c150)
    
    rax = sub_142295d40(sub_14229df30(*data_143e2c148))

arg5.d = rax
jump(*(*arg2 + 0x40))
