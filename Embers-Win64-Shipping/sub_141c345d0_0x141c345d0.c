// 函数: sub_141c345d0
// 地址: 0x141c345d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1].d
float zmm2[0x4] = arg2
void* r10 = *arg1
int32_t r9_1 = r9 & 3
int32_t rdx_1 = r9 & 0xfffffffc

if (rdx_1 != 0)
    arg2 = zmm2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
    
    if (rdx_1 s> 0)
        void* rcx = r10
        uint64_t i_1 = zx.q(((rdx_1 - 1) u>> 2) + 1)
        uint64_t i
        
        do
            float zmm0[0x4] = *rcx
            rcx += 0x10
            *(rcx - 0x10) = _mm_mul_ps(zmm0, temp0_1)
            i = i_1
            i_1 -= 1
        while (i != 1)

if (r9_1 == 0)
    return 

int32_t var_10_1 = r9_1
void* var_18 = r10 + (sx.q(rdx_1) << 2)
var_18.o = var_18.o
sub_141c34660(&var_18, zmm2)
