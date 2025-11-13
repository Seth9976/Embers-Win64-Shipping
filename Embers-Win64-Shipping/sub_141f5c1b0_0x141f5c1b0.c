// 函数: sub_141f5c1b0
// 地址: 0x141f5c1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1[2] + 0xc4) = arg1[3].d
arg1[2][0x19].d = *(arg1 + 0x1c)
*(arg1[2] + 0xcc) = arg1[4].d
int128_t var_18
sub_140acc920(&var_18, arg1 + 0x24)
*(arg1[2] + 0xd0) = var_18
arg1[5].b = 0
*arg1 = &data_1432806c0
int64_t* rcx_1 = arg1[6]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rdi = nullptr
void** lpTlsValue = result

if (result == 0)
    void** lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    void* rdx_5 = *lpTlsValue
    
    if (rdx_5 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_5)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
