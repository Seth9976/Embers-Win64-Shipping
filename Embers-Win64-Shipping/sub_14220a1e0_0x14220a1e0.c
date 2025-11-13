// 函数: sub_14220a1e0
// 地址: 0x14220a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1)

if (result.d u<= 9)
    switch (result)
        case 0
            int64_t var_10 = arg11
            int64_t* var_18 = arg10
            int64_t var_20 = arg9
            void* var_28 = arg8
            return sub_142217420(arg2, arg3, arg4, arg5, arg6, arg7)
        case 3
            int32_t r8_1 = 0
            int64_t rsi_1 = *(arg8 + 0x158)
            int64_t r11_1 = sx.q(*(arg5 + 0xe0))
            
            if (r11_1 s> 0)
                int64_t rdx_1 = 0
                
                while (true)
                    void* rcx_4 = *(arg5 + 0xd8)
                    
                    if ((*(arg5 + 0xd8) & 1) != 0)
                        rcx_4 = (rcx_4 s>> 1) + arg5 + 0xd8
                    
                    if (*(rcx_4 + (rdx_1 << 3)) == data_143f50e20)
                        break
                    
                    r8_1 += 1
                    rdx_1 += 1
                    
                    if (rdx_1 s>= r11_1)
                        goto label_14220a2fb
            
            int16_t* rdx_2
            
            if (r11_1 s<= 0 || r8_1 == 0xffffffff)
            label_14220a2fb:
                TEB* gsbase
                
                if (data_143ce8564 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143ce8564)
                    
                    if (data_143ce8564 == 0xffffffff)
                        data_143ce8560 = 0xffff
                        _Init_thread_footer(&data_143ce8564)
                
                rdx_2 = &data_143ce8560
            else
                void* rcx_8 = *(arg5 + 0xe8)
                
                if ((rcx_8.b & 1) != 0)
                    rcx_8 = (rcx_8 s>> 1) + arg5 + 0xe8
                
                rdx_2 = rcx_8 + (sx.q(r8_1) << 1)
            
            return sub_14108daf0(arg10, rdx_2, rsi_1)

return result
