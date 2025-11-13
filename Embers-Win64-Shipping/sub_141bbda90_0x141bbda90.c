// 函数: sub_141bbda90
// 地址: 0x141bbda90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)

if (rcx == 0 || *(arg2 + 0x50) != *(arg1 + 0x98))
    return 

sub_141bfc7b0(rcx, arg2)
int32_t arg_8
int32_t* rdx = &arg_8
double zmm0_1 = sub_140e13cf0(*(arg1 + 0x78), rdx)
void* rax_1 = *(arg1 + 0x58)
int128_t zmm1_1 = arg_8
float zmm2_1 = arg3
int128_t zmm3
zmm3.d = zmm1_1.d f* *(rax_1 + 0x4c)
uint64_t rcx_2 = zx.q(*(rax_1 + 0x48))
zmm3.d = zmm3.d f+ *(arg2 + 0x18)
float zmm6_1 = zmm2_1 f* *(rax_1 + 0x50) f+ *(arg2 + 0x1c)
int128_t zmm7 = zmm3

if (rcx_2.d u<= 9)
    rdx = &__dos_header
    
    switch (rcx_2)
        case 0
            zmm6_1 = zmm6_1 f+ *(arg1 + 0x8c)
            zmm7.d = zmm3.d f+ *(arg1 + 0x88)
        case 2
            zmm1_1.d = zmm1_1.d f* 0.5f
            zmm7.d = zmm3.d f- zmm1_1.d
        case 3
            zmm7.d = zmm3.d f- zmm1_1.d
        case 4
            zmm2_1 = zmm2_1 * 0.5f
            zmm6_1 = zmm6_1 - zmm2_1
            zmm7 = zmm3
        case 5
            zmm2_1 = zmm2_1 * 0.5f
        label_141bbdb5a:
            zmm1_1.d = zmm1_1.d f* 0.5f
            zmm6_1 = zmm6_1 - zmm2_1
            zmm7.d = zmm3.d f- zmm1_1.d
        case 6
            zmm2_1 = zmm2_1 * 0.5f
            zmm6_1 = zmm6_1 - zmm2_1
            zmm7.d = zmm3.d f- zmm1_1.d
        case 7
            zmm6_1 = zmm6_1 - zmm2_1
            zmm7 = zmm3
        case 8
            goto label_141bbdb5a
        case 9
            zmm6_1 = zmm6_1 - zmm2_1
            zmm7.d = zmm3.d f- zmm1_1.d

int64_t* rcx_5 = data_143e20d08
(*(*rcx_5 + 0x50))(rcx_5, rdx, zmm1_1, zmm2_1)
zmm0_1 = zmm0_1 f- *(arg1 + 0xa0)

if (not(zmm0_1 >= 0.14999999999999999))
    zmm1_1 = *(arg1 + 0x94)
    zmm2_1 = fconvert.s(zmm0_1 * 6.666666666666667)
    zmm0_1 = *(arg1 + 0x90)
    zmm7.d = zmm7.d f- zmm0_1.d
    zmm6_1 = (zmm6_1 f- zmm1_1.d) * zmm2_1 f+ zmm1_1.d
    zmm7.d = zmm7.d f* zmm2_1
    zmm7.d = zmm7.d f+ zmm0_1.d

*(arg1 + 0x44) = zmm6_1
*(arg1 + 0x40) = zmm7.d
