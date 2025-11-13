// 函数: sub_142032370
// 地址: 0x142032370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = data_143f5b298
uint64_t result

if (rdx != 0)
    void* rcx = *(rdx + 0x788)
    
    if (rcx != 0 && *(rcx + 0xc0) != 0
            && (*(arg1 + 0x80) != data_143a30330 || *(arg1 + 0x84) != data_143a30334))
        result.b = 1
        return result
    
    if (rcx != 0 && *(rcx + 0xc0) != 0)
        int64_t* rcx_1 = *(rcx + 0xb8)
        result = (*(*rcx_1 + 0x100))(rcx_1)
        int32_t rdx_1 = *(arg1 + 0x98)
        int32_t rcx_2
        
        if (rdx_1 == 0)
            rcx_2 = 0
        else if (rdx_1 == 1)
            rcx_2 = 1
        else
            rcx_2 = 2
        
        if (result.d != rcx_2)
            result.b = 1
            return result
        
        rdx = data_143f5b298
    
    if (rdx != 0)
        result = *(rdx + 0x788)
        int32_t rdi_1
        
        if (result != 0 && *(result + 0xc0) != 0)
            TEB* gsbase
            
            if (data_143f40728 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f40728)
                
                if (data_143f40728 == 0xffffffff)
                    int64_t* rcx_5 = data_143db18d0
                    
                    if (rcx_5 == 0)
                        sub_140a53c40()
                        rcx_5 = data_143db18d0
                    
                    int64_t r8_1
                    r8_1.b = 1
                    int64_t* rax_5 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.VSync", r8_1)
                    int64_t rax_6
                    
                    if (rax_5 == 0)
                        rax_6 = 0
                    else
                        int64_t rdx_2 = *rax_5
                        rax_6 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
                    
                    data_143f40720 = rax_6
                    _Init_thread_footer(&data_143f40728)
                
                rdx = data_143f5b298
            
            rdi_1.b = *data_143f40720 != 0
        
        if (result != 0 && *(result + 0xc0) != 0 && zx.d(*(arg1 + 0x28)) != rdi_1)
            result.b = 1
            return result
        
        if (rdx != 0)
            result = *(rdx + 0x788)
            
            if (result != 0 && *(result + 0xc0) != 0 && *(arg1 + 0x29) != *(rdx + 0xa71))
                result.b = 1
                return result

result.b = 0
return result
