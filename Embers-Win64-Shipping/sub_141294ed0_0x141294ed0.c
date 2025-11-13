// 函数: sub_141294ed0
// 地址: 0x141294ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x3b4))
uint64_t result

if (r9.d != 0xb && r9.d != 0x1e)
    int64_t rdx = r9 * 5
    
    if ((*(&data_143f025f0 + (rdx << 2)) != data_143f025b8
            || (*((rdx << 2) + &data_143f025fc) & 1) == 0)
            && (r9.d u> 0x30 || not(test_bit(0x1000030320000, r9)))
            && *(&data_143f025f0 + r9 * 0x14) != data_143f025c0)
        if (r9.d != 0x18 && ((*(r9 * 0x14 + &data_143f025fc) u>> 4).b & 1) == 0)
        label_141294f83:
            
            if (*(arg3 + 0xd75) == 0 && *(arg3 + 0xd72) == 0 && sub_1422eb710().b != 0)
                int64_t rbx_1 = 0
                TEB* gsbase
                
                if (data_143ea9968 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    int64_t r8
                    result, r8 = _Init_thread_header(&data_143ea9968)
                    
                    if (data_143ea9968 == 0xffffffff)
                        int64_t* rcx_2 = data_143db18d0
                        
                        if (rcx_2 == 0)
                            sub_140a53c40()
                            rcx_2 = data_143db18d0
                        
                        r8.b = 1
                        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.MobileMSAA", r8)
                        int64_t rax_5
                        
                        if (rax_4 == 0)
                            rax_5 = 0
                        else
                            int64_t rdx_2 = *rax_4
                            rax_5 = (*(rdx_2 + 0x58))(rax_4, rdx_2)
                        
                        data_143ea9960 = rax_5
                        _Init_thread_footer(&data_143ea9968)
                
                int64_t rdi_1 = data_143ea9960
                
                if (rdi_1 == 0)
                    result.b = 1
                    return result
                
                if (data_143de5480 != 0)
                    rbx_1.b = GetCurrentThreadId().d != data_143de5470
                
                if (*(rdi_1 + (rbx_1 << 2)) s<= 1)
                    result.b = 1
                    return result
                
                result = zx.q(*(arg1 + 0x3b4))
                
                if (result.d u<= 0x16 && test_bit(0x42c000, result.d))
                    result.b = 1
                    return result
        else if (data_143f0f1b5 == 0 && data_143f0f1b6 == 0)
            goto label_141294f83

result.b = 0
return result
