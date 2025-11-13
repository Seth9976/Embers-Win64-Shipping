// 函数: sub_141eafa80
// 地址: 0x141eafa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg4
int64_t i_2 = sx.q(arg3)
int32_t rdx_1 = arg8[1].d + i_2.d

if (rdx_1 s> *(arg8 + 0xc))
    sub_1405a5390(arg8, rdx_1)

int64_t r15
r15.b = 0
int32_t r12 = 0
uint128_t zmm2
zmm2.d = arg10[1].d f- arg9[1]
float zmm1 = *arg10 - *arg9
uint128_t zmm0
zmm0.d = arg10[2].d f- arg9[2]
zmm2.d = zmm2.d f* zmm2.d
zmm0.d = zmm0.d f* zmm0.d
zmm2.d = zmm2.d f+ zmm1 * zmm1
zmm2.d = zmm2.d f+ zmm0.d

if (not(zmm2.d f== 1f) && not(zmm2.d f< 9.99999994e-09f))
    uint128_t zmm4 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    uint128_t zmm3
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = zmm4.d f* zmm4.d
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = zmm4.d f* zmm2.d
    zmm4.d = zmm4.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm4.d f* zmm4.d
    zmm0.d = zmm4.d f* (0.5f f- zmm3.d)
    zmm4.d = zmm4.d f+ zmm0.d
    arg5.d = zmm4.d

int64_t i_1 = i_2

if (i_2.d s> 0)
    int128_t zmm6 = arg13
    uint128_t zmm7 = arg6
    int64_t i
    
    do
        if (not(zmm6.d f< *(rbp + 0x34)))
            int64_t rbx = sx.q(arg8[1].d)
            int32_t rax_1 = (rbx + 1).d
            arg8[1].d = rax_1
            
            if (rax_1 s> *(arg8 + 0xc))
                sub_1405c5340(arg8)
            
            int64_t rdi_1 = rbx * 0x88
            void* rbx_2 = *arg8 + rdi_1
            *(rbx_2 + 0x64) = 0
            *(rbx_2 + 0x6c) = 0
            *(rbx_2 + 0x74) = 0
            *(rbx_2 + 0x7c) = 0
            *(rbx_2 + 0x84) = 0
            memset(rbx_2, 0, 0x88)
            *(rbx_2 + 8) = 0x3f800000
            char* rbx_4 = *arg8 + rdi_1
            int32_t rax_8
            rax_8, zmm6, zmm7 =
                sub_141ebeee0(arg2, rbp, rbx_4, zmm7, arg7, arg9, arg10, arg11, arg12, arg14, arg15)
            
            if (rax_8 != 0)
                arg8[1].d -= 1
                r12 = 1
            else
                r15.b |= *rbx_4 & 1
        
        rbp = &rbp[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_141eb1fb0(*arg8, arg8[1].d, arg5)
*arg1 = r15.b
return zx.q(r12)
