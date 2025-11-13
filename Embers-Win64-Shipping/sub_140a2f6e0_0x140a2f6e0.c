// 函数: sub_140a2f6e0
// 地址: 0x140a2f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[7]
int32_t i_1 = arg1[8].d
void* rbx = &arg1[3]

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405ec870(rbx)
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[7]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* result = TlsGetValue(data_143cf09e8)
int64_t rdi = 0
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf09e8, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf09f0, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
