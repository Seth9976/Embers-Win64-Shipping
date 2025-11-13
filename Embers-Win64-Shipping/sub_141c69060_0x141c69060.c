// 函数: sub_141c69060
// 地址: 0x141c69060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x130)
int64_t* arg_8

if (r8 != 0)
    int64_t* rcx = *(arg1 + 0x240)
    
    if (rcx != 0)
        (*(*rcx + 0x18))(rcx)
    else
        int64_t* rax_1 = (*(*r8 + 0x30))(r8, &arg_8)
        
        if (arg1 + 0x240 != rax_1)
            int64_t* rcx_2 = *(arg1 + 0x240)
            *(arg1 + 0x240) = *rax_1
            *rax_1 = 0
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
        
        int64_t* rcx_3 = arg_8
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
    
    sub_141c689e0(arg1, *(arg1 + 0x240))
    
    if (sub_141c4aa70(*(arg1 + 0x1e0)) s> 0)
        sub_141c4ac30(*(arg1 + 0x1e0), arg1 + 0x240)
    
    return sub_141c4abc0(*(arg1 + 0x1e0)) __tailcall

int32_t rax_7 = *(arg1 + 0x1f4)
*(arg1 + 0x1f0) = 0

if (rax_7 s< 0 && rax_7 != 0)
    sub_140775b10(arg1 + 0x1e8, 0)

void* rax_8 = *(arg1 + 0x88)
int64_t r14 = sx.q(*(arg1 + 0x1f0))
int32_t rbx_2 = *(rax_8 + 0x14) * *(rax_8 + 0x958)
int32_t rax_9 = r14.d + rbx_2
*(arg1 + 0x1f0) = rax_9

if (rax_9 s> *(arg1 + 0x1f4))
    sub_140775270(arg1 + 0x1e8)

memset(*(arg1 + 0x1e8) + (r14 << 2), 0, sx.q(rbx_2) << 2)
uint32_t zmm6[0x4] = sub_141c67b00(arg1, arg1 + 0x1e8)

if (sub_141c3c790(arg1 + 0x1c0) == 0)
    void* rax_12 = *(arg1 + 0x88)
    int64_t* rcx_14 = *(arg1 + 0x1d8)
    uint32_t var_48_1[0x4] = zmm6
    uint128_t zmm0_1 = zx.o(*(rax_12 + 0xc))
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(*(rax_12 + 0x14)))
    zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
    zmm2_1.d = zmm2_1.d f/ zmm0_1.d
    void var_68
    int64_t* rax_14
    int512_t zmm2_2
    rax_14, zmm2_2 = sub_141c4aad0(rcx_14, &var_68, zmm2_1, arg1 + 0x22c, zmm0_1.d, arg1 + 0x228)
    sub_141c32790(arg1 + 0x1c0, rax_14)
    sub_141c32310(&var_68)
    uint32_t zmm6_1[0x4] = *(arg1 + 0x22c)
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x88) + 0xc)))
    zmm6_1[0] = zmm6_1[0] f- zmm1_1.d
    
    if (not(__andps_xmmxud_memxud(zmm6_1, data_142d3f770)[0] f<= 9.99999994e-09f))
        *(arg1 + 0x120)
        zmm6_1[0] = zmm6_1[0] f/ zmm1_1.d
        int64_t rdx_10
        rdx_10.b = 4
        zmm2_2.o = zmm6_1
        *(arg1 + 0x238) = 1
        int32_t rax_16 = *(arg1 + 0x204)
        *(arg1 + 0x200) = 0
        
        if (rax_16 s< 0 && rax_16 != 0)
            sub_140775b10(arg1 + 0x1f8, 0)
        
        int32_t rdx_11 = *(arg1 + 0x200)
        uint32_t zmm0_2[0x4] = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1f0)))
        zmm0_2[0] = zmm0_2[0] f* zmm6_1[0]
        zmm0_2[0] = zmm0_2[0] f+ 16f
        int32_t r8_5 = int.d(zmm0_2[0]) + rdx_11
        *(arg1 + 0x200) = r8_5
        
        if (r8_5 s> *(arg1 + 0x204))
            sub_140775270(arg1 + 0x1f8)

*(arg1 + 0x120)
arg_8.d = divs.dp.d(sx.q(*(arg1 + 0x1f0)), *(arg1 + 0x120))

