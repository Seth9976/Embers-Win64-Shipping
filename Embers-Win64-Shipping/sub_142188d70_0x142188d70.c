// 函数: sub_142188d70
// 地址: 0x142188d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb0) |= 0xc0
int32_t i = 0
int32_t rax = data_14401b1a0
int32_t i_1 = 0
int32_t result
TEB* gsbase

if (*(arg1 + 0x48) s> 0)
    void* r12_1 = gsbase->ThreadLocalStoragePointer + (zx.q(rax) << 3)
    int64_t* rcx_1 = nullptr
    int64_t* arg_10 = nullptr
    
    do
        void* r13_1 = *(rcx_1 + *(arg1 + 0x40))
        
        if (r13_1 != 0)
            int32_t j = 0
            
            if (*(r13_1 + 0x48) s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    void* rsi_1 = *(r14_1 + *(r13_1 + 0x40))
                    
                    if (rsi_1 != 0)
                        int32_t k = 0
                        
                        if (*(rsi_1 + 0x40) s> 0)
                            int64_t* rbx_1 = nullptr
                            
                            do
                                int64_t* rcx_3 = *(rbx_1 + *(rsi_1 + 0x38))
                                
                                if (rcx_3 != 0 && (*(*rcx_3 + 0x340))(rcx_3) == 0)
                                    *(arg1 + 0xb0) &= 0xbf
                                    result = *(0x14 + *r12_1)
                                    
                                    if (data_143f4d838 s> result)
                                        result = _Init_thread_header(&data_143f4d838)
                                        
                                        if (data_143f4d838 == 0xffffffff)
                                            sub_140af2b60()
                                            data_143f4d834 = sub_140b21a10(&data_143dbb3f0, 
                                                LogThreadedParticleTicking")
                                            result = _Init_thread_footer(&data_143f4d838)
                                    
                                    if (data_143f4d834 == 0)
                                        return result
                                
                                k += 1
                                rbx_1 = &rbx_1[1]
                            while (k s< *(rsi_1 + 0x40))
                    
                    j += 1
                    r14_1 = &r14_1[1]
                while (j s< *(r13_1 + 0x48))
                
                rcx_1 = arg_10
                i = i_1
        
        i += 1
        rcx_1 = &rcx_1[1]
        i_1 = i
        arg_10 = rcx_1
    while (i s< *(arg1 + 0x48))
    
    rax = data_14401b1a0

result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(rax) << 3)))

if (data_143f4d838 s> result)
    result = _Init_thread_header(&data_143f4d838)
    
    if (data_143f4d838 == 0xffffffff)
        sub_140af2b60()
        data_143f4d834 = sub_140b21a10(&data_143dbb3f0, u"LogThreadedParticleTicking")
        return _Init_thread_footer(&data_143f4d838)

return result
