// 函数: sub_1420874f0
// 地址: 0x1420874f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

if (arg4 == 0)
    arg4 = arg1

int32_t rbx = 0
int64_t rdx = sx.q(arg2) * 5
int64_t rax_1 = *(arg1 + 0x70)
int128_t zmm7 = *(rax_1 + (rdx << 2))
int32_t rbp = *(rax_1 + (rdx << 2) + 0x10)
int64_t rax_2 = sx.q(*(arg4 + 0x78))

if (rax_2.d s> 0)
    int64_t rcx = 0
    int32_t* rax_3 = *(arg4 + 0x70)
    
    while (not(arg3.d f<= *rax_3))
        rbx += 1
        rcx += 1
        rax_3 = &rax_3[5]
        
        if (rcx s>= rax_2)
            break

sub_141fd3f30(arg4 + 0x70, rbx, 1)
int64_t r8 = *(arg4 + 0x70)
int64_t var_40 = 0
float var_48[0x4]
var_48[0] = arg3.d
float temp0[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
temp0[0] = 0
int64_t r9 = sx.q(rbx) * 5
*(r8 + (r9 << 2)) = _mm_shuffle_ps(temp0, temp0, 0xe1)
*(r8 + (r9 << 2) + 0x10) = 0.d
r8.b = 1
int64_t rdx_4 = *(arg4 + 0x70)
*(rdx_4 + (r9 << 2)) = zmm7
*(rdx_4 + (r9 << 2) + 0x10) = rbp
*(*(arg4 + 0x70) + (r9 << 2)) = arg3.d
sub_141fdb4d0(arg4 + 0x70, *(arg1 + 0x88), r8.b)
return zx.q(rbx)
