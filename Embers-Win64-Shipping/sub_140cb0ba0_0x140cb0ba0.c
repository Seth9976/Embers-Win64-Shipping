// 函数: sub_140cb0ba0
// 地址: 0x140cb0ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
sub_140cbaa10(data_143e1adf0)
void performanceCount_1
sub_140cb0c00(arg1, arg2, QueryPerformanceCounter(&performanceCount_1))
void* rbx_1 = data_143e1adf0
int64_t* rcx_4 = *(rbx_1 + 0x38)
int64_t result = (*(*rcx_4 + 0x10))(rcx_4)
*(rbx_1 + 4) -= 1
return result
