// 函数: sub_141f59080
// 地址: 0x141f59080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x86] != 0)
    sub_141f6b830(arg1)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0
            && sub_141f27710(arg1) != 0)
        void* rax_4 = arg1[0x15]
        
        if (rax_4 == 0)
            rax_4 = sub_141ee69e0(arg1)
        
        uint32_t rsi_1 = zx.d(*(rax_4 + 0x118))
        int64_t* rdi_1 = *(arg1[0x86] + 0x58)
        
        if ((arg1[0xb5].b & 8) == 0)
            if ((*(*arg1 + 0x8b0))(arg1) == 0)
                if (sub_1423448e0(rdi_1, rsi_1) != 0)
                    sub_142337400(rdi_1)
                    sub_14205e180()
                    sub_142337630(rdi_1)
                    uint64_t var_18 = 0
                    int64_t var_10_1 = 0
                    sub_141972a50(rsi_1, &var_18)
                    uint64_t rcx_10 = var_18
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                else
                    void*** rax_13 = j_sub_140a82f30(0x128)
                    
                    if (rax_13 == 0)
                        arg1[0xb6] = 0
                    else
                        arg1[0xb6] = sub_14232add0(rax_13, arg1, rdi_1, rsi_1)
            else
                void*** rax_10 = j_sub_140a82f30(0xc8)
                
                if (rax_10 == 0)
                    arg1[0xb6] = 0
                else
                    arg1[0xb6] = sub_14232aba0(rax_10, arg1, rdi_1, rsi_1)
        else
            void*** rax_6 = j_sub_140a82f30(0x80)
            
            if (rax_6 == 0)
                arg1[0xb6] = 0
            else
                arg1[0xb6] = sub_14232b0d0(rax_6, arg1, rdi_1, rsi_1)
        
        (*(*arg1 + 0x8b8))(arg1, arg1[0xb6])

uint64_t result = sub_141f0e650(arg1, arg2)

if (arg1[0x86] == 0)
    return result

if (arg1[0xb6] != 0)
    (*(*arg1 + 0x8f8))(arg1)
    int32_t rcx_14 = arg1[0xab].d
    
    if (rcx_14 s>= 0 && rcx_14 s< *(arg1[0x86] + 0xe0))
        if ((*(arg1 + 0x5a6) & 0x40) != 0 || *data_143f3b7a0 == 0)
            arg1[0xa6].d = 0
            
            if (*(arg1 + 0x534) != 0)
                sub_1405a5410(&arg1[0xa5], 0)
        
        int64_t* rcx_16 = arg1[0xb6]
        (*(*rcx_16 + 0x20))(rcx_16, zx.q(arg1[0xab].d), arg1, &arg1[0xa5], &arg1[0xa7], 1)

return sub_141f76360(arg1)
