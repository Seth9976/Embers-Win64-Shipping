// 函数: sub_142034a50
// 地址: 0x142034a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg2 + 4)
int64_t* rbx = *(arg1 + 0x10)
float zmm1 = *(arg2 + 8)
int128_t zmm6 = *arg2
void* result = rbx[0x23]
zmm6.d = zmm6.d f* zmm6.d
zmm6.d = zmm6.d f+ zmm0 * zmm0
zmm6.d = zmm6.d f+ zmm1 * zmm1

if (result == 0)
    (*(*rbx + 0x390))(rbx)
    result = rbx[0x23]

float temp0 = *(result + 0x268)
zmm6.d f- temp0
result.b = zmm6.d f< temp0
return result
