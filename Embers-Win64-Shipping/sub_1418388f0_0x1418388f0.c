// 函数: sub_1418388f0
// 地址: 0x1418388f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[4]
void* rcx = &arg1[6]

if (rax != 0)
    rcx = rax

void var_18
int128_t* rax_3 = arg1[2](&var_18, (*(*rcx + 8))(rcx))
CRITICAL_SECTION* rcx_2 = arg1[0xa]
rcx_2->__offset(0x80).o = *rax_3
sub_1405fc0f0(rcx_2, arg2, arg3, arg4)
int64_t* rbx = arg1[0xb]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg1[2] != 0)
    void* rax_8 = arg1[4]
    void* rcx_5 = &arg1[6]
    
    if (rax_8 != 0)
        rcx_5 = rax_8
    
    (*(*rcx_5 + 0x10))(rcx_5)

arg1[0xe].b = 0
*arg1 = &data_142fe5c80
int64_t* rcx_6 = arg1[0xf]

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
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi_2
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
