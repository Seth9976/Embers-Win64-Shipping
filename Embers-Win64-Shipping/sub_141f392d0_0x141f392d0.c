// 函数: sub_141f392d0
// 地址: 0x141f392d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x18] == 0)
    return 

void* rdi_1 = arg1[0x14]
void* rax_1 = sub_142577430()
void* r8_1 = arg1[2]
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    (*(*arg1 + 0x6e8))(arg1)

if (((rdi_1 != 0 && *(rdi_1 + 0xf0) == 3) || (arg1[0x11].b & 0x10) == 0
        || (*(arg1[0x18] + 0x88) & 0x10) == 0) && (arg1[0x11].b & 1) != 0)
    void* rax_6 = arg1[0x18]
    int64_t* rcx_2 = *(rax_6 + 0xd0)
    void* rdx = &rcx_2[sx.q(*(rax_6 + 0xd8))]
    
    if (rcx_2 != rdx)
        while (*rcx_2 != arg1)
            rcx_2 = &rcx_2[1]
            
            if (rcx_2 == rdx)
                break

void* rdx_1 = arg1[0x18]
sub_1423c7420(&arg1[6], rdx_1, rdx_1 + 0x30)
int64_t* rcx_5 = arg1[0x18] + 0xd0
int64_t* arg_8 = arg1
sub_1409d7d20(rcx_5, &arg_8)
int64_t* rcx_7 = arg1[0x18] + 0xe0
arg_8 = arg1
sub_1409d7d20(rcx_7, &arg_8)
int64_t* rcx_8 = arg1[0x18]
(*(*rcx_8 + 0x500))(rcx_8, arg1)
*(arg1 + 0x14c) &= 0x3f
*(arg1 + 0x14d) &= 0xfe
arg1[0x18] = 0
arg_8 = nullptr
arg1[0x19] = 0
(*(*arg1 + 0x478))(arg1)
float zmm2[0x4]

if (*arg2 == 1)
    zmm2 = *(arg1 + 0x1d0)
    float var_20_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *(arg1 + 0x11c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    *(arg1 + 0x124) = var_20_1

if (*(arg2 + 1) == 1)
    float zmm1_1[0x4] = *(arg1 + 0x1c0)
    uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1_1, 4))
    float var_18[0x4] = zmm1_1
    
    if (temp0_5 != 0)
        *(arg1 + 0x180) = zmm1_1
        void var_28
        int32_t* rax_12 = sub_140adf5d0(&var_18, &var_28)
        arg1[0x32] = *rax_12
        arg1[0x33].d = rax_12[2]
    
    arg1[0x25] = arg1[0x32]
    arg1[0x26].d = arg1[0x33].d

if (*(arg2 + 2) == 1)
    zmm2 = *(arg1 + 0x1e0)
    float var_20_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *(arg1 + 0x134) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    *(arg1 + 0x13c) = var_20_2

char rax
int64_t r8_3
rax, r8_3 = sub_1405c6ac0(arg1, 0, 0)

if ((arg1[0x11].b & 1) == 0 || (*(arg1 + 0x14d) & 0x20) != 0)
    return 

if (arg1[0x2f].d s> 0)
    void* rdx_6 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
    *(rdx_6 + 0x350) |= 2
    *(rdx_6 + 0x10) = 3
    *(rdx_6 + 0x74) = 0xffffffff
    return 

if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
    rax = 0
else
    rax = 1

if (rax != 0)
    return 

r8_3.b = 1
rax = (*(*arg1 + 0x468))(arg1, 0, r8_3, 0)
*(arg1 + 0x14c) &= 0xfd
*(arg1 + 0x14c) |= (rax & 1) * 2
