// 函数: sub_142215100
// 地址: 0x142215100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = (*(arg1 + 0x228)).b

if ((r8 & 7) == 0)
    return 

void* rdi_1 = *(arg1 + 0x130)
float var_28[0x4]
int64_t var_18
int32_t rax_4
float zmm0[0x4]

if (rdi_1 == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_4 = data_143dbb210
else
    float zmm1[0x4] = *(rdi_1 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_1 + 0x180), zmm1, 4))
    var_28 = zmm1
    
    if (temp0_2 != 0)
        *(rdi_1 + 0x180) = zmm1
        int32_t* rax_2 = sub_140adf5d0(&var_28, &var_18)
        *(rdi_1 + 0x190) = *rax_2
        *(rdi_1 + 0x198) = rax_2[2]
        r8 = (*(arg1 + 0x228)).b
    
    zmm0 = zx.o(*(rdi_1 + 0x190))
    rax_4 = *(rdi_1 + 0x198)

var_18 = zmm0.q
var_28[0].q = var_18
var_28[2] = rax_4

if ((r8 & 1) == 0)
    *arg2 = var_28[0][0]

if ((r8 & 2) == 0)
    *(arg2 + 4) = var_28[1][0]

if ((r8 & 4) == 0)
    arg2[1].d = var_28[2][0]

int32_t rax_6 = arg2[1].d
var_18 = *arg2
int32_t var_10_2 = rax_6
sub_141dd7190(arg1, &var_18, 0)
