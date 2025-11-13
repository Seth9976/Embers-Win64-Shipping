// 函数: sub_141bf4140
// 地址: 0x141bf4140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x430) == 1)
    *(arg1 + 0x4c8) = 0
    return 

if (*(arg1 + 0x4c8) != 0 && arg2 == 0)
    return 

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_2 = sub_140d2dfc0(sub_142480e50(), arg1, 0, 0, 0, 0, 0, 0, 0)
char var_b0
char var_b0_1 = var_b0 | 1
*(arg1 + 0x4c8) = rax_2
int32_t var_c0_1 = 0
*(rax_2 + 0x8c) = 2
void** const var_c8
int64_t* var_a0_1 = &var_c8
int32_t rax_3 = data_143dbb200
int32_t rax_4 = data_143dbb210
int64_t var_bc_1 = 0
void* rdi_1 = *(arg1 + 0x4c8)
uint64_t var_98_1 = data_143dbb1f8.q
uint128_t zmm0_1 = zx.o(data_143dbb208)
int32_t var_b4_1 = 1
int32_t var_a8_1 = 6
var_c8 = &data_142e3e618
uint64_t var_8c_1 = zmm0_1.q
int32_t var_80_1 = 0x3f800000
float var_7c_1 = 1f
int32_t var_78_1 = 0x3f800000
int64_t rsi_1 = sx.q(*(rdi_1 + 0x40))
int32_t rax_5 = (rsi_1 + 1).d
*(rdi_1 + 0x40) = rax_5

if (rax_5 s> *(rdi_1 + 0x44))
    sub_1407755b0(rdi_1 + 0x38)

void*** rcx_3 = rsi_1 * 0x58 + *(rdi_1 + 0x38)
*rcx_3 = &data_142e3e610
rcx_3[1].d = var_c0_1.d
*(rcx_3 + 0xc) = var_bc_1
*(rcx_3 + 0x14) = var_b4_1
rcx_3[3].b ^= (rcx_3[3].b ^ var_b0_1) & 1
rcx_3[4].d = 6
rcx_3[5] = rcx_3
*rcx_3 = &data_142e3e618
rcx_3[6] = var_98_1
rcx_3[7].d = rax_3
*(rcx_3 + 0x3c) = var_8c_1
*(rcx_3 + 0x44) = rax_4
rcx_3[9].d = var_80_1.d
*(rcx_3 + 0x4c) = var_7c_1
rcx_3[0xa].d = var_78_1.d
bool cond:1_1 = *(arg1 + 0x520) != 1
void* rax_11 = *(arg1 + 0x4c8)
uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x458)))
void* rdi_2 = *(rax_11 + 0x38)

if (not(cond:1_1))
    zmm0_1.d = (*(arg1 + 0x524)).d f* 0.0174532924f
    zmm4_1.d = zmm4_1.d f/ zmm0_1.d
    zmm0_1.d = zmm0_1.d f* 0.5f
    float zmm6_1 = zmm4_1.d
    zmm4_1.d = sinf(zmm0_1.d).d f* (zmm6_1 + zmm6_1)

uint128_t zmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x45c)))
*(arg1 + 0x464)
zmm0_1.d = zmm3_1.d f* 0.5f
float zmm2_1 = zmm3_1.d f* *(arg1 + 0x468)
*(rdi_2 + 0x48) = 0x3c23d70a
*(rdi_2 + 0x4c) = zmm4_1.d
*(rdi_2 + 0x50) = zmm3_1.d
uint128_t var_48 = data_143dbb0c0
int64_t var_70
int64_t zmm6_2
uint128_t zmm7_1
zmm6_2, zmm7_1 = sub_140adf5d0(&var_48, &var_70)
*(rdi_2 + 0x3c) = var_70
uint128_t zmm0_2 = _mm_unpacklo_ps(zmm7_1, zmm6_2)
int32_t var_68
*(rdi_2 + 0x44) = var_68
*(rdi_2 + 0x30) = zmm0_2.q
*(rdi_2 + 0x38) = zmm2_1 f- zmm0_1.d
