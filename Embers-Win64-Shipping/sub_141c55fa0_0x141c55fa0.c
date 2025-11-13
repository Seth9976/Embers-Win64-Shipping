// 函数: sub_141c55fa0
// 地址: 0x141c55fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t** rax
int512_t zmm2_1
rax, zmm2_1 = sub_141c5d7c0(arg1)

if (rax == 0)
    return 

int32_t rcx = rax[5].d
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(rax + 0xc)))
int32_t var_68 = rcx
int64_t var_60_1 = 0
int32_t var_58_1 = zmm0_1.d
int64_t* var_78
int128_t zmm1_1 = sub_141c4c3e0(&var_78, &var_68, arg2, zmm2_1)
sub_142376b50(var_78, 1)
int32_t rsi_1 = *(arg2 + 0xc)
int64_t* rbp_1 = var_78
int64_t* var_70

if (var_70 != 0)
    var_70[1].d += 1
    var_70[1].d += 1

void*** rax_1 = sub_140a82f30(0x28, 8)
rax_1[1] = rax
rax_1[2].d = rsi_1
rax_1[3] = rbp_1
rax_1[4] = var_70
*rax_1 = &data_14320ae00
void*** var_38_1 = rax_1
int32_t* (* var_48)(int64_t* arg1, uint128_t arg2 @ zmm1)
int32_t* (* rax_2)(int64_t* arg1, uint128_t arg2 @ zmm1) = var_48

if (rax_1 != -8)
    rax_2 = sub_141c572d0

var_48 = rax_2
sub_141c56850(rax, &var_48, zmm1_1)

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        rax = zx.q(*(var_70 + 0xc))
        *(var_70 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*var_70 + 8))(var_70, 1)

if (var_70 == 0)
    return 

var_70[1].d -= 1

if (var_70[1].d != 1)
    return 

(**var_70)(var_70)
int32_t rdi_2 = *(var_70 + 0xc)
*(var_70 + 0xc) -= 1

if (rdi_2 == 1)
    (*(*var_70 + 8))(var_70, zx.q(rdi_2))
