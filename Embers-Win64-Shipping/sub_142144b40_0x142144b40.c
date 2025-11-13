// 函数: sub_142144b40
// 地址: 0x142144b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[2]

if (rdi != 0)
    sub_1405d16e0(rdi + 0x18, nullptr)
    sub_140a1d5c0(rdi + 0x40)
    sub_140a1d5c0(rdi + 0x28)
    sub_1405d1550(rdi + 0x18)
    j_sub_140a74f90(rdi)

arg1[3].b = 0
*arg1 = &data_1432de410
int64_t* rcx_5 = arg1[4]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

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
    int64_t rdx_3 = *lpTlsValue
    
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
