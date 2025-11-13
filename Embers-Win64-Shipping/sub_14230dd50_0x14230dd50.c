// 函数: sub_14230dd50
// 地址: 0x14230dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[2]
int64_t* rcx = *(rdx + 0x8b0)

if (rcx != 0)
    (*(*rcx + 0x40))(rcx, *(rdx + 0x8b8))

arg1[4].b = 0
sub_140a22e70(arg1[5], arg2, arg3)
*arg1 = &data_1433279d8
int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

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
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
