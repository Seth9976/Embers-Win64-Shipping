// 函数: sub_140a385e0
// 地址: 0x140a385e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a38850()
EnterCriticalSection(&data_143cf8d78)
void** rsi = nullptr
int32_t i = 0

if (arg1[3].d s> 0)
    void* r11_1 = nullptr
    
    do
        int64_t rcx = sx.q(*(r11_1 + arg1[2]))
        int32_t rbp_1 = (rcx + 2).d
        int64_t rcx_1 = (rcx + 2) * 0x28
        int64_t* r9_2 = data_143cf8e48 + rcx_1
        int16_t r8 = r9_2[4].w
        
        if (r8 == 1)
            *(r9_2 + 0x1c) = data_14399fa50
            
            if (*r9_2 == 0)
                void* rdx = data_143cf8e48
                *(rdx + rcx_1 + 0x14) = 1
                *(rdx + rcx_1 + 0x18) = *(rdx + 0x40)
                *(data_143cf8e48 + sx.q(*(rdx + 0x40)) * 0x28 + 0x14) = rbp_1
                *(rdx + 0x40) = rbp_1
        
        i += 1
        r11_1 += 4
        r9_2[4].w = r8 - 1
    while (i s< arg1[3].d)

LeaveCriticalSection(&data_143cf8d78)
int64_t rcx_3 = arg1[2]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[4].b = 0
sub_140a22e70(arg1[5], arg2, arg3)
*arg1 = &data_142e52170
int64_t* rcx_5 = arg1[5]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

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
    rsi = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
