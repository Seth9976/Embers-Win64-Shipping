// 函数: sub_140a228d0
// 地址: 0x140a228d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* lpTlsValue_1 = TlsGetValue(data_143cf09e8)
int64_t* lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
    lpTlsValue = lpTlsValue_2
    
    if (lpTlsValue_2 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_2, 0, 0x14)
    
    TlsSetValue(data_143cf09e8, lpTlsValue)

int64_t* rcx_3 = lpTlsValue[1]
int32_t rdx_2

if (rcx_3 != 0)
    rdx_2 = lpTlsValue[2].d
else
    int64_t* rax = *lpTlsValue
    
    if (rax == 0)
        int64_t rax_1 = sub_14059e7c0(&data_143cf09f0)
        lpTlsValue[1] = rax_1
        
        if (rax_1 == 0)
            int64_t* rax_2 = sub_140a82f70(0xa00, 0)
            lpTlsValue[1] = rax_2
            int64_t i_1 = 0x1f
            int64_t* rcx_4
            int64_t i
            
            do
                rcx_4 = &rax_2[0xa]
                *rax_2 = rcx_4
                rax_2 = rcx_4
                i = i_1
                i_1 -= 1
            while (i != 1)
            *rcx_4 = 0
        
        rcx_3 = lpTlsValue[1]
        rdx_2 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rdx_2 = 0x20
        lpTlsValue[1] = rax
        lpTlsValue[2].d = 0x20
        rcx_3 = rax
        *lpTlsValue = 0

lpTlsValue[1] = *rcx_3
lpTlsValue[2].d = rdx_2 - 1
rcx_3[1] = 0
rcx_3[7] = 0
rcx_3[8].d = 0
*(rcx_3 + 0x44) = 4
rcx_3[9].d = 0
*(rcx_3 + 0x4c) = 0x6ff
*arg1 = rcx_3
rcx_3[9].d += 1
return arg1
