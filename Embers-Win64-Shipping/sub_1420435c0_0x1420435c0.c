// 函数: sub_1420435c0
// 地址: 0x1420435c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_1420c3e20()
int32_t rdi = rax.d
int32_t arg_8

if (arg1[0x13].d == 1)
    rax = sub_142029700(arg1, &arg_8)

int32_t rcx_4

if (arg1[0x13].d != 1 || arg1[0x13].d != 1)
    rcx_4 = *(arg1 + 0x84)
else
    rax = sub_142029700(arg1, &arg_8)
    rcx_4 = *(rax + 4)

bool cond:0 = *(arg1 + 0xbc) == 0
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdi))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx_4))
zmm1.d = zmm1.d f/ zmm0.d
zmm1.d = zmm1.d f* 100f
zmm1 = __maxss_xmmss_memss(zmm1.d, 0x41200000)
*(arg1 + 0xb4) = zmm1.d

if (cond:0)
    arg1[6].d = _mm_max_ss(arg1[6].d.d, zmm1.d).d
    return rax

int64_t rax_2 = (*(*arg1 + 0x2c8))(arg1)
arg1[6].d = zmm0.d
return rax_2
