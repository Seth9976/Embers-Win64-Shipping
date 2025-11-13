// 函数: sub_14141e540
// 地址: 0x14141e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[4]
void** rdi = nullptr
int64_t* r9 = rdx + 0x48

if (rdx == 0)
    r9 = nullptr

sub_141421bd0(&data_143f02b98, arg1[2], arg1[3], r9, arg1[5].d)
arg1[6].b = 0
*arg1 = &data_142f7eaa8
int64_t* rcx = arg1[7]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

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
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
