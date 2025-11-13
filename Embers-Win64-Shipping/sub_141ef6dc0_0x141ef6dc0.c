// 函数: sub_141ef6dc0
// 地址: 0x141ef6dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x29] == 0)
    return 

if ((arg1[0x1e].b & 8) != 0 && (*(*arg1 + 0x448))() != 0)
    jump(*(*arg1 + 0x590))

int32_t zmm1
float zmm2

if ((*(*arg1 + 0x548))(arg1) == 0)
    zmm1 = data_143dbb1f8
    zmm2 = data_143dbb1fc
    arg3 = data_143dbb200
else
    (*(*arg1 + 0x3e8))(arg1)
    zmm1 = (zx.o(0)).d
    zmm2 = (zx.o(0)).d

arg3.d = arg3.d f+ *(arg1 + 0x234)
zmm1 = zmm1 f+ *(arg1 + 0x22c)
zmm2 = zmm2 f+ arg1[0x46].d
int32_t var_10_1 = *(arg1 + 0xcc)
int32_t var_20_1 = arg3.d
bool cond:1_1 = *(arg1 + 0x384) - 1 u<= 2
int64_t rax_9 = *arg1
int64_t var_18 = *(arg1 + 0xc4)
int32_t var_28 = zmm1
float var_24_1 = zmm2

if (cond:1_1)
    (*(rax_9 + 0x590))(arg1, zx.q(*(arg1 + 0x386)), 0)
else
    (*(rax_9 + 0x7d0))(arg1)

(*(*arg1 + 0x880))(arg1, arg2, &var_28, &var_18)
