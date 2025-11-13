// 函数: sub_14089e6e0
// 地址: 0x14089e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14089df80(&arg1[2], arg4)
int64_t* rcx_1 = arg1[0xa]
void** rdi = nullptr

if (rcx_1 != 0)
    int64_t rdx_1
    rdx_1.b = rcx_1 != &arg1[3]
    (*(*rcx_1 + 0x20))(rcx_1, rdx_1)
    arg1[0xa] = 0

arg1[0xd].b = 0
*arg1 = &data_142dfbe90
int64_t* rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** lpTlsValue = result

if (result == 0)
    void** lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    void** lpTlsValue_2 = lpTlsValue_1
    
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
lpTlsValue[1] = arg1
lpTlsValue[2].d += 1
return result