if (*(arg1 + 0x238) != 0)
    *(arg1 + 0x1e8)
    int64_t** var_78_1 = &arg_8
    int32_t var_80_1 = *(arg1 + 0x200)
    int64_t var_88_2 = *(arg1 + 0x1f8)
else if (arg1 + 0x1f8 != arg1 + 0x1e8)
    int64_t rcx_21 = *(arg1 + 0x1f8)
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    *(arg1 + 0x1f8) = *(arg1 + 0x1e8)
    *(arg1 + 0x1e8) = 0
    *(arg1 + 0x200) = *(arg1 + 0x1f0)
    *(arg1 + 0x204) = *(arg1 + 0x1f4)
    *(arg1 + 0x1f0) = 0

int32_t r13 = *(arg1 + 0x228)
int32_t rax_25 = *(arg1 + 0x120)

if (r13 != rax_25)
    int32_t rax_26 = *(arg1 + 0x214)
    *(arg1 + 0x210) = 0
    
    if (rax_26 s< 0 && rax_26 != 0)
        sub_140775b10(arg1 + 0x208, 0)
    
    int32_t rcx_25 = *(arg1 + 0x228) * arg_8.d + *(arg1 + 0x210)
    *(arg1 + 0x210) = rcx_25
    
    if (rcx_25 s> *(arg1 + 0x214))
        sub_140775270(arg1 + 0x208)
    
    int32_t rax_27 = *(arg1 + 0x224)
    *(arg1 + 0x220) = 0
    
    if (rax_27 s< 0 && rax_27 != 0)
        sub_140775b10(arg1 + 0x218, 0)
    
    int32_t r12_1 = *(arg1 + 0x120)
    uint64_t rax_28 = zx.q(*(arg1 + 0x228))
    
    if (r12_1 s> 8 || rax_28.d s> 8)
        int64_t r13_1 = sx.q(*(arg1 + 0x220))
        int32_t r12_2 = r12_1 * rax_28.d
        int32_t rax_31 = r12_2 + r13_1.d
        *(arg1 + 0x220) = rax_31
        
        if (rax_31 s> *(arg1 + 0x224))
            sub_140775270(arg1 + 0x218)
        
        memset(*(arg1 + 0x218) + (r13_1 << 2), 0, sx.q(r12_2) << 2)
    else
        sub_141c4c1f0(arg1 + 0x218, 
            (sx.q(((rax_28 << 3) + -fffffffffffffff7).d + r12_1) << 4) + data_143f34e00)
    
    sub_141c5abe0(*(arg1 + 0x120), arg1 + 0x1f8, zx.q(*(arg1 + 0x228)), arg1 + 0x208)
else if (arg1 + 0x208 != arg1 + 0x1f8)
    int64_t rcx_32 = *(arg1 + 0x208)
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    *(arg1 + 0x208) = *(arg1 + 0x1f8)
    *(arg1 + 0x1f8) = 0
    *(arg1 + 0x210) = *(arg1 + 0x200)
    *(arg1 + 0x214) = *(arg1 + 0x204)
    *(arg1 + 0x200) = 0

sub_141c43910(arg1 + 0x1c0, *(arg1 + 0x208), *(arg1 + 0x210))
int32_t result = sub_141c4ab90(*(arg1 + 0x1d8))

if (r13 == rax_25 && arg1 + 0x1f8 != arg1 + 0x208)
    int64_t rcx_35 = *(arg1 + 0x1f8)
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    *(arg1 + 0x1f8) = *(arg1 + 0x208)
    *(arg1 + 0x208) = 0
    *(arg1 + 0x200) = *(arg1 + 0x210)
    result = *(arg1 + 0x214)
    *(arg1 + 0x204) = result
    *(arg1 + 0x210) = 0

if (*(arg1 + 0x238) == 0 && arg1 + 0x1e8 != arg1 + 0x1f8)
    int64_t rcx_36 = *(arg1 + 0x1e8)
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    *(arg1 + 0x1e8) = *(arg1 + 0x1f8)
    *(arg1 + 0x1f8) = 0
    *(arg1 + 0x1f0) = *(arg1 + 0x200)
    result = *(arg1 + 0x204)
    *(arg1 + 0x1f4) = result
    *(arg1 + 0x200) = 0

return result
