// 函数: sub_140a58100
// 地址: 0x140a58100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2.w != 0)
    uint32_t dwTlsIndex = data_143db71b8
    
    if (dwTlsIndex != 0)
        int64_t rax_1 = TlsGetValue(dwTlsIndex)
        
        if (rax_1 != 0)
            int16_t* rdx_1 = arg2 & 0xffffffffffff0000
            
            if (*(rdx_1 + 3) == 0xe3)
                int64_t* rcx_2 = (zx.q(rdx_1[1].b) << 5) + rax_1
                int32_t r8_1 = rcx_2[1].d
                
                if (r8_1 u< 0x40 && zx.d(*rdx_1) * r8_1 u< 0x10000)
                    goto label_140a58174
                
                if (rcx_2[2] == 0)
                    *(rcx_2 + 0x10) = *rcx_2
                    *rcx_2 = 0
                    rcx_2[1].d = 0
                label_140a58174:
                    int64_t result = *rcx_2
                    *arg2 = result
                    arg2[1] = 0
                    rcx_2[1].d += 1
                    *rcx_2 = arg2
                    return result

return sub_140a58510(arg1, arg2) __tailcall
