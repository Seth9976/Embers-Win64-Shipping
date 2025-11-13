// 函数: sub_141c47000
// 地址: 0x141c47000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int32_t r8 = *(arg3 + 0xc)
int32_t rdx = 0
arg3[1].d = 0

if (rdi s> r8)
    sub_140775b10(arg3, rdi)
    rdx = arg3[1].d
    r8 = *(arg3 + 0xc)

int32_t result = rdx + rdi
arg3[1].d = result

if (result s> r8)
    result = sub_140775270(arg3)

float (* rcx_2)[0x4] = *arg1

if (rdi s> 0)
    float (* r8_2)[0x4] = *arg3 - rcx_2
    int128_t* r9_1 = *arg2 - rcx_2
    uint64_t i_1 = zx.q(((rdi - 1) u>> 2) + 1)
    uint64_t i
    
    do
        *(r8_2 + rcx_2) = __addps_xmmps_memps(*(r9_1 + rcx_2), *rcx_2)
        rcx_2 = &rcx_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
