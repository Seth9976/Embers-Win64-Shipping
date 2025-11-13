// 函数: sub_1413e4a90
// 地址: 0x1413e4a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413c7990(&arg1[2], &data_143f02b98)
void** rdi = nullptr
arg1[0xb].d = 0
int64_t rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140597460(&arg1[2])
arg1[0xc].b = 0
*arg1 = &data_142f793f8
int64_t* rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
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
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
