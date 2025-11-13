// 函数: sub_141e7dd40
// 地址: 0x141e7dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = data_143dbb1f8.q
arg3[1].d = data_143dbb200

if (arg2 == 0xffffffff)
    int32_t rax
    rax.b = 0
    return rax

int64_t rbx = sx.q(arg2)
uint64_t rax_4
uint128_t zmm0
uint128_t zmm2

if (sub_140a80ea0() == 0)
    void* rbx_2 = (rbx << 6) + *(arg1 + 0x80)
    
    if (arg4 == 0 || (*(rbx_2 + 0x3c) & 1) == 0)
        zmm2 = *(rbx_2 + 0x10)
        rax_4 = zx.q(_mm_shuffle_ps(zmm2, zmm2, 0xaa).d)
        zmm0.d = zmm2.d
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    else
        zmm0 = zx.o(*(rbx_2 + 0x30))
        rax_4 = zx.q(*(rbx_2 + 0x38))
    
    *arg3 = zmm0.q
    arg3[1].d = rax_4.d
else
    rax_4 = rbx * 0xc0 + *(arg1 + 0x130)
    
    if (arg4 == 0 || (*(rax_4 + 0x48) & 1) == 0)
        zmm2 = *(rax_4 + 0x10)
        int32_t var_10_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        zmm0.d = zmm2.d
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
        *arg3 = (_mm_shuffle_ps(zmm0, zmm0, 0xe1)).q
        arg3[1].d = var_10_1
    else
        int32_t rcx = *(rax_4 + 0x44)
        *arg3 = *(rax_4 + 0x3c)
        arg3[1].d = rcx
rax_4.b = 1
return rax_4
