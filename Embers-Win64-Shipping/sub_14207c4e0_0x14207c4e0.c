// 函数: sub_14207c4e0
// 地址: 0x14207c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rbx = 0
float zmm6[0x4] = arg2

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x70)
    
    while (not(zmm6[0] f<= *rax_1))
        rbx += 1
        rdx_1 += 1
        rax_1 = &rax_1[5]
        
        if (rdx_1 s>= rax)
            break

sub_141fd3f30(arg1 + 0x70, rbx, 1)
int64_t rcx_1 = *(arg1 + 0x70)
int64_t var_40 = 0
arg2 = zx.o(0)
int32_t var_44 = 0
int64_t rdx_3 = sx.q(rbx)
float var_48[0x4]
var_48[0] = zmm6[0]
int64_t r10 = rdx_3 * 5
*(rcx_1 + (r10 << 2)) = var_48
*(rcx_1 + (r10 << 2) + 0x10) = 0.d
*(*(arg1 + 0x70) + (r10 << 2) + 0x10) = arg4
int64_t r8_2 = zx.q(*(arg1 + 0x78) - 1)

if (rbx s> 0)
    int64_t rax_4 = *(arg1 + 0x70)
    int64_t rcx_2 = rdx_3 * 5
    
    if (rbx s>= r8_2.d)
        *(rax_4 + (r10 << 2) + 4) = (*(rax_4 + (rcx_2 << 2) - 0x10))[0]
    else
        r8_2 = rdx_3 * 5
        float zmm0[0x4] = *(rax_4 + (r8_2 << 2) + 0x14)
        zmm0[0] = zmm0[0] f- *(rax_4 + (rcx_2 << 2) - 0x14)
        
        if (not(zmm0[0] <= 0f))
            zmm0[0] = zmm0[0] f- *(rax_4 + (r10 << 2))
            arg2 = zmm0
            arg2[0] = arg2[0] - zmm0[0]
            arg2[0] = arg2[0] / zmm0[0]
        
        if ((*(rax_4 + (rcx_2 << 2) - 4) & 0xfd) == 0)
            zmm6 = *(rax_4 + (r8_2 << 2) + 0x18)
            zmm6[0] = zmm6[0] f- *(rax_4 + (rcx_2 << 2) - 0x10)
            zmm6[0] = zmm6[0] * arg2[0]
            zmm6[0] = zmm6[0] f+ *(rax_4 + (rcx_2 << 2) - 0x10)
            *(rax_4 + (r10 << 2) + 4) = zmm6[0]
        else
            arg2[0] = arg2[0] * arg2[0]
            arg2[0] = arg2[0] * arg2[0]
            arg2[0] = arg2[0] + arg2[0]
            float zmm4_1 = arg2[0] * 3f
            arg2[0] = arg2[0] - arg2[0]
            zmm0[0] = zmm0[0] f* *(rax_4 + (r8_2 << 2) + 0x1c)
            arg2[0] = arg2[0] + arg2[0]
            zmm0[0] = zmm0[0] f* *(rax_4 + (rcx_2 << 2) - 8)
            arg2[0] = arg2[0] - arg2[0]
            arg2[0] = arg2[0] + arg2[0]
            arg2[0] = arg2[0] - zmm4_1
            zmm0[0] = zmm0[0] * arg2[0]
            zmm4_1 = zmm4_1 - arg2[0]
            arg2[0] = arg2[0] * zmm0[0]
            arg2[0] = arg2[0] + 1f
            zmm4_1 = zmm4_1 f* *(rax_4 + (r8_2 << 2) + 0x18)
            arg2[0] = arg2[0] f* *(rax_4 + (rcx_2 << 2) - 0x10)
            arg2[0] = arg2[0] + arg2[0]
            arg2[0] = arg2[0] + zmm0[0]
            arg2[0] = arg2[0] + zmm4_1
            *(rax_4 + (r10 << 2) + 4) = arg2[0]
else if (rbx s< r8_2.d)
    int64_t r9 = *(arg1 + 0x70)
    *(r9 + (r10 << 2) + 4) = *(r9 + rdx_3 * 0x14 + 0x18)

r8_2.b = 1
sub_141fdb4d0(arg1 + 0x70, *(arg1 + 0x88), r8_2.b)
return zx.q(rbx)
