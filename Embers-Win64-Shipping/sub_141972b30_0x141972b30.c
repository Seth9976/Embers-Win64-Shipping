// 函数: sub_141972b30
// 地址: 0x141972b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = TlsGetValue(*arg1)

if (rax != 0)
    return rax

int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&rax[0xa]).d))
int64_t* lpTlsValue = lpTlsValue_1

if (lpTlsValue_1 == 0)
    lpTlsValue = nullptr
else
    *lpTlsValue_1 = 0
    void* rcx_2 = &lpTlsValue_1[2]
    lpTlsValue_1[1] = 0
    *(rcx_2 + 0x10) = 0
    *(rcx_2 + 0x18) = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_1 = *(rcx_2 + 0x10)
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    lpTlsValue[6].d = 0xffffffff
    *(lpTlsValue + 0x34) = 0
    lpTlsValue[8] = 0
    lpTlsValue[9].d = 0

TlsSetValue(*arg1, lpTlsValue)
EnterCriticalSection(&arg1[0x32])
int64_t rbp_1 = sx.q(arg1[0x3e])
int32_t rax_2 = (rbp_1 + 1).d
arg1[0x3e] = rax_2

if (rax_2 s> arg1[0x3f])
    sub_1405a4d70(&arg1[0x3c])

*(*(arg1 + 0xf0) + (rbp_1 << 3)) = lpTlsValue

if (arg1 != -0xc8)
    LeaveCriticalSection(&arg1[0x32])

return lpTlsValue
