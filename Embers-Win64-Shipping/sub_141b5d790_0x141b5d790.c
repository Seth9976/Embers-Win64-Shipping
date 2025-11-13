// 函数: sub_141b5d790
// 地址: 0x141b5d790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[3]

if (rax != 0)
    int64_t var_18 = rax
    void* rax_1 = arg1[4]
    void* var_10_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    sub_142377120(arg1[2][1], &var_18, 2, 0x10)

void* rcx_2 = arg1[2][1]
(*(*(rcx_2 + 0x20) + 0x28))(rcx_2 + 0x20)
int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[5].b = 0
*arg1 = &data_14306d010
int64_t* rcx_6 = arg1[6]

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rsi_2 = nullptr
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
    rsi_2 = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi_2
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
