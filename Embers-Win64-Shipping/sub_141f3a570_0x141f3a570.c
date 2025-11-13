// 函数: sub_141f3a570
// 地址: 0x141f3a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Animation")
int64_t* rax
int64_t rdx
rax, rdx = sub_140d3c6e0(&arg1[2])

if (rax != 0 && rax[0x13c] != 0)
    int64_t r8 = *rax
    rdx.b = 1
    (*(r8 + 0x9d0))(rax, rdx, r8)

sub_140b37f60("Animation")
arg1[3].b = 0
sub_140a22e70(arg1[4], arg2, arg3)
*arg1 = &data_14327aef8
int64_t* rcx_3 = arg1[4]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rdi_1 = nullptr
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
    rdi_1 = lpTlsValue[1]
else
    void* rdx_3 = *lpTlsValue
    
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
