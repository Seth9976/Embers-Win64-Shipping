// 函数: sub_140bc4510
// 地址: 0x140bc4510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** lpTlsValue_1 = j_sub_140a82f30(0x48)
void*** lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    lpTlsValue = lpTlsValue_1
else
    lpTlsValue[1] = arg1
    *lpTlsValue = &data_142e85f40
    __builtin_memset(&lpTlsValue[2], 0, 0x30)
    lpTlsValue[8].b = 1

sub_140a85420(lpTlsValue)
TlsSetValue(data_143e1a81c, lpTlsValue)
return lpTlsValue
