// 函数: sub_14040b0c0
// 地址: 0x14040b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_38 = __security_cookie ^ &var_38
int64_t rdi = sx.q(arg2)
int64_t rax_2 = rdi << 2
int64_t r10 = rax_2 + 0xf

if (r10 u<= rax_2)
    r10 = 0xffffffffffffff0

int64_t r10_1 = r10 & 0xfffffffffffffff0
__chkstk(r10_1)
void var_68
void* rsp_1 = &var_68 - r10_1
sub_14040bfb0(rsp_1 + 0x30, rdi.d, arg3, arg6)
int64_t rbx = 0
void* rcx_1 = rsp_1 + 0x30
int32_t i = 0
int32_t zmm1 = (zx.o(0)).d
uint128_t zmm0

do
    zmm0 = zx.o(*rcx_1)
    i += 1
    rcx_1 += 4
    zmm0 = _mm_cvtepi32_ps(zmm0)
    zmm0.d = zmm0.d f* zmm0.d
    zmm0.d = zmm0.d f+ zmm1
    zmm1 = zmm0.d
while (i s< rdi.d)

void* rax_4 = arg1
float zmm2 = 1f f/ fconvert.s(sqrt(_mm_cvtps_pd(zmm0.q).q).q) * arg7

do
    uint128_t zmm0_1 = zx.o(*(rsp_1 + 0x30 - arg1 + rax_4))
    rbx += 1
    rax_4 += 4
    zmm0_1.d = _mm_cvtepi32_ps(zmm0_1).d f* zmm2
    *(rax_4 - 4) = zmm0_1.d
while (rbx s< rdi)

*(rsp_1 + 0x28) = arg4
*(rsp_1 + 0x20) = arg3
sub_14040b200(arg1, zx.q(rdi.d), 0xffffffff, zx.q(arg5))
uint64_t result = sub_14040b720(rsp_1 + 0x30, rdi.d, arg5)
__security_check_cookie(var_38 ^ &var_38)
return result
