// 函数: sub_141c342e0
// 地址: 0x141c342e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t rbx = *arg1
int32_t r10_1 = r8 & 0xfffffffc
float (* r11)[0x4] = *arg2
int32_t r8_1 = r8 & 3

if (r10_1 s> 0)
    uint64_t i_1 = zx.q(((r10_1 - 1) u>> 2) + 1)
    float (* rcx)[0x4] = r11
    uint64_t i
    
    do
        *rcx = __addps_xmmps_memps(*(rbx - r11 + rcx), *rcx)
        rcx = &rcx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r8_1 == 0)
    return 

int32_t var_20_1 = r8_1
void* var_28 = &(*r11)[sx.q(r10_1)]
float zmm0[0x4] = var_28.o
var_28 = (sx.q(r10_1) << 2) + rbx
int32_t var_20_2 = r8_1
float var_18[0x4] = zmm0
var_28.o = var_28.o
sub_141c34390(&var_28, &var_18)
