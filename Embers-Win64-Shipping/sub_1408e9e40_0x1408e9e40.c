// 函数: sub_1408e9e40
// 地址: 0x1408e9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x43c)
int64_t r8 = sx.q(arg2)
int128_t* rbx_1 = r8 * 0x70 + *(arg1 + 0x468)
int64_t* rsi = *(*(*(arg1 + 0x430) + 0x40) + (r8 << 3))

if (zmm1[0] >= -14400f)
    zmm1 = __minss_xmmss_memss(zmm1[0], 0x46610000)
else
    zmm1 = 0xc6610000

zmm1[0] = zmm1[0] f+ *(arg1 + 0x448)
float var_58[0x4]
char rax_2
int64_t r9_1
rax_2, r9_1 = (*(*rsi + 0x260))(rsi, zmm1, zx.q(*(arg1 + 0x439)), rbx_1 + 0x5c, &var_58)
float zmm0[0x4] = *(arg1 + 0x43c)

if (not(zmm0[0] < -14400f))
    __minss_xmmss_memss(zmm0[0], 0x46610000)

int64_t rdx_1 = *rsi
r9_1.b = 0f f> *(arg1 + 0x478)
float var_78[0x4]
char result = (*(rdx_1 + 0x268))(rsi, rdx_1, zx.q(*(arg1 + 0x439)), r9_1, &rbx_1[6], &var_78)

if (result != 0)
    rbx_1[4] = var_78
    int64_t var_68
    rbx_1[5].q = var_68
    int32_t var_60
    *(rbx_1 + 0x58) = var_60

if (rax_2 != 0)
    *rbx_1 = var_58
    float var_48[0x4]
    rbx_1[1] = var_48
    float var_38[0x4]
    rbx_1[2] = var_38
    float var_28[0x4]
    rbx_1[3] = var_28
else if (result == 0)
    return result

return 1
