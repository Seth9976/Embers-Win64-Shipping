// 函数: sub_142244b30
// 地址: 0x142244b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15

if (arg2 == 0)
    r15 = 0
else
    r15 = *(arg2 + 0x28)

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

int64_t* rsi = lpTlsValue[1]
int32_t rcx_3

if (rsi != 0)
    rcx_3 = lpTlsValue[2].d
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
        
        rsi = lpTlsValue[1]
        rcx_3 = 0x20
        lpTlsValue[2].d = 0x20
    else
        rcx_3 = 0x20
        lpTlsValue[1] = rax
        lpTlsValue[2].d = 0x20
        rsi = rax
        *lpTlsValue = 0

lpTlsValue[1] = *rsi
lpTlsValue[2].d = rcx_3 - 1
int64_t* arg_8
int64_t** rax_5 = sub_140a228d0(&arg_8)
*arg1 = rsi
arg1[1] = arg2
arg1[2].d = arg3
int64_t* rcx_6 = *rax_5
*rax_5 = nullptr
*rsi = &data_142d40498
int64_t* arg_10 = rcx_6
rsi[1].d = 0xff
*(rsi + 0xc) = r15 + 1
*rsi = &data_14330acb8
rsi[3].b = 0
rsi[4] = rcx_6
int64_t* rcx_7 = arg_8

if (rcx_7 != 0)
    rcx_7[9].d -= 1
    
    if (rcx_7[9].d == 1)
        sub_140a2f6e0(rcx_7)

return arg1
