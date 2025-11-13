// 函数: sub_140ab2090
// 地址: 0x140ab2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = TlsGetValue(data_143db9b7c)

if (rax != 0)
    return rax

char* lpTlsValue_1 = j_sub_140a82f30(zx.q((&rax[0xc]).d))
char* lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    lpTlsValue = nullptr
else
    *lpTlsValue_1 = 5
    *(lpTlsValue_1 + 4) = 0

TlsSetValue(data_143db9b7c, lpTlsValue)
return lpTlsValue
