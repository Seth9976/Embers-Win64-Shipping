// 函数: sub_14238c3c0
// 地址: 0x14238c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]

if (rbx[0xb].d != 0)
    EnterCriticalSection(&rbx[2])
    rbx[0xb].d = 3
    int64_t rdi
    rdi.b = rbx[0xb].d == 3
    int32_t i
    
    do
        int64_t r8_1
        
        if (rdi.b != 0 || *(rbx + 0x54) != rdi.b)
            r8_1 = 0
        else
            r8_1.b = 1
        
        i, r8_1 = (*(*rbx + 0x30))(rbx, 3, r8_1)
    while (i == 3)
    
    if (rdi.b == 0)
        rbx[0xb].d = i
    
    LeaveCriticalSection(&rbx[2])

void* rax_3 = arg1[2]
void** rdi_1 = nullptr
*(rax_3 + 0x38) -= 1
int64_t* rcx_3 = arg1[2]

if (rcx_3 != 0)
    int32_t rax_4 = *(rcx_3 + 0x5c)
    *(rcx_3 + 0x5c) -= 1
    
    if (rax_4 == 1)
        int32_t rax_5 = rcx_3[0xb].d
        
        if (rax_5 == 0)
            bool z_1
            
            if (rax_5 == rcx_3[0xa].d)
                rcx_3[0xa].d = 0
                z_1 = true
            else
                rcx_3[0xa].d
                z_1 = false
            
            if (z_1)
                (**rcx_3)(rcx_3, 1)

arg1[3].b = 0
*arg1 = &data_1433366f8
int64_t* rcx_4 = arg1[4]

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
    rdi_1 = lpTlsValue[1]
else
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi_1
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
