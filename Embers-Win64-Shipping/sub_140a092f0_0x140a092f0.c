// 函数: sub_140a092f0
// 地址: 0x140a092f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[0x89]
uint128_t zmm4 = data_143dbb1f8
uint128_t zmm5 = data_143dbb1fc
uint128_t zmm6 = data_143dbb200
uint128_t zmm7 = zmm4
uint128_t zmm8 = zmm5
void* r8_2 = (sx.q(arg1[0x8a].d) << 6) + rdx
int32_t rax
rax.b = 0
uint128_t zmm9 = zmm6
uint64_t var_70_1
uint64_t var_64_1
int32_t var_58_2
uint128_t zmm1

if (rdx == r8_2)
label_140a094b4:
    int32_t var_80_2 = 0
    zmm1 = zx.o(0)
    var_70_1 = (_mm_unpacklo_ps(zx.o(0), zmm1.q)).q
    int32_t var_74_1 = 0
    int32_t var_68_2 = 0
    var_64_1 = (_mm_unpacklo_ps(zx.o(0), zmm1.q)).q
    int32_t var_5c_1 = 0
    var_58_2 = 0
else
    int128_t* rcx = rdx + 0x28
    uint128_t zmm0
    uint128_t zmm2
    
    do
        if (rax.b == 0)
            if (rcx[1].b != 0)
                zmm1 = zx.o(*(rcx + 8))
                zmm2 = *(rcx - 8)
                rax = rcx[1].d
                zmm5 = zmm1.q:4.d
                int64_t var_70
                var_70.o = zmm2
                int32_t var_58_1 = rax
                int32_t var_68
                zmm9 = var_68
                zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm8 = var_70:4.d
                zmm7 = var_70.d
                zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        else if (rcx[1].b != 0)
            zmm0 = *(rcx - 8)
            
            if (not(zmm7.d f<= zmm0.d))
                zmm7 = zmm0
            
            zmm0 = *(rcx - 4)
            
            if (not(zmm8.d f<= zmm0.d))
                zmm8 = zmm0
            
            zmm0 = *rcx
            
            if (not(zmm9.d f<= zmm0.d))
                zmm9 = zmm0
            
            zmm0 = *(rcx + 4)
            
            if (not(zmm4.d f>= zmm0.d))
                zmm4 = zmm0
            
            zmm0 = *(rcx + 8)
            
            if (not(zmm5.d f>= zmm0.d))
                zmm5 = zmm0
            
            zmm0 = *(rcx + 0xc)
            
            if (not(zmm6.d f>= zmm0.d))
                zmm6 = zmm0
        
        rdx += 0x40
        rcx = &rcx[4]
    while (rdx != r8_2)
    
    if (rax.b == 0)
        goto label_140a094b4
    
    zmm4.d = zmm4.d f- zmm7.d
    zmm5.d = zmm5.d f- zmm8.d
    zmm6.d = zmm6.d f- zmm9.d
    uint128_t zmm3 = zmm4
    zmm4.d = zmm4.d f* zmm4.d
    zmm3.d = zmm3.d f* 0.5f
    zmm2.d = zmm5.d f* 0.5f
    zmm1.d = zmm6.d f* 0.5f
    zmm0 = zmm3
    zmm5.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f+ zmm7.d
    zmm0 = _mm_unpacklo_ps(zmm0, zmm2.q)
    zmm2.d = zmm2.d f+ zmm8.d
    var_64_1 = zmm0.q
    zmm4.d = zmm4.d f+ zmm5.d
    zmm6.d = zmm6.d f* zmm6.d
    int32_t var_80 = zmm1.d
    zmm1.d = zmm1.d f+ zmm9.d
    var_70_1 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
    zmm4.d = zmm4.d f+ zmm6.d
    int32_t var_5c = var_80
    zmm4.d = zmm4.d f* 0.25f
    int32_t var_68_1 = zmm1.d
    var_58_2 = _mm_sqrt_ss(0, zmm4.d).d
*(arg1 + 0x468) = var_70_1.o
arg1[0x8f] = var_64_1
arg1[0x90].d = var_58_2
(*(*arg1 + 0x498))(arg1, rdx)
return sub_141ee8690(arg1) __tailcall
