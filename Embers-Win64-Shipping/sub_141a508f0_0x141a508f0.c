// 函数: sub_141a508f0
// 地址: 0x141a508f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
int32_t performanceCount = 0
void* rcx = data_143f5b298
void var_28
void* const rbx

if (rcx == 0)
    rbx = nullptr
else
    rbx = sub_1405948a0(sub_1423ddaf0(rcx, &var_28))
    rax = 1

if ((rax & 1) != 0)
    sub_141e71cd0(&var_28)

if (rbx != 0)
    return *(rbx + 0x360)

QueryPerformanceCounter(&performanceCount)
return float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
