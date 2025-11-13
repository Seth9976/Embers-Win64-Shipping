// 函数: sub_1423dc520
// 地址: 0x1423dc520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
int64_t* rcx = zmm1.q
int32_t r8 = _mm_bsrli_si128(zmm1, 8).d
data_1439c90fa = (r8 u>> 1).b & 1
(*(*rcx + 0x150))(rcx, &data_143f02b98, (r8 u>> 2).b & 1, r8.b & 1)
arg1[4].b = 0
*arg1 = &data_143343458
int64_t* rcx_1 = arg1[5]

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
    void* rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
