// 函数: sub_1422e0970
// 地址: 0x1422e0970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 8)
int128_t zmm6 = arg2
void* rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x48))(rcx)

float rax_3
int64_t zmm0

if (rcx == 0 || 0f f== *(rax_2 + 0x28))
    zmm0 = *(arg3 + 0x60c)
    rax_3 = *(arg3 + 0x614)
else
    int64_t rcx_1 = sx.q(arg4) * 3
    zmm0 = *(rax_2 + (rcx_1 << 2))
    rax_3 = *(rax_2 + (rcx_1 << 2) + 8)

int64_t result
result.d = (*(arg3 + 0x294)).d f* 0.5f
float zmm2 = rax_3 - arg1[2]
arg2.d = (*(arg3 + 0x280)).d f* 0.5f
float zmm3 = zmm0.d - *arg1
int64_t temp0 = _mm_max_ss(result.d, arg2.d)
float zmm5 = zmm0:4.d - arg1[1]
result.d = temp0.d f* zmm6.d
result.d = result.d f* result.d
result.d = result.d f/
    __maxss_xmmss_memss((zmm5 * zmm5 + zmm3 * zmm3 + zmm2 * zmm2) f* *(arg3 + 0x2ac), 0x3f800000)
return result
