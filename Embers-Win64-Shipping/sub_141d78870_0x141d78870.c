// 函数: sub_141d78870
// 地址: 0x141d78870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[2]
int64_t rdi = sx.q(*(rbx + 0x70))
int32_t rax = (rdi + 1).d
*(rbx + 0x70) = rax

if (rax s> *(rbx + 0x74))
    sub_1405a4f90(rbx + 0x68)

int64_t* rcx_3 = (rdi << 4) + *(rbx + 0x68)
*rcx_3 = arg1[3]
void* rax_2 = arg1[4]
rcx_3[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t* rbx_1 = arg1[4]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_5 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

arg1[5].b = 0
*arg1 = &data_143234130
int64_t* rcx_6 = arg1[6]

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

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
    void* rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_2
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
