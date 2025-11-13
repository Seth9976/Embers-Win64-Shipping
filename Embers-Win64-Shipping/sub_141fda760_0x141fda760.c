// 函数: sub_141fda760
// 地址: 0x141fda760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)
int32_t rbx = 0
int128_t zmm6 = arg2

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *arg1
    
    while (not(zmm6.d f<= *rax_1))
        rbx += 1
        rdx_1 += 1
        rax_1 = &rax_1[5]
        
        if (rdx_1 s>= rax)
            break

sub_141fd3f30(arg1, rbx, 1)
arg2 = *arg3
int64_t rdx_3 = *arg1
int64_t var_30 = 0
float var_38[0x4]
var_38[0] = zmm6.d
float temp0[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
temp0[0] = arg2.d
int64_t r8 = sx.q(rbx) * 5
*(rdx_3 + (r8 << 2)) = _mm_shuffle_ps(temp0, temp0, 0xe1)
*(rdx_3 + (r8 << 2) + 0x10) = 0.d
return zx.q(rbx)
