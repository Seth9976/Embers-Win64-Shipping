// 函数: sub_1413e58e0
// 地址: 0x1413e58e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[2]
void* var_18 = &arg1[3]
void* var_10 = &arg1[4]
void arg_8
sub_1413b87a0(rcx + 0x63d8, &arg_8, &var_18, nullptr)
int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[6].b = 0
*arg1 = &data_142f79188
int64_t* rcx_3 = arg1[7]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** rdi = nullptr
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
    rdi = lpTlsValue[1]
else
    void* rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
