// 函数: sub_1415046b0
// 地址: 0x1415046b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r14 = arg1
int64_t var_88

if (arg1[0x2b].d != arg3.d || *(arg1 + 0x15c) != (arg3 u>> 0x20).d || *arg1 == 0)
    arg1[0x2b].d = arg3.d
    uint32_t r8 = (arg3 u>> 0x20).d
    *(arg1 + 0x15c) = r8
    int32_t r9_2 = r8 * arg1[0x2b].d
    int128_t var_78
    int128_t* var_90_1 = &var_78
    var_78 = zx.o(0)
    int32_t var_68_1 = 1
    char var_50_1 = 0
    arg1[0x2c].d = r9_2 << 2
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    wchar16 const* const var_48_1 = u"VTFeedbackGPU"
    int128_t var_64_1 = data_143dbb1e0
    int32_t var_40_1 = 0
    int32_t var_98_1 = 0x249
    (*(*data_143f0f180 + 0x498))(zx.o(0), &var_88, &data_143f02b98)
    sub_1405d1600(r14, &var_88)
    sub_1405d1550(&var_88)
    int64_t* rcx_4 = data_143f0f180
    var_98_1.b = 0x1c
    (*(*rcx_4 + 0x590))(rcx_4, &var_88, &data_143f02b98, *r14, var_98_1, var_90_1)
    sub_1405d1600(&r14[1], &var_88)
    sub_1405d1550(&var_88)

int64_t rax_8 = r14[1]
int64_t* rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
var_88 = rax_8
void* rcx_7 = &rdi_2[1]

if (rcx_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_8 = var_88
    rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_7 = &rdi_2[1]

*(arg2 + 0x30) = rcx_7
*rdi_2 = rax_8
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_11[6]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_11[6]

*(arg2 + 0x30) = rax_9
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_11
*(arg2 + 8) = &rcx_11[1]
*rcx_11 = &data_142da7798
rcx_11[2].d = 1
rcx_11[3] = rdi_2
rcx_11[4] = 3
rcx_11[5] = 0
rcx_11[1] = 0
int64_t rdi_5 = r14[1]
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
var_88 = -1
int64_t var_80 = -1
void* rax_12 = &rcx_17[5]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_17[5]

*(arg2 + 0x30) = rax_12
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[2] = rdi_5
rcx_17[1] = 0
*rcx_17 = &data_142f115d8
*(rcx_17 + 0x18) = var_88.o
int64_t rax_15 = r14[1]
int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
var_88 = rax_15
void* rcx_21 = &rdi_8[1]

if (rcx_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_15 = var_88
    rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_21 = &rdi_8[1]

*(arg2 + 0x30) = rcx_21
*rdi_8 = rax_15
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_25[6]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_25[6]

*(arg2 + 0x30) = rax_16
void**** rax_17 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_17 = rcx_25
*(arg2 + 8) = &rcx_25[1]
rcx_25[1] = 0
*rcx_25 = &data_142da7798
rcx_25[2].d = 1
rcx_25[3] = rdi_8
rcx_25[4].d = 3
*(rcx_25 + 0x24) = 3
rcx_25[5] = 0
int64_t result = sub_14150a1a0(r14[0x2a], arg2)
__security_check_cookie(rax_1 ^ &var_b8)
return result
