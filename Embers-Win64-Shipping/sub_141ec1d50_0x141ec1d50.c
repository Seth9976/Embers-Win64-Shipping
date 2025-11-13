// 函数: sub_141ec1d50
// 地址: 0x141ec1d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[2]

if (rcx == 0)
    int32_t* rcx_1 = arg1[3]
    
    if (rcx_1 != 0)
        sub_141eca6a0(rcx_1, arg1[4].d)
else
    sub_141eca780(rcx, arg1[4].d)

arg1[5].b = 0
sub_140a22e70(arg1[6], arg2, arg3)
*arg1 = &data_14325ce78
int64_t* rcx_3 = arg1[6]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rdi_1 = nullptr
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
    rdi_1 = lpTlsValue[1]
else
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
