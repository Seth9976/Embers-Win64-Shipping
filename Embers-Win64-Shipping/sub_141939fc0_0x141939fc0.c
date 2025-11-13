// 函数: sub_141939fc0
// 地址: 0x141939fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rsi = nullptr
int32_t rbx = arg3
void* rdx = arg1[2]
int64_t rcx = arg1[3]

if (arg1[4].b == 0)
    sub_14193d6f0(rcx, rdx, 0)
    void* rcx_1 = arg1[2]
    int32_t rax_1 = 0
    
    if (0 == *(rcx_1 + 0x38))
        *(rcx_1 + 0x38) = 0
    else
        rax_1 = *(rcx_1 + 0x38)
    
    void* rcx_2 = arg1[2]
    int32_t rax_2 = 0
    
    if (0 == *(rcx_2 + 0x34))
        *(rcx_2 + 0x34) = 0
    else
        rax_2 = *(rcx_2 + 0x34)
    
    if (rax_1 == rax_2)
        goto label_14193a019
else
    arg3.b = 1
    sub_14193d6f0(rcx, rdx, arg3.b)
label_14193a019:
    
    if (data_143f01c92 != 0)
        sub_14194e070(&data_1439c7510, data_143f0f180, 0)

arg1[5].b = 0
sub_140a22e70(arg1[6], arg2, rbx)
*arg1 = &data_142ff7598
int64_t* rcx_4 = arg1[6]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

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
    rsi = lpTlsValue[1]
else
    int64_t rdx_5 = *lpTlsValue
    
    if (rdx_5 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_5)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
