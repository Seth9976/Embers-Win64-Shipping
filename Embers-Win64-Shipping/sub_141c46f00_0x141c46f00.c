// 函数: sub_141c46f00
// 地址: 0x141c46f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xe]
int32_t rdi = arg3
arg1[0xa] = arg3

if ((rax.b & 1) != 0)
    arg1[0xa] = 0
    arg1[0xe] = rax & 0xfffffffe
    rdi = 0

arg2[0] = arg2[0] f- *arg1
uint32_t result[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)

if (not(result[0] f<= 9.99999994e-09f))
    *arg1 = arg2[0]
    result = zx.o(0)
    arg2[0] = arg2[0] f+ arg2[0]
    arg2[0] = arg2[0] f/ arg1[0xc]
    
    if (not(arg2[0] f< 0f))
        result = __minss_xmmss_memss(arg2[0], 0x3f800000)
    
    result[0] = result[0] f* -3.14159274f
    result = expf(result[0])
    arg1[3] = result[0]
    result[0] = result[0] f- arg1[1]
    arg2 = _mm_cvtepi32_ps(zx.o(rdi))
    result[0] = result[0] f/ arg2[0]
    arg1[2] = result[0]

if (rdi s<= 1)
    arg1[1] = arg1[3]
    arg1[2] = 0

return result
