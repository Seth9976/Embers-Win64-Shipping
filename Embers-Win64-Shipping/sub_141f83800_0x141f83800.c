// 函数: sub_141f83800
// 地址: 0x141f83800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int64_t var_48 = *arg3
int32_t var_40 = rax
int64_t result = sub_1424981c0(arg1, &var_48)
int64_t* rcx = arg1[0x4a]

if (rcx == 0)
    return result

void* rbx_1 = rcx[0x26]
int32_t rax_4
float zmm0_1[0x4]

if (rbx_1 == 0)
    zmm0_1 = zx.o(data_143dbb208)
    rax_4 = data_143dbb210
else
    float zmm1_1[0x4] = *(rbx_1 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
    float var_18[0x4] = zmm1_1
    
    if (temp0_2 != 0)
        *(rbx_1 + 0x180) = zmm1_1
        void var_2c
        int32_t* rax_2 = sub_140adf5d0(&var_18, &var_2c)
        *(rbx_1 + 0x190) = *rax_2
        *(rbx_1 + 0x198) = rax_2[2]
        rcx = arg1[0x4a]
    
    zmm0_1 = zx.o(*(rbx_1 + 0x190))
    rax_4 = *(rbx_1 + 0x198)

var_48 = zmm0_1.q
int64_t var_38 = var_48
int32_t var_30_1 = rax_4
return (*(*rcx + 0x4f0))(rcx, arg2, &var_38, 0, 0)
