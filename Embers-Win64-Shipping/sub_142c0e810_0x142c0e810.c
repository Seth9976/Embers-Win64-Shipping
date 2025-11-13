// 函数: sub_142c0e810
// 地址: 0x142c0e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rdi = arg2

if (*(arg1 + 0xf0) == 0)
    return 

int32_t rax = arg2[2].d

if (rax == 0)
    return 

int32_t rcx = *(arg1 + 0xe0)

if (rcx != rax)
    return 

int32_t i = 0
uint128_t zmm6 = zx.o(*arg2)

if (rcx != 0)
    int128_t* r10_1
    
    if (0 u>= *(arg1 + 0xe0))
        data_144017550.d = 0
        r10_1 = &data_144017550
        goto label_142c0e88e
    
    do
        r10_1 = *(arg1 + 0xe8) + (zx.q(i) << 2)
    label_142c0e88e:
        int128_t* rcx_2
        
        if (i u< rdi[2].d)
            rcx_2 = rdi[3] + (zx.q(i) << 3)
        else
            data_144017550.q = 0
            rcx_2 = &data_144017550
        
        i += 1
        zmm6.q = zmm6.q f+ _mm_cvtps_pd(*r10_1) f* *rcx_2
    while (i u< *(arg1 + 0xe0))

rdi[1] = 0

if (sub_142bfd0e0(&rdi[2], 0) != 0)
    rdi[2].d = 0

*rdi = zmm6.q

if (sub_142bfd0e0(&rdi[2], 0).b != 0)
    rdi[2].d = 0
