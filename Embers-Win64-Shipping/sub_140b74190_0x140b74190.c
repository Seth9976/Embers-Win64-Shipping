// 函数: sub_140b74190
// 地址: 0x140b74190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (arg2 != 0 && data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

int64_t rdi

if (arg2 == 0 || (data_143de5480 != 0 && rax_1.b == 0))
    rdi.b = 0
else
    rdi.b = 1
    sub_140b342f0()

int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
void* rsi
rsi.b = WaitForSingleObject(*(arg1 + 0x10), arg2) == WAIT_OBJECT_0

if (arg3 == 0)
    char arg_18 = arg3
    char* var_20_1 = &arg_18
    void*** (* var_28)() = sub_140a3f720
    void* rax_3 = sub_140a756e0(&var_28, &data_14399e8cc)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(rax_3 + 0x10) += performanceCount.d - performanceCount_1

if (rdi.b != 0)
    sub_140b38770()

return zx.q(rsi.b)
