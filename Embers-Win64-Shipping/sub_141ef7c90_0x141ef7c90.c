// 函数: sub_141ef7c90
// 地址: 0x141ef7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx

if ((*(arg1 + 0x25c))[0] f!= *(arg1 + 0xc4) || (*(arg1 + 0x260))[0] f!= *(arg1 + 0xc8)
        || (*(arg1 + 0x264))[0] f!= *(arg1 + 0xcc))
    rdx = 1
else
    rdx = 0

void* r8 = *(arg1 + 0xb0)
float zmm0[0x4] = *(r8 + 0x1d0)
int96_t var_18 = zmm0[0].12
uint32_t rax

if (zmm0[0] f!= *(arg1 + 0x250) || var_18:4.d[0] f!= *(arg1 + 0x254)
        || var_18:8.d[0] f!= *(arg1 + 0x258))
    rax.b = 1
else
    rax.b = 0

if (rdx == 0 && rax.b == 0)
    uint32_t temp0_2 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(*(arg1 + 0x240), *(r8 + 0x1c0), 4))
    
    if (temp0_2 == 0)
        return temp0_2

rax.b = 1
return rax
