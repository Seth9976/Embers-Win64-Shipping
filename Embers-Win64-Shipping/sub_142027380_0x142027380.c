// 函数: sub_142027380
// 地址: 0x142027380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f8fd20(arg2, arg2[0x4a])
void* rbx = arg2[0x4a]

if (rbx == 0)
    return (*(*arg2 + 0x700))(arg2)

void* rbx_1 = *(rbx + 0x130)
float var_28[0x4]
int64_t var_18
int32_t rax_5
int64_t r8
float zmm0_1[0x4]

if (rbx_1 == 0)
    zmm0_1 = zx.o(data_143dbb208)
    rax_5 = data_143dbb210
else
    float zmm1_1[0x4] = *(rbx_1 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
    var_28 = zmm1_1
    
    if (temp0_2 != 0)
        *(rbx_1 + 0x180) = zmm1_1
        int32_t* rax_3
        rax_3, r8 = sub_140adf5d0(&var_28, &var_18)
        *(rbx_1 + 0x190) = *rax_3
        *(rbx_1 + 0x198) = rax_3[2]
    
    zmm0_1 = zx.o(*(rbx_1 + 0x190))
    rax_5 = *(rbx_1 + 0x198)

var_28[2] = rax_5
var_28[0].q = zmm0_1.q
r8.b = 1
float rax_6 = var_28[2]
var_18 = var_28[0].q
float var_10_1 = rax_6
sub_1424981c0(arg2, &var_18)
int64_t rax_7 = *arg2
int64_t var_38 = *arg3
int32_t var_30_1 = 0
(*(rax_7 + 0x668))(arg2, &var_38)
(*(*arg1 + 0x790))(arg1, arg2[0x4a])
return sub_1424b2920(arg1, arg2)
