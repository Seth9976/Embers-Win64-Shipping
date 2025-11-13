// 函数: sub_1419700d0
// 地址: 0x1419700d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c94 != 0)
    data_143db7ab8 = GetCurrentThreadId()

EnterCriticalSection(&data_143f02f58)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
data_143f01ca0 = performanceCount.d
sub_14196f9d0(arg1[2])
char* rbx = arg1[2]

if (rbx != 0)
    sub_1419628c0(rbx)
    sub_140a74f90(rbx)

int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
data_143f01c98 += performanceCount_1 - data_143f01ca0
LeaveCriticalSection(&data_143f02f58)
int32_t rax_5 = data_143db7ab8
void** rdi = nullptr

if (data_143f01c94 != 0)
    rax_5 = 0

data_143db7ab8 = rax_5
arg1[3].b = 0
sub_140a22e70(arg1[4], arg2, arg3)
*arg1 = &data_143002820
int64_t* rcx_6 = arg1[4]

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

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
    int64_t rdx_2 = *lpTlsValue
    
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
