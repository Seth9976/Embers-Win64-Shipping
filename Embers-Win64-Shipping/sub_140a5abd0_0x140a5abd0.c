// 函数: sub_140a5abd0
// 地址: 0x140a5abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t dwTlsIndex = data_143db71b8

if (dwTlsIndex == 0)
    dwTlsIndex = TlsAlloc()
    data_143db71b8 = dwTlsIndex

int64_t result = TlsGetValue(dwTlsIndex)

if (result != 0)
    return result

uint64_t rax = zx.q(data_143db71c0)
int64_t* lpTlsValue = sub_140a571a0(sub_140b655e0(not.q(rax - 1) & (rax + 0x59f)))
TlsSetValue(data_143db71b8, lpTlsValue)
sub_140a590b0()
EnterCriticalSection(&data_143db79d0)
sub_140a59420()
int64_t rsi_1 = sx.q(data_143db7a08.d)
int32_t rcx_6 = (rsi_1 + 1).d
data_143db7a08.d = rcx_6

if (rcx_6 s> data_143db7a08:4.d)
    sub_1405a4d70(&data_143db7a00)

*(data_143db7a00 + (rsi_1 << 3)) = lpTlsValue
return LeaveCriticalSection(&data_143db79d0) __tailcall
