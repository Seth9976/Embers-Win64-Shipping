// 函数: sub_1412691b0
// 地址: 0x1412691b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t*** r11 = arg1[3]
void** rdi = nullptr
int32_t rcx = r11[1].d
int32_t r10 = *(arg1 + 0x3c)
int32_t rax_3

if (r10 s>= rcx)
    rax_3 = 0
else
    int32_t r9_1 = arg1[8].d
    rax_3 = divs.dp.d(sx.q(r9_1 - 1 + rcx), r9_1)

int32_t r10_1 = r10 * rax_3
int32_t rcx_1 = rcx - r10_1

if (rax_3 s<= rcx_1)
    rcx_1 = rax_3

sub_1412e4c50(r11, arg1[4], arg1[5], arg1[6].d, *(arg1 + 0x34), r10_1, rcx_1, arg1[7].d, arg1[2])
sub_141096650(arg1[2])
sub_141974260(arg1[2], &arg1[0xa])
arg1[9].b = 0
sub_140a22e70(arg1[0xa], arg2, arg3)
*arg1 = &data_142f51ed0
int64_t* rcx_6 = arg1[0xa]

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

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
    int64_t rdx_6 = *lpTlsValue
    
    if (rdx_6 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_6)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
