// 函数: sub_14211e870
// 地址: 0x14211e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142134ab0(arg1, sub_142134d70(arg1))
uint64_t rdx

if ((arg1[0x1b].b & 1) != 0)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        int32_t rdi_3 = 1 << (data_1439c7a08).b | arg1[0x10].d | data_143f4a12c
        rdx = 0
        int64_t var_38 = 0
        int32_t var_2c_1 = 0
        
        if (rdi_3 != 0)
            void* r13_1 = (sx.q(data_143a30368:0xc.d) << 2) + 0x73
            
            while (true)
                int32_t rcx_2 = 0
                int32_t rbp_3 = neg.d(rdi_3) & rdi_3
                int32_t r15_1 = rdi_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rbp_3)
                
                if (rbp_3 != 0)
                    rcx_2 = temp0_1
                
                rdi_3 ^= rbp_3
                int64_t r14_1 = sx.q(rcx_2)
                int32_t rbx_1 = 0
                int32_t r12_1 = (*U"1111")[r14_1]
                int32_t temp0_2 = rdx.d
                
                if (temp0_2 s< 0)
                    int32_t var_30_1 = 0
                    
                    if (temp0_2 != 0)
                        sub_1405c5570(&var_38, 0)
                        rdx = zx.q(var_2c_1)
                        rbx_1 = var_30_1
                
                int32_t var_30_2 = rbx_1 + 1
                
                if (rbx_1 + 1 s> rdx.d)
                    sub_1405a4d70(&var_38)
                
                *(var_38 + (sx.q(rbx_1) << 3)) = arg1[r14_1 + r13_1]
                sub_14211ee30(arg1, r12_1, &var_38, 0)
                
                if (rbp_3 == r15_1)
                    break
                
                rdx = zx.q(var_2c_1)
            
            int64_t rcx_7 = var_38
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)

rdx.b = 1
(*(*arg1 + 0x458))(arg1, rdx)
return sub_142129e50(arg1) __tailcall
