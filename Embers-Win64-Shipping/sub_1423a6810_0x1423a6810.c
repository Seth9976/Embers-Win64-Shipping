// 函数: sub_1423a6810
// 地址: 0x1423a6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d f!= arg2[1].d || *(arg3 + 0xc) f!= *(arg2 + 0xc) || arg3[2].d f!= arg2[2].d
        || *(arg3 + 0x14) f!= *(arg2 + 0x14) || arg3[3].d f!= arg2[3].d
        || *(arg3 + 0x1c) f!= *(arg2 + 0x1c) || arg3[4].d f!= arg2[4].d)
    int32_t rax_1
    rax_1.b = memcmp(&arg2[1], &arg3[1], 0x1c) s< 0
    return rax_1

int64_t rax = *arg2
int64_t temp0 = *arg3
bool c = rax u< temp0

if (rax == temp0)
    float zmm0 = *(arg2 + 0x24)
    float temp1_1 = *(arg3 + 0x24)
    zmm0 - temp1_1
    c = zmm0 < temp1_1

rax.b = c
return rax
