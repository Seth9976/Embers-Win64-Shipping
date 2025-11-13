// 函数: sub_1425d7c10
// 地址: 0x1425d7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x190)
int128_t zmm6 = zx.o(0)

if (not(zmm0[0] == 0f))
    zmm6.d = 1f / zmm0[0]

int64_t* rcx_2 = *((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x130) + 8)
int64_t rsi = sx.q((*(*rcx_2 + 0x20))(rcx_2))
int64_t* rcx_4 = *((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x130) + 8)
int64_t r8 = *rcx_4
void var_88
int96_t var_a8 = (*(*(r8 + 0x50))(rcx_4, &var_88, r8))[0].12
int64_t var_78
int64_t var_60
int32_t var_58
var_60(sx.q(var_58) + var_78)
int64_t* rcx_9 = *((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x130) + 8)
void var_50
int64_t var_98 = (*(*(*rcx_9 + 0x40))(rcx_9, &var_50))[0].q
int64_t var_40
int64_t var_28
int32_t var_20
int32_t result = var_28(sx.q(var_20) + var_40)
int64_t rdi_1 = 0

if (arg2[1].d != rsi.d)
    int32_t rcx_12 = *(arg2 + 0xc)
    int32_t rdx_4 = 0
    arg2[1].d = 0
    
    if (rcx_12 s< 0 && rcx_12 != 0)
        sub_140638cc0(arg2, 0)
        rdx_4 = arg2[1].d
        rcx_12 = *(arg2 + 0xc)
    
    result = rdx_4 + rsi.d
    arg2[1].d = result
    
    if (result s> rcx_12)
        result = sub_140638a00(arg2)

void* rsi_1 = var_a8.q
int64_t zmm1
float zmm2[0x4]

if (rsi s>= 4)
    float (* r11_2)[0x4] = var_98 - rsi_1
    void* rdx_5 = rsi_1 + 0x18
    int64_t i_2 = ((rsi - 4) u>> 2) + 1
    int64_t rbp_1 = 0
    rdi_1 = i_2 << 2
    int64_t i
    
    do
        zmm2 = *(r11_2 + rdx_5 - 0x18)
        zmm2[0] = zmm2[0] f- *(rdx_5 - 0x18)
        zmm0 = *(r11_2 + rdx_5 - 0x10)
        zmm0[0] = zmm0[0] f- *(rdx_5 - 0x10)
        zmm1.d = (*(r11_2 + rdx_5 - 0x14)).d f- *(rdx_5 - 0x14)
        int64_t* rcx_15 = *arg2
        zmm2[0] = zmm2[0] f* zmm6.d
        zmm0[0] = zmm0[0] f* zmm6.d
        zmm1.d = zmm1.d f* zmm6.d
        var_a8:8.d = zmm0[0]
        *(rcx_15 + rbp_1) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rcx_15 + rbp_1 + 8) = var_a8:8.d
        zmm2 = *(r11_2 + rdx_5 - 8)
        zmm2[0] = zmm2[0] f- *(rdx_5 - 8)
        zmm0 = *(r11_2 + rdx_5)
        zmm0[0] = zmm0[0] f- *rdx_5
        zmm1.d = (*(r11_2 + rdx_5 - 4)).d f- *(rdx_5 - 4)
        int64_t rcx_16 = *arg2
        zmm2[0] = zmm2[0] f* zmm6.d
        zmm0[0] = zmm0[0] f* zmm6.d
        zmm1.d = zmm1.d f* zmm6.d
        var_a8:8.d = zmm0[0]
        *(rcx_16 + rbp_1 + 0xc) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rcx_16 + rbp_1 + 0x14) = var_a8:8.d
        zmm2 = *(r11_2 + rdx_5 + 8)
        zmm2[0] = zmm2[0] f- *(rdx_5 + 8)
        zmm0 = *(r11_2 + rdx_5 + 0x10)
        zmm0[0] = zmm0[0] f- *(rdx_5 + 0x10)
        zmm1.d = (*(r11_2 + rdx_5 + 0xc)).d f- *(rdx_5 + 0xc)
        int64_t rcx_17 = *arg2
        zmm2[0] = zmm2[0] f* zmm6.d
        zmm0[0] = zmm0[0] f* zmm6.d
        zmm1.d = zmm1.d f* zmm6.d
        var_a8:8.d = zmm0[0]
        *(rcx_17 + rbp_1 + 0x18) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rcx_17 + rbp_1 + 0x20) = var_a8:8.d
        zmm0 = *(r11_2 + rdx_5 + 0x20)
        zmm0[0] = zmm0[0] f- *(rdx_5 + 0x20)
        zmm2 = *(r11_2 + rdx_5 + 0x18)
        zmm2[0] = zmm2[0] f- *(rdx_5 + 0x18)
        zmm1.d = (*(r11_2 + rdx_5 + 0x1c)).d f- *(rdx_5 + 0x1c)
        int64_t rcx_18 = *arg2
        rdx_5 += 0x40
        zmm0[0] = zmm0[0] f* zmm6.d
        zmm2[0] = zmm2[0] f* zmm6.d
        var_a8:8.d = zmm0[0]
        result = var_a8:8.d
        zmm1.d = zmm1.d f* zmm6.d
        *(rcx_18 + rbp_1 + 0x24) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rcx_18 + rbp_1 + 0x2c) = result
        rbp_1 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rdi_1 s< rsi)
    void* rdx_7 = rsi_1 + 8 + (rdi_1 << 4)
    int64_t r8_4 = rdi_1 * 0xc
    float (* r9_1)[0x4] = var_98 - rsi_1
    int64_t i_3 = rsi - rdi_1
    int64_t i_1
    
    do
        zmm0 = *(r9_1 + rdx_7)
        zmm0[0] = zmm0[0] f- *rdx_7
        zmm2 = *(r9_1 + rdx_7 - 8)
        zmm2[0] = zmm2[0] f- *(rdx_7 - 8)
        zmm1.d = (*(r9_1 + rdx_7 - 4)).d f- *(rdx_7 - 4)
        int64_t* rcx_19 = *arg2
        rdx_7 += 0x10
        zmm0[0] = zmm0[0] f* zmm6.d
        zmm2[0] = zmm2[0] f* zmm6.d
        var_a8:8.d = zmm0[0]
        result = var_a8:8.d
        zmm1.d = zmm1.d f* zmm6.d
        *(rcx_19 + r8_4) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rcx_19 + r8_4 + 8) = result
        r8_4 += 0xc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
