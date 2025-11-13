// 函数: sub_140fb34a0
// 地址: 0x140fb34a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0
int32_t zmm1

switch (arg3)
    case 0
        zmm1 = *(arg1 + 0x3d0)
        zmm0 = *(arg1 + 0x3cc)
        *arg2 = 0x3f800000
    label_140fb34e1:
        arg2[1] = zmm0
        arg2[2] = zmm1
        arg2[3] = 0x3f800000
    case 1
        zmm0 = *(arg1 + 0x3d0)
        *arg2 = *(arg1 + 0x3c8)
        arg2[2] = zmm0
        arg2[1] = 0x3f800000
        arg2[3] = 0x3f800000
    case 2
        zmm0 = *(arg1 + 0x3cc)
        *arg2 = *(arg1 + 0x3c8)
        arg2[1] = zmm0
        arg2[2] = 0x3f800000
        arg2[3] = 0x3f800000
    case 3
        zmm1 = *(arg1 + 0x3d0)
        zmm0 = *(arg1 + 0x3cc)
        *arg2 = *(arg1 + 0x3c8)
        goto label_140fb34e1
    case 5
        int32_t var_10_1 = *(arg1 + 0x3c0)
        int32_t var_14_1 = 0x3f800000
    label_140fb35ae:
        int32_t var_18 = *(arg1 + 0x3b8)
        int32_t var_c_1 = 0x3f800000
        sub_140ad9100(&var_18, arg2)
    case 6
        int32_t var_14_2 = *(arg1 + 0x3bc)
        int32_t var_10_2 = 0x3f800000
        goto label_140fb35ae

return arg2
