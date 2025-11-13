// 函数: sub_14226c540
// 地址: 0x14226c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x250)
void* r8 = rax

if (rax == 0)
    r8 = *(arg1 + 0x548)

if (r8 == 0)
    int32_t rax_6 = *(arg1 + 0x560)
    *arg2 = *(arg1 + 0x558)
    arg2[1].d = rax_6
    return arg2

if (rax == 0)
    rax = *(arg1 + 0x548)

void* rcx = *(rax + 0x130)

if (rcx == 0)
    int32_t rax_3 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[1].d = rax_3
    return arg2

uint128_t zmm1 = *(rcx + 0x1d0)
int64_t var_18
var_18.d = zmm1.d
var_18:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
int32_t var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
*arg2 = var_18
arg2[1].d = var_10
return arg2
