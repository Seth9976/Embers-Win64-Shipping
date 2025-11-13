// 函数: sub_14084f5e0
// 地址: 0x14084f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[2]
int32_t* rbx = arg1[3]

if (rcx == 0)
    *rbx = 0xffffffff
else
    sub_1408299c0(rcx + 0x30, rbx)

void* rax = *(rbx + 0x140)

if (rax != 0)
    *(rax + 8) -= 1

void** rdi = nullptr
*(rbx + 0x140) = 0
arg1[4].b = 0
*arg1 = &data_142ddc028
int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
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
    void* rdx_3 = *lpTlsValue
    
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
