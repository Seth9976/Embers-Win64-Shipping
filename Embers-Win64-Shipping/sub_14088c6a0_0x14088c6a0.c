// 函数: sub_14088c6a0
// 地址: 0x14088c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1)

if (result.d u<= 9)
    switch (result)
        case 0, 5, 8
            int64_t var_10 = arg11
            int64_t* var_18 = arg10
            int64_t var_20 = arg9
            void* var_28 = arg8
            int32_t var_30 = arg7
            return sub_14088e340(arg2, arg3, arg4, arg5, arg6)
        case 3
            int32_t r8 = 0
            int64_t rsi_1 = *(arg8 + 0x168)
            int64_t r11_1 = sx.q(*(arg5 + 0xe0))
            
            if (r11_1 s> 0)
                int64_t rdx = 0
                
                while (true)
                    void* rcx_3 = *(arg5 + 0xd8)
                    
                    if ((*(arg5 + 0xd8) & 1) != 0)
                        rcx_3 = (rcx_3 s>> 1) + arg5 + 0xd8
                    
                    if (*(rcx_3 + (rdx << 3)) == data_143ce90c0)
                        break
                    
                    r8 += 1
                    rdx += 1
                    
                    if (rdx s>= r11_1)
                        goto label_14088c75e
            
            int16_t* rdx_1
            
            if (r11_1 s<= 0 || r8 == 0xffffffff)
            label_14088c75e:
                TEB* gsbase
                
                if (data_143ce8564 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143ce8564)
                    
                    if (data_143ce8564 == 0xffffffff)
                        data_143ce8560 = 0xffff
                        _Init_thread_footer(&data_143ce8564)
                
                rdx_1 = &data_143ce8560
            else
                void* rcx_7 = *(arg5 + 0xe8)
                
                if ((rcx_7.b & 1) != 0)
                    rcx_7 = (rcx_7 s>> 1) + arg5 + 0xe8
                
                rdx_1 = rcx_7 + (sx.q(r8) << 1)
            
            result = zx.q(*rdx_1)
            
            if (result.w != 0xffff)
                return sub_140891ab0(arg10, rsi_1, zx.d(result.w))

return result
