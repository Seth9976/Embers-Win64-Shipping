// 函数: sub_140cd0200
// 地址: 0x140cd0200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = data_143e1adf0
int64_t rdi
rdi.b = 0
int64_t r8 = EnterCriticalSection(&rsi[4])
bool z

if (0 == *rsi)
    *rsi = 0
    z = true
else
    *rsi
    z = false

if (z)
    int64_t* rcx_1 = *(rsi + 0x38)
    r8 = (*(*rcx_1 + 0x18))(rcx_1)
    rsi[1] += 1
    rdi.b = 1

if (rsi != -0x10)
    r8 = LeaveCriticalSection(&rsi[4])

if (rdi.b != 0)
    goto label_140cd02a4

int32_t rcx_3 = data_1439a9d80
int32_t rax_3 = data_143e1b390

if (rcx_3 s<= 0 || rax_3 s<= rcx_3)
    data_143e1b390 = rax_3 + 1
else
    data_143e1b390 = 0
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    sub_140cbaa10(data_143e1adf0)
    void performanceCount_1
    r8 = QueryPerformanceCounter(&performanceCount_1)
    rdi.b = 1
label_140cd02a4:
    sub_140cb0c00(arg1, arg2, r8)
    void* rbx_1 = data_143e1adf0
    int64_t* rcx_8 = *(rbx_1 + 0x38)
    (*(*rcx_8 + 0x10))(rcx_8)
    *(rbx_1 + 4) -= 1

return zx.q(rdi.b)
