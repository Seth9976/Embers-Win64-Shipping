// 函数: sub_14226a010
// 地址: 0x14226a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TlsSetValue(arg1[0x14][1].d, &arg1[2])

if (arg1[0x13].d != 0)
    do
        int64_t* rbx_1 = arg1[sx.q(arg1[0x12].d) + 2]
        (*(*rbx_1 + 8))(rbx_1)
        (*(*rbx_1 + 0x30))(rbx_1)
        int32_t rax_6 = (arg1[0x12].d + 1) & 0x8000000f
        
        if (rax_6 s< 0)
            rax_6 = ((rax_6 - 1) | 0xfffffff0) + 1
        
        arg1[0x13].d -= 1
        arg1[0x12].d = rax_6
    while (arg1[0x13].d != 1)

TlsSetValue(arg1[0x14][1].d, nullptr)
arg1[0x15].b = 0
sub_140a22e70(arg1[0x16], arg2, arg3)
*arg1 = &data_1433103b8
int64_t* rcx_5 = arg1[0x16]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
void** rdi = nullptr
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
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
