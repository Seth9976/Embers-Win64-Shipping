// 函数: sub_1421b3cf0
// 地址: 0x1421b3cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax = *(arg2 + 0x18)
int128_t zmm6 = arg4

if (rax == 0)
    return 

int64_t rbp_1 = *(arg2 + 0xf0)
int32_t r14_1 = *(arg2 + 0x114)
int64_t r15_1 = *(arg2 + 0xf8)
float zmm7[0x4] = *(rax + 0x1d0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
temp0_1[0] = temp0_1[0] f- rax[0x93].d
zmm7[0] = zmm7[0] f- *(rax + 0x494)
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_2[0] = temp0_2[0] f- *(rax + 0x49c)
int32_t rax_1 = *(arg2 + 0x118)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s< 0)
    return 

int64_t temp1_1

do
    void* rbx_3 = zx.q(zx.d(*(r15_1 + (rdi_1 << 1))) * r14_1) + rbp_1
    
    if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
        int128_t zmm2 = *(rbx_3 + 0xc)
        
        if (not(zmm2.d f<= (zmm6.d f+ zmm6.d) f* *(rbx_3 + 0x1c)))
            int64_t var_80_1 = 0
            float var_78
            float zmm7_1
            int32_t zmm8_1
            float zmm9_1
            rax, zmm6, zmm7_1, zmm8_1, zmm9_1 =
                sub_141fe56b0(arg1 + 0x30, &var_78, zmm2, arg5, (*(arg2 + 0x18)).d, nullptr)
            int32_t var_74
            arg5.d = var_74.d f* zmm8_1
            arg5.d = arg5.d f+ *(rbx_3 + 0x14)
            *(rbx_3 + 0x10) = var_78 * zmm9_1 f+ *(rbx_3 + 0x10)
            *(rbx_3 + 0x14) = arg5.d
            float var_70
            *(rbx_3 + 0x18) = var_70 * zmm7_1 f+ *(rbx_3 + 0x18)
    
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
