// 函数: sub_14199bc70
// 地址: 0x14199bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp

if (arg2 == 0)
    rbp = 0
else
    rbp = *(arg2 + 0x28)

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

int64_t* rcx_3 = lpTlsValue[1]
int32_t rdx_1

if (rcx_3 != 0)
    rdx_1 = lpTlsValue[2].d
else
    int64_t* rax = *lpTlsValue
    
    if (rax == 0)
        int64_t rax_1 = sub_14059e7c0(&data_143cf0958)
        lpTlsValue[1] = rax_1
        
        if (rax_1 == 0)
            int64_t* rax_2 = sub_140a82f70(0x2000, 0)
            lpTlsValue[1] = rax_2
            int64_t i_1 = 0x1f
            int64_t* rcx_4
            int64_t i
            
            do
                rcx_4 = &rax_2[0x20]
                *rax_2 = rcx_4
                rax_2 = rcx_4
                i = i_1
                i_1 -= 1
            while (i != 1)
            *rcx_4 = 0
        
        rcx_3 = lpTlsValue[1]
        rdx_1 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rdx_1 = 0x20
        lpTlsValue[1] = rax
        lpTlsValue[2].d = 0x20
        rcx_3 = rax
        *lpTlsValue = 0

lpTlsValue[1] = *rcx_3
lpTlsValue[2].d = rdx_1 - 1
*rcx_3 = &data_142d40498
rcx_3[1].d = 0xff
int64_t arg_8
__builtin_memset(&arg_8, 0, 0x11)
*(rcx_3 + 0xc) = rbp + 1
*rcx_3 = &data_14300aa90
rcx_3[4] = 0
*arg1 = rcx_3
arg1[1] = arg2
arg1[2].d = arg3
return arg1
