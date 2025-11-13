// 函数: sub_140a23c00
// 地址: 0x140a23c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
(*(*rcx + 0x10))(rcx)
arg1[4].b = 0
sub_140a22e70(arg1[5], arg2, arg3)
*arg1 = &data_142e51ab8
int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a2f7d0(rcx_2)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rdi_1 = nullptr
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
    rdi_1 = lpTlsValue[1]
else
    void* rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
