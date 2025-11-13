// 函数: sub_142195c10
// 地址: 0x142195c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]

if (rcx == 0)
    return 

int64_t rax_1 = 0

if (0 == *(rcx + 8))
    *(rcx + 8) = 0
else
    rax_1 = *(rcx + 8)

if (((rax_1 u>> 0x1a).b & 1) != 0)
    return 

float zmm0 = sub_14218eae0(&data_143a2edd8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)

while (*(arg1 + 0x434) != 0)
    zmm0 = sub_140b732d0((zx.o(0)).d)

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
return sub_14218e220(arg1, zmm0) __tailcall
