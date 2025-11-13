// 函数: sub_14084f700
// 地址: 0x14084f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[7]
void* rbx = &arg1[3]

if (rax != 0)
    rbx = rax

int64_t rsi = 0
int64_t rdi = 0
int64_t rbp = sx.q(arg1[8].d) << 3
uint64_t rbp_1 = rbp u>> 3

if (rbx u> rbx + rbp)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        sub_14085eed0(*rbx)
        rdi += 1
        rbx += 8
    while (rdi != rbp_1)

int64_t rcx_1 = arg1[7]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[9].b = 0
sub_140a22e70(arg1[0xa], arg2, arg3)
*arg1 = &data_142ddbd58
int64_t* rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    rcx_3[9].d -= 1
    
    if (rcx_3[9].d == 1)
        sub_140a2f6e0(rcx_3)

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
    int64_t rdx_2 = *lpTlsValue
    
    if (rdx_2 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_2)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
