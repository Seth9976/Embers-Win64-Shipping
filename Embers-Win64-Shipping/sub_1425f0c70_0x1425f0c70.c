// 函数: sub_1425f0c70
// 地址: 0x1425f0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6d8
int64_t rax_1 = __security_cookie ^ &var_6d8
int32_t var_698 = 1
int64_t var_660
__builtin_memset(&var_660, 0, 0x14)
int64_t var_670 = 0
int32_t var_648
memset(&var_648, 0, 0x608)
int64_t var_640 = *(arg2 + 0x58)
int32_t var_644
int32_t rcx_3 = (*(arg1 + 0x9c) ^ var_644) & 1
var_648 = 0x71010008
int32_t var_644_1 = var_644 ^ rcx_3
(*(*(arg1 + 0x50) + 0x90))(*(arg1 + 0x58), &var_648)
int64_t r12 = 0
int32_t var_608
var_660.b = var_608 == 3
int64_t var_658
int32_t var_600
var_658:4.d = var_600
int64_t var_6b8 = 0
uint32_t count
int32_t rdi_1

if (count != 0)
    sub_1405da9e0(&var_6b8, count, 0)
    r12 = var_6b8
    int64_t var_610
    memcpy(r12, var_610, count)
    int32_t var_6ac
    rdi_1 = var_6ac
else
    rdi_1 = 0
    int32_t var_6ac_1 = 0

if (var_670 != 0)
    sub_140a74f90(var_670)

uint32_t count_1 = count
int32_t var_664 = rdi_1
(*(*(arg1 + 0x50) + 0x98))(*(arg1 + 0x58), *(arg2 + 0x58))
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t rcx_10 = int.q(zmm0[0])

if (rcx_10 != -0x8000000000000000 && not(float.d(rcx_10) f== zmm0[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx_10 - (zx.q(temp0_2) & 1))

void* rdx_4 = *(arg2 + 0x28)
int64_t var_690 = *(arg2 + 0x40)
int64_t var_688 = *(arg2 + 0x48)
int64_t r8_2 = int.q(zmm0[0])
*(arg2 + 0x90) = r8_2
var_660:4.d = *(rdx_4 + 0x60)
var_658.d = *(rdx_4 + 0x64)
int32_t var_650 = *(arg1 + 0x94)
int64_t var_680 = *(arg2 + 0x88)
int64_t var_678 = r8_2
int64_t var_6a0 = *(arg2 + 0x68)
*(arg2 + 0x68) = 0
void* result = sub_1425f0bb0(arg1, &var_698, &var_6a0)
*(arg2 + 4)
*(arg2 + 4) = 0

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_6d8)
return result
