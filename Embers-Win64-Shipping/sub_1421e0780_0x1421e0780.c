// 函数: sub_1421e0780
// 地址: 0x1421e0780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 - 1 u> 8)
    return 

uint64_t var_28
uint64_t* rax_8
int32_t r8
int32_t r8_1
int32_t r8_2
int32_t r8_3

switch (arg1)
    case 1
        r8 = 3
    label_1421e08d6:
        rax_8 = sub_140a04880(arg2, &var_28, r8)
        r8_2 = 2
        goto label_1421e090a
    case 2
        uint64_t* rax_2 = sub_140a04880(arg2, &var_28, 3)
        int32_t var_20_1 = (rax_2[1].d ^ 0x80000000).d
        *arg3 = (_mm_unpacklo_ps(*rax_2 ^ 0x80000000, (*(rax_2 + 4) ^ 0x80000000).q)).q
        arg3[1].d = var_20_1
        uint64_t* rax_4 = sub_140a04880(arg2, &var_28, 1)
        *arg4 = *rax_4
        arg4[1].d = rax_4[1].d
    case 3
        r8_1 = 1
    label_1421e0849:
        uint64_t* rax_5 = sub_140a04880(arg2, &var_28, r8_1)
        int32_t var_20_2 = (rax_5[1].d ^ 0x80000000).d
        *arg3 = (_mm_unpacklo_ps(*rax_5 ^ 0x80000000, (*(rax_5 + 4) ^ 0x80000000).q)).q
        arg3[1].d = var_20_2
        uint64_t* rax_7 = sub_140a04880(arg2, &var_28, 2)
        *arg4 = *rax_7
        arg4[1].d = rax_7[1].d
    case 4
        r8_1 = 3
        goto label_1421e0849
    case 5
        rax_8 = sub_140a04880(arg2, &var_28, 3)
        r8_2 = 1
    label_1421e090a:
        int32_t var_20_3 = (rax_8[1].d ^ 0x80000000).d
        *arg3 = (_mm_unpacklo_ps(*rax_8 ^ 0x80000000, (*(rax_8 + 4) ^ 0x80000000).q)).q
        arg3[1].d = var_20_3
        uint64_t* rax_10
        int128_t zmm6_1
        rax_10, zmm6_1 = sub_140a04880(arg2, &var_28, r8_2)
        int32_t var_20_4 = (rax_10[1].d ^ zmm6_1).d
        *arg4 = (_mm_unpacklo_ps(*rax_10 ^ zmm6_1, (*(rax_10 + 4) ^ zmm6_1).q)).q
        arg4[1].d = var_20_4
    case 6
        r8 = 1
        goto label_1421e08d6
    case 7
        r8_3 = 1
    label_1421e0966:
        uint64_t* rax_11 = sub_140a04880(arg2, &var_28, r8_3)
        *arg4 = *rax_11
        arg4[1].d = rax_11[1].d
        *arg3 = data_143dbb1f8.q
        arg3[1].d = data_143dbb200
    case 8
        r8_3 = 2
        goto label_1421e0966
    case 9
        r8_3 = 3
        goto label_1421e0966
