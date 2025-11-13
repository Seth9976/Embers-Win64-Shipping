// 函数: sub_1408be110
// 地址: 0x1408be110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbp = nullptr

if (arg1[0xb] != 0)
    int32_t rax_1 = arg1[0xc].d * 0x1f4
    
    for (int32_t i = rax_1 + 0x3e8; i s< rax_1 + 0x5dc; i += 1)
        if (i s>= 0)
            int64_t* r8 = arg1[0xb]
            
            if (i s< r8[3].d - *(r8 + 0x14))
                int64_t rcx = sx.q(r8[1].d)
                int32_t i_1 = i
                int64_t r9_1 = 0
                
                if (rcx.d s> 0)
                    int64_t* r8_1 = *r8
                    
                    do
                        int64_t* rcx_1 = *r8_1
                        
                        if (rcx_1 != 0)
                            int32_t rdx = rcx_1[1].d
                            
                            if (i_1 s< rdx)
                                if (i_1 s>= 0)
                                    int64_t r10_2 = sx.q(i_1) * 0x2a8
                                    
                                    if (r10_2 != neg.q(*rcx_1))
                                        sub_1408bbc30(r10_2 + *rcx_1, arg1[2], &arg1[3], arg1[0xa])
                                
                                break
                            
                            i_1 -= rdx
                        
                        r9_1 += 1
                        r8_1 = &r8_1[1]
                    while (r9_1 s< rcx)

arg1[0xd].b = 0
sub_140a22e70(arg1[0xe], arg2, arg3)
*arg1 = &data_142e04a60
int64_t* rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rbp = lpTlsValue[1]
else
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rbp
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
