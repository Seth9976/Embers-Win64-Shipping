// 函数: sub_141026da0
// 地址: 0x141026da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)

if (*(rax + arg2 + 0x28) != 0)
    rax.b = 0
    return rax

*(rax + arg2 + 0x28) = 1
uint64_t rdi = *(arg1 + 8)
uint64_t rax_1

if (rdi == 0 || arg1[5] s> arg1[4])
    int32_t rax_2 = arg1[4]
    int32_t rax_3
    
    if (rax_2 != 0)
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 1.5f
        rax_3 = int.d(zmm0.d)
    else
        rax_3 = 0x1000
    
    arg1[4] = rax_3
    int64_t rcx = sx.q(rax_3)
    int64_t rax_4 = 8 * rcx
    
    if (mulu.dp.q(8, rcx) u>> 0x40 != zx.o(0))
        rax_4 = -1
    
    rax_1 = j_sub_140a82f30(rax_4)
    int64_t rdx = *(arg1 + 8)
    rdi = rax_1
    
    if (rdx != 0 && rax_1 != 0)
        memcpy(rax_1, rdx, arg1[5] << 3)
        j_sub_140a74f90(*(arg1 + 8))
    
    *(arg1 + 8) = rdi

if (rdi == 0)
    rax_1.b = 0
    *(arg1 + 0x19) = 1
    return rax_1

*(rdi + (sx.q(arg1[5]) << 3)) = arg2
int64_t rax_5
rax_5.b = 1
arg1[5] += 1
return rax_5
