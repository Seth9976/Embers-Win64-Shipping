// 函数: sub_14196fb00
// 地址: 0x14196fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141969e10(&arg1[2], zx.q(arg3), &arg1[0x19])
arg1[0x18].b = 0
sub_140a22e70(arg1[0x19], arg2, arg3)
*arg1 = &data_143001fa8
int64_t* rcx_2 = arg1[0x19]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

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
    void* rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
