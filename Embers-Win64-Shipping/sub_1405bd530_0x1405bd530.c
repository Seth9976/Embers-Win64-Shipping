// 函数: sub_1405bd530
// 地址: 0x1405bd530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (arg1 == 0)
    return 

void* rax
int32_t zmm0_1
rax, zmm0_1 = sub_14226dd50(*(arg1 + 0x220))
void* rcx_1 = *(rax + 0x70)

if (rcx_1 == 0)
    return 

rax = sub_142029a80(rcx_1)

if (rax != 0)
    (*(*(rax + 8) + 0x20))(rax + 8)
    double zmm1[0x2] = zx.o(0)
    zmm1[0] = fconvert.d(zmm0_1)
    *arg2 = _mm_cvtpd_ps(zmm1)
    return 

*arg2 = _mm_cvtpd_ps(zx.o(0))
