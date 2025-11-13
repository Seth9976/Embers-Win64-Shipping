// 函数: sub_141ef6360
// 地址: 0x141ef6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
arg1[4].d = arg3.d
arg1[2] = arg2
(*(rax + 0x18))()
int64_t zmm0 = *(arg4 + 4)
arg3 = *arg4
float zmm1 = arg4[1].d
zmm0.d = zmm0.d f* zmm0.d
arg3.d = arg3.d f* arg3.d
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm1 * zmm1
int64_t temp0 = _mm_sqrt_ss(0, arg3.d)
*(arg1 + 0x204) = temp0.d
int64_t var_28
int32_t var_20

if (temp0.d f<= 9.99999994e-09f)
    int32_t rax_1 = data_143dbb200
    var_28 = data_143dbb1f8.q
    var_20 = rax_1
else
    arg3.d = 1f f/ temp0.d
    zmm0.d = arg3.d f* *arg4
    zmm1 = arg3.d f* *(arg4 + 4)
    arg3.d = arg3.d f* arg4[1].d
    var_28.d = zmm0.d
    var_28:4.d = zmm1
    var_20 = arg3.d

arg1[0x3f] = var_28
arg1[0x40].d = var_20
int64_t* rcx = *(arg2 + 0x288)
int32_t var_20_1 = arg4[1].d
var_28 = *arg4
void var_18
int64_t* rax_5 = (*(*rcx + 0x950))(rcx, &var_18, &var_28)
zmm0 = *rax_5
arg1[0x3d] = zmm0
arg1[0x3e].d = rax_5[1].d
int64_t* rcx_1 = *(arg2 + 0x288)
(*(*rcx_1 + 0x3f0))(rcx_1)
*(arg1 + 0x1f4) = zmm0.d
int32_t rax_8 = *(arg2 + 0x348)
int32_t rcx_2 = rax_8 - 1

if (rax_8 s<= 0)
    rcx_2 = 0

*(arg1 + 0x34) = rcx_2
arg1[3].d ^= (zx.d(*(*(arg2 + 0x288) + 0x388)) u>> 3 ^ arg1[3].d) & 2
arg1[3].d ^= ((zx.d(*(*(arg2 + 0x288) + 0x1f1)) * 2) ^ arg1[3].d) & 4
int64_t* rcx_11 = *(arg2 + 0x288)
char rax_12 = (*(*rcx_11 + 0x5a0))(rcx_11, 0)
*(arg1 + 0x39) = rax_12
arg1[7].b = rax_12

if (sub_142008300(*(arg2 + 0x288) + 0x4d8) != 0)
    arg1[3].d |= 8

if (sub_141ea47f0(arg2) != 0)
    arg1[3].d |= 8

void* rax_15 = *(arg2 + 0x288)

if (0f f!= *(rax_15 + 0x3c0) || 0f f!= *(rax_15 + 0x3c4) || not(0f f== *(rax_15 + 0x3c8)))
    arg1[3].d |= 8

*(arg1 + 0x1c) = *(arg5 + 0xc)
return arg5
