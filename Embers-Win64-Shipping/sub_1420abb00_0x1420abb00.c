// 函数: sub_1420abb00
// 地址: 0x1420abb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

if (rbx_1.d s>= *(arg1 + 0x90))
    return 

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0)
    return 

int64_t rax = (*(*rcx + 0x260))(rcx)
int64_t rsi_1 = rax

if (rax == 0)
    return 

rax = *(rax + 0x130)

if (rax == 0 || (*(arg1 + 0xc0) & 4) != 0)
    return 

uint64_t var_48 = *(rax + 0x128)
int32_t var_40_1 = *(rax + 0x130)
int64_t var_58
sub_140ad3dc0(&var_48, &var_58)
void* rax_3 = *(rsi_1 + 0x130)
int64_t rcx_2 = *(arg1 + 0x70)
int64_t r8 = rbx_1 * 0x2c
*(r8 + rcx_2 + 4) = *(rax_3 + 0x11c)
*(r8 + rcx_2 + 0xc) = *(rax_3 + 0x124)
int32_t var_50

if (*(arg1 + 0x90) s> 1)
    int128_t zmm3 = var_58.d
    int128_t zmm2 = var_58:4.d
    int32_t rax_5 = -1
    
    if (rbx_1.d s<= 0)
        rax_5 = 1
    
    int64_t rcx_3 = sx.q(rax_5 + rbx_1.d) * 0x2c
    int64_t rax_8 = *(arg1 + 0x88)
    uint128_t zmm1 = zx.o(*(rcx_3 + rax_8 + 4))
    int128_t zmm9
    zmm9.d = zmm3.d f- zmm1.d
    uint128_t zmm0 = zmm1
    zmm1 = var_50
    uint128_t zmm6
    zmm6.d = zmm1.d f- *(rcx_3 + rax_8 + 0xc)
    int128_t zmm7
    zmm7.d = zmm2.d f- _mm_shuffle_ps(zmm0, zmm0, 0x55).d
    
    if (not(zmm9.d f<= 180f))
        zmm3.d = zmm3.d f+ -360f
        var_58.d = zmm3.d
    else if (not(zmm9.d f>= -180f))
        zmm3.d = zmm3.d f+ 360f
        var_58.d = zmm3.d
    
    if (not(zmm7.d f<= 180f))
        zmm2.d = zmm2.d f+ -360f
        var_58:4.d = zmm2.d
    else if (not(zmm7.d f>= -180f))
        zmm2.d = zmm2.d f+ 360f
        var_58:4.d = zmm2.d
    
    if (not(zmm6.d f<= 180f))
        zmm1.d = zmm1.d f+ -360f
        var_50 = zmm1.d
    else if (not(zmm6.d f>= -180f))
        zmm1.d = zmm1.d f+ 360f
        var_50 = zmm1.d

int64_t rdx_1 = *(arg1 + 0x88)
*(rdx_1 + r8 + 4) = var_58
*(rdx_1 + r8 + 0xc) = var_50
r8.b = 1
sub_141f55fe0(arg1 + 0x70, *(arg1 + 0xb8), r8.b)
sub_141f55fe0(arg1 + 0x88, *(arg1 + 0xbc), 1)
