// 函数: sub_14135b870
// 地址: 0x14135b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg3 + 0x280)
uint128_t zmm0 = sub_14135b9e0()
void* r9 = data_143ebb978
float zmm2[0x4] = zmm0
zmm2[0] = zmm2[0] f* zmm6.d
int32_t r10 = *(r9 + 4)
__builtin_memset(&arg1[1], 0, 0x20)
zmm2[0] = zmm2[0] * 0.166666672f
zmm0 = _mm_cvtepi32_ps(zx.o(r10))
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_1[0] = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm0.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = 0
*arg1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
sub_1405d16e0(&(*arg1)[6], *(arg3 + 0x10))
int64_t* arg_18
sub_1405d1600(&arg1[1], sub_141397bf0(&arg_18, &data_143ec4c60, *(arg3 + 0x1548), 0xf, 1))
int64_t* rbx = arg_18

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

arg1[2][0].q = data_14395f4d0
void* rax_6 = sub_1422c6ca0(arg2)

if (rax_6 == 0)
    rax_6 = data_1439b70c8

*(arg1 + 0x28) = *(rax_6 + 0x10)
return arg1
