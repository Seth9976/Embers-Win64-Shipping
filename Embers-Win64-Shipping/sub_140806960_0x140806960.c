// 函数: sub_140806960
// 地址: 0x140806960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xe8)
uint32_t result_1 = 0
void* rbx = arg1
int32_t rax_1

if (rax s<= data_14396ee6c)
    arg1.b = 0
    rax_1 = rax + 1
else
    arg1.b = 1
    rax_1 = 0

*(rbx + 0xe8) = rax_1
*(rbx + 0xec) = arg1.b
sub_14209a390(rbx + 0x70)
sub_14209a390(rbx + 0x98)
sub_14209a390(rbx + 0xc0)
int64_t rax_2 = sx.q(*(rbx + 0x90))
uint32_t rax_4

if (rax_2.d != *(rbx + 0x78))
    rax_4 = 0
else
    rax_4 = (divu.dp.q(0:(*(rbx + 0x88)), rax_2)).d

int64_t zmm2 = 0x408f400000000000
uint128_t zmm1
zmm1.q = data_143d796f8 f* zmm2
zmm1.q = zmm1.q f* float.d(zx.q(rax_4))
*(rbx + 0x64) = _mm_cvtpd_ps(zmm1).d
int64_t rax_6 = sx.q(*(rbx + 0xb8))
uint32_t rax_8

if (rax_6.d != *(rbx + 0xa0))
    rax_8 = 0
else
    rax_8 = (divu.dp.q(0:(*(rbx + 0xb0)), rax_6)).d

zmm1.q = data_143d796f8 f* zmm2
zmm1.q = zmm1.q f* float.d(zx.q(rax_8))
*(rbx + 0x68) = _mm_cvtpd_ps(zmm1).d
int64_t rax_10 = sx.q(*(rbx + 0xe0))

if (rax_10.d == *(rbx + 0xc8))
    result_1 = (divu.dp.q(0:(*(rbx + 0xd8)), rax_10)).d

zmm1.q = data_143d796f8 f* zmm2
uint64_t result = zx.q(result_1)
zmm1.q = zmm1.q f* float.d(result)
*(rbx + 0x6c) = _mm_cvtpd_ps(zmm1).d
return result
