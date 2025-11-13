// 函数: sub_1423bfb80
// 地址: 0x1423bfb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
int32_t r8 = arg1[3].d
int32_t rdx = *(arg1 + 0x1c)

if (*(rcx + 0xa4) != r8 || rcx[0x15].d != rdx)
    *(rcx + 0xa4) = r8
    rcx[0x15].d = rdx
    sub_1419ba620(rcx, rdx)
    rcx = arg1[2]

r8.b = 1
(*rcx[0xb])(&rcx[0xb], &data_143f02b98, r8)
arg1[4].b = 0
*arg1 = &data_14333d950
int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

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
    void* rdx_2 = *lpTlsValue
    
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
