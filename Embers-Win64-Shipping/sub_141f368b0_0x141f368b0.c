// 函数: sub_141f368b0
// 地址: 0x141f368b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int64_t zmm0 = data_143dbb1f8.q
*arg2 = zmm0
arg2[1].d = rax
(*(*arg1 + 0x3e8))()
bool cond:0 = arg1[0x1f].b s>= 0
zmm0.d = zmm0.d f+ arg2[1].d
float zmm2 = *(arg1 + 0x174) f+ *(arg2 + 4)
zmm0.d = zmm0.d f+ arg1[0x2f].d
*arg2 = arg1[0x2e].d f+ *arg2
*(arg2 + 4) = zmm2
arg2[1].d = zmm0.d

if (not(cond:0) && sub_140d3e110(arg1 + 0x14c) != 0)
    void var_28
    int32_t* rax_4 = (*(*arg1 + 0x578))(arg1, &var_28, arg3, arg4)
    zmm0.d = (*arg2).d f+ *rax_4
    float zmm1 = rax_4[1] f+ *(arg2 + 4)
    *arg2 = zmm0.d
    zmm0.d = rax_4[2].d f+ arg2[1].d
    *(arg2 + 4) = zmm1
    arg2[1].d = zmm0.d

return arg2
