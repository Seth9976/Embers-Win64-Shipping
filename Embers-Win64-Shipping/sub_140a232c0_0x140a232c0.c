// 函数: sub_140a232c0
// 地址: 0x140a232c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t performanceCount = 0

while (true)
    int64_t i_3 = 0xf4240
    int64_t i
    
    do
        sub_140b21160(arg1, 1, 0)
        i = i_3
        i_3 -= 1
    while (i != 1)
    QueryPerformanceCounter(&performanceCount)
    int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
    int64_t* lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
        lpTlsValue = lpTlsValue_2
        
        if (lpTlsValue_2 == 0)
            lpTlsValue = nullptr
        else
            __builtin_memset(lpTlsValue_2, 0, 0x14)
        
        TlsSetValue(data_143cf0950, lpTlsValue)
    
    int64_t* rdi_1 = lpTlsValue[1]
    
    if (rdi_1 == 0)
        rdi_1 = *lpTlsValue
        
        if (rdi_1 == 0)
            int32_t rax_1 = sub_140a2d3e0(&data_143cf0958)
            rdi_1 = nullptr
            
            if (rax_1 != 0)
                rdi_1 = *(*(&data_143cf0bf8 + (zx.q(rax_1) u>> 0xe << 3))
                    + (zx.q(rax_1) & 0x3fff) * 0x18 + 8)
                sub_140a24050(rax_1)
            
            lpTlsValue[1] = rdi_1
            
            if (rdi_1 == 0)
                int64_t* rax_2 = sub_140a82f70(0x2000, 0)
                lpTlsValue[1] = rax_2
                int64_t i_2 = 0x1f
                int64_t* rcx_9
                int64_t i_1
                
                do
                    rcx_9 = &rax_2[0x20]
                    *rax_2 = rcx_9
                    rax_2 = rcx_9
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                *rcx_9 = 0
                rdi_1 = lpTlsValue[1]
        else
            lpTlsValue[1] = rdi_1
            *lpTlsValue = 0
        
        lpTlsValue[2].d = 0x20
    
    lpTlsValue[2].d -= 1
    lpTlsValue[1] = *rdi_1
    *rdi_1 = &data_142d40498
    rdi_1[1].d = 0xff
    int64_t var_40_1 = 0
    int64_t var_38_1 = 0
    *(rdi_1 + 0xc) = 1
    *rdi_1 = &data_142e512c0
    rdi_1[3].b = 0
    rdi_1[4] = 0
    rdi_1[2] = performanceCount.q
    int64_t* rbx_1 = rdi_1[4]
    
    if (rbx_1 != 0)
        rbx_1[9].d += 1
    
    sub_140a32020(rdi_1, nullptr, 0xff, 1)
    
    if (rbx_1 != 0)
        sub_140a2f7d0(rbx_1)
