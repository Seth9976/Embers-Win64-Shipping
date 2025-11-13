// 函数: sub_1421e25a0
// 地址: 0x1421e25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = sub_140b33630("Effects")
void* rax = arg1[7]
void* rbx = &arg1[3]

if (rax != 0)
    rbx = rax

void** rbp = nullptr
int64_t rsi = 0
int64_t r14 = sx.q(arg1[8].d) << 2
uint64_t r14_1 = r14 u>> 2

if (rbx u> rbx + r14)
    r14_1 = 0

if (r14_1 != 0)
    do
        zmm0 = sub_14218e220(*(arg1[2][5] + (sx.q(*rbx) << 3)), zmm0)
        rsi += 1
        rbx += 4
    while (rsi != r14_1)

sub_140b37f60("Effects")
int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[9].b = 0
sub_140a22e70(arg1[0xa], arg2, arg3)
*arg1 = &data_1433026d8
int64_t* rcx_4 = arg1[0xa]

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
    rbp = lpTlsValue[1]
else
    int64_t rdx_3 = *lpTlsValue
    
    if (rdx_3 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_3)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rbp
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
