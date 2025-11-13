// 函数: sub_142002d00
// 地址: 0x142002d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2].b == 0)
    float zmm0 = *(arg1 + 0x14)
    float zmm1 = data_143f13d4c + zmm0
    data_143f13d48 = zmm0
    data_143f13d4c = zmm1

sub_1419b9f70(&data_1439c9260)
sub_1419b9e30()
arg1[3].b = 0
*arg1 = &data_14329d810
int64_t* rcx = arg1[4]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rsi = nullptr
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
    rsi = lpTlsValue[1]
else
    void* rdx_2 = *lpTlsValue
    
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
