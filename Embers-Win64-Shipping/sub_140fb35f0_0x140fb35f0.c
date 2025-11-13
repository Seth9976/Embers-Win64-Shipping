// 函数: sub_140fb35f0
// 地址: 0x140fb35f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int32_t zmm0
int32_t zmm1

switch (arg3)
    case 0
        zmm1 = *(arg1 + 0x3d0)
        arg2[1] = *(arg1 + 0x3cc)
        arg2[2] = zmm1
        *arg2 = 0
        arg2[3] = 0x3f800000
    case 1
        zmm0 = *(arg1 + 0x3d0)
        *arg2 = *(arg1 + 0x3c8)
        arg2[2] = zmm0
        arg2[1] = 0
        arg2[3] = 0x3f800000
    case 2
        zmm0 = *(arg1 + 0x3cc)
        *arg2 = *(arg1 + 0x3c8)
        arg2[1] = zmm0
        arg2[2] = 0
        arg2[3] = 0x3f800000
    case 3
        zmm1 = *(arg1 + 0x3d0)
        zmm0 = *(arg1 + 0x3cc)
        *arg2 = *(arg1 + 0x3c8)
        arg2[1] = zmm0
        arg2[2] = zmm1
        arg2[3] = 0
    case 5
        zmm1 = (zx.o(0)).d
        var_18 = *(arg1 + 0x3b8)
        zmm0 = *(arg1 + 0x3c0)
    label_140fb3709:
        int32_t var_14_1 = zmm1
        int32_t var_c_1 = 0x3f800000
        int32_t var_10_1 = zmm0
        sub_140ad9100(&var_18, arg2)
    case 6
        zmm1 = *(arg1 + 0x3bc)
        var_18 = *(arg1 + 0x3b8)
        zmm0 = (zx.o(0)).d
        goto label_140fb3709

return arg2
