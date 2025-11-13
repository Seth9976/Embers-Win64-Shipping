// 函数: sub_14176b1c0
// 地址: 0x14176b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg4)
int64_t rdi = sx.q(arg3)
int32_t zmm4 = *(arg5 + 0x2c)

if (not(zmm4 f> 0f))
    zmm4 = *arg6

int32_t zmm0 = (*arg1)[0x63]
int64_t rcx = r11 * 3
int64_t rdx = rdi * 3
float zmm2 = (*arg1)[rcx + 0x20] - (*arg1)[rdx + 0x20]
float zmm3[0x4] = (*arg1)[rcx + 0x21]
zmm3[0] = zmm3[0] - (*arg1)[rdx + 0x21]
float zmm1 = (*arg1)[rcx + 0x22] - (*arg1)[rdx + 0x22]
float var_18 = zmm2
float var_14 = zmm3[0]
zmm3[0] = zmm3[0] * zmm3[0]
float var_10 = zmm1
zmm3[0] = zmm3[0] + zmm2 * zmm2
zmm3[0] = zmm3[0] + zmm1 * zmm1

if (zmm3[0] f<= zmm0 f* zmm0)
    *arg2 = 0
    *(arg2 + 4) = 1
    return arg2

sub_140038cc0(arg1, rdi.d, r11.d, &var_18, zmm3, zmm4)
*arg2 = 1
return arg2
