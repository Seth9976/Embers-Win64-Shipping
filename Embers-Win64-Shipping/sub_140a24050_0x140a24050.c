// 函数: sub_140a24050
// 地址: 0x140a24050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg1)
int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0ae0)
int64_t* lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((lpTlsValue_1 + 0xc).d))
    lpTlsValue = lpTlsValue_2
    
    if (lpTlsValue_2 == 0)
        lpTlsValue = nullptr
    else
        *lpTlsValue_2 = 0
        lpTlsValue_2[1].d = 0
    
    TlsSetValue(data_143cf0ae0, lpTlsValue)

if (lpTlsValue[1].d s>= 0x40)
    int32_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a42f0(&data_143cf0ae8, rdx_2)
    
    *lpTlsValue = *(lpTlsValue + 4)
    *(lpTlsValue + 4) = 0

int64_t* rcx_3

if (rdi.d != 0)
    rcx_3 = *(&data_143cf0bf8 + (rdi u>> 0xe << 3)) + (zx.q(rdi.d) & 0x3fff) * 0x18
else
    rcx_3 = nullptr

*rcx_3 &= 0xfffffffffc000000
rcx_3[2].d = 0
uint64_t result = zx.q(*(lpTlsValue + 4))
rcx_3[1] = result
lpTlsValue[1].d += 1
*(lpTlsValue + 4) = rdi.d
return result
