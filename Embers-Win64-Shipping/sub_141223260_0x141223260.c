// 函数: sub_141223260
// 地址: 0x141223260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x190)
int64_t* result

if (rax == 0)
    result = nullptr
else
    result = sub_141218aa0(rax)

int64_t var_b8 = 0
uint32_t var_b0 = 0
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x19)

if (arg2 != 1)
    if (sub_14121b060(arg1 + 0x80, &var_b8, &var_b8:4, &var_b0, arg2, arg2, arg2) != 0)
        goto label_14122331b
else
    int32_t rax_2 = *(arg1 + 0x118)
    var_b8.d = rax_2
    *(arg1 + 0x118) = rax_2 + 1
label_14122331b:
    int32_t var_e8
    var_e8.q = &var_a8:0xc
    sub_14121e360(arg1, arg3, arg2, &var_a8, var_e8)
    int64_t var_98
    int32_t var_80_1 = var_98:4.d
    int32_t var_70_1 = var_a8:8.d
    uint32_t var_60_1 = var_b0
    int32_t var_d8
    uint64_t var_58
    var_d8.q = &var_58
    int64_t var_88 = var_a8:0xc.q
    int32_t var_e0
    uint64_t var_48
    var_e0.q = &var_48
    int64_t var_78 = var_a8.q
    var_e8.q = &var_88
    int64_t var_68 = var_b8
    uint64_t var_38
    uint64_t var_28
    sub_14121e700(arg1, &var_68, arg2, &var_78, var_e8, var_e0, var_d8, &var_38, &var_28)
    sub_141213720(arg1 + 0x30, &var_b8, &var_b8)
    *result = var_58
    int32_t var_50
    result[1].d = var_50
    *(result + 0xc) = var_48
    uint64_t zmm0_2 = var_38
    int32_t var_40
    *(result + 0x14) = var_40
    result[3] = zmm0_2
    int32_t var_30
    result[4].d = var_30
    *(result + 0x24) = var_28
    int32_t var_20
    *(result + 0x2c) = var_20
    result[6].d = var_b8.d
    *(result + 0x34) = (var_b8 u>> 0x20).d
    result[7].d = var_b0
    *(result + 0x3c) = arg2
    *(result + 0x183) = arg5
    *(result + 0x182) = 0
    *(result + 0x181) = arg4

return result
