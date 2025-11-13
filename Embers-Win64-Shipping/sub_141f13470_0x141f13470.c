// 函数: sub_141f13470
// 地址: 0x141f13470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm7 = arg6
arg6 = sub_141f12f60(arg1, arg4, arg7)

if ((*(*arg1 + 0xe0))(arg1, zx.q(arg3), zx.q(arg4), zx.q(arg7), __saved_zmm7, arg5) != 0)
    arg6 = sub_141f135e0(arg1)

char rax_3 = data_143de5480
void* rdi_1 = data_143f3aed8
void* rsi_1 = rdi_1
int64_t rcx_2
int64_t rbx

if (rax_3 == 0)
    rbx = 0
    rcx_2 = 0
else
    uint32_t rax_2 = GetCurrentThreadId()
    rdi_1 = data_143f3aed8
    rbx = 0
    rax_3 = data_143de5480
    rcx_2.b = rax_2 != data_143de5470

float zmm6

if (zx.o(0).d f>= *(rsi_1 + (rcx_2 << 2)))
    zmm6 = arg1[0x2a].d
else if (rax_3 == 0)
    zmm6 = *rdi_1
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    rax_3 = data_143de5480
    int64_t rcx_3
    rcx_3.b = cond:1_1
    zmm6 = *(rdi_1 + (rcx_3 << 2))

int64_t rdi_2 = data_143f3ae68
float temp0 = _mm_max_ss(zmm6, arg6.d)

if (rax_3 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int128_t zmm0
zmm0.d = (*(rdi_2 + (rbx << 2))).d f* *(arg1 + 0x1bc)
zmm0.d = zmm0.d f* temp0
float zmm1 = temp0 f- zmm0.d
*arg2 = zmm1
zmm0.d = 1f / __maxss_xmmss_memss(temp0 - zmm1, 0x38d1b717)
arg2[1] = zmm0.d
return arg2
