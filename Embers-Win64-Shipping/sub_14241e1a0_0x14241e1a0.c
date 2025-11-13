// 函数: sub_14241e1a0
// 地址: 0x14241e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_2 = *(arg1 + 8)
int64_t rdi
rdi.b = 0

if (*(rax_2 + 8) != 0 || *(rax_2 + 0x18) != 0 || *(rax_2 + 0x58) != 0 || *(rax_2 + 0x130) != 0
        || *(rax_2 + 0x48) != 0 || *(rax_2 + 0x28) s> 0)
    rdi.b = 1
    int64_t* r14_1 = *(arg2 + 0x58)
    (*(*r14_1 + 0x20))(r14_1)
    void* r15_1 = *(arg1 + 8)
    int128_t zmm6
    zmm6.d = 1f f/ arg4
    void* rax_4 = *(r15_1 + 0x238)
    
    if (rax_4 != 0 && *(rax_4 + 0x45) != 0)
        zmm6 = 0x3f800000
    
    int32_t rcx_2
    
    if (sub_14128e090((*U"1111")[sx.q(*(arg2 + 0x90))]) == 0 || *(arg2 + 0x8d) == 0)
        rcx_2 = 0
    else
        rcx_2 = 2
    
    int32_t rax_7
    rax_7.b = *(arg2 + 0x60) != 0
    int32_t var_c0_1 = rax_7 | rcx_2
    void var_a0
    int32_t var_bc_1 = *(*(*r14_1 + 0x18))(r14_1, &var_a0)
    int32_t rcx_5 = *((*(*r14_1 + 0x18))(r14_1, &var_a0) + 4)
    int32_t var_b0_1 = *(arg2 + 0x78)
    int64_t rax_14 = sx.q(*(arg2 + 0x90))
    int32_t var_ac_1 = rax_14.d
    int32_t rax_15 = (*U"1111")[rax_14]
    void*** rax_16 = sub_140a82f30(0x30, 8)
    float zmm1[0x4] = rcx_5.o
    *rax_16 = &data_142ff85d8
    *(rax_16 + 8) = r15_1.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    temp0_1[0] = zmm6.d
    *(rax_16 + 0x18) = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
    rax_16[5] = rax_15.q
    int64_t* r14_2 = *arg3
    int64_t (* var_98)(int64_t* arg1, void* arg2)
    int64_t (* rax_17)(int64_t* arg1, void* arg2) = var_98
    
    if (rax_16 != -8)
        rax_17 = j_sub_1423ffea0
    
    int64_t r15_2 = sx.q(r14_2[1].d)
    int32_t rax_18 = (r15_2 + 1).d
    r14_2[1].d = rax_18
    
    if (rax_18 s> *(r14_2 + 0xc))
        sub_1405c4fe0(r14_2)
    
    int64_t* rcx_11 = (r15_2 << 6) + *r14_2
    *rcx_11 = rax_17
    rcx_11[2] = rax_16
    uint128_t* var_88_2 = nullptr
    uint128_t var_78
    *(rcx_11 + 0x20) = var_78
    float var_68[0x4]
    *(rcx_11 + 0x30) = var_68
    
    if (*rcx_11 == 0 && rax_17 != 0)
        uint128_t* rcx_12 = &var_78
        
        if (var_88_2 != 0)
            rcx_12 = var_88_2
        
        int64_t rdx_5 = *rcx_12
        (*(rdx_5 + 0x10))(rcx_12, rdx_5)

if ((*(arg2 + 0x78) & 2) != 0)
    *(arg1 + 8) = 0

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rdi.b)
