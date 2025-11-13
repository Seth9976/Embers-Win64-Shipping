// 函数: sub_141a0a140
// 地址: 0x141a0a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rsi = nullptr
int32_t i = 0

if (arg1[3].d s> 0)
    int64_t* rdx_1 = nullptr
    
    do
        void* r8_1 = *(rdx_1 + arg1[2])
        
        if (r8_1 != 0)
            *(r8_1 + 0x449) ^= (*(arg1 + 0x1c) ^ *(r8_1 + 0x449)) & 1
        
        i += 1
        rdx_1 = &rdx_1[1]
    while (i s< arg1[3].d)

j_sub_140a74f90(arg1[2])
arg1[4].b = 0
*arg1 = &data_1430219c8
int64_t* rcx_1 = arg1[5]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

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
