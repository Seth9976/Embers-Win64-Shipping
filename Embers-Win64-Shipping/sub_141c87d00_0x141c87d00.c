// 函数: sub_141c87d00
// 地址: 0x141c87d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c861b0(&arg1[2])
int64_t* rcx_1 = arg1[8]

if (rcx_1 != 0)
    int32_t rax_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_1 != 0)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    int32_t rax_3 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_3 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rdi = arg1[3]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_7 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[9].b = 0
sub_140a22e70(arg1[0xa], arg2, arg3)
*arg1 = &data_14320f7a0
int64_t* rcx_6 = arg1[0xa]

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

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
