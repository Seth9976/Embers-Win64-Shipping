// 函数: sub_1421b2cf0
// 地址: 0x1421b2cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[2]
sub_1421bb8c0(&data_143f02b98, *(rdx + 0x18), *(rdx + 0x10), &arg1[3])
int64_t rcx = arg1[3]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[5].b = 0
*arg1 = &data_1432f66c8
int64_t* rcx_1 = arg1[6]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

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
    int64_t rdx_3 = *lpTlsValue
    
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
