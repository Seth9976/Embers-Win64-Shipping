// 函数: sub_1427f1820
// 地址: 0x1427f1820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm0
int128_t zmm1
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

switch (*arg2 + 1)
    case 0, 2, 6, 7, 8
        *arg1 = 0x3f800000
        arg1[1] = 0
        arg1[2] = 0x3f800000
        arg1[3] = 0
        arg1[4] = 0x3f800000
        arg1[5] = 0
        arg1[6].d = 0x3f800000
    case 1
        zmm0 = arg2[1]
        zmm1.d = zmm0.d f* 4.18879032f
        zmm1.d = zmm1.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm0.d
        arg1[6].d = zmm1.d
        zmm1.d = zmm1.d f* 0.400000006f
        zmm1.d = zmm1.d f* arg2[1]
        zmm1.d = zmm1.d f* arg2[1]
        *(arg1 + 4) = 0
        *arg1 = zmm1.d
        arg1[2].d = zmm1.d
        *(arg1 + 0xc) = 0
        *(arg1 + 0x14) = 0
        arg1[4].d = zmm1.d
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x24) = 0
        *(arg1 + 0x2c) = 0
    case 3
        zmm7 = arg2[1]
        zmm4 = arg2[2]
        zmm1.d = zmm7.d f* 4.18879032f
        zmm2.d = zmm4.d f* 3.14159274f
        zmm0.d = zmm4.d f* 3.14159274f
        zmm3.d = zmm7.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm3.d = zmm3.d f* 0.533333361f
        zmm1.d = zmm4.d f* zmm4.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm0 = zmm1
        zmm1.d = zmm1.d f* zmm4.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm1.d = zmm1.d f* 0.666666687f
        arg1[6].d = zmm2.d
        zmm2.d = zmm4.d f* zmm7.d
        *(arg1 + 4) = 0
        zmm0.d = zmm0.d f* zmm7.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm0.d = zmm0.d f* 1.33333337f
        zmm5 = zmm2
        zmm2.d = zmm2.d f+ zmm3.d
        zmm5.d = zmm5.d f* 1.5f
        zmm5.d = zmm5.d f+ zmm3.d
        zmm2.d = zmm2.d f* 3.14159274f
        zmm2.d = zmm2.d f* zmm7.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm5.d = zmm5.d f+ zmm1.d
        *arg1 = zmm2.d
        *(arg1 + 0xc) = 0
        *(arg1 + 0x14) = 0
        zmm5.d = zmm5.d f* 3.14159274f
        zmm5.d = zmm5.d f* zmm7.d
        zmm5.d = zmm5.d f* zmm7.d
        arg1[2].d = zmm5.d
        arg1[4].d = zmm5.d
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x24) = 0
        *(arg1 + 0x2c) = 0
    case 4
        zmm5.d = arg2[2].d f* arg2[1]
        zmm5.d = zmm5.d f* arg2[3]
        zmm5.d = zmm5.d f* 8f
        arg1[6].d = zmm5.d
        zmm3 = arg2[3]
        zmm0 = arg2[1]
        zmm4 = arg2[2]
        zmm5.d = zmm5.d f* 0.333333343f
        zmm3.d = zmm3.d f* zmm3.d
        zmm4.d = zmm4.d f* zmm4.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm2.d = zmm3.d f+ zmm4.d
        zmm3.d = zmm3.d f+ zmm0.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm1.d = zmm5.d f* 0f
        zmm2.d = zmm2.d f* zmm5.d
        *(arg1 + 4) = zmm1.d
        arg1[1].d = zmm1.d
        *arg1 = zmm2.d
        *(arg1 + 0xc) = zmm1.d
        *(arg1 + 0x14) = zmm1.d
        zmm3.d = zmm3.d f* zmm5.d
        zmm4.d = zmm4.d f* zmm5.d
        arg1[2].d = zmm3.d
        arg1[3].d = zmm1.d
        *(arg1 + 0x1c) = zmm1.d
        arg1[4].d = zmm4.d
        *(arg1 + 0x24) = 0
        *(arg1 + 0x2c) = 0
    case 5
        int64_t* rcx = *(arg2 + 0x20)
        int32_t var_128
        int32_t var_f0
        int32_t arg_8
        (*(*rcx + 0x60))(rcx, &arg_8, &var_f0, &var_128)
        int128_t zmm5_1 = arg_8
        int32_t var_124
        int128_t zmm12 = var_124
        int32_t var_120
        int128_t zmm13 = var_120
        int128_t zmm9 = var_128
        zmm3.d = zmm13.d f* zmm13.d
        zmm2.d = zmm9.d f* zmm9.d
        int128_t zmm4_1
        zmm4_1.d = zmm12.d f* zmm12.d
        zmm1.d = zmm4_1.d f+ zmm3.d
        zmm1.d = zmm1.d f* zmm5_1.d
        zmm0.d = var_f0.d f- zmm1.d
        zmm1.d = zmm2.d f+ zmm3.d
        zmm2.d = zmm2.d f+ zmm4_1.d
        int32_t var_118 = zmm0.d
        zmm1.d = zmm1.d f* zmm5_1.d
        zmm2.d = zmm2.d f* zmm5_1.d
        int32_t var_e0
        zmm0.d = var_e0.d f- zmm1.d
        zmm1.d = zmm9.d f* zmm12.d
        zmm1.d = zmm1.d f* zmm5_1.d
        int32_t var_108_1 = zmm0.d
        int32_t var_ec
        zmm1.d = zmm1.d f+ var_ec
        int32_t var_d0
        zmm0.d = var_d0.d f- zmm2.d
        int32_t var_10c_1 = zmm1.d
        int32_t var_f8_1 = zmm0.d
        int32_t var_114_1 = zmm1.d
        zmm0.d = zmm13.d f* zmm12.d
        zmm1.d = zmm9.d f* zmm13.d
        zmm0.d = zmm0.d f* zmm5_1.d
        zmm1.d = zmm1.d f* zmm5_1.d
        zmm5_1.d = zmm5_1.d f* arg2[1]
        int32_t var_dc
        zmm0.d = zmm0.d f+ var_dc
        int32_t var_e8
        zmm1.d = zmm1.d f+ var_e8
        zmm5_1.d = zmm5_1.d f* arg2[2]
        zmm9.d = zmm9.d f* 2f
        zmm5_1.d = zmm5_1.d f* arg2[3]
        int32_t var_fc_1 = zmm0.d
        int32_t var_104_1 = zmm0.d
        arg1[6].d = zmm5_1.d
        zmm6 = arg2[7]
        zmm2 = arg2[5]
        zmm4_1 = arg2[4]
        zmm5_1 = arg2[6]
        zmm12.d = zmm12.d f* 2f
        int128_t zmm14
        zmm14.d = zmm6.d f* zmm6.d
        zmm3.d = zmm4_1.d f* zmm9.d
        zmm14.d = zmm14.d f- 0.5f
        zmm0.d = zmm2.d f* zmm12.d
        int32_t var_100_1 = zmm1.d
        int32_t var_110_1 = zmm1.d
        zmm3.d = zmm3.d f+ zmm0.d
        zmm13.d = zmm13.d f* 2f
        zmm7 = arg2[6]
        zmm0.d = zmm5_1.d f* zmm12.d
        zmm1.d = zmm5_1.d f* zmm13.d
        int128_t zmm11
        zmm11.d = zmm14.d f* zmm9.d
        zmm3.d = zmm3.d f+ zmm1.d
        int128_t zmm10
        zmm10.d = zmm14.d f* zmm12.d
        zmm14.d = zmm14.d f* zmm13.d
        zmm1.d = zmm2.d f* zmm13.d
        zmm1.d = zmm1.d f- zmm0.d
        zmm0.d = zmm4_1.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm11.d = zmm11.d f- zmm1.d
        zmm1.d = zmm5_1.d f* zmm9.d
        zmm5_1.d = zmm5_1.d f* zmm3.d
        zmm11.d = zmm11.d f+ zmm0.d
        zmm0.d = zmm4_1.d f* zmm13.d
        zmm4_1.d = zmm4_1.d f* zmm12.d
        zmm11.d = zmm11.d f* arg2[1]
        zmm1.d = zmm1.d f- zmm0.d
        zmm0 = zmm2
        zmm2.d = zmm2.d f* zmm9.d
        zmm9 = arg2[4]
        zmm0.d = zmm0.d f* zmm3.d
        zmm4_1.d = zmm4_1.d f- zmm2.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm11.d = zmm11.d f* 2f
        zmm10.d = zmm10.d f- zmm1.d
        zmm4_1.d = zmm4_1.d f* zmm6.d
        zmm2.d = zmm7.d f* zmm11.d
        zmm10.d = zmm10.d f+ zmm0.d
        zmm14.d = zmm14.d f- zmm4_1.d
        zmm4_1 = arg2[5]
        zmm10.d = zmm10.d f* arg2[2]
        zmm14.d = zmm14.d f+ zmm5_1.d
        zmm5_1.d = zmm9.d f* zmm11.d
        zmm10.d = zmm10.d f* 2f
        zmm14.d = zmm14.d f* arg2[3]
        zmm0.d = zmm4_1.d f* zmm10.d
        zmm14.d = zmm14.d f* 2f
        zmm5_1.d = zmm5_1.d f+ zmm0.d
        int128_t zmm8
        zmm8.d = zmm6.d f* zmm6.d
        zmm1.d = zmm7.d f* zmm14.d
        zmm8.d = zmm8.d f- 0.5f
        zmm0.d = zmm7.d f* zmm10.d
        zmm3.d = zmm4_1.d f* zmm14.d
        zmm5_1.d = zmm5_1.d f+ zmm1.d
        zmm3.d = zmm3.d f- zmm0.d
        zmm0.d = zmm8.d f* zmm11.d
        zmm1.d = zmm9.d f* zmm5_1.d
        zmm3.d = zmm3.d f* zmm6.d
        zmm3.d = zmm3.d f+ zmm0.d
        zmm0.d = zmm9.d f* zmm14.d
        zmm9.d = zmm9.d f* zmm10.d
        zmm2.d = zmm2.d f- zmm0.d
        zmm3.d = zmm3.d f+ zmm1.d
        zmm0.d = zmm8.d f* zmm10.d
        zmm1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* zmm11.d
        zmm2.d = zmm2.d f* zmm6.d
        zmm1.d = zmm1.d f* zmm5_1.d
        zmm9.d = zmm9.d f- zmm4_1.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm9.d = zmm9.d f* zmm6.d
        zmm7.d = zmm7.d f* zmm5_1.d
        zmm8.d = zmm8.d f* zmm14.d
        *(arg1 + 0x24) = zmm3.d
        arg1[5].d = zmm2.d
        zmm9.d = zmm9.d f+ zmm8.d
        zmm9.d = zmm9.d f+ zmm7.d
        *(arg1 + 0x2c) = zmm9.d
        int32_t var_c8[0xc]
        int32_t* rax_4 = sub_142227f00(&var_c8, &var_118, &arg2[4], &arg2[1])
        *arg1 = *rax_4
        *(arg1 + 4) = rax_4[1]
        arg1[1].d = rax_4[2]
        *(arg1 + 0xc) = rax_4[3]
        arg1[2].d = rax_4[4]
        *(arg1 + 0x14) = rax_4[5]
        arg1[3].d = rax_4[6]
        *(arg1 + 0x1c) = rax_4[7]
        arg1[4].d = rax_4[8]

return arg1
