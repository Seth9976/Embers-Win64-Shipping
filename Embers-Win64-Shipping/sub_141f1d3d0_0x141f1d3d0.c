// 函数: sub_141f1d3d0
// 地址: 0x141f1d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_98
int128_t zmm1
int32_t zmm2

if ((*(arg1 + 0xf4) & 1) == 0)
    uint32_t rcx = zx.d(*(arg1 + 0xfa))
    
    if (rcx == 0)
    label_141f1d4b5:
        zmm1 = arg2[1]
        var_98 = *arg2
        int128_t var_88_2 = zmm1
        uint128_t var_78_2 = arg2[2]
        int128_t var_68_2 = arg2[3]
        uint128_t var_58_2 = arg2[4]
        int128_t var_48_2 = arg2[5]
        uint128_t var_38_2 = arg2[6]
        uint64_t var_18_2 = arg2[8].q
        int32_t var_10_2 = zmm2
        int128_t var_28_2 = arg2[7]
        sub_1405a9f90(&arg1[0x22], &var_98)
        *(arg1 + 0x175) = 1
        sub_141f28360(arg1, arg2)
    else if (rcx == 1)
        if (-1f f== arg1[0x2e].d)
            goto label_141f1d4b5
        
        sub_141f23150(arg1, arg2, arg3, 1)
    else if (rcx != 2)
        sub_141f23150(arg1, arg2, arg3, 1)
    else
        arg1[0x2d].d = 0
        zmm1 = arg2[1]
        var_98 = *arg2
        int128_t var_88_1 = zmm1
        uint128_t var_78_1 = arg2[2]
        int128_t var_68_1 = arg2[3]
        uint128_t var_58_1 = arg2[4]
        int128_t var_48_1 = arg2[5]
        uint128_t var_38_1 = arg2[6]
        int128_t var_28_1 = arg2[7]
        int32_t var_10_1 = 0
        uint64_t var_18_1 = arg2[8].q
        sub_1405a9f90(&arg1[0x28], &var_98)
else if (*(arg1 + 0x174) == 0)
    zmm1 = arg2[1]
    var_98 = *arg2
    int128_t var_88_3 = zmm1
    uint128_t var_78_3 = arg2[2]
    int128_t var_68_3 = arg2[3]
    uint128_t var_58_3 = arg2[4]
    int128_t var_48_3 = arg2[5]
    uint128_t var_38_3 = arg2[6]
    uint64_t var_18_3 = arg2[8].q
    int32_t var_10_3 = zmm2
    int128_t var_28_3 = arg2[7]
    sub_1405a9f90(&arg1[0x24], &var_98)
    *(arg1 + 0x174) = 1
