// 函数: sub_140a756e0
// 地址: 0x140a756e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0xffffffff)
    uint32_t dwTlsIndex = TlsAlloc()
    uint32_t rax_1 = -1
    
    if (0xffffffff == *arg2)
        *arg2 = dwTlsIndex
    else
        rax_1 = *arg2
    
    if (rax_1 != 0xffffffff)
        TlsFree(dwTlsIndex)

int64_t rax_2 = TlsGetValue(*arg2)

if (rax_2 != 0)
    return rax_2

int64_t lpTlsValue = (*arg1)(*(arg1 + 8))
void* rax_3 = TlsGetValue(data_143db7a78)

if (rax_3 != 0)
    int64_t rbp_1 = sx.q(*(rax_3 + 0x38))
    int32_t rcx_4 = (rbp_1 + 1).d
    *(rax_3 + 0x38) = rcx_4
    
    if (rcx_4 s> *(rax_3 + 0x3c))
        sub_140a88850(rax_3 + 0x30)
    
    *(*(rax_3 + 0x30) + (rbp_1 << 3)) = lpTlsValue

TlsSetValue(*arg2, lpTlsValue)
return lpTlsValue
