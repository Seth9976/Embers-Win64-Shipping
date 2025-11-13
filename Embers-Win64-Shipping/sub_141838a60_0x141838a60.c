// 函数: sub_141838a60
// 地址: 0x141838a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t entry_zmm2
int128_t entry_zmm3
sub_14181d490(&arg1[0xa], &arg1[2], entry_zmm2, entry_zmm3)
int64_t* rbx = arg1[0xb]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg1[2] != 0)
    void* rax_5 = arg1[4]
    void* rcx_3 = &arg1[6]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    (*(*rcx_3 + 0x10))(rcx_3)

arg1[0xe].b = 0
*arg1 = &data_142fe5c28
int64_t* rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rdi_2 = nullptr
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
    rdi_2 = lpTlsValue[1]
else
    void* rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_2
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
