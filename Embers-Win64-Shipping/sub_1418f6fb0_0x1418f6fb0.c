// 函数: sub_1418f6fb0
// 地址: 0x1418f6fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_b8 = 1
int64_t var_c8 = 0
int32_t* result_1 = nullptr
int64_t var_b0 = 0
int32_t var_a8 = 0
sub_140775520(&result_1)
__builtin_memset(result_1, 0, 0x48)
int32_t* result_2 = result_1
*result_2 = 0x2d
*(result_2 + 0x28) = arg3
result_2[0xc] = 1
result_2[0xe] = 1
result_2[0x10] = 1
*(result_2 + 0x20) = -1
int64_t rbx = sx.q(var_b8)
int32_t rax_3 = (rbx + 1).d

if (rax_3 s> 0)
    sub_140775520(&result_1)

int64_t r15 = rbx * 0x48
__builtin_memset(&result_1[rbx * 0x12], 0, 0x48)
int32_t* result_3 = result_1
result_3[rbx * 0x12] = 0x2d
*(result_3 + r15 + 0x28) = arg4
result_3[rbx * 0x12 + 0xc] = 1
result_3[rbx * 0x12 + 0xe] = 1
result_3[rbx * 0x12 + 0x10] = 1
*(result_3 + r15 + 0x20) = -1
int32_t* result_7 = result_1
int32_t r12_1 = ((zx.q(arg2) << 2) + 2).d
int32_t rax_6 = sub_1418bfb90(r12_1, &result_7[4], &result_7[6])
var_c8.d |= rax_6
result_7[5] = 0x800
result_7[7] = 6
var_c8:4.d |= 0x1000
int32_t* result_4 = result_1
result_4[rbx * 0x12 + 4] = 0
result_4[rbx * 0x12 + 6] = 0
var_c8.d |= 1
result_4[rbx * 0x12 + 5] = 0x1000
result_4[rbx * 0x12 + 7] = 7
var_c8:4.d |= 0x1000

if (rax_3 s> 0 || var_a8 s> 0)
    void* r8
    r8.b = 1
    sub_1418c1fc0(&var_c8, arg1)

int32_t var_98

if (arg5 != arg7 || arg6 != arg8)
    int32_t var_d0_1 = 1
    int32_t var_78_1 = arg6
    int32_t* var_d8_1 = &var_98
    int32_t var_7c_1 = arg5
    int64_t rcx_7 = *(arg1 + 0x40)
    int32_t var_54_1 = arg7
    int32_t var_50_1 = arg8
    int32_t var_e0_1 = 1
    int32_t var_e8_1 = 7
    int64_t var_94_1 = 0
    int64_t var_70_1 = 1
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    int32_t var_74_1 = 1
    var_98 = 1
    int32_t var_8c_1 = 1
    int64_t var_60_1 = 0
    int32_t var_58_1 = 0
    int32_t var_4c_1 = 1
    int32_t var_68_1 = 0
    int32_t var_64_1 = 1
    data_143efba00(rcx_7, arg3, 6, arg4, var_e8_1, var_e0_1, var_d8_1, var_d0_1)
else
    int64_t var_60
    var_60:4.d = arg6
    var_60.d = arg5
    int64_t rcx_6 = *(arg1 + 0x40)
    int32_t* var_d8 = &var_98
    int32_t var_e0 = 1
    int32_t var_e8 = 7
    int64_t var_94 = 0
    int64_t var_88 = 0
    int32_t var_80 = 0
    int32_t var_78
    var_78.q = 0
    int64_t var_70 = 0
    int32_t var_64 = 0
    int32_t var_58 = 1
    var_98 = 1
    int32_t var_8c = 1
    int32_t var_7c = 1
    var_70.d = 1
    data_143efb9f8(rcx_6, arg3, 6, arg4, var_e8, var_e0, var_d8)
int32_t* result_6 = result_1
var_c8 = 0
result_6[4] = 0x800
result_6[6] = 6
var_c8.d |= 0x1000
int32_t rax_8 = sub_1418bfb90(r12_1, &result_6[5], &result_6[7])
var_c8:4.d |= rax_8
int32_t* result = result_1
result[rbx * 0x12 + 4] = 0x1000
result[rbx * 0x12 + 6] = 7
var_c8.d |= 0x1000
result[rbx * 0x12 + 5] = 0
result[rbx * 0x12 + 7] = 0x3b9acdea
var_c8:4.d |= 1

if (rax_3 s> 0 || var_a8 s> 0)
    int32_t* r8_2
    r8_2.b = 1
    result = sub_1418c1fc0(&var_c8, arg1)

if (var_b0 != 0)
    result = sub_140a74f90(var_b0)

int32_t* result_5 = result_1

if (result_5 != 0)
    result = sub_140a74f90(result_5)

__security_check_cookie(rax_1 ^ &var_108)
return result
