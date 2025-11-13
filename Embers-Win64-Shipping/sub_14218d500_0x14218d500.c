// 函数: sub_14218d500
// 地址: 0x14218d500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[3]
*(rdx + 8) = *(arg1 + 0x20)
*(rdx + 0x18) = arg1[6]
*(rdx + 0x20) = arg1[7].d
*(arg1[3] + 0xf4) = arg1[0x10].d
arg1[3][0x1e].d = *(arg1 + 0x84)
sub_1424256a0(arg1[3], &arg1[8])
arg1[0x12].b = 0
*arg1 = &data_1432e9ad0
int64_t* rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

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
    void* rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
