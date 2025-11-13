// 函数: sub_1421a5650
// 地址: 0x1421a5650
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

uint32_t rax_2

if (arg3 == 0 && data_143de5480 != 0)
    rax_2.b = GetCurrentThreadId() == data_143de5470

if (arg3 != 0 || data_143de5480 == 0 || rax_2.b != 0)
    arg4 = sub_14218eae0(&data_143a2edd8)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char rax_3 = *(arg1 + 0x434)

if (arg3 == 0)
    if (rax_3 != 0)
        do
            arg4 = sub_140b732d0((zx.o(0)).d)
        while (*(arg1 + 0x434) != 0)
else if (rax_3 != 0)
    do
        arg4 = sub_140b732d0((zx.o(0)).d)
    while (*(arg1 + 0x434) != 0)

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
sub_14218e220(arg1, arg4)
