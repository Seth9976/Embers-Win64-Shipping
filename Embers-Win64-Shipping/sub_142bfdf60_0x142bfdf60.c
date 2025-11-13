// 函数: sub_142bfdf60
// 地址: 0x142bfdf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg1

if (arg2 u>= (zx.d(*arg1) << 8) + zx.d(arg1[1]))
    return zx.o(0)

uint32_t rbp_2 = (zx.d(arg1[4]) << 8) + zx.d(arg1[5])
uint32_t i_4 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
uint64_t i_5 = 0
uint128_t result = zx.o(0)
void* rsi_3 =
    zx.q((i_4 + rbp_2) * arg2) + 4 + rdi + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5]) + 1) << 1)
char* rcx_4 = arg5
uint128_t zmm0

if (i_4 != 0)
    void* r13_1 = &rdi[6]
    i_5 = zx.q(i_4)
    uint64_t i_2 = zx.q(i_4)
    uint64_t i
    
    do
        void* rbx_1 = rsi_3
        rsi_3 += 2
        zmm0, result = sub_142bfd840(rcx_4, zx.d(*(r13_1 + 1)) + (zx.d(*r13_1) << 8), arg3, arg4)
        r13_1 += 2
        rcx_4 = arg5
        result.d = result.d f+ zmm0.d
            f* _mm_cvtepi32_ps(zx.o(sx.d(zx.w(*(rbx_1 + 1)) + zx.w(*rbx_1) * 0x100))).d
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi = arg1

if (i_5.d u< rbp_2)
    void* rdi_2 = &rdi[(i_5 << 1) + 6]
    uint64_t i_3 = zx.q(rbp_2 - i_5.d)
    uint64_t i_1
    
    do
        void* rbx_2 = rsi_3
        rsi_3 += 1
        zmm0, result = sub_142bfd840(rcx_4, zx.d(*(rdi_2 + 1)) + (zx.d(*rdi_2) << 8), arg3, arg4)
        rdi_2 += 2
        rcx_4 = arg5
        zmm0.d = zmm0.d f* _mm_cvtepi32_ps(zx.o(sx.d(*rbx_2))).d
        result.d = result.d f+ zmm0.d
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
