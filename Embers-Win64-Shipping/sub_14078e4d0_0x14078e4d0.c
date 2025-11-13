// 函数: sub_14078e4d0
// 地址: 0x14078e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(&arg1[5])

if (rax != 0)
    int64_t* rax_1 = sub_140d3c6e0(&arg1[2])
    
    if (rax_1 != 0)
        sub_140874950(rax_1, &arg1[3], rax)

int64_t rcx_3 = arg1[3]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[6].b = 0
*arg1 = &data_142db0ad8
int64_t* rcx_4 = arg1[7]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

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
