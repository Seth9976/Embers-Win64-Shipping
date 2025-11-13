// 函数: sub_140fb4b70
// 地址: 0x140fb4b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

switch (arg3)
    case 0
        *arg2 = 0x3f800000
        arg2[2] = 0
        arg2[3] = 0x3f800000
    case 1
        *(arg2 + 4) = 0x3f800000
        *arg2 = 0
        arg2[3] = 0x3f800000
    case 2
        arg2[2] = 0x3f800000
        *arg2 = 0
        arg2[3] = 0x3f800000
    case 3
        int32_t zmm1 = *(arg1 + 0x3d0)
        int32_t zmm0 = *(arg1 + 0x3cc)
        *arg2 = *(arg1 + 0x3c8)
        arg2[1] = zmm0
        arg2[2] = zmm1
        arg2[3] = 0x3f800000
    case 5
        int32_t var_14_1 = 0x3f800000
    label_140fb4c49:
        int32_t var_18 = *(arg1 + 0x3b8)
        int32_t var_10_1 = 0x3f800000
        int32_t var_c_1 = 0x3f800000
        sub_140ad9100(&var_18, arg2)
    case 6
        int32_t var_14_2 = *(arg1 + 0x3bc)
        goto label_140fb4c49

return arg2
