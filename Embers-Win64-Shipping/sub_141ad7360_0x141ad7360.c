// 函数: sub_141ad7360
// 地址: 0x141ad7360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_f0
uint128_t zmm8 = zx.o(var_f0)
int64_t* var_f8 = arg1
uint64_t var_60 = zmm8.q
int128_t var_100
int128_t var_70 = var_100
int128_t var_b0 = var_100
uint64_t var_a0 = zmm8.q
int128_t var_98 = zx.o(0)
int64_t rax = arg1[1]
int64_t var_88 = rax
void var_138
int128_t var_120
int128_t zmm6

if (rax != 0)
    int64_t var_130_1 = *arg1
    int64_t var_128_1 = arg1[1]
    int128_t* var_108_1 = &var_b0
    __builtin_memset(&var_120, 0, 0x18)
    zmm6 = sub_141ad7d30(&var_138)
else
    zmm6 = zx.o(0)

int64_t r14 = arg1[2]
char r15 = 1
int64_t rdi = 1

if (1 s< r14)
    do
        int128_t var_e8 = var_100
        int64_t var_d0_1 = 0
        uint64_t var_d8_1 = zmm8.q
        int64_t var_c8_1 = rdi
        int64_t rcx_1 = arg1[1]
        int64_t var_c0_1 = rcx_1
        int128_t zmm0
        
        if (rcx_1 != 0)
            int64_t var_130_2 = *arg1
            int64_t var_128_2 = arg1[1]
            int64_t var_110_1 = rcx_1 * rdi
            var_120.q = 0
            var_120:8.q = rdi
            int128_t* var_108_2 = &var_e8
            zmm0 = sub_141ad7d30(&var_138)
        else
            zmm0 = zx.o(0)
        
        rdi += 1
        zmm6 = _mm_max_ss(zmm0.d, zmm6.d)
    while (rdi s< r14)

arg1[7].d = zmm6.d
sub_14090cd30(&arg1[5], arg1[1])
int64_t rcx_5 = arg1[1]
int32_t arg_8
sub_141ad6aa0(rcx_5, arg1[2], *arg1, rcx_5, arg1[5], &arg_8, 0x100)
int32_t rax_7 = arg_8 & 0x80000001

if (rax_7 s< 0)
    rax_7 = ((rax_7 - 1) | 0xfffffffe) + 1

if (rax_7 != 0)
    r15 = -1

*(arg1 + 0x3c) = r15
uint64_t result = sub_14090cd30(&arg1[3], arg1[6])
int64_t rdx_3 = sx.q(arg1[4].d)

if (rdx_3 s> 0)
    int64_t rcx_7 = 0
    
    do
        result = arg1[3]
        *(result + (rcx_7 << 2)) = rbx
        rbx += 1
        rcx_7 += 1
    while (rcx_7 s< rdx_3)

int64_t r9_1 = arg1[4]
int64_t r9_2 = r9_1 - 1

if (r9_1 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t r8_1 = arg1[3]
        int64_t rdx_4 = sx.q(*(arg1[5] + (r9_2 << 2)))
        int32_t rcx_8 = *(r8_1 + (r9_2 << 2))
        result = zx.q(*(r8_1 + (rdx_4 << 2)))
        *(r8_1 + (r9_2 << 2)) = result.d
        temp1_1 = r9_2
        r9_2 -= 1
        *(r8_1 + (rdx_4 << 2)) = rcx_8
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x3d) = 1
return result
