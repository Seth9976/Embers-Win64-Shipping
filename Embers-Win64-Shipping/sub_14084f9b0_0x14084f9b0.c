// 函数: sub_14084f9b0
// 地址: 0x14084f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[8]
void* rax = arg1[0xd]
arg1[8] = rax

if (rax != 0)
    *(rax + 0x48) += 1

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

sub_14085f680(arg1[2], &arg1[2])
void* rbp = arg1[0xb]
void** rdi = nullptr
arg1[9] = 0
int32_t rax_2 = *(rbp + 0xc)
*(rbp + 0xc) -= 1

if (rax_2 == 1)
    int64_t* rax_3 = sub_140a242a0()
    (**rax_3)(rax_3, rbp, zx.q(*(rbp + 8)), 0xff)

int64_t* rcx_3 = arg1[8]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

arg1[0xc].b = 0
sub_140a22e70(arg1[0xd], arg2, arg3)
*arg1 = &data_142ddbd78
int64_t* rcx_5 = arg1[0xd]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

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
    rdi = lpTlsValue[1]
else
    int64_t rdx_4 = *lpTlsValue
    
    if (rdx_4 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_4)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
