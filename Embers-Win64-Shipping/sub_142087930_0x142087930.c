// 函数: sub_142087930
// 地址: 0x142087930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg4

if (arg4 == 0)
    rsi = arg1

int64_t r14 = sx.q(arg2)
int32_t rbx = 0
int128_t zmm6 = arg3
int32_t rdi

if (arg2 s< 0 || r14.d s>= *(arg1 + 0x78))
    rdi = -1
else
    void* r15_1 = arg1
    int64_t rax_1 = *(arg1 + 0x70)
    int64_t rcx = r14 * 5
    
    if (rsi != 0)
        r15_1 = rsi
    
    rdi = 0
    int128_t zmm7 = *(rax_1 + (rcx << 2))
    int32_t r12_1 = *(rax_1 + (rcx << 2) + 0x10)
    int64_t rax_2 = sx.q(*(r15_1 + 0x78))
    
    if (rax_2.d s> 0)
        int64_t rcx_1 = 0
        int32_t* rax_3 = *(r15_1 + 0x70)
        
        while (not(zmm6.d f<= *rax_3))
            rdi += 1
            rcx_1 += 1
            rax_3 = &rax_3[5]
            
            if (rcx_1 s>= rax_2)
                break
    
    sub_141fd3f30(r15_1 + 0x70, rdi, 1)
    int64_t rdx_2 = *(r15_1 + 0x70)
    int64_t var_50_1 = 0
    float var_58[0x4]
    var_58[0] = zmm6.d
    float temp0_1[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
    temp0_1[0] = 0
    int64_t r8_1 = sx.q(rdi) * 5
    *(rdx_2 + (r8_1 << 2)) = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
    *(rdx_2 + (r8_1 << 2) + 0x10) = 0.d
    int64_t rax_6 = *(r15_1 + 0x70)
    *(rax_6 + (r8_1 << 2)) = zmm7
    *(rax_6 + (r8_1 << 2) + 0x10) = r12_1
    *(*(r15_1 + 0x70) + (r8_1 << 2)) = zmm6.d
    r8_1.b = 1
    zmm6 = sub_141fdb4d0(r15_1 + 0x70, *(arg1 + 0x88), r8_1.b)

int64_t rax_8 = sx.q(*(rsi + 0xa0))
void* r15_2 = *(rsi + 0x98)

if (rax_8.d s> 0)
    int64_t rcx_4 = 0
    int32_t* rax_9 = r15_2 + 8
    
    while (not(zmm6.d f<= *rax_9))
        rbx += 1
        rcx_4 += 1
        rax_9 = &rax_9[3]
        
        if (rcx_4 s>= rax_8)
            break

sub_142075310(rsi + 0x98, rbx, 1)
int64_t r8_2 = sx.q(rbx) * 3
*(*(rsi + 0x98) + (r8_2 << 2) + 8) = zmm6.d
*(*(rsi + 0x98) + (r8_2 << 2)) = *(r15_2 + r14 * 0xc)
return zx.q(rdi)
