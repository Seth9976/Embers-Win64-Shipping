// 函数: sub_142674740
// 地址: 0x142674740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint128_t zmm0 = arg2[2]
uint128_t zmm1 = arg2[4]
uint64_t rax = zx.q(*(arg1 + 0x158))
int128_t* rbx_1 = *(arg1 + 0x150)
int32_t r12_1 = *arg2
int32_t r13_1 = arg2[1]
int128_t zmm7
int128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8
uint128_t zmm9
uint128_t var_78_1 = zmm9
uint128_t zmm13 = arg2[8]
int128_t zmm14 = arg2[9]
int128_t zmm15 = arg2[3]
uint128_t zmm6
zmm6.d = zmm13.d f* arg3.d
int32_t arg_10 = zmm0.d
int32_t arg_20 = zmm1.d
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (rax.d == 1)
    zmm8.d = (*(rbx_1 + 4)).d f- zmm6.d
    zmm9.d = zmm6.d f+ rbx_1[1].d
    int64_t* r9_1 = *(arg2 + 0x28)
    zmm7.d = (*(rbx_1 + 8)).d f- zmm6.d
    int32_t r10_1 = 0
    uint128_t zmm10 = zmm6
    int128_t zmm11
    zmm11.d = (*rbx_1).d f- zmm6.d
    zmm6.d = zmm6.d f+ *(rbx_1 + 0x14)
    zmm10.d = zmm10.d f+ *(rbx_1 + 0xc)
    
    if (r13_1 s> 0)
        do
            int32_t r8_1 = 0
            
            if (r12_1 s> 0)
                zmm5.d = _mm_cvtepi32_ps(zx.o(r10_1)).d f* zmm13.d
                zmm5.d = zmm5.d f+ zmm1.d
                zmm5 ^= 0x80000000
                
                do
                    int32_t* i = *r9_1
                    zmm3.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f* zmm13.d
                    zmm3.d = zmm3.d f+ zmm0.d
                    zmm3 ^= 0x80000000
                    
                    if (i != 0)
                        do
                            int32_t rdx = *i
                            
                            if ((rdx & 0xfc000000) == 0xfc000000)
                                arg3.d = zmm3.d f- zmm13.d
                                zmm1.d = zmm5.d f- zmm13.d
                                zmm0.d = float.s(zx.q(rdx) & 0x1fff)
                                zmm4.d = float.s(zx.q(rdx u>> 0xd) & 0x1fff)
                                zmm0.d = zmm0.d f* zmm14.d
                                zmm4.d = zmm4.d f* zmm14.d
                                zmm0.d = zmm0.d f+ zmm15.d
                                zmm4.d = zmm4.d f+ zmm15.d
                                
                                if ((arg3.d f<= zmm11.d || arg3.d f>= zmm10.d || zmm1.d f<= zmm8.d
                                        || zmm1.d f>= zmm9.d || zmm0.d f<= zmm7.d
                                        || not(zmm0.d f< zmm6.d)) && (zmm3.d f<= zmm11.d
                                        || zmm3.d f>= zmm10.d || zmm5.d f<= zmm8.d
                                        || zmm5.d f>= zmm9.d || zmm4.d f<= zmm7.d
                                        || not(zmm4.d f< zmm6.d)))
                                    *i = rdx & 0x3ffffff
                            
                            i = *(i + 8)
                        while (i != 0)
                        
                        zmm0 = arg_10
                    
                    r9_1 = &r9_1[1]
                    r8_1 += 1
                while (r8_1 s< r12_1)
                
                zmm1 = arg_20
            
            r10_1 += 1
        while (r10_1 s< r13_1)
    
    return 

int64_t r10_2 = 0
int32_t r9_2 = 0
int64_t var_110 = 0
int64_t var_108_1 = 0

if (rax.d s> 0)
    sub_1413f6f70(&var_110, rax.d)
    rax = zx.q(*(arg1 + 0x158))
    r9_2 = var_108_1.d
    r10_2 = var_110

int32_t i_1 = 0

