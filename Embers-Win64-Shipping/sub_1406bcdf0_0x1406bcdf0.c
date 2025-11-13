// 函数: sub_1406bcdf0
// 地址: 0x1406bcdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
CRITICAL_SECTION* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)
void* rdx_2

if (rdi.d s>= 0 && rdi.d s< *(arg1 + 0x190))
    rdx_2 = rdi * 0xa8 + 0x18 + *(arg1 + 0x188)

if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x190) || rdi * 0xa8 + 0x18 == neg.q(*(arg1 + 0x188)))
    rdi.b = 0
else
    *arg4 = *(rdx_2 + 0x4c)
    arg4[1] = *(rdx_2 + 0x50)
    arg4[2] = *(rdx_2 + 0x48)
    int32_t zmm0 = *(rdx_2 + 0x48)
    char var_10_1 = 1
    float zmm1[0x4] = 1.o
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    zmm1[0] = zmm0
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x87)
    zmm1[0] = zmm0
    *(arg4 + 0xc) = _mm_shuffle_ps(zmm1, zmm1, 0x39)
    sub_140597df0(&arg4[8], rdx_2 + 8)
    rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
