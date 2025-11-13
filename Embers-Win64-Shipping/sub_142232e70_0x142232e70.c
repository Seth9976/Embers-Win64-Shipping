// 函数: sub_142232e70
// 地址: 0x142232e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)
void* rbp_2 = (sx.q(*(arg1 + 0x30)) << 6) + rbx
float zmm0[0x4]
float zmm6[0x4]

while (rbx != rbp_2)
    zmm0, zmm6 = sub_142232670(rbx, arg2, arg3)
    rbx += 0x40
    _mm_min_ss(zmm0[0], zmm6[0])

void* rbx_1 = *(arg1 + 0x48)
void* rbp_5 = sx.q(*(arg1 + 0x50)) * 0x50 + rbx_1

while (rbx_1 != rbp_5)
    zmm0, zmm6 = sub_142232790(rbx_1, arg2, arg3)
    rbx_1 += 0x50
    _mm_min_ss(zmm0[0], zmm6[0])

void* i = *(arg1 + 0x38)
int64_t result = sx.q(*(arg1 + 0x40))

for (void* rbp_7 = result * 0x58 + i; i != rbp_7; i += 0x58)
    int32_t zmm0_1
    int32_t zmm6_1
    result, zmm0_1, zmm6_1 = sub_142231f60(i, arg2, arg3)
    _mm_min_ss(zmm0_1, zmm6_1)

return result
