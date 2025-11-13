// 函数: sub_140a61970
// 地址: 0x140a61970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.q = arg2.q f/ sub_140a48b40()
int64_t rcx = 0
int64_t zmm0 = 0x43e0000000000000

if (not(zmm6.q f< zmm0))
    zmm6.q = zmm6.q f- zmm0
    
    if (not(zmm6.q f>= zmm0))
        rcx = -0x8000000000000000

arg1[2] = int.q(zmm6.q) + rcx
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t performanceCount_1 = performanceCount
*arg1 = performanceCount_1
arg1[1] = performanceCount_1
return arg1
