// 函数: sub_142456440
// 地址: 0x142456440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void* rbx = *(arg1 + 0x130)
int64_t var_28
int32_t result
float zmm0[0x4]

if (rbx == 0)
    zmm0 = zx.o(data_143dbb208)
    result = data_143dbb210
else
    float zmm1[0x4] = *(rbx + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1, 4))
    float var_18[0x4] = zmm1
    
    if (temp0_2 != 0)
        *(rbx + 0x180) = zmm1
        int32_t* rax_2 = sub_140adf5d0(&var_18, &var_28)
        *(rbx + 0x190) = *rax_2
        *(rbx + 0x198) = rax_2[2]
    
    zmm0 = zx.o(*(rbx + 0x190))
    result = *(rbx + 0x198)

var_28 = zmm0.q
*arg3 = var_28
arg3[1].d = result
return result
