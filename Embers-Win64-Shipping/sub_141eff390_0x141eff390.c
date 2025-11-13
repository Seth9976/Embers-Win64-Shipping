// 函数: sub_141eff390
// 地址: 0x141eff390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x148)

if (rbx != 0)
    rbx = rbx[0x4b]

float zmm6[0x4] = zx.o(0)
int32_t var_48
float var_38
float zmm1[0x4]

if (rbx != 0 && (*(arg1 + 0x388) & 0x40) == 0)
    (*(*rbx + 0x660))(rbx, &var_48)
    float zmm0[0x4] = var_48
    zmm0[0] = zmm0[0] f+ *arg3
    int32_t var_40
    zmm6 = var_40
    int32_t var_44
    zmm1 = var_44
    zmm1[0] = zmm1[0] f+ arg3[1]
    int64_t rax_2 = *rbx
    var_38 = zmm0[0]
    zmm6[0] = zmm6[0] f+ arg3[2]
    float var_34_1 = zmm1[0]
    float var_30_1 = zmm6[0]
    (*(rax_2 + 0x668))(rbx, &var_38)

*(arg2 + 8) = 0

if (rbx == 0)
    return 

void* rdi_1 = *(arg1 + 0xb0)
zmm1 = *(rdi_1 + 0x1c0)
uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_1 + 0x180), zmm1, 4))
float var_28[0x4] = zmm1

if (temp0_2 != 0)
    *(rdi_1 + 0x180) = zmm1
    int32_t* rax_4
    rax_4, zmm6 = sub_140adf5d0(&var_28, &var_38)
    *(rdi_1 + 0x190) = *rax_4
    *(rdi_1 + 0x198) = rax_4[2]

int64_t rax_7 = *rbx
*(arg2 + 8) = (*(rdi_1 + 0x198))[0]
(*(rax_7 + 0x660))(rbx, &var_48)
float var_40_1 = zmm6[0]
(*(*rbx + 0x668))(rbx, &var_48)
