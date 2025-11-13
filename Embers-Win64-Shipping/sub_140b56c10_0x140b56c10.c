// 函数: sub_140b56c10
// 地址: 0x140b56c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0

if (arg2 == 0)
    zmm0 = (zx.o(0)).q
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm0 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

int32_t rsi = 0
*arg1 = zmm0
arg1[1] = 0
arg1[2] = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    int32_t rdx = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&arg1[1], rbx_1.d + 1)
        rdx = arg1[2].d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    arg1[2].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x14))
        sub_140594770(&arg1[1])
    
    UnDecorator::getReferenceType(arg1[1], arg3, (rbx_1.d + 1) * 2)

arg1[3] = arg4

if (arg2 != 0)
    rsi = arg5

arg1[4].d = rsi
return arg1
