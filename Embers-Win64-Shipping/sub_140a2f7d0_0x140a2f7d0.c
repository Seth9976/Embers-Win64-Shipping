// 函数: sub_140a2f7d0
// 地址: 0x140a2f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[9].d
arg1[9].d -= 1

if (rsi == 1)
    void* rcx = arg1[7]
    void* rbx_1 = &arg1[3]
    
    if (rcx != 0)
        rbx_1 = rcx
    
    int32_t i_1 = arg1[8].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a2f7d0(rcx_1)
            
            rbx_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = arg1[7]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t* lpTlsValue_1 = TlsGetValue(data_143cf09e8)
    int64_t rdi_1 = 0
    int64_t* lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
        lpTlsValue = lpTlsValue_2
        
        if (lpTlsValue_2 == 0)
            lpTlsValue = nullptr
        else
            __builtin_memset(lpTlsValue_2, 0, 0x14)
        
        TlsSetValue(data_143cf09e8, lpTlsValue)
    
    if (lpTlsValue[2].d s< 0x20)
        rdi_1 = lpTlsValue[1]
    else
        int64_t rdx_2 = *lpTlsValue
        
        if (rdx_2 != 0)
            sub_1405a43b0(&data_143cf09f0, rdx_2)
        
        *lpTlsValue = lpTlsValue[1]
        lpTlsValue[1] = 0
        lpTlsValue[2].d = 0
    
    *arg1 = rdi_1
    lpTlsValue[2].d += 1
    lpTlsValue[1] = arg1

return zx.q(rsi - 1)
