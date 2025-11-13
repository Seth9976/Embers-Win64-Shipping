// 函数: sub_140b27f10
// 地址: 0x140b27f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6d0c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6d0c)
    
    if (data_143de6d0c == 0xffffffff)
        int64_t rsi
        int64_t arg_18 = rsi
        void* rax_3
        
        if (sub_140af87c0().b != 0)
        label_140b280a0:
            rax_3.b = 1
        else
            sub_140af2b60()
            int16_t* i = &data_143dbb3f0
            void* i_1
            
            if (data_143dbb3f0 != 0)
                for (; i != 0; i = i_1)
                    int16_t rcx_2 = *i
                    i_1 = &i[1]
                    char rdx_1 = 0
                    rsi.b = 0
                    
                    if (rcx_2 == 0)
                        break
                    
                    while (true)
                        int16_t rbx_1 = rcx_2 - 0x20
                        
                        if (rcx_2 - 0x61 u> 0x19)
                            rbx_1 = rcx_2
                        
                        if (rsi.b == 0 && rdx_1 == 0 && rbx_1 == 0x53)
                            if (sub_140a546e0(i_1, u"aveToUserDir", 0xc) == 0)
                                break
                            
                            rdx_1 = 1
                        else if (rbx_1 - 0x41 u<= 0x19 || rbx_1 - 0x30 u<= 9)
                            rdx_1 = 1
                        else
                            rdx_1 = 0
                        
                        if (rbx_1 == 0x22)
                            rsi.b = rsi.b == 0
                        
                        rcx_2 = *i_1
                        i_1 += 2
                        
                        if (rcx_2 == 0)
                            goto label_140b28011
                    
                    if (i_1 == 2)
                        break
                    
                    if (i_1 - 2 u> &data_143dbb3f0 && (0xfffd & (*(i_1 - 4) - 0x2d)) == 0)
                        int32_t rax_10
                        
                        if (&data_143dbb3f0 u<= i_1 - 6)
                            rax_10 = iswspace(*(i_1 - 6))
                        
                        if (&data_143dbb3f0 u> i_1 - 6 || rax_10 != 0)
                            if (i_1 == -0x18)
                                goto label_140b280a0_2
                            
                            wint_t _C = *(i_1 + 0x18)
                            
                            if (_C == 0)
                                goto label_140b280a0_2
                            
                            if (iswspace(_C).d != 0)
                                goto label_140b280a0_2
        label_140b28011:
            
            if (sub_1405949a0().b != 0)
            label_140b280a0_1:
                rax_3.b = 1
            else if (*(sub_140b12800() + 8) s> 1)
            label_140b280a0_2:
                rax_3.b = 1
            else
                rax_3.b = 0
        
        data_143de6d08 = rax_3.b
        _Init_thread_footer(&data_143de6d0c)

return zx.q(data_143de6d08)
