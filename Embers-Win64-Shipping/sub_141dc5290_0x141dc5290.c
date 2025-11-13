// 函数: sub_141dc5290
// 地址: 0x141dc5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)
int64_t var_28
float var_20
float zmm1[0x4]

if (rax == 0)
    float rax_1 = data_143dbb200
    var_28 = data_143dbb1f8.q
    var_20 = rax_1
else
    zmm1 = *(rax + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_1[0]

*arg2 = var_28
arg2[1].d = var_20
void* rbx = *(arg1 + 0x130)
int32_t result
float zmm0[0x4]

if (rbx == 0)
    zmm0 = zx.o(data_143dbb208)
    result = data_143dbb210
else
    zmm1 = *(rbx + 0x1c0)
    uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1, 4))
    float var_18[0x4] = zmm1
    
    if (temp0_4 != 0)
        *(rbx + 0x180) = zmm1
        int32_t* rax_4 = sub_140adf5d0(&var_18, &var_28)
        *(rbx + 0x190) = *rax_4
        *(rbx + 0x198) = rax_4[2]
    
    zmm0 = zx.o(*(rbx + 0x190))
    result = *(rbx + 0x198)

var_28 = zmm0.q
*arg3 = var_28
arg3[1].d = result
return result
