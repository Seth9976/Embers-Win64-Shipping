// 函数: sub_141c26c50
// 地址: 0x141c26c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)
void* rbx = *(arg1 + 0x130)
int64_t var_28
int32_t result
float zmm0[0x4]

if (rbx == 0)
    zmm0 = zx.o(data_143dbb208)
    result = data_143dbb210
else
    float zmm1_1[0x4] = *(rbx + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1_1, 4))
    float var_18[0x4] = zmm1_1
    
    if (temp0_2 != 0)
        *(rbx + 0x180) = zmm1_1
        int32_t* rax_1 = sub_140adf5d0(&var_18, &var_28)
        *(rbx + 0x190) = *rax_1
        *(rbx + 0x198) = rax_1[2]
    
    zmm0 = zx.o(*(rbx + 0x190))
    result = *(rbx + 0x198)

var_28 = zmm0.q
*(arg1 + 0x798) = var_28
*(arg1 + 0x7a0) = result
return result
