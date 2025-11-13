// 函数: sub_141a80de0
// 地址: 0x141a80de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
float (* arg_10)[0x4] = arg2
uint128_t zmm1 = zx.o(*arg2)
int64_t r13
r13.b = 0
int64_t r8 = sx.q(arg1[1].d)
int32_t rax = arg2[1].d
int64_t rbx_1 = r8 << 7
int64_t rdi
rdi.b = 0
uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int32_t r12 = 0
int32_t r15 = (r8 - 1).d
int64_t rax_1 = *arg1
float zmm6[0x4] = arg3
uint64_t var_58 = zmm1.q
float zmm4[0x4] = *(rax_1 + rbx_1 - 0x70)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm4[0] = zmm4[0] f- zmm1.d
temp0_1[0] = temp0_1[0] f- zmm0.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
temp0_2[0] = temp0_2[0] f- rax
zmm4[0] = zmm4[0] * zmm4[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0_2[0] = temp0_2[0] * temp0_2[0]
temp0_1[0] = temp0_1[0] + zmm4[0]
temp0_1[0] = temp0_1[0] + temp0_2[0]

if (_mm_sqrt_ss(0, temp0_1[0]).d f<= zmm6[0])
    return 0

int64_t rcx = rbx_1

do
    int32_t rax_2 = r12
    r12 += 1
    
    if (rax_2 s>= arg4)
        break
    
    if (arg5 == 0)
        int32_t rbx_2 = 1
        
        if (r15 s> 1)
            do
                char rax_4
                rax_4, zmm6 = sub_141a83920(arg1, rbx_2, &var_58, arg6, arg7)
                rdi.b |= rax_4
                rbx_2 += 1
            while (rbx_2 s< r15)
            
            rcx = rbx_1
            arg4 = arg_20
    else
        int32_t i = r15 - 1
        
        if (i s> 0)
            do
                char rax_3
                rax_3, zmm6 = sub_141a83920(arg1, i, &var_58, arg6, arg7)
                rdi.b |= rax_3
                i -= 1
            while (i s> 0)
            
            rcx = rbx_1
            arg4 = arg_20
    
    r13.b |= rdi.b
    float zmm3[0x4] = *arg_10
    zmm1 = *(*arg1 + rcx - 0x70)
    arg3 = (*arg_10)[1]
    zmm4 = (*arg_10)[2]
    zmm3[0] = zmm3[0] f- zmm1.d
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    arg3[0] = arg3[0] f- zmm0.d
    zmm4[0] = zmm4[0] f- zmm1.d
    
    if (rdi.b == 0)
        break
    
    arg3[0] = arg3[0] * arg3[0]
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    arg3[0] = arg3[0] + zmm3[0]
    arg3[0] = arg3[0] + zmm4[0]
    zmm0 = _mm_sqrt_ss(0, arg3[0])
while (zmm0.d f> zmm6[0])

return zx.q(r13.b)