if (rax.d s> 0)
    void* rbx_2 = rbx_1 + 0x14
    
    do
        zmm0.d = zmm6.d f+ *rbx_2
        zmm1.d = (*(rbx_2 - 0x14)).d f- zmm6.d
        int64_t r14_1 = sx.q(r9_2)
        zmm4.d = zmm6.d f+ *(rbx_2 - 8)
        char var_e8_1 = 1
        zmm3.d = zmm6.d f+ *(rbx_2 - 4)
        int32_t var_114_1 = zmm0.d
        r9_2 = (r14_1 + 1).d
        arg3.d = (*(rbx_2 - 0x10)).d f- zmm6.d
        zmm0.d = (*(rbx_2 - 0xc)).d f- zmm6.d
        var_108_1.d = r9_2
        zmm1 = _mm_unpacklo_ps(zmm1, arg3.q)
        int32_t var_f8_1 = zmm0.d
        uint64_t var_f4_1 = (_mm_unpacklo_ps(zmm4, zmm3.q)).q
        uint64_t var_100_1 = zmm1.q
        int32_t var_ec_1 = var_114_1
        
        if (r9_2 s> var_108_1:4.d)
            sub_1405c50f0(&var_110)
            r9_2 = var_108_1.d
            r10_2 = var_110
        
        i_1 += 1
        rbx_2 += 0x1c
        uint128_t* rcx_2 = r14_1 * 0x1c
        *(rcx_2 + r10_2) = var_100_1.o
        *(rcx_2 + r10_2 + 0x10) = var_f4_1
        *(rcx_2 + r10_2 + 0x18) = var_e8_1.d
    while (i_1 s< *(arg1 + 0x158))

int64_t* rbx_3 = *(arg2 + 0x28)
int32_t rdi_2 = 0

if (r13_1 s> 0)
    do
        int32_t r11_1 = 0
        
        if (r12_1 s> 0)
            zmm6.d = _mm_cvtepi32_ps(zx.o(rdi_2)).d f* zmm13.d
            zmm6.d = zmm6.d f+ arg_20.d
            zmm6 ^= 0x80000000
            
            do
                int32_t* i_2 = *rbx_3
                arg3.d = _mm_cvtepi32_ps(zx.o(r11_1)).d f* zmm13.d
                arg3.d = arg3.d f+ arg_10.d
                arg3 ^= 0x80000000
                
                for (; i_2 != 0; i_2 = *(i_2 + 8))
                    int32_t rdx_4 = *i_2
                    
                    if ((rdx_4 & 0xfc000000) == 0xfc000000)
                        int32_t rcx_3 = 0
                        zmm4.d = arg3.d f- zmm13.d
                        zmm5.d = zmm6.d f- zmm13.d
                        zmm3.d = float.s(zx.q(rdx_4) & 0x1fff)
                        zmm3.d = zmm3.d f* zmm14.d
                        zmm1.d = float.s(zx.q(rdx_4 u>> 0xd) & 0x1fff)
                        zmm3.d = zmm3.d f+ zmm15.d
                        zmm1.d = zmm1.d f* zmm14.d
                        zmm1.d = zmm1.d f+ zmm15.d
                        
                        if (r9_2 s> 0)
                            rax = r10_2 + 4
                            
                            do
                                zmm0 = *(rax - 4)
                                
                                if (not(zmm4.d f<= zmm0.d) && not(zmm4.d f>= *(rax + 8))
                                        && not(zmm5.d f<= *rax) && not(zmm5.d f>= *(rax + 0xc))
                                        && not(zmm3.d f<= *(rax + 4)) && zmm3.d f< *(rax + 0x10))
                                    goto label_142674c43
                                
                                if (not(arg3.d f<= zmm0.d) && not(arg3.d f>= *(rax + 8))
                                        && not(zmm6.d f<= *rax) && not(zmm6.d f>= *(rax + 0xc))
                                        && not(zmm1.d f<= *(rax + 4)) && zmm1.d f< *(rax + 0x10))
                                    goto label_142674c43
                                
                                rcx_3 += 1
                                rax += 0x1c
                            while (rcx_3 s< r9_2)
                        
                        *i_2 = rdx_4 & 0x3ffffff
                    
                label_142674c43:
                
                rbx_3 = &rbx_3[1]
                r11_1 += 1
            while (r11_1 s< r12_1)
        
        rdi_2 += 1
    while (rdi_2 s< r13_1)

if (r10_2 != 0)
    sub_140a74f90(r10_2)
