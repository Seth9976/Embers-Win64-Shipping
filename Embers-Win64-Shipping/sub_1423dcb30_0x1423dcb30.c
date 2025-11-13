// 函数: sub_1423dcb30
// 地址: 0x1423dcb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx)
    int64_t* rcx_1 = arg1[2]
    (*(*rcx_1 + 0x18))(rcx_1)

int64_t* rcx_2 = arg1[3]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x20))(rcx_2)
    int64_t* rcx_3 = arg1[3]
    (*(*rcx_3 + 0x18))(rcx_3)

arg1[4].b = 0
*arg1 = &data_143343468
int64_t* rcx_4 = arg1[5]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rsi = nullptr
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
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
