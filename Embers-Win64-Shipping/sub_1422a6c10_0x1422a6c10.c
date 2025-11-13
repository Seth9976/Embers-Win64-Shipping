// 函数: sub_1422a6c10
// 地址: 0x1422a6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = 0x3f000000
float zmm3 = arg3[3] - *arg3
float zmm2 = arg3[4] - arg3[1]
float zmm0 = arg3[5] - arg3[2]
int64_t rax = *arg1
int32_t var_18 = 1
zmm0 = zmm0 * 0.5f
float var_14 = zmm3 * 0.5f
float var_c = zmm0
char rax_1 = (*(rax + 0x840))(zmm0, zmm1, &data_14399f720, &var_18, var_18, zmm2 * 0.5f)

if (arg4 != 0 && arg1[0x15] == 0)
    sub_141ee69e0(arg1)

return zx.q(rax_1)
