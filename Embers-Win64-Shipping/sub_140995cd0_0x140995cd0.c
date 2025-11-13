// 函数: sub_140995cd0
// 地址: 0x140995cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 1 || (arg4 == 0 && 0f f>= *(*(*arg2 + 0xd8) + (sx.q(arg2[1].d) << 2))))
    return sub_1409a00f0(arg1, arg2, arg3) __tailcall

if (arg5 == 4)
    arg3[3] = 2
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    **arg3 = 0x3f000000
    void* rax_4 = *arg3
    *(rax_4 + 4) = 0x3f000000
    return rax_4

int32_t zmm0

if (arg5 == 0 && arg4 != 4)
    zmm0 = *(*(*arg2 + 0xd8) + (sx.q(arg2[1].d) << 2))

void* rax_7

if (arg5 == 0 && (arg4 == 4 || zmm0 f>= 1f || ((*arg1 & 0x60) != 0 && not(zmm0 f<= 1f))))
    arg3[3] = 2
    arg3[4].d = 0
    *(arg3 + 0x24) = 0
    **arg3 = 0x3f000000
    rax_7 = *arg3
    *(rax_7 + 4) = 0x3f000000
else
    sub_1409a00f0(arg1, arg2, arg3)
    float* rax_9 = *arg3
    float zmm1_1 = *(*(*arg2 + 0xd8) + (sx.q(arg2[1].d) << 2))
    int64_t i = 0
    int128_t zmm6
    zmm6.d = 1f - zmm1_1
    zmm1_1 = zmm1_1 * 0.5f
    *rax_9 = zmm6.d * *rax_9 + zmm1_1
    rax_7 = *arg3
    *(rax_7 + 4) = zmm6.d f* *(rax_7 + 4) + zmm1_1
    int64_t rdx_3 = sx.q(arg3[4].d)
    
    if (rdx_3 s>= 4)
        do
            int64_t rax_10 = arg3[2]
            *(rax_10 + (i << 2)) = zmm6.d f* *(rax_10 + (i << 2))
            int64_t rax_11 = arg3[2]
            *(rax_11 + (i << 2) + 4) = zmm6.d f* *(rax_11 + (i << 2) + 4)
            int64_t rax_12 = arg3[2]
            *(rax_12 + (i << 2) + 8) = zmm6.d f* *(rax_12 + (i << 2) + 8)
            rax_7 = arg3[2]
            *(rax_7 + (i << 2) + 0xc) = zmm6.d f* *(rax_7 + (i << 2) + 0xc)
            i += 4
        while (i s< rdx_3 - 3)
    
    for (; i s< rdx_3; i += 1)
        rax_7 = arg3[2]
        *(rax_7 + (i << 2)) = zmm6.d f* *(rax_7 + (i << 2))

return rax_7
