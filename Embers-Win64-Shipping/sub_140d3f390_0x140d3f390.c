// 函数: sub_140d3f390
// 地址: 0x140d3f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3c660()
void* lpCriticalSection = nullptr
bool z

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z = true
else
    data_143e1adfc
    z = false

if (z)
    lpCriticalSection = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else if (data_143de5480 != 0 && GetCurrentThreadId() != data_143de5470)
    lpCriticalSection = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)

int64_t result = sub_140d3eba0(&data_143e1dad0)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
