// 函数: sub_1420c1d10
// 地址: 0x1420c1d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3

if (arg1 == 0)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
    *arg3 = data_143dbb1f8.q
    int32_t rax_4 = data_143dbb200
    arg3[1].d = rax_4
    return rax_4

arg3.b = 1
int32_t var_38
(*(*arg1 + 0x548))(arg1, &var_38, arg3, 0)
float zmm6[0x4] = var_38
int32_t var_24
float zmm0[0x4] = var_24
int32_t var_2c
float zmm3[0x4] = var_2c
float var_30
zmm0[0] = zmm0[0] - var_30
int32_t var_34
int64_t zmm5 = var_34
zmm3[0] = zmm3[0] - zmm6[0]
int32_t var_28
int64_t zmm2
zmm2.d = var_28.d f- zmm5.d
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = zmm3[0] * 0.5f
float var_40 = zmm0[0]
zmm2.d = zmm2.d f* 0.5f
*rbx = (_mm_unpacklo_ps(zmm3, zmm2)).q
rbx[1].d = var_40
zmm6[0] = zmm6[0] f+ *rbx
zmm5.d = zmm5.d f+ *(rbx + 4)
float zmm4 = var_30 f+ rbx[1].d
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5)).q
arg2[1].d = zmm4
return zmm4
