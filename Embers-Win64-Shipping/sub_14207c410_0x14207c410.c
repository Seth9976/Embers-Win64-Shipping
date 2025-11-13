// 函数: sub_14207c410
// 地址: 0x14207c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rbx = 0

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x70)
    
    while (not(arg2[0] f<= *rax_1))
        rbx += 1
        rdx_1 += 1
        rax_1 = &rax_1[5]
        
        if (rdx_1 s>= rax)
            break

sub_141fd3f30(arg1 + 0x70, rbx, 1)
int64_t r8_1 = *(arg1 + 0x70)
int64_t var_30 = 0
float var_38[0x4]
var_38[0] = arg2[0]
float temp0[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
temp0[0] = 0
int64_t r9 = sx.q(rbx) * 5
*(r8_1 + (r9 << 2)) = _mm_shuffle_ps(temp0, temp0, 0xe1)
*(r8_1 + (r9 << 2) + 0x10) = 0.d
r8_1.b = 1
*(*(arg1 + 0x70) + (r9 << 2) + 0x10) = arg4
sub_141fdb4d0(arg1 + 0x70, *(arg1 + 0x88), r8_1.b)
return zx.q(rbx)
