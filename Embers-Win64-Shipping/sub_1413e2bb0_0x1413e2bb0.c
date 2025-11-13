// 函数: sub_1413e2bb0
// 地址: 0x1413e2bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413d3eb0(&data_143f02b98, arg1[2], arg1[3].d, *(arg1 + 0x1c), arg1[4].b, *(arg1 + 0x21), 
    arg1 + 0x24)

if (arg1[4].b == 0)
    sub_14196d390(&data_143f02b98)

arg1[7].b = 0
*arg1 = &data_142f78fb8
int64_t* rcx = arg1[8]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rdi = nullptr
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
    rdi = lpTlsValue[1]
else
    int64_t rdx_5 = *lpTlsValue
    
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
