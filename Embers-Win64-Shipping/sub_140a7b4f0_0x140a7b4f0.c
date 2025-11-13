// 函数: sub_140a7b4f0
// 地址: 0x140a7b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = 0
TEB* gsbase

while (true)
    int16_t rax_1 = (*u"LogFile")[rcx]
    rcx += 1
    
    if (rax_1 != arg2[rcx - 1])
        int64_t rcx_1 = -1
        char rax_8
        
        while (true)
            if ((*u"CachedReadFile")[1 + rcx_1] == arg2[rcx_1 + 1])
                rcx_1 += 2
                
                if (rcx_1 == 0xf)
                    if (data_143db7af8 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143db7af8)
                        
                        if (data_143db7af8 == 0xffffffff)
                            void*** rax_21 = j_sub_140a82f30(0x10)
                            
                            if (rax_21 != 0)
                                rax_21[1] = 0
                                *rax_21 = &data_142e61a78
                            
                            data_143db7af0 = rax_21
                            atexit(sub_142cbd1b0)
                            _Init_thread_footer(&data_143db7af8)
                    
                    return data_143db7af0
                
                if ((*u"CachedReadFile")[rcx_1] == arg2[rcx_1])
                    continue
            
            j_sub_140b3db50()
            rax_8 = sub_140b41300(&data_143de7d78, arg2)
            break
        
        if (rax_8 != 0)
            void arg_18
            int64_t rbx_1 = *sub_140b58260(&arg_18, arg2, 1)
            j_sub_140b3db50()
            int64_t* rax_10 = sub_140b407e0(&data_143de7d78, rbx_1)
            
            if (rax_10 != 0)
                return (*(*rax_10 + 0x40))(rax_10)
        
        return 0
    
    if (rcx == 8)
        break

if (data_143db7ae8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7ae8)
    
    if (data_143db7ae8 == 0xffffffff)
        void*** rax_19 = j_sub_140a82f30(0x10)
        
        if (rax_19 != 0)
            rax_19[1] = 0
            *rax_19 = &data_142e614d8
        
        data_143db7ae0 = rax_19
        atexit(sub_142cbd190)
        _Init_thread_footer(&data_143db7ae8)

return data_143db7ae0
