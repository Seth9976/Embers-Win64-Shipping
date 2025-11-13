// 函数: sub_142319220
// 地址: 0x142319220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t zmm0 = data_143dbb1f8.q
int32_t rax = data_143dbb200
uint64_t var_30 = zmm0
int32_t var_10 = 0xbf800000
int64_t var_18 = 0
float zmm9[0x4]
float zmm10[0x4]
float zmm12[0x4]
char rax_1 = sub_1423120f0(arg1, arg2, &var_30, 0, zmm9, zmm10, zmm12)

if (rax_1 != 0)
    *arg3 = var_30
    arg3[1].d = rax
    *arg4 = zmm0
    arg4[1].d = rax
    *arg5 = var_18
    *arg6 = var_10.d
    return zx.q(rax_1)

*arg3 = data_143dbb1f8.q
arg3[1].d = data_143dbb200
*arg4 = data_143dbb1f8.q
arg4[1].d = data_143dbb200
*arg5 = 0
int64_t var_38 = 0
*arg6 = 0xbf800000
return zx.q(rax_1)
