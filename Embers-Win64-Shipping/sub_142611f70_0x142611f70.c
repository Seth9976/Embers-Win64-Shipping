// 函数: sub_142611f70
// 地址: 0x142611f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 0x14, 0, 0x14)
__builtin_memset(&arg1[7], 0, 0x28)
arg1[2].d = 0x80000000
arg1[5] = arg2
arg1[6] = arg3
arg1[7].d = *arg4
*(arg1 + 0x3c) = arg4[1]
arg1[8].d = arg4[2]
*(arg1 + 0x44) = *arg5
arg1[9].d = arg5[1]
*(arg1 + 0x4c) = arg5[2]
arg1[0xa].d = arg6
arg1[0xb] = arg7

if (arg2 != 0 && arg3 != 0 && sub_1426126b0(*arg1, arg2) != 0 && sub_1426126b0(*arg1, arg3) != 0)
    if (arg2 == arg3)
        arg1[2].d = 0x40000000
        return 0x40000000
    
    int128_t zmm6 = *(arg7 + 0x20c)
    
    if (not(zmm6.d f> 0f))
        zmm6 = 0x3f800000
    
    void* rbx_1 = arg1[0xd]
    zmm6.d = zmm6.d f* *(arg7 + 0x208)
    memset(*(rbx_1 + 8), 0xff, sx.q(*(rbx_1 + 0x1c)) * 2)
    *(rbx_1 + 0x24) = 0
    *(arg1[0xe] + 0xc) = 0
    int32_t* rax_10 = sub_14260fcd0(arg1[0xd], arg2)
    *rax_10 = *arg4
    rax_10[1] = arg4[1]
    rax_10[2] = arg4[2]
    rax_10[5] &= 0xc0000000
    rax_10[3] = 0
    float zmm0_1 = arg5[2] f- arg4[2]
    float zmm2 = arg5[1] f- arg4[1]
    float zmm1 = *arg5 f- *arg4
    *(rax_10 + 0x18) = arg2
    rax_10[5] = 0x40000000
    rax_10[4] = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0_1 * zmm0_1) f* zmm6.d
    sub_142613e10(arg1[0xe], rax_10)
    arg1[2].d = 0x20000000
    arg1[3] = rax_10
    arg1[4].d = rax_10[4]
    return 0x20000000

return 0x80000008
