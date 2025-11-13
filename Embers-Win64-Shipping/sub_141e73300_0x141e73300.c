// 函数: sub_141e73300
// 地址: 0x141e73300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rbx.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4fe0(arg1)

void* rcx_2 = (rbx << 6) + *arg1

if (i_1 != 0)
    uint32_t zmm3[0x4] = data_143f39c20
    int32_t i
    
    do
        float zmm1[0x4] = data_143f39c10
        *(rcx_2 + 0x10) = zx.o(0)
        rcx_2 += 0x40
        zmm1[0].q = zx.o(0) u>> 0x40
        *(rcx_2 - 0x40) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        *(rcx_2 - 0x20) = _mm_and_ps(data_143f39c10, zmm3)
        *(rcx_2 - 4) &= 0xfffffffe
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rbx.d)
