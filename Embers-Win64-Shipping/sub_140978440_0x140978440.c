// 函数: sub_140978440
// 地址: 0x140978440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

int32_t rax_6

if (rcx == 0 || rax_2 == 0)
    rax_6 = -1
else
    int64_t* rdi_1 = *(arg2 + 8)
    int32_t rax_4 = (*(*rdi_1 + 0x20))(rdi_1)
    int64_t rdx = *rdi_1
    rax_6 = sub_140a6af60((*(rdx + 0x18))(rdi_1, rdx), rax_4)

int32_t* rax_7 = sub_140947000(arg1 + 0x158, rax_6, arg2)
*rax_7 = arg3.d
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(rax_7 + 8) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
return 0
