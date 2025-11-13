// 函数: sub_14139c8b0
// 地址: 0x14139c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3d0) s>= 3 && data_143f0f225 != 0)
    TEB* gsbase
    
    if (data_143ec6f48
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ec6f48)
        
        if (data_143ec6f48 == 0xffffffff)
            int64_t* rcx_3 = data_143db18d0
            
            if (rcx_3 == 0)
                sub_140a53c40()
                rcx_3 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_7 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.MSAA.CompositingSampleCount", r8_1)
            
            if (rax_7 != 0)
                int64_t rdx_2 = *rax_7
                rax_7 = (*(rdx_2 + 0x58))(rax_7, rdx_2)
            
            data_143ec6f40 = rax_7
            _Init_thread_footer(&data_143ec6f48)
    
    int32_t rdx_1 = *(data_143ec6f40 + 4)
    
    if (rdx_1 s> 1)
        if (rdx_1 s<= 2)
            return 2
        
        if (rdx_1 s<= 4)
            return 4
        
        return 8

return 1
