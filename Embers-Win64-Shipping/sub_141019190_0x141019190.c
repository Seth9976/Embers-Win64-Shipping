// 函数: sub_141019190
// 地址: 0x141019190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int512_t zmm0
zmm0.o = zx.o(0)
int64_t var_11c = 0x10001
int128_t var_f8 = zx.o(0)
zmm0.o = data_143dbb1e0
int128_t var_e4 = zmm0.o
int32_t var_120 = 1
int128_t zmm2 = (*arg5).o
int64_t var_130 = 0
zmm0.o = 1.o
void* const var_c8 = u"AccelerationStructureBuffer"
int64_t var_114 = 1
int128_t* var_140 = &var_f8
int32_t r14 = 1 << arg4
int128_t var_b8 = zmm0.o
int32_t var_10c = 1
zmm0.o = var_11c:4.o
int128_t var_98 = zmm0.o
int32_t var_e8 = 1
char var_d0 = 0
int32_t var_c0 = 0
int128_t var_a8 = zmm2
int32_t var_d4 = r14
int64_t var_88 = 4.q
uint64_t rax_3
int512_t zmm0_1
rax_3, zmm0_1 = sub_1410004f0(arg3, nullptr, &var_b8, 0x100, zmm0, 0, zmm2.d, 0x8000, var_140)
void* rbx = *arg1
*arg1 = rax_3

if (rax_3 != 0)
    (*(*(rax_3 + 0x20) + 8))(rax_3 + 0x20)

if (rbx != 0)
    (*(*(rbx + 0x20) + 0x10))(rbx + 0x20)

*(*arg1 + 0x78)
int64_t rdx_1 = arg5[1]
int64_t var_11c_1 = 0x10001
int64_t var_130_1 = 0

if (arg5[2] u>= rdx_1)
    rdx_1 = arg5[2]

wchar16 const* const var_c8_1 = u"ScratchBuffer"
int128_t* var_140_1 = &var_f8
int32_t var_148_1 = 8
int32_t var_150_1 = rdx_1.d
int32_t var_158_1 = 0
zmm0_1.o = 1.o
int32_t var_120_1 = 1
int64_t var_114_1 = 1
int128_t var_80 = zmm0_1.o
int32_t var_10c_1 = 1
zmm0_1.o = var_11c_1:4.o
uint128_t var_70 = rdx_1.o
int32_t var_d4_1 = r14
uint64_t var_50 = 4.q
int128_t var_60 = zmm0_1.o
uint64_t result =
    sub_1410004f0(arg3, nullptr, &var_80, 0x100, zmm0_1, var_158_1, var_150_1, var_148_1, var_140_1)
uint64_t rbx_1 = *arg2
*arg2 = result

if (result != 0)
    result = (*(*(result + 0x20) + 8))(result + 0x20)

if (rbx_1 != 0)
    result = (*(*(rbx_1 + 0x20) + 0x10))(rbx_1 + 0x20)

*(*arg2 + 0x78)
__security_check_cookie(rax_1 ^ &var_178)
return result
