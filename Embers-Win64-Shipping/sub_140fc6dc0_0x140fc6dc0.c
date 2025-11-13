// 函数: sub_140fc6dc0
// 地址: 0x140fc6dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
rdx.b = 2

if ((*(*arg1 + 0x120))(arg1, rdx, 0) != 1)
    return 2

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)

if (float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f- arg1[6] f<= 5.0)
    return 1

int64_t rdx_1
rdx_1.b = 1
int64_t rbx = int.q(fconvert.t(10000.0))
char rax_3 = (*(*arg1 + 0x120))(arg1, rdx_1, rbx)
int64_t r9 = *arg1
char rax_4 = (*(r9 + 0x120))(arg1, 0, rbx, r9)

if (rax_3 == 0 || rax_4 == 0)
    QueryPerformanceCounter(&performanceCount)
    arg1[6] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    return 1

if (rax_3 == 1 && rax_4 == rax_3)
    return 0

return 2
