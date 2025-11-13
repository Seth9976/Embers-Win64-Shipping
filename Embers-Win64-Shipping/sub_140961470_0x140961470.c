// 函数: sub_140961470
// 地址: 0x140961470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t performanceCount
sub_14095ff30(arg1 + 0x158, &performanceCount, arg2)
int64_t performanceCount_1 = sx.q(performanceCount)
void* rax_2

if (performanceCount_1.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = performanceCount_1 * 0x30 + *(arg1 + 0x158)

int32_t* rbx_1 = rax_2 + 0x18

if (rax_2 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    int512_t result
    result.o = 0xbf800000
    return result

QueryPerformanceCounter(&performanceCount)
int128_t zmm6
zmm6.q = float.d(performanceCount.q)
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ 16777216.0
zmm6.q = zmm6.q f- *(rbx_1 + 8)

if (zmm6.q f<= fconvert.d(sub_14075a020()))
    return *rbx_1

return (zx.o(0)).d
