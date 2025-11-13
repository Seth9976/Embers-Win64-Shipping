// 函数: sub_142989b40
// 地址: 0x142989b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[2])
uint64_t rdx = zx.q(arg1[1])

if (*((rax << 2) + &data_1436bbc50) f<= *((rdx << 2) + &data_1436bbc50))
    rax.w = rdx.w

uint64_t rcx = zx.q(rax.w)
uint64_t rax_1 = zx.q(*arg1)
float zmm2 = *((rax_1 << 2) + &data_1436bbc50)

if (*((rcx << 2) + &data_1436bbc50) <= zmm2)
    rcx.w = rax_1.w

float zmm6[0x4] = *((zx.q(rcx.w) << 2) + &data_1436bbc50)
float zmm0 = zmm6[0]
zmm6[0] = zmm6[0] - zmm2
zmm6[0] = zmm6[0] * arg2[0]
sub_142989720(arg4, _mm_max_ss(0, zmm0 - zmm6[0])[0])
sub_142989720(&arg4[1], 
    _mm_max_ss(0, zmm6[0] - (zmm6[0] f- *((zx.q(arg1[1]) << 2) + &data_1436bbc50)) * arg2[0]))
zmm6[0] = zmm6[0] - (zmm6[0] f- *((zx.q(arg1[2]) << 2) + &data_1436bbc50)) * arg2[0]
sub_142989720(&arg4[2], _mm_max_ss(0, zmm6[0]))
arg4[3] = arg1[3]
float zmm1_2 = (*arg3)[1]
zmm6 = *arg3
zmm2 = (*arg3)[2]
float zmm4 = *((zx.q(*arg4) << 2) + &data_1436bbc50)
int16_t* result = zx.q(arg4[2])
float zmm3 = zmm1_2 f* *((zx.q(arg4[1]) << 2) + &data_1436bbc50) + zmm4 * zmm6[0]
    + zmm2 f* *((result << 2) + &data_1436bbc50)

if (zmm3 <= 0f)
    return result

zmm6[0] = zmm6[0] f* *((zx.q(*arg1) << 2) + &data_1436bbc50)
uint64_t rax_10 = zx.q(arg1[2])
zmm6[0] = zmm6[0] + zmm1_2 f* *((zx.q(arg1[1]) << 2) + &data_1436bbc50)
zmm6[0] = zmm6[0] + zmm2 f* *((rax_10 << 2) + &data_1436bbc50)
zmm6[0] = zmm6[0] / zmm3
float zmm0_3 = zmm6[0] * zmm4
zmm0_3 - 0f
uint16_t rdx_2

if (is_unordered.d(zmm0_3, 0f) || zmm0_3 != 0f)
    int16_t r8 = *((zx.q(zmm0_3) u>> 0x17 << 1) + &data_1436fbc50)
    
    if (r8 == 0)
        rdx_2 = sub_142c998f0(zmm0_3)
    else
        int32_t rcx_5 = zmm0_3 & 0x7fffff
        rdx_2 = ((rcx_5 + 0xfff + (rcx_5 u>> 0xd & 1)) u>> 0xd).w + r8
else
    rdx_2 = (zmm0_3 u>> 0x10).w

zmm1_2 = zmm6[0]
*arg4 = rdx_2
sub_1429897b0(&arg4[1], zmm1_2)
return sub_1429897b0(&arg4[2], zmm6[0])
