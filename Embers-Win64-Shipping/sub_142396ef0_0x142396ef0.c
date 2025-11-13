// 函数: sub_142396ef0
// 地址: 0x142396ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

int32_t result

if (data_143de5480 == 0 || rax_1.b != 0)
    result = arg1[0xb].d
    
    if (result != 0)
        EnterCriticalSection(&arg1[2])
        arg1[0xb].d = 3
        int64_t rbx
        rbx.b = arg1[0xb].d == 3
        int32_t i
        
        do
            int64_t r8_1
            
            if (rbx.b != 0 || *(arg1 + 0x54) != rbx.b)
                r8_1 = 0
            else
                r8_1.b = 1
            
            i, r8_1 = (*(*arg1 + 0x30))(arg1, 3, r8_1)
        while (i == 3)
        
        if (rbx.b == 0)
            arg1[0xb].d = i
        
        return LeaveCriticalSection(&arg1[2]) __tailcall
else
    arg1[7].d += 1
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
    
    void*** rcx_3 = lpTlsValue[1]
    int32_t rdx_2
    
    if (rcx_3 != 0)
        rdx_2 = lpTlsValue[2].d
    else
        void*** rax_2 = *lpTlsValue
        
        if (rax_2 == 0)
            int64_t rax_3 = sub_14059e7c0(&data_143cf0958)
            lpTlsValue[1] = rax_3
            
            if (rax_3 == 0)
                int64_t* rax_4 = sub_140a82f70(0x2000, 0)
                lpTlsValue[1] = rax_4
                int64_t i_2 = 0x1f
                int64_t* rcx_4
                int64_t i_1
                
                do
                    rcx_4 = &rax_4[0x20]
                    *rax_4 = rcx_4
                    rax_4 = rcx_4
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                *rcx_4 = 0
            
            rcx_3 = lpTlsValue[1]
            rdx_2 = 0x20
            lpTlsValue[2].d = 0x20
        else
            rdx_2 = 0x20
            lpTlsValue[1] = rax_2
            lpTlsValue[2].d = 0x20
            rcx_3 = rax_2
            *lpTlsValue = 0
    
    lpTlsValue[1] = *rcx_3
    lpTlsValue[2].d = rdx_2 - 1
    *rcx_3 = &data_142d40498
    rcx_3[1].d = 0xff
    int64_t arg_10 = 0
    int64_t arg_20 = 0
    *(rcx_3 + 0xc) = 1
    *rcx_3 = &data_1433366f8
    rcx_3[3].b = 0
    rcx_3[4] = 0
    rcx_3[2] = arg1
    *(arg1 + 0x5c) += 1
    int64_t* rbx_1 = rcx_3[4]
    int64_t* arg_18 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    result = sub_141f4a6e0(rcx_3, nullptr, 0xff, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_18) __tailcall

return result
