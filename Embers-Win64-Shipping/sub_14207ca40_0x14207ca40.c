// 函数: sub_14207ca40
// 地址: 0x14207ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rdi = 0

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x70)
    
    while (not(arg2[0] f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[3]
        
        if (rdx_1 s>= rax)
            break

sub_142075310(arg1 + 0x70, rdi, 1)
float temp0[0x4] = _mm_unpacklo_ps(arg2, 0x3f800000)
int64_t rdx_3 = sx.q(rdi) * 3
int64_t rcx_2 = *(arg1 + 0x70)
*(rcx_2 + (rdx_3 << 2)) = temp0.q
*(rcx_2 + (rdx_3 << 2) + 8) = 1
return zx.q(rdi)
