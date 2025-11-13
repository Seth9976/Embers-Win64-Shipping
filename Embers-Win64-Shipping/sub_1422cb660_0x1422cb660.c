// 函数: sub_1422cb660
// 地址: 0x1422cb660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x28)
int32_t var_e0 = *(arg1 + 0xb0)
uint128_t var_1e8 = zmm0
uint128_t var_168 = zmm0
zmm0 = *(arg1 + 0x38)
uint128_t var_1d8 = zmm0
uint128_t var_158 = zmm0
zmm0 = *(arg1 + 0x48)
uint128_t var_1c8 = zmm0
uint128_t var_148 = zmm0
zmm0 = *(arg1 + 0x58)
uint128_t var_1b8 = zmm0
uint128_t var_138 = zmm0
zmm0 = *(arg1 + 0x68)
uint128_t var_1a8 = zmm0
uint128_t var_128 = zmm0
zmm0 = *(arg1 + 0x78)
uint128_t var_198 = zmm0
uint128_t var_118 = zmm0
zmm0 = *(arg1 + 0x88)
uint128_t var_188 = zmm0
uint128_t var_108 = zmm0
zmm0 = *(arg1 + 0x98)
uint128_t var_f8 = zmm0
uint64_t var_e8 = *(arg1 + 0xa8)

if (sub_140a80f40() != 0)
    return sub_1422b8070(&var_168, &data_143f02b98)

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        uint128_t var_c8 = var_1e8
        uint128_t var_b8 = var_1d8
        uint128_t var_a8 = var_1c8
        uint128_t var_98 = var_1b8
        uint128_t var_88 = var_1a8
        uint128_t var_78 = var_198
        uint128_t var_68 = var_188
        uint128_t var_58 = zmm0
        uint128_t var_48 = var_e8.o
        uint64_t var_38 = arg1
        return sub_1422b8070(&var_c8, &data_143f02b98)

void var_28
void** rax_5 = sub_1422c1e00(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = var_1e8
*(rcx_3 + 0x20) = var_1d8
*(rcx_3 + 0x30) = var_1c8
*(rcx_3 + 0x40) = var_1b8
*(rcx_3 + 0x50) = var_1a8
*(rcx_3 + 0x60) = var_198
*(rcx_3 + 0x70) = var_188
*(rcx_3 + 0x80) = zmm0
*(rcx_3 + 0x90) = var_e8.o
*(rcx_3 + 0xa0) = arg1
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx = rax_5[1]
int64_t* rbx = *(rcx_4 + 0xb0)
int64_t* arg_18 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_18

int32_t result = sub_1422d2000(rcx_4, rdx, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_18)

return result
