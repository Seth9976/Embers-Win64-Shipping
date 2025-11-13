// 函数: sub_140f54e40
// 地址: 0x140f54e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg3 + 0x28)
float zmm5 = *(arg3 + 0x24)
int128_t zmm7 = *(arg3 + 0x1c)
uint128_t zmm8 = arg3[2].d
uint128_t zmm0
zmm0.d = zmm8.d f* zmm5
int128_t zmm9 = *(arg4 + 0x18)
float zmm1 = zmm7.d * zmm3 f- zmm0.d
uint128_t zmm10 = *(arg4 + 0x1c)
zmm0 = zmm10
zmm10.d = zmm10.d f- arg3[3].d
zmm0.d = zmm0.d f- arg3[3].d
int128_t zmm6
zmm6.d = 1f / zmm1
zmm1 = zmm9.d f- *(arg3 + 0x2c)
zmm9.d = zmm9.d f- *(arg3 + 0x2c)
zmm0.d = zmm0.d f* zmm5 f* zmm6.d
zmm7.d = zmm7.d f* zmm6.d
zmm8.d = zmm8.d f* zmm6.d
zmm10.d = zmm10.d f* zmm7.d
zmm9.d = zmm9.d f* zmm8.d
float arg_8 = zmm1 * zmm3 f* zmm6.d f- zmm0.d
zmm10.d = zmm10.d f- zmm9.d
int32_t arg_c = zmm10.d
int64_t var_78
sub_140f2bf70(arg1, &var_78, arg3, zmm0)

if (*(arg1 + 0x2d4) != 0)
    int64_t rbp_1 = var_78
    
    if (0f f!= *(arg4 + 0x28) || not(0f f== *(arg4 + 0x2c)))
        int64_t r10_1 = sx.q(*(arg1 + 0x2d0))
        int32_t rdx_1 = *(arg1 + 0x2d8)
        int64_t r8
        r8.b = rdx_1 != 0
        sub_140f48de0(arg1, rdx_1, r8, *(arg1 + 0x2dc), r10_1.d, 
            (&arg_8)[r8] - (*(rbp_1 + ((r10_1 * 5 + r8) << 2) + 0x18) f- *(arg1 + 0x304) f* 0.5f), 
            arg1 + 0x2a8, &var_78)
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)
    
    return arg2

int64_t* r9_2 = &var_78
float zmm1_1 = *(arg1 + 0x308)
int32_t zmm0_1 = *(arg1 + 0x304)
int64_t r8_1 = arg_8.q
int32_t rax_1

if (*(arg1 + 0x2d8) != 0)
    rax_1 = sub_140f1bf10(zmm0_1, zmm1_1, r8_1, r9_2)
else
    rax_1 = sub_140f1bfb0(zmm0_1, zmm1_1, r8_1.d, r9_2)

*(arg1 + 0x2d0) = rax_1

if (rax_1 != 0xffffffff)
    int32_t rax_2 = sub_140f45740(rax_1, arg1 + 0x2a8)
    int32_t rax_3
    int32_t rax_4
    
    if (rax_2 s> 0xffffffff)
        rax_3 = sub_140f45640(*(arg1 + 0x2d0), arg1 + 0x2a8)
        int64_t rdx_4 = *(arg1 + 0x2a8)
        rax_4 = (*rdx_4)(arg1 + 0x2a8, rdx_4)
    
    if (rax_2 s<= 0xffffffff || rax_3 s>= rax_4)
        *(arg1 + 0x2d0) = 0xffffffff

int64_t rcx_7 = var_78
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
