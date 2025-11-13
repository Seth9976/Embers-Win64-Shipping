// 函数: sub_1411ecaf0
// 地址: 0x1411ecaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_27
int64_t rcx_674
int32_t* rbx_34
int64_t r11_12
int32_t* rsi_36
int32_t* r15_2
int64_t var_48
int32_t* var_38
int128_t zmm6

if (arg2 u> 0x3e)
    int32_t r8_783 = arg1[3].d
    int64_t rdx_708 = arg1[2]
    var_38 = nullptr
    sub_1411b64f0(&var_38, rdx_708, r8_783, 0, 0)
    int32_t r8_784 = arg1[1].d
    int64_t rdx_709 = *arg1
    var_48 = 0
    sub_1411b64f0(&var_48, rdx_709, r8_784, 0, 0)
    r11_12 = var_48
    rbx_34 = var_38
    int32_t r10_78 = rbx_34[0x3f]
    uint32_t r9_194 = arg3 u/ 0x139
    zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_78 - r9_194 * 0x139) << 2)) * 0x139
        + *(r11_12 + (sx.q(r9_194 u% 0x139 + r10_78) << 2))) * 0x139
        + *(r11_12 + (sx.q(r10_78 + arg3 u/ 0x17eb1 u% 0x139) << 2))))
    zmm6.d = zmm6.d f* 3.26112115e-08f
else
    switch (arg2)
        case 0
            int64_t r14_1 = sx.q(arg1[3].d)
            int32_t* rbx_1 = nullptr
            int64_t r15_1 = arg1[2]
            var_38 = nullptr
            int32_t var_30_1 = r14_1.d
            
            if (r14_1.d != 0)
                sub_140638750(&var_38, r14_1.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_1, (r14_1 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_2 = sx.q(arg1[1].d)
            int64_t rsi_1 = *arg1
            var_38 = nullptr
            int32_t var_30_2 = r14_2.d
            
            if (r14_2.d != 0)
                sub_140638750(&var_38, r14_2.d, 0)
                rbx_1 = var_38
                memcpy(rbx_1, rsi_1, (r14_2 << 2).d)
            
            int32_t r10_1 = *r15_2
            uint32_t r8_5 = arg3 u/ 0xf3
            int32_t r9_2 = ((rbx_1[sx.q(arg3 + r10_1 - r8_5 * 0xf3)] * 0xf3
                + rbx_1[sx.q(r10_1 + r8_5 u% 0xf3)]) * 0xf3
                + rbx_1[sx.q(r10_1 + arg3 u/ 0xe6a9 u% 0xf3)]) * 0xf3
                + rbx_1[sx.q(r10_1 + arg3 u/ 0xdaf26b u% 0xf3)]
            zmm6.d = float.s(zx.q(r9_2))
            zmm6.d = zmm6.d f* 2.86797169e-10f
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            rcx_27 = r15_2
            goto label_1411f17b3
        case 1
            int64_t r14_3 = sx.q(arg1[3].d)
            int32_t* rbx_2 = nullptr
            int64_t r15_3 = arg1[2]
            var_38 = nullptr
            int32_t var_30_3 = r14_3.d
            
            if (r14_3.d != 0)
                sub_140638750(&var_38, r14_3.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_3, (r14_3 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_4 = sx.q(arg1[1].d)
            int64_t rsi_2 = *arg1
            var_38 = nullptr
            int32_t var_30_4 = r14_4.d
            
            if (r14_4.d != 0)
                sub_140638750(&var_38, r14_4.d, 0)
                rbx_2 = var_38
                memcpy(rbx_2, rsi_2, (r14_4 << 2).d)
            
            int32_t r10_2 = r15_2[1]
            uint32_t r8_14 = arg3 u/ 0x7d
            int32_t r9_4 = ((rbx_2[sx.q(arg3 + r10_2 - r8_14 * 0x7d)] * 0x7d
                + rbx_2[sx.q(r10_2 + r8_14 u% 0x7d)]) * 0x7d
                + rbx_2[sx.q(r10_2 + arg3 u/ 0x3d09 u% 0x7d)]) * 0x7d
                + rbx_2[sx.q(r10_2 + arg3 u/ 0x1dcd65 u% 0x7d)]
            zmm6.d = float.s(zx.q(r9_4))
            zmm6.d = zmm6.d f* 4.09599954e-09f
            
            if (rbx_2 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_2)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 2
            int64_t r14_5 = sx.q(arg1[3].d)
            int32_t* rbx_3 = nullptr
            int64_t r15_4 = arg1[2]
            var_38 = nullptr
            int32_t var_30_5 = r14_5.d
            
            if (r14_5.d != 0)
                sub_140638750(&var_38, r14_5.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_4, (r14_5 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_6 = sx.q(arg1[1].d)
            int64_t rsi_3 = *arg1
            var_38 = nullptr
            int32_t var_30_6 = r14_6.d
            
            if (r14_6.d != 0)
                sub_140638750(&var_38, r14_6.d, 0)
                rbx_3 = var_38
                memcpy(rbx_3, rsi_3, (r14_6 << 2).d)
            
            int32_t r10_3 = r15_2[2]
            uint32_t r9_6 = arg3 u/ 0x157
            zmm6.d = float.s(zx.q((rbx_3[sx.q(arg3 + r10_3 - r9_6 * 0x157)] * 0x157
                + rbx_3[sx.q(r9_6 u% 0x157 + r10_3)]) * 0x157
                + rbx_3[sx.q(r10_3 + arg3 u/ 0x1cb91 u% 0x157)]))
            zmm6.d = zmm6.d f* 2.47809293e-08f
            
            if (rbx_3 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_3)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 3
            int64_t r14_7 = sx.q(arg1[3].d)
            int32_t* rbx_4 = nullptr
            int64_t r15_5 = arg1[2]
            var_38 = nullptr
            int32_t var_30_7 = r14_7.d
            
            if (r14_7.d != 0)
                sub_140638750(&var_38, r14_7.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_5, (r14_7 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_8 = sx.q(arg1[1].d)
            int64_t rsi_4 = *arg1
            var_38 = nullptr
            int32_t var_30_8 = r14_8.d
            
            if (r14_8.d != 0)
                sub_140638750(&var_38, r14_8.d, 0)
                rbx_4 = var_38
                memcpy(rbx_4, rsi_4, (r14_8 << 2).d)
            
            int32_t r10_4 = r15_2[3]
            uint32_t r8_35 = arg3 u/ 0x79
            int32_t r9_12 = ((rbx_4[sx.q(arg3 + r10_4 - r8_35 * 0x79)] * 0x79
                + rbx_4[sx.q(r10_4 + r8_35 u% 0x79)]) * 0x79
                + rbx_4[sx.q(r10_4 + arg3 u/ 0x3931 u% 0x79)]) * 0x79
                + rbx_4[sx.q(r10_4 + arg3 u/ 0x1b0829 u% 0x79)]
            zmm6.d = float.s(zx.q(r9_12))
            zmm6.d = zmm6.d f* 4.66507322e-09f
            
            if (rbx_4 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_4)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 4
            int64_t r14_9 = sx.q(arg1[3].d)
            int32_t* rbx_5 = nullptr
            int64_t r15_6 = arg1[2]
            var_38 = nullptr
            int32_t var_30_9 = r14_9.d
            
            if (r14_9.d != 0)
                sub_140638750(&var_38, r14_9.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_6, (r14_9 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_10 = sx.q(arg1[1].d)
            int64_t rsi_5 = *arg1
            var_38 = nullptr
            int32_t var_30_10 = r14_10.d
            
            if (r14_10.d != 0)
                sub_140638750(&var_38, r14_10.d, 0)
                rbx_5 = var_38
                memcpy(rbx_5, rsi_5, (r14_10 << 2).d)
            
            int32_t r10_5 = r15_2[4]
            uint32_t r8_44 = arg3 u/ 0xa9
            int32_t r9_16 = ((rbx_5[sx.q(arg3 + r10_5 - r8_44 * 0xa9)] * 0xa9
                + rbx_5[sx.q(r10_5 + r8_44 u% 0xa9)]) * 0xa9
                + rbx_5[sx.q(arg3 u/ 0x6f91 u% 0xa9 + r10_5)]) * 0xa9
                + rbx_5[sx.q(r10_5 + arg3 u/ 0x49a6b9 u% 0xa9)]
            zmm6.d = float.s(zx.q(r9_16))
            zmm6.d = zmm6.d f* 1.22589461e-09f
            
            if (rbx_5 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_5)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 5
            int64_t r14_11 = sx.q(arg1[3].d)
            int32_t* rbx_6 = nullptr
            int64_t r15_7 = arg1[2]
            var_38 = nullptr
            int32_t var_30_11 = r14_11.d
            
            if (r14_11.d != 0)
                sub_140638750(&var_38, r14_11.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_7, (r14_11 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_12 = sx.q(arg1[1].d)
            int64_t rsi_6 = *arg1
            var_38 = nullptr
            int32_t var_30_12 = r14_12.d
            
            if (r14_12.d != 0)
                sub_140638750(&var_38, r14_12.d, 0)
                rbx_6 = var_38
                memcpy(rbx_6, rsi_6, (r14_12 << 2).d)
            
            int32_t r10_6 = r15_2[5]
            uint32_t r9_18 = arg3 u/ 0x121
            zmm6.d = float.s(zx.q((rbx_6[sx.q(arg3 + r10_6 - r9_18 * 0x121)] * 0x121
                + rbx_6[sx.q(r9_18 u% 0x121 + r10_6)]) * 0x121
                + rbx_6[sx.q(r10_6 + arg3 u/ 0x14641 u% 0x121)]))
            zmm6.d = zmm6.d f* 4.1429189e-08f
            
            if (rbx_6 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_6)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 6
            int64_t r14_13 = sx.q(arg1[3].d)
            int32_t* rbx_7 = nullptr
            int64_t r15_8 = arg1[2]
            var_38 = nullptr
            int32_t var_30_13 = r14_13.d
            
            if (r14_13.d != 0)
                sub_140638750(&var_38, r14_13.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_8, (r14_13 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_14 = sx.q(arg1[1].d)
            int64_t rsi_7 = *arg1
            var_38 = nullptr
            int32_t var_30_14 = r14_14.d
            
            if (r14_14.d != 0)
                sub_140638750(&var_38, r14_14.d, 0)
                rbx_7 = var_38
                memcpy(rbx_7, rsi_7, (r14_14 << 2).d)
            
            int32_t r9_23 = r15_2[6]
            uint32_t r8_73 = arg3 u/ 0x169
            zmm6.d = float.s(zx.q((rbx_7[sx.q(arg3 + r9_23 - r8_73 * 0x169)] * 0x169
                + rbx_7[sx.q(r9_23 + r8_73 u% 0x169)]) * 0x169
                + rbx_7[sx.q(r9_23 + arg3 u/ 0x1fd11 u% 0x169)]))
            zmm6.d = zmm6.d f* 2.12558433e-08f
            
            if (rbx_7 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_7)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 7
            int64_t r14_15 = sx.q(arg1[3].d)
            int32_t* rbx_8 = nullptr
            int64_t r15_9 = arg1[2]
            var_38 = nullptr
            int32_t var_30_15 = r14_15.d
            
            if (r14_15.d != 0)
                sub_140638750(&var_38, r14_15.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_9, (r14_15 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_16 = sx.q(arg1[1].d)
            int64_t rsi_8 = *arg1
            var_38 = nullptr
            int32_t var_30_16 = r14_16.d
            
            if (r14_16.d != 0)
                sub_140638750(&var_38, r14_16.d, 0)
                rbx_8 = var_38
                memcpy(rbx_8, rsi_8, (r14_16 << 2).d)
            
            int32_t r11_1 = r15_2[7]
            uint32_t r8_82 = arg3 u/ 0x17
            int32_t r9_25 = ((rbx_8[sx.q(arg3 + r11_1 - r8_82 * 0x17)] * 0x17
                + rbx_8[sx.q(r11_1 + r8_82 u% 0x17)]) * 0x17
                + rbx_8[sx.q(r11_1 + arg3 u/ 0x211 u% 0x17)]) * 0x17
                + rbx_8[sx.q(r11_1 + arg3 u/ 0x2f87 u% 0x17)]
            zmm6.d = float.s(zx.q((
                (r9_25 * 0x17 + rbx_8[sx.q(r11_1 + arg3 u/ 0x44521 u% 0x17)]) * 0x17
                + rbx_8[sx.q(arg3 u/ 0x6235f7 u% 0x17 + r11_1)]) * 0x17
                + rbx_8[sx.q(r11_1 + arg3 u/ 0x8d2d931 u% 0x17)]))
            zmm6.d = zmm6.d f* 2.93700786e-10f
            
            if (rbx_8 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_8)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 8
            int64_t r14_17 = sx.q(arg1[3].d)
            int32_t* rbx_9 = nullptr
            int64_t r15_10 = arg1[2]
            var_38 = nullptr
            int32_t var_30_17 = r14_17.d
            
            if (r14_17.d != 0)
                sub_140638750(&var_38, r14_17.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_10, (r14_17 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_18 = sx.q(arg1[1].d)
            int64_t rsi_9 = *arg1
            var_38 = nullptr
            int32_t var_30_18 = r14_18.d
            
            if (r14_18.d != 0)
                sub_140638750(&var_38, r14_18.d, 0)
                rbx_9 = var_38
                memcpy(rbx_9, rsi_9, (r14_18 << 2).d)
            
            int32_t r11_2 = r15_2[8]
            uint32_t r8_100 = arg3 u/ 0x1d
            int32_t r8_105 = ((rbx_9[sx.q(arg3 + r11_2 - r8_100 * 0x1d)] * 0x1d
                + rbx_9[sx.q(r11_2 + r8_100 u% 0x1d)]) * 0x1d
                + rbx_9[sx.q(r11_2 + arg3 u/ 0x349 u% 0x1d)]) * 0x1d
                + rbx_9[sx.q(r11_2 + arg3 u/ 0x5f45 u% 0x1d)]
            zmm6.d = float.s(zx.q(
                (r8_105 * 0x1d + rbx_9[sx.q(arg3 u/ 0xacad1 u% 0x1d + r11_2)]) * 0x1d
                + rbx_9[sx.q(r11_2 + arg3 u/ 0x138f9ad u% 0x1d)]))
            zmm6.d = zmm6.d f* 1.68117131e-09f
            
            if (rbx_9 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_9)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 9
            int64_t r14_19 = sx.q(arg1[3].d)
            int64_t r15_11 = arg1[2]
            var_48 = 0
            int32_t var_40_1 = r14_19.d
            
            if (r14_19.d != 0)
                sub_140638750(&var_48, r14_19.d, 0)
                memcpy(var_48, r15_11, (r14_19 << 2).d)
            else
                int32_t var_3c_1 = 0
            
            int64_t r14_20 = sx.q(arg1[1].d)
            int64_t rsi_10 = *arg1
            var_38 = nullptr
            int32_t var_30_19 = r14_20.d
            
            if (r14_20.d == 0)
                int32_t var_2c_1 = 0
                return sub_1411e5690(arg3, &var_38, &var_48)
            
            sub_140638750(&var_38, r14_20.d, 0)
            memcpy(var_38, rsi_10, (r14_20 << 2).d)
            return sub_1411e5690(arg3, &var_38, &var_48)
        case 0xa
            int64_t r14_21 = sx.q(arg1[3].d)
            int64_t r15_12 = arg1[2]
            var_38 = nullptr
            int32_t var_30_20 = r14_21.d
            
            if (r14_21.d != 0)
                sub_140638750(&var_38, r14_21.d, 0)
                memcpy(var_38, r15_12, (r14_21 << 2).d)
            else
                int32_t var_2c_2 = 0
            
            int64_t r14_22 = sx.q(arg1[1].d)
            int64_t rsi_11 = *arg1
            var_48 = 0
            int32_t var_40_2 = r14_22.d
            
            if (r14_22.d == 0)
                int32_t var_3c_2 = 0
                return sub_1411e5830(arg3, &var_48, &var_38)
            
            sub_140638750(&var_48, r14_22.d, 0)
            memcpy(var_48, rsi_11, (r14_22 << 2).d)
            return sub_1411e5830(arg3, &var_48, &var_38)
        case 0xb
            int64_t r14_23 = sx.q(arg1[3].d)
            int32_t* rbx_10 = nullptr
            int64_t r15_13 = arg1[2]
            var_38 = nullptr
            int32_t var_30_21 = r14_23.d
            
            if (r14_23.d != 0)
                sub_140638750(&var_38, r14_23.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_13, (r14_23 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_24 = sx.q(arg1[1].d)
            int64_t rsi_12 = *arg1
            var_38 = nullptr
            int32_t var_30_22 = r14_24.d
            
            if (r14_24.d != 0)
                sub_140638750(&var_38, r14_24.d, 0)
                rbx_10 = var_38
                memcpy(rbx_10, rsi_12, (r14_24 << 2).d)
            
            int32_t r10_11 = r15_2[0xb]
            uint32_t r8_130 = arg3 u/ 0x29
            int32_t r8_135 = ((rbx_10[sx.q(arg3 + r10_11 - r8_130 * 0x29)] * 0x29
                + rbx_10[sx.q(r10_11 + r8_130 u% 0x29)]) * 0x29
                + rbx_10[sx.q(r10_11 + arg3 u/ 0x691 u% 0x29)]) * 0x29
                + rbx_10[sx.q(r10_11 + arg3 u/ 0x10d39 u% 0x29)]
            zmm6.d = float.s(zx.q(r8_135 * 0x29 + rbx_10[sx.q(r10_11 + arg3 u/ 0x2b1e21 u% 0x29)]))
            zmm6.d = zmm6.d f* 8.63138894e-09f
            
            if (rbx_10 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_10)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0xc
            int64_t r14_25 = sx.q(arg1[3].d)
            int32_t* rbx_11 = nullptr
            int64_t r15_14 = arg1[2]
            var_38 = nullptr
            int32_t var_30_23 = r14_25.d
            
            if (r14_25.d != 0)
                sub_140638750(&var_38, r14_25.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_14, (r14_25 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_26 = sx.q(arg1[1].d)
            int64_t rsi_13 = *arg1
            var_38 = nullptr
            int32_t var_30_24 = r14_26.d
            
            if (r14_26.d != 0)
                sub_140638750(&var_38, r14_26.d, 0)
                rbx_11 = var_38
                memcpy(rbx_11, rsi_13, (r14_26 << 2).d)
            
            int32_t r11_3 = r15_2[0xc]
            uint32_t r8_141 = arg3 u/ 0x2b
            int32_t r9_33 = ((rbx_11[sx.q(arg3 + r11_3 - r8_141 * 0x2b)] * 0x2b
                + rbx_11[sx.q(r11_3 + r8_141 u% 0x2b)]) * 0x2b
                + rbx_11[sx.q(r11_3 + arg3 u/ 0x739 u% 0x2b)]) * 0x2b
                + rbx_11[sx.q(arg3 u/ 0x13693 u% 0x2b + r11_3)]
            zmm6.d = float.s(zx.q(r9_33 * 0x2b + rbx_11[sx.q(r11_3 + arg3 u/ 0x342ab1 u% 0x2b)]))
            zmm6.d = zmm6.d f* 6.80232937e-09f
            
            if (rbx_11 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_11)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0xd
            int64_t r14_27 = sx.q(arg1[3].d)
            int32_t* rbx_12 = nullptr
            int64_t r15_15 = arg1[2]
            var_38 = nullptr
            int32_t var_30_25 = r14_27.d
            
            if (r14_27.d != 0)
                sub_140638750(&var_38, r14_27.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_15, (r14_27 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_28 = sx.q(arg1[1].d)
            int64_t rsi_14 = *arg1
            var_38 = nullptr
            int32_t var_30_26 = r14_28.d
            
            if (r14_28.d != 0)
                sub_140638750(&var_38, r14_28.d, 0)
                rbx_12 = var_38
                memcpy(rbx_12, rsi_14, (r14_28 << 2).d)
            
            int32_t r11_4 = r15_2[0xd]
            uint32_t r8_157 = arg3 u/ 0x2f
            int32_t r9_35 = ((rbx_12[sx.q(arg3 + r11_4 - r8_157 * 0x2f)] * 0x2f
                + rbx_12[sx.q(r11_4 + r8_157 u% 0x2f)]) * 0x2f
                + rbx_12[sx.q(r11_4 + arg3 u/ 0x8a1 u% 0x2f)]) * 0x2f
                + rbx_12[sx.q(arg3 u/ 0x1958f u% 0x2f + r11_4)]
            zmm6.d = float.s(zx.q(r9_35 * 0x2f + rbx_12[sx.q(r11_4 + arg3 u/ 0x4a7541 u% 0x2f)]))
            zmm6.d = zmm6.d f* 4.36024283e-09f
            
            if (rbx_12 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_12)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0xe
            int64_t r14_29 = sx.q(arg1[3].d)
            int32_t* rbx_13 = nullptr
            int64_t r15_16 = arg1[2]
            var_38 = nullptr
            int32_t var_30_27 = r14_29.d
            
            if (r14_29.d != 0)
                sub_140638750(&var_38, r14_29.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_16, (r14_29 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_30 = sx.q(arg1[1].d)
            int64_t rsi_15 = *arg1
            var_38 = nullptr
            int32_t var_30_28 = r14_30.d
            
            if (r14_30.d != 0)
                sub_140638750(&var_38, r14_30.d, 0)
                rbx_13 = var_38
                memcpy(rbx_13, rsi_15, (r14_30 << 2).d)
            
            int32_t r10_16 = r15_2[0xe]
            uint32_t r8_176 = arg3 u/ 0x35
            int32_t r9_37 = ((rbx_13[sx.q(arg3 + r10_16 - r8_176 * 0x35)] * 0x35
                + rbx_13[sx.q(r10_16 + r8_176 u% 0x35)]) * 0x35
                + rbx_13[sx.q(r10_16 + arg3 u/ 0xaf9 u% 0x35)]) * 0x35
                + rbx_13[sx.q(r10_16 + arg3 u/ 0x2458d u% 0x35)]
            zmm6.d = float.s(zx.q(r9_37 * 0x35 + rbx_13[sx.q(r10_16 + arg3 u/ 0x786631 u% 0x35)]))
            zmm6.d = zmm6.d f* 2.39122588e-09f
            
            if (rbx_13 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_13)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0xf
            int64_t r14_31 = sx.q(arg1[3].d)
            int32_t* rbx_14 = nullptr
            int64_t r15_17 = arg1[2]
            var_38 = nullptr
            int32_t var_30_29 = r14_31.d
            
            if (r14_31.d != 0)
                sub_140638750(&var_38, r14_31.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_17, (r14_31 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_32 = sx.q(arg1[1].d)
            int64_t rsi_16 = *arg1
            var_38 = nullptr
            int32_t var_30_30 = r14_32.d
            
            if (r14_32.d != 0)
                sub_140638750(&var_38, r14_32.d, 0)
                rbx_14 = var_38
                memcpy(rbx_14, rsi_16, (r14_32 << 2).d)
            
            int32_t r11_5 = r15_2[0xf]
            uint32_t r8_187 = arg3 u/ 0x3b
            int32_t r9_39 = ((rbx_14[sx.q(arg3 + r11_5 - r8_187 * 0x3b)] * 0x3b
                + rbx_14[sx.q(r11_5 + r8_187 u% 0x3b)]) * 0x3b
                + rbx_14[sx.q(r11_5 + arg3 u/ 0xd99 u% 0x3b)]) * 0x3b
                + rbx_14[sx.q(arg3 u/ 0x32243 u% 0x3b + r11_5)]
            zmm6.d = float.s(zx.q(r9_39 * 0x3b + rbx_14[sx.q(r11_5 + arg3 u/ 0xb8e571 u% 0x3b)]))
            zmm6.d = zmm6.d f* 1.39874934e-09f
            
            if (rbx_14 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_14)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x10
            int64_t r14_33 = sx.q(arg1[3].d)
            int32_t* rbx_15 = nullptr
            int64_t r15_18 = arg1[2]
            var_38 = nullptr
            int32_t var_30_31 = r14_33.d
            
            if (r14_33.d != 0)
                sub_140638750(&var_38, r14_33.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_18, (r14_33 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_34 = sx.q(arg1[1].d)
            int64_t rsi_17 = *arg1
            var_38 = nullptr
            int32_t var_30_32 = r14_34.d
            
            if (r14_34.d != 0)
                sub_140638750(&var_38, r14_34.d, 0)
                rbx_15 = var_38
                memcpy(rbx_15, rsi_17, (r14_34 << 2).d)
            
            int32_t r11_6 = r15_2[0x10]
            uint32_t r8_203 = arg3 u/ 0x3d
            int32_t r9_41 = ((rbx_15[sx.q(arg3 + r11_6 - r8_203 * 0x3d)] * 0x3d
                + rbx_15[sx.q(r11_6 + r8_203 u% 0x3d)]) * 0x3d
                + rbx_15[sx.q(r11_6 + arg3 u/ 0xe89 u% 0x3d)]) * 0x3d
                + rbx_15[sx.q(arg3 u/ 0x376a5 u% 0x3d + r11_6)]
            zmm6.d = float.s(zx.q(r9_41 * 0x3d + rbx_15[sx.q(r11_6 + arg3 u/ 0xd34551 u% 0x3d)]))
            zmm6.d = zmm6.d f* 1.18399746e-09f
            
            if (rbx_15 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_15)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x11
            int64_t r14_35 = sx.q(arg1[3].d)
            int32_t* rbx_16 = nullptr
            int64_t r15_19 = arg1[2]
            var_38 = nullptr
            int32_t var_30_33 = r14_35.d
            
            if (r14_35.d != 0)
                sub_140638750(&var_38, r14_35.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_19, (r14_35 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_36 = sx.q(arg1[1].d)
            int64_t rsi_18 = *arg1
            var_38 = nullptr
            int32_t var_30_34 = r14_36.d
            
            if (r14_36.d != 0)
                sub_140638750(&var_38, r14_36.d, 0)
                rbx_16 = var_38
                memcpy(rbx_16, rsi_18, (r14_36 << 2).d)
            
            int32_t r10_21 = r15_2[0x11]
            uint32_t r8_219 = arg3 u/ 0x43
            int32_t r9_43 = ((rbx_16[sx.q(arg3 + r10_21 - r8_219 * 0x43)] * 0x43
                + rbx_16[sx.q(r10_21 + r8_219 u% 0x43)]) * 0x43
                + rbx_16[sx.q(r10_21 + arg3 u/ 0x1189 u% 0x43)]) * 0x43
                + rbx_16[sx.q(arg3 u/ 0x496db u% 0x43 + r10_21)]
            zmm6.d = float.s(zx.q(r9_43 * 0x43 + rbx_16[sx.q(r10_21 + arg3 u/ 0x1337b51 u% 0x43)]))
            zmm6.d = zmm6.d f* 7.40672024e-10f
            
            if (rbx_16 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_16)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x12
            int64_t r14_37 = sx.q(arg1[3].d)
            int32_t* rbx_17 = nullptr
            int64_t r15_20 = arg1[2]
            var_38 = nullptr
            int32_t var_30_35 = r14_37.d
            
            if (r14_37.d != 0)
                sub_140638750(&var_38, r14_37.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_20, (r14_37 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_38 = sx.q(arg1[1].d)
            int64_t rsi_19 = *arg1
            var_38 = nullptr
            int32_t var_30_36 = r14_38.d
            
            if (r14_38.d != 0)
                sub_140638750(&var_38, r14_38.d, 0)
                rbx_17 = var_38
                memcpy(rbx_17, rsi_19, (r14_38 << 2).d)
            
            int32_t r11_7 = r15_2[0x12]
            uint32_t r8_238 = arg3 u/ 0x47
            int32_t r9_47 = ((rbx_17[sx.q(arg3 + r11_7 - r8_238 * 0x47)] * 0x47
                + rbx_17[sx.q(r11_7 + r8_238 u% 0x47)]) * 0x47
                + rbx_17[sx.q(r11_7 + arg3 u/ 0x13b1 u% 0x47)]) * 0x47
                + rbx_17[sx.q(arg3 u/ 0x57617 u% 0x47 + r11_7)]
            zmm6.d = float.s(zx.q(r9_47 * 0x47 + rbx_17[sx.q(r11_7 + arg3 u/ 0x183c061 u% 0x47)]))
            zmm6.d = zmm6.d f* 5.54253199e-10f
            
            if (rbx_17 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_17)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x13
            int64_t r14_39 = sx.q(arg1[3].d)
            int32_t* rbx_18 = nullptr
            int64_t r15_21 = arg1[2]
            var_38 = nullptr
            int32_t var_30_37 = r14_39.d
            
            if (r14_39.d != 0)
                sub_140638750(&var_38, r14_39.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_21, (r14_39 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_40 = sx.q(arg1[1].d)
            int64_t rsi_20 = *arg1
            var_38 = nullptr
            int32_t var_30_38 = r14_40.d
            
            if (r14_40.d != 0)
                sub_140638750(&var_38, r14_40.d, 0)
                rbx_18 = var_38
                memcpy(rbx_18, rsi_20, (r14_40 << 2).d)
            
            int32_t r10_24 = r15_2[0x13]
            uint32_t r8_257 = arg3 u/ 0x49
            int32_t r9_49 = ((rbx_18[sx.q(arg3 + r10_24 - r8_257 * 0x49)] * 0x49
                + rbx_18[sx.q(r10_24 + r8_257 u% 0x49)]) * 0x49
                + rbx_18[sx.q(r10_24 + arg3 u/ 0x14d1 u% 0x49)]) * 0x49
                + rbx_18[sx.q(arg3 u/ 0x5ef99 u% 0x49 + r10_24)]
            zmm6.d = float.s(zx.q(r9_49 * 0x49 + rbx_18[sx.q(r10_24 + arg3 u/ 0x1b152a1 u% 0x49)]))
            zmm6.d = zmm6.d f* 4.82375972e-10f
            
            if (rbx_18 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_18)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x14
            int64_t r14_41 = sx.q(arg1[3].d)
            int32_t* rbx_19 = nullptr
            int64_t r15_22 = arg1[2]
            var_38 = nullptr
            int32_t var_30_39 = r14_41.d
            
            if (r14_41.d != 0)
                sub_140638750(&var_38, r14_41.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_22, (r14_41 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_42 = sx.q(arg1[1].d)
            int64_t rsi_21 = *arg1
            var_38 = nullptr
            int32_t var_30_40 = r14_42.d
            
            if (r14_42.d != 0)
                sub_140638750(&var_38, r14_42.d, 0)
                rbx_19 = var_38
                memcpy(rbx_19, rsi_21, (r14_42 << 2).d)
            
            int32_t r10_25 = r15_2[0x14]
            uint32_t r8_276 = arg3 u/ 0x4f
            int32_t r9_53 = ((rbx_19[sx.q(arg3 + r10_25 - r8_276 * 0x4f)] * 0x4f
                + rbx_19[sx.q(r10_25 + r8_276 u% 0x4f)]) * 0x4f
                + rbx_19[sx.q(r10_25 + arg3 u/ 0x1861 u% 0x4f)]) * 0x4f
                + rbx_19[sx.q(arg3 u/ 0x785ef u% 0x4f + r10_25)]
            zmm6.d = float.s(zx.q(r9_53 * 0x4f + rbx_19[sx.q(r10_25 + arg3 u/ 0x25254c1 u% 0x4f)]))
            zmm6.d = zmm6.d f* 3.24985872e-10f
            
            if (rbx_19 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_19)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x15
            int64_t r14_43 = sx.q(arg1[3].d)
            int32_t* rbx_20 = nullptr
            int64_t r15_23 = arg1[2]
            var_38 = nullptr
            int32_t var_30_41 = r14_43.d
            
            if (r14_43.d != 0)
                sub_140638750(&var_38, r14_43.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_23, (r14_43 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_44 = sx.q(arg1[1].d)
            int64_t rsi_22 = *arg1
            var_38 = nullptr
            int32_t var_30_42 = r14_44.d
            
            if (r14_44.d != 0)
                sub_140638750(&var_38, r14_44.d, 0)
                rbx_20 = var_38
                memcpy(rbx_20, rsi_22, (r14_44 << 2).d)
            
            int32_t r10_26 = r15_2[0x15]
            uint32_t r8_295 = arg3 u/ 0x53
            int32_t r9_57 = ((rbx_20[sx.q(arg3 + r10_26 - r8_295 * 0x53)] * 0x53
                + rbx_20[sx.q(r10_26 + r8_295 u% 0x53)]) * 0x53
                + rbx_20[sx.q(r10_26 + arg3 u/ 0x1ae9 u% 0x53)]) * 0x53
                + rbx_20[sx.q(r10_26 + arg3 u/ 0x8b98b u% 0x53)]
            zmm6.d = float.s(zx.q(r9_57 * 0x53 + rbx_20[sx.q(r10_26 + arg3 u/ 0x2d42811 u% 0x53)]))
            zmm6.d = zmm6.d f* 2.53868898e-10f
            
            if (rbx_20 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_20)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x16
            int64_t r14_45 = sx.q(arg1[3].d)
            int32_t* rbx_21 = nullptr
            int64_t r15_24 = arg1[2]
            var_38 = nullptr
            int32_t var_30_43 = r14_45.d
            
            if (r14_45.d != 0)
                sub_140638750(&var_38, r14_45.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_24, (r14_45 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_46 = sx.q(arg1[1].d)
            int64_t rsi_23 = *arg1
            var_38 = nullptr
            int32_t var_30_44 = r14_46.d
            
            if (r14_46.d != 0)
                sub_140638750(&var_38, r14_46.d, 0)
                rbx_21 = var_38
                memcpy(rbx_21, rsi_23, (r14_46 << 2).d)
            
            int32_t r10_27 = r15_2[0x16]
            uint32_t r8_306 = arg3 u/ 0x59
            int32_t r9_61 = ((rbx_21[sx.q(arg3 + r10_27 - r8_306 * 0x59)] * 0x59
                + rbx_21[sx.q(r10_27 + r8_306 u% 0x59)]) * 0x59
                + rbx_21[sx.q(arg3 u/ 0x1ef1 u% 0x59 + r10_27)]) * 0x59
                + rbx_21[sx.q(r10_27 + arg3 u/ 0xac1c9 u% 0x59)]
            zmm6.d = float.s(zx.q(r9_61))
            zmm6.d = zmm6.d f* 1.59382232e-08f
            
            if (rbx_21 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_21)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x17
            int64_t r14_47 = sx.q(arg1[3].d)
            int32_t* rbx_22 = nullptr
            int64_t r15_25 = arg1[2]
            var_38 = nullptr
            int32_t var_30_45 = r14_47.d
            
            if (r14_47.d != 0)
                sub_140638750(&var_38, r14_47.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_25, (r14_47 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_48 = sx.q(arg1[1].d)
            int64_t rsi_24 = *arg1
            var_38 = nullptr
            int32_t var_30_46 = r14_48.d
            
            if (r14_48.d != 0)
                sub_140638750(&var_38, r14_48.d, 0)
                rbx_22 = var_38
                memcpy(rbx_22, rsi_24, (r14_48 << 2).d)
            
            int32_t r10_28 = r15_2[0x17]
            uint32_t r8_326 = arg3 u/ 0x61
            int32_t r9_63 = ((rbx_22[sx.q(arg3 + r10_28 - r8_326 * 0x61)] * 0x61
                + rbx_22[sx.q(r10_28 + r8_326 u% 0x61)]) * 0x61
                + rbx_22[sx.q(r10_28 + arg3 u/ 0x24c1 u% 0x61)]) * 0x61
                + rbx_22[sx.q(r10_28 + arg3 u/ 0xded21 u% 0x61)]
            zmm6.d = float.s(zx.q(r9_63))
            zmm6.d = zmm6.d f* 1.12956968e-08f
            
            if (rbx_22 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_22)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x18
            int64_t r14_49 = sx.q(arg1[3].d)
            int32_t* rbx_23 = nullptr
            int64_t r15_26 = arg1[2]
            var_38 = nullptr
            int32_t var_30_47 = r14_49.d
            
            if (r14_49.d != 0)
                sub_140638750(&var_38, r14_49.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_26, (r14_49 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_50 = sx.q(arg1[1].d)
            int64_t rsi_25 = *arg1
            var_38 = nullptr
            int32_t var_30_48 = r14_50.d
            
            if (r14_50.d != 0)
                sub_140638750(&var_38, r14_50.d, 0)
                rbx_23 = var_38
                memcpy(rbx_23, rsi_25, (r14_50 << 2).d)
            
            int32_t r10_29 = r15_2[0x18]
            uint32_t r8_338 = arg3 u/ 0x65
            int32_t r9_65 = ((rbx_23[sx.q(arg3 + r10_29 - r8_338 * 0x65)] * 0x65
                + rbx_23[sx.q(r10_29 + r8_338 u% 0x65)]) * 0x65
                + rbx_23[sx.q(r10_29 + arg3 u/ 0x27d9 u% 0x65)]) * 0x65
                + rbx_23[sx.q(r10_29 + arg3 u/ 0xfb89d u% 0x65)]
            zmm6.d = float.s(zx.q(r9_65))
            zmm6.d = zmm6.d f* 9.60980273e-09f
            
            if (rbx_23 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_23)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x19
            int64_t r14_51 = sx.q(arg1[3].d)
            int32_t* rbx_24 = nullptr
            int64_t r15_27 = arg1[2]
            var_38 = nullptr
            int32_t var_30_49 = r14_51.d
            
            if (r14_51.d != 0)
                sub_140638750(&var_38, r14_51.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_27, (r14_51 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_52 = sx.q(arg1[1].d)
            int64_t rsi_26 = *arg1
            var_38 = nullptr
            int32_t var_30_50 = r14_52.d
            
            if (r14_52.d != 0)
                sub_140638750(&var_38, r14_52.d, 0)
                rbx_24 = var_38
                memcpy(rbx_24, rsi_26, (r14_52 << 2).d)
            
            int32_t r11_8 = r15_2[0x19]
            uint32_t r8_350 = arg3 u/ 0x67
            int32_t r10_31 = ((rbx_24[sx.q(arg3 + r11_8 - r8_350 * 0x67)] * 0x67
                + rbx_24[sx.q(r11_8 + r8_350 u% 0x67)]) * 0x67
                + rbx_24[sx.q(arg3 u/ 0x2971 u% 0x67 + r11_8)]) * 0x67
                + rbx_24[sx.q(r11_8 + arg3 u/ 0x10ac77 u% 0x67)]
            zmm6.d = float.s(zx.q(r10_31))
            zmm6.d = zmm6.d f* 8.88486973e-09f
            
            if (rbx_24 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_24)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1a
            int64_t r14_53 = sx.q(arg1[3].d)
            int32_t* rbx_25 = nullptr
            int64_t r15_28 = arg1[2]
            var_38 = nullptr
            int32_t var_30_51 = r14_53.d
            
            if (r14_53.d != 0)
                sub_140638750(&var_38, r14_53.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_28, (r14_53 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_54 = sx.q(arg1[1].d)
            int64_t rsi_27 = *arg1
            var_38 = nullptr
            int32_t var_30_52 = r14_54.d
            
            if (r14_54.d != 0)
                sub_140638750(&var_38, r14_54.d, 0)
                rbx_25 = var_38
                memcpy(rbx_25, rsi_27, (r14_54 << 2).d)
            
            int32_t r10_32 = r15_2[0x1a]
            uint32_t r8_367 = arg3 u/ 0x6b
            int32_t r9_71 = ((rbx_25[sx.q(arg3 + r10_32 - r8_367 * 0x6b)] * 0x6b
                + rbx_25[sx.q(r10_32 + r8_367 u% 0x6b)]) * 0x6b
                + rbx_25[sx.q(arg3 u/ 0x2cb9 u% 0x6b + r10_32)]) * 0x6b
                + rbx_25[sx.q(r10_32 + arg3 u/ 0x12b153 u% 0x6b)]
            zmm6.d = float.s(zx.q(r9_71))
            zmm6.d = zmm6.d f* 7.6289508e-09f
            
            if (rbx_25 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_25)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1b
            int64_t r14_55 = sx.q(arg1[3].d)
            int32_t* rbx_26 = nullptr
            int64_t r15_29 = arg1[2]
            var_38 = nullptr
            int32_t var_30_53 = r14_55.d
            
            if (r14_55.d != 0)
                sub_140638750(&var_38, r14_55.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_29, (r14_55 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_56 = sx.q(arg1[1].d)
            int64_t rsi_28 = *arg1
            var_38 = nullptr
            int32_t var_30_54 = r14_56.d
            
            if (r14_56.d != 0)
                sub_140638750(&var_38, r14_56.d, 0)
                rbx_26 = var_38
                memcpy(rbx_26, rsi_28, (r14_56 << 2).d)
            
            int32_t r10_33 = r15_2[0x1b]
            uint32_t r8_387 = arg3 u/ 0x6d
            int32_t r9_73 = ((rbx_26[sx.q(arg3 + r10_33 - r8_387 * 0x6d)] * 0x6d
                + rbx_26[sx.q(r10_33 + r8_387 u% 0x6d)]) * 0x6d
                + rbx_26[sx.q(r10_33 + arg3 u/ 0x2e69 u% 0x6d)]) * 0x6d
                + rbx_26[sx.q(r10_33 + arg3 u/ 0x13c2b5 u% 0x6d)]
            zmm6.d = float.s(zx.q(r9_73))
            zmm6.d = zmm6.d f* 7.08425141e-09f
            
            if (rbx_26 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_26)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1c
            int64_t r14_57 = sx.q(arg1[3].d)
            int32_t* rbx_27 = nullptr
            int64_t r15_30 = arg1[2]
            var_38 = nullptr
            int32_t var_30_55 = r14_57.d
            
            if (r14_57.d != 0)
                sub_140638750(&var_38, r14_57.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_30, (r14_57 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_58 = sx.q(arg1[1].d)
            int64_t rsi_29 = *arg1
            var_38 = nullptr
            int32_t var_30_56 = r14_58.d
            
            if (r14_58.d != 0)
                sub_140638750(&var_38, r14_58.d, 0)
                rbx_27 = var_38
                memcpy(rbx_27, rsi_29, (r14_58 << 2).d)
            
            int32_t r11_9 = r15_2[0x1c]
            uint32_t r8_399 = arg3 u/ 0x71
            int32_t r10_35 = ((rbx_27[sx.q(arg3 + r11_9 - r8_399 * 0x71)] * 0x71
                + rbx_27[sx.q(r11_9 + r8_399 u% 0x71)]) * 0x71
                + rbx_27[sx.q(arg3 u/ 0x31e1 u% 0x71 + r11_9)]) * 0x71
                + rbx_27[sx.q(r11_9 + arg3 u/ 0x160451 u% 0x71)]
            zmm6.d = float.s(zx.q(r10_35))
            zmm6.d = zmm6.d f* 6.1331864e-09f
            
            if (rbx_27 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_27)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1d
            int64_t r14_59 = sx.q(arg1[3].d)
            int32_t* rbx_28 = nullptr
            int64_t r15_31 = arg1[2]
            var_38 = nullptr
            int32_t var_30_57 = r14_59.d
            
            if (r14_59.d != 0)
                sub_140638750(&var_38, r14_59.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_31, (r14_59 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_60 = sx.q(arg1[1].d)
            int64_t rsi_30 = *arg1
            var_38 = nullptr
            int32_t var_30_58 = r14_60.d
            
            if (r14_60.d != 0)
                sub_140638750(&var_38, r14_60.d, 0)
                rbx_28 = var_38
                memcpy(rbx_28, rsi_30, (r14_60 << 2).d)
            
            int32_t r10_36 = r15_2[0x1d]
            uint32_t r8_416 = arg3 u/ 0x7f
            int32_t r9_77 = ((rbx_28[sx.q(arg3 + r10_36 - r8_416 * 0x7f)] * 0x7f
                + rbx_28[sx.q(r10_36 + r8_416 u% 0x7f)]) * 0x7f
                + rbx_28[sx.q(r10_36 + arg3 u/ 0x3f01 u% 0x7f)]) * 0x7f
                + rbx_28[sx.q(r10_36 + arg3 u/ 0x1f417f u% 0x7f)]
            zmm6.d = float.s(zx.q(r9_77))
            zmm6.d = zmm6.d f* 3.84401488e-09f
            
            if (rbx_28 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_28)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1e
            int64_t r14_61 = sx.q(arg1[3].d)
            int32_t* rbx_29 = nullptr
            int64_t r15_32 = arg1[2]
            var_38 = nullptr
            int32_t var_30_59 = r14_61.d
            
            if (r14_61.d != 0)
                sub_140638750(&var_38, r14_61.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_32, (r14_61 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_62 = sx.q(arg1[1].d)
            int64_t rsi_31 = *arg1
            var_38 = nullptr
            int32_t var_30_60 = r14_62.d
            
            if (r14_62.d != 0)
                sub_140638750(&var_38, r14_62.d, 0)
                rbx_29 = var_38
                memcpy(rbx_29, rsi_31, (r14_62 << 2).d)
            
            int32_t r11_10 = r15_2[0x1e]
            uint32_t r8_425 = arg3 u/ 0x83
            int32_t r10_38 = ((rbx_29[sx.q(arg3 + r11_10 - r8_425 * 0x83)] * 0x83
                + rbx_29[sx.q(r11_10 + r8_425 u% 0x83)]) * 0x83
                + rbx_29[sx.q(arg3 u/ 0x4309 u% 0x83 + r11_10)]) * 0x83
                + rbx_29[sx.q(r11_10 + arg3 u/ 0x224d9b u% 0x83)]
            zmm6.d = float.s(zx.q(r10_38))
            zmm6.d = zmm6.d f* 3.39558626e-09f
            
            if (rbx_29 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_29)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x1f
            int64_t r14_63 = sx.q(arg1[3].d)
            int32_t* rbx_30 = nullptr
            int64_t r15_33 = arg1[2]
            var_38 = nullptr
            int32_t var_30_61 = r14_63.d
            
            if (r14_63.d != 0)
                sub_140638750(&var_38, r14_63.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_33, (r14_63 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_64 = sx.q(arg1[1].d)
            int64_t rsi_32 = *arg1
            var_38 = nullptr
            int32_t var_30_62 = r14_64.d
            
            if (r14_64.d != 0)
                sub_140638750(&var_38, r14_64.d, 0)
                rbx_30 = var_38
                memcpy(rbx_30, rsi_32, (r14_64 << 2).d)
            
            int32_t r11_11 = r15_2[0x1f]
            uint32_t r8_439 = arg3 u/ 0x89
            int32_t r10_40 = ((rbx_30[sx.q(arg3 + r11_11 - r8_439 * 0x89)] * 0x89
                + rbx_30[sx.q(r11_11 + r8_439 u% 0x89)]) * 0x89
                + rbx_30[sx.q(arg3 u/ 0x4951 u% 0x89 + r11_11)]) * 0x89
                + rbx_30[sx.q(r11_11 + arg3 u/ 0x273c59 u% 0x89)]
            zmm6.d = float.s(zx.q(r10_40))
            zmm6.d = zmm6.d f* 2.83868817e-09f
            
            if (rbx_30 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_30)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x20
            int64_t r14_65 = sx.q(arg1[3].d)
            int32_t* rbx_31 = nullptr
            int64_t r15_34 = arg1[2]
            var_38 = nullptr
            int32_t var_30_63 = r14_65.d
            
            if (r14_65.d != 0)
                sub_140638750(&var_38, r14_65.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_34, (r14_65 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_66 = sx.q(arg1[1].d)
            int64_t rsi_33 = *arg1
            var_38 = nullptr
            int32_t var_30_64 = r14_66.d
            
            if (r14_66.d != 0)
                sub_140638750(&var_38, r14_66.d, 0)
                rbx_31 = var_38
                memcpy(rbx_31, rsi_33, (r14_66 << 2).d)
            
            int32_t r10_41 = r15_2[0x20]
            uint32_t r8_453 = arg3 u/ 0x8b
            int32_t r9_83 = ((rbx_31[sx.q(arg3 + r10_41 - r8_453 * 0x8b)] * 0x8b
                + rbx_31[sx.q(r10_41 + r8_453 u% 0x8b)]) * 0x8b
                + rbx_31[sx.q(r10_41 + arg3 u/ 0x4b79 u% 0x8b)]) * 0x8b
                + rbx_31[sx.q(r10_41 + arg3 u/ 0x28fab3 u% 0x8b)]
            zmm6.d = float.s(zx.q(r9_83))
            zmm6.d = zmm6.d f* 2.67880274e-09f
            
            if (rbx_31 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_31)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x21
            int64_t r14_67 = sx.q(arg1[3].d)
            int32_t* rbx_32 = nullptr
            int64_t r15_35 = arg1[2]
            var_38 = nullptr
            int32_t var_30_65 = r14_67.d
            
            if (r14_67.d != 0)
                sub_140638750(&var_38, r14_67.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_35, (r14_67 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_68 = sx.q(arg1[1].d)
            int64_t rsi_34 = *arg1
            var_38 = nullptr
            int32_t var_30_66 = r14_68.d
            
            if (r14_68.d != 0)
                sub_140638750(&var_38, r14_68.d, 0)
                rbx_32 = var_38
                memcpy(rbx_32, rsi_34, (r14_68 << 2).d)
            
            int32_t r10_42 = r15_2[0x21]
            uint32_t r8_462 = arg3 u/ 0x95
            int32_t r9_85 = ((rbx_32[sx.q(arg3 + r10_42 - r8_462 * 0x95)] * 0x95
                + rbx_32[sx.q(r10_42 + r8_462 u% 0x95)]) * 0x95
                + rbx_32[sx.q(r10_42 + arg3 u/ 0x56b9 u% 0x95)]) * 0x95
                + rbx_32[sx.q(r10_42 + arg3 u/ 0x3279ad u% 0x95)]
            zmm6.d = float.s(zx.q(r9_85))
            zmm6.d = zmm6.d f* 2.02887307e-09f
            
            if (rbx_32 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_32)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x22
            int64_t r14_69 = sx.q(arg1[3].d)
            int32_t* rbx_33 = nullptr
            int64_t r15_36 = arg1[2]
            var_38 = nullptr
            int32_t var_30_67 = r14_69.d
            
            if (r14_69.d != 0)
                sub_140638750(&var_38, r14_69.d, 0)
                r15_2 = var_38
                memcpy(r15_2, r15_36, (r14_69 << 2).d)
            else
                r15_2 = nullptr
            
            int64_t r14_70 = sx.q(arg1[1].d)
            int64_t rsi_35 = *arg1
            var_38 = nullptr
            int32_t var_30_68 = r14_70.d
            
            if (r14_70.d != 0)
                sub_140638750(&var_38, r14_70.d, 0)
                rbx_33 = var_38
                memcpy(rbx_33, rsi_35, (r14_70 << 2).d)
            
            int32_t r10_43 = r15_2[0x22]
            uint32_t r8_471 = arg3 u/ 0x97
            int32_t r9_87 = ((rbx_33[sx.q(arg3 + r10_43 - r8_471 * 0x97)] * 0x97
                + rbx_33[sx.q(r10_43 + r8_471 u% 0x97)]) * 0x97
                + rbx_33[sx.q(r10_43 + arg3 u/ 0x5911 u% 0x97)]) * 0x97
                + rbx_33[sx.q(r10_43 + arg3 u/ 0x348907 u% 0x97)]
            zmm6.d = float.s(zx.q(r9_87))
            zmm6.d = zmm6.d f* 1.9234998e-09f
            
            if (rbx_33 == 0)
                rcx_27 = r15_2
                goto label_1411f17b3
            
            sub_140a74f90(rbx_33)
            rcx_27 = r15_2
            goto label_1411f17b3
        case 0x23
            int32_t r8_475 = arg1[3].d
            int64_t rdx_448 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_448, r8_475, 0, 0)
            int32_t r8_476 = arg1[1].d
            int64_t rdx_449 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_449, r8_476, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_44 = rbx_34[0x23]
            uint32_t r8_478 = arg3 u/ 0x9d
            int32_t r9_89 = ((*(r11_12 + (sx.q(arg3 + r10_44 - r8_478 * 0x9d) << 2)) * 0x9d
                + *(r11_12 + (sx.q(r10_44 + r8_478 u% 0x9d) << 2))) * 0x9d
                + *(r11_12 + (sx.q(r10_44 + arg3 u/ 0x6049 u% 0x9d) << 2))) * 0x9d
                + *(r11_12 + (sx.q(r10_44 + arg3 u/ 0x3b0cc5 u% 0x9d) << 2))
            zmm6.d = float.s(zx.q(r9_89))
            zmm6.d = zmm6.d f* 1.64589198e-09f
        case 0x24
            int32_t r8_482 = arg1[3].d
            int64_t rdx_459 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_459, r8_482, 0, 0)
            int32_t r8_483 = arg1[1].d
            int64_t rdx_460 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_460, r8_483, 0, 0)
            int64_t rbx_35 = var_48
            rsi_36 = var_38
            int32_t r11_13 = rsi_36[0x24]
            uint32_t r8_485 = arg3 u/ 0xa3
            int32_t r10_46 = ((*(rbx_35 + (sx.q(arg3 + r11_13 - r8_485 * 0xa3) << 2)) * 0xa3
                + *(rbx_35 + (sx.q(r11_13 + r8_485 u% 0xa3) << 2))) * 0xa3
                + *(rbx_35 + (sx.q(arg3 u/ 0x67c9 u% 0xa3 + r11_13) << 2))) * 0xa3
                + *(rbx_35 + (sx.q(r11_13 + arg3 u/ 0x4214fb u% 0xa3) << 2))
            zmm6.d = float.s(zx.q(r10_46))
            zmm6.d = zmm6.d f* 1.4166075e-09f
            
            if (rbx_35 != 0)
                sub_140a74f90(rbx_35)
            
            goto label_1411efc01
        case 0x25
            int32_t r8_494 = arg1[3].d
            int64_t rdx_470 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_470, r8_494, 0, 0)
            int32_t r8_495 = arg1[1].d
            int64_t rdx_471 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_471, r8_495, 0, 0)
            int64_t rbx_36 = var_48
            rsi_36 = var_38
            int32_t r11_14 = rsi_36[0x25]
            uint32_t r8_497 = arg3 u/ 0xa7
            int32_t r10_48 = ((*(rbx_36 + (sx.q(arg3 + r11_14 - r8_497 * 0xa7) << 2)) * 0xa7
                + *(rbx_36 + (sx.q(r11_14 + r8_497 u% 0xa7) << 2))) * 0xa7
                + *(rbx_36 + (sx.q(arg3 u/ 0x6cf1 u% 0xa7 + r11_14) << 2))) * 0xa7
                + *(rbx_36 + (sx.q(r11_14 + arg3 u/ 0x471137 u% 0xa7) << 2))
            zmm6.d = float.s(zx.q(r10_48))
            zmm6.d = zmm6.d f* 1.28568345e-09f
            
            if (rbx_36 == 0)
            label_1411efc01:
                rcx_27 = rsi_36
                goto label_1411f17b3
            
            sub_140a74f90(rbx_36)
            rcx_27 = rsi_36
        label_1411f17b3:
            int64_t result
            int512_t zmm0_1
            result, zmm0_1 = sub_140a74f90(rcx_27)
            zmm0_1.o = zmm6
            return result
        case 0x26
            int32_t r8_506 = arg1[3].d
            int64_t rdx_481 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_481, r8_506, 0, 0)
            int32_t r8_507 = arg1[1].d
            int64_t rdx_482 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_482, r8_507, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_49 = rbx_34[0x26]
            uint32_t r8_512 = arg3 u/ 0xad
            int32_t r9_97 = ((*(r11_12 + (sx.q(arg3 + r10_49 - r8_512 * 0xad) << 2)) * 0xad
                + *(r11_12 + (sx.q(r10_49 + r8_512 u% 0xad) << 2))) * 0xad
                + *(r11_12 + (sx.q(arg3 u/ 0x74e9 u% 0xad + r10_49) << 2))) * 0xad
                + *(r11_12 + (sx.q(r10_49 + arg3 u/ 0x4f0175 u% 0xad) << 2))
            zmm6.d = float.s(zx.q(r9_97))
            zmm6.d = zmm6.d f* 1.11638898e-09f
        case 0x27
            int32_t r8_524 = arg1[3].d
            int64_t rdx_489 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_489, r8_524, 0, 0)
            int32_t r8_525 = arg1[1].d
            int64_t rdx_490 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_490, r8_525, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_50 = rbx_34[0x27]
            uint32_t r8_530 = arg3 u/ 0xb3
            int32_t r9_101 = ((*(r11_12 + (sx.q(arg3 + r10_50 - r8_530 * 0xb3) << 2)) * 0xb3
                + *(r11_12 + (sx.q(r10_50 + r8_530 u% 0xb3) << 2))) * 0xb3
                + *(r11_12 + (sx.q(arg3 u/ 0x7d29 u% 0xb3 + r10_50) << 2))) * 0xb3
                + *(r11_12 + (sx.q(r10_50 + arg3 u/ 0x5783ab u% 0xb3) << 2))
            zmm6.d = float.s(zx.q(r9_101))
            zmm6.d = zmm6.d f* 9.74064718e-10f
        case 0x28
            int32_t r8_542 = arg1[3].d
            int64_t rdx_497 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_497, r8_542, 0, 0)
            int32_t r8_543 = arg1[1].d
            int64_t rdx_498 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_498, r8_543, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_51 = rbx_34[0x28]
            uint32_t r8_545 = arg3 u/ 0xb5
            int32_t r9_105 = ((*(r11_12 + (sx.q(arg3 + r10_51 - r8_545 * 0xb5) << 2)) * 0xb5
                + *(r11_12 + (sx.q(r10_51 + r8_545 u% 0xb5) << 2))) * 0xb5
                + *(r11_12 + (sx.q(arg3 u/ 0x7ff9 u% 0xb5 + r10_51) << 2))) * 0xb5
                + *(r11_12 + (sx.q(r10_51 + arg3 u/ 0x5a7b0d u% 0xb5) << 2))
            zmm6.d = float.s(zx.q(r9_105))
            zmm6.d = zmm6.d f* 9.31720479e-10f
        case 0x29
            int32_t r8_557 = arg1[3].d
            int64_t rdx_508 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_508, r8_557, 0, 0)
            int32_t r8_558 = arg1[1].d
            int64_t rdx_509 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_509, r8_558, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_52 = rbx_34[0x29]
            uint32_t r8_560 = arg3 u/ 0xbf
            int32_t r9_107 = ((*(r11_12 + (sx.q(arg3 + r10_52 - r8_560 * 0xbf) << 2)) * 0xbf
                + *(r11_12 + (sx.q(r10_52 + r8_560 u% 0xbf) << 2))) * 0xbf
                + *(r11_12 + (sx.q(r10_52 + arg3 u/ 0x8e81 u% 0xbf) << 2))) * 0xbf
                + *(r11_12 + (sx.q(r10_52 + arg3 u/ 0x6a523f u% 0xbf) << 2))
            zmm6.d = float.s(zx.q(r9_107))
            zmm6.d = zmm6.d f* 7.51391838e-10f
        case 0x2a
            int32_t r8_564 = arg1[3].d
            int64_t rdx_519 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_519, r8_564, 0, 0)
            int32_t r8_565 = arg1[1].d
            int64_t rdx_520 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_520, r8_565, 0, 0)
            int64_t rbx_37 = var_48
            rsi_36 = var_38
            int32_t r11_15 = rsi_36[0x2a]
            uint32_t r8_567 = arg3 u/ 0xc1
            int32_t r10_54 = ((*(rbx_37 + (sx.q(arg3 + r11_15 - r8_567 * 0xc1) << 2)) * 0xc1
                + *(rbx_37 + (sx.q(r11_15 + r8_567 u% 0xc1) << 2))) * 0xc1
                + *(rbx_37 + (sx.q(arg3 u/ 0x9181 u% 0xc1 + r11_15) << 2))) * 0xc1
                + *(rbx_37 + (sx.q(r11_15 + arg3 u/ 0x6db241 u% 0xc1) << 2))
            zmm6.d = float.s(zx.q(r10_54))
            zmm6.d = zmm6.d f* 7.20726867e-10f
            
            if (rbx_37 == 0)
                goto label_1411efc01
            
            sub_140a74f90(rbx_37)
            rcx_27 = rsi_36
            goto label_1411f17b3
        case 0x2b
            int32_t r8_576 = arg1[3].d
            int64_t rdx_530 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_530, r8_576, 0, 0)
            int32_t r8_577 = arg1[1].d
            int64_t rdx_531 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_531, r8_577, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_55 = rbx_34[0x2b]
            uint32_t r8_582 = arg3 u/ 0xc5
            int32_t r9_113 = ((*(r11_12 + (sx.q(arg3 + r10_55 - r8_582 * 0xc5) << 2)) * 0xc5
                + *(r11_12 + (sx.q(r10_55 + r8_582 u% 0xc5) << 2))) * 0xc5
                + *(r11_12 + (sx.q(arg3 u/ 0x9799 u% 0xc5 + r10_55) << 2))) * 0xc5
                + *(r11_12 + (sx.q(r10_55 + arg3 u/ 0x74a8bd u% 0xc5) << 2))
            zmm6.d = float.s(zx.q(r9_113))
            zmm6.d = zmm6.d f* 6.63949506e-10f
        case 0x2c
            int32_t r8_594 = arg1[3].d
            int64_t rdx_538 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_538, r8_594, 0, 0)
            int32_t r8_595 = arg1[1].d
            int64_t rdx_539 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_539, r8_595, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_56 = rbx_34[0x2c]
            uint32_t r8_597 = arg3 u/ 0xc7
            int32_t r9_117 = ((*(r11_12 + (sx.q(arg3 + r10_56 - r8_597 * 0xc7) << 2)) * 0xc7
                + *(r11_12 + (sx.q(r10_56 + r8_597 u% 0xc7) << 2))) * 0xc7
                + *(r11_12 + (sx.q(arg3 u/ 0x9ab1 u% 0xc7 + r10_56) << 2))) * 0xc7
                + *(r11_12 + (sx.q(r10_56 + arg3 u/ 0x783f97 u% 0xc7) << 2))
            zmm6.d = float.s(zx.q(r9_117))
            zmm6.d = zmm6.d f* 6.3765776e-10f
        case 0x2d
            int32_t r8_609 = arg1[3].d
            int64_t rdx_549 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_549, r8_609, 0, 0)
            int32_t r8_610 = arg1[1].d
            int64_t rdx_550 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_550, r8_610, 0, 0)
            int64_t rbx_38 = var_48
            rsi_36 = var_38
            int32_t r11_16 = rsi_36[0x2d]
            uint32_t r8_612 = arg3 u/ 0xd3
            int32_t r10_58 = ((*(rbx_38 + (sx.q(arg3 + r11_16 - r8_612 * 0xd3) << 2)) * 0xd3
                + *(rbx_38 + (sx.q(r11_16 + r8_612 u% 0xd3) << 2))) * 0xd3
                + *(rbx_38 + (sx.q(arg3 u/ 0xade9 u% 0xd3 + r11_16) << 2))) * 0xd3
                + *(rbx_38 + (sx.q(r11_16 + arg3 u/ 0x8f570b u% 0xd3) << 2))
            zmm6.d = float.s(zx.q(r10_58))
            zmm6.d = zmm6.d f* 5.04510378e-10f
            
            if (rbx_38 == 0)
                goto label_1411efc01
            
            sub_140a74f90(rbx_38)
            rcx_27 = rsi_36
            goto label_1411f17b3
        case 0x2e
            int32_t r8_621 = arg1[3].d
            int64_t rdx_560 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_560, r8_621, 0, 0)
            int32_t r8_622 = arg1[1].d
            int64_t rdx_561 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_561, r8_622, 0, 0)
            int64_t rbx_39 = var_48
            rsi_36 = var_38
            int32_t r11_17 = rsi_36[0x2e]
            uint32_t r8_627 = arg3 u/ 0xdf
            int32_t r10_60 = ((*(rbx_39 + (sx.q(arg3 + r11_17 - r8_627 * 0xdf) << 2)) * 0xdf
                + *(rbx_39 + (sx.q(r11_17 + r8_627 u% 0xdf) << 2))) * 0xdf
                + *(rbx_39 + (sx.q(arg3 u/ 0xc241 u% 0xdf + r11_17) << 2))) * 0xdf
                + *(rbx_39 + (sx.q(r11_17 + arg3 u/ 0xa9369f u% 0xdf) << 2))
            zmm6.d = float.s(zx.q(r10_60))
            zmm6.d = zmm6.d f* 4.04371453e-10f
            
            if (rbx_39 == 0)
                goto label_1411efc01
            
            sub_140a74f90(rbx_39)
            rcx_27 = rsi_36
            goto label_1411f17b3
        case 0x2f
            int32_t r8_636 = arg1[3].d
            int64_t rdx_568 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_568, r8_636, 0, 0)
            int32_t r8_637 = arg1[1].d
            int64_t rdx_569 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_569, r8_637, 0, 0)
            int64_t rbx_40 = var_48
            rsi_36 = var_38
            int32_t r11_18 = rsi_36[0x2f]
            uint32_t r8_642 = arg3 u/ 0xe3
            int32_t r10_62 = ((*(rbx_40 + (sx.q(arg3 + r11_18 - r8_642 * 0xe3) << 2)) * 0xe3
                + *(rbx_40 + (sx.q(r11_18 + r8_642 u% 0xe3) << 2))) * 0xe3
                + *(rbx_40 + (sx.q(arg3 u/ 0xc949 u% 0xe3 + r11_18) << 2))) * 0xe3
                + *(rbx_40 + (sx.q(r11_18 + arg3 u/ 0xb27bbb u% 0xe3) << 2))
            zmm6.d = float.s(zx.q(r10_62))
            zmm6.d = zmm6.d f* 3.76614046e-10f
            
            if (rbx_40 == 0)
                goto label_1411efc01
            
            sub_140a74f90(rbx_40)
            rcx_27 = rsi_36
            goto label_1411f17b3
        case 0x30
            int32_t r8_651 = arg1[3].d
            int64_t rdx_576 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_576, r8_651, 0, 0)
            int32_t r8_652 = arg1[1].d
            int64_t rdx_577 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_577, r8_652, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_63 = rbx_34[0x30]
            uint32_t r8_654 = arg3 u/ 0xe5
            int32_t r9_127 = ((*(r11_12 + (sx.q(arg3 + r10_63 - r8_654 * 0xe5) << 2)) * 0xe5
                + *(r11_12 + (sx.q(r10_63 + r8_654 u% 0xe5) << 2))) * 0xe5
                + *(r11_12 + (sx.q(arg3 u/ 0xccd9 u% 0xe5 + r10_63) << 2))) * 0xe5
                + *(r11_12 + (sx.q(r10_63 + arg3 u/ 0xb73e1d u% 0xe5) << 2))
            zmm6.d = float.s(zx.q(r9_127))
            zmm6.d = zmm6.d f* 3.63628599e-10f
        case 0x31
            int32_t r8_666 = arg1[3].d
            int64_t rdx_587 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_587, r8_666, 0, 0)
            int32_t r8_667 = arg1[1].d
            int64_t rdx_588 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_588, r8_667, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_64 = rbx_34[0x31]
            uint32_t r8_672 = arg3 u/ 0xe9
            int32_t r9_131 = ((*(r11_12 + (sx.q(arg3 + r10_64 - r8_672 * 0xe9) << 2)) * 0xe9
                + *(r11_12 + (sx.q(r10_64 + r8_672 u% 0xe9) << 2))) * 0xe9
                + *(r11_12 + (sx.q(arg3 u/ 0xd411 u% 0xe9 + r10_64) << 2))) * 0xe9
                + *(r11_12 + (sx.q(r10_64 + arg3 u/ 0xc10379 u% 0xe9) << 2))
            zmm6.d = float.s(zx.q(r9_131))
            zmm6.d = zmm6.d f* 3.39294065e-10f
        case 0x32
            int32_t r8_684 = arg1[3].d
            int64_t rdx_595 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_595, r8_684, 0, 0)
            int32_t r8_685 = arg1[1].d
            int64_t rdx_596 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_596, r8_685, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_65 = rbx_34[0x32]
            uint32_t r8_687 = arg3 u/ 0xef
            int32_t r9_133 = ((*(r11_12 + (sx.q(arg3 + r10_65 - r8_687 * 0xef) << 2)) * 0xef
                + *(r11_12 + (sx.q(r10_65 + r8_687 u% 0xef) << 2))) * 0xef
                + *(r11_12 + (sx.q(r10_65 + arg3 u/ 0xdf21 u% 0xef) << 2))) * 0xef
                + *(r11_12 + (sx.q(r10_65 + arg3 u/ 0xd04fcf u% 0xef) << 2))
            zmm6.d = float.s(zx.q(r9_133))
            zmm6.d = zmm6.d f* 3.06484366e-10f
        case 0x33
            int32_t r8_691 = arg1[3].d
            int64_t rdx_606 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_606, r8_691, 0, 0)
            int32_t r8_692 = arg1[1].d
            int64_t rdx_607 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_607, r8_692, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_66 = rbx_34[0x33]
            uint32_t r8_694 = arg3 u/ 0xf1
            int32_t r9_137 = ((*(r11_12 + (sx.q(arg3 + r10_66 - r8_694 * 0xf1) << 2)) * 0xf1
                + *(r11_12 + (sx.q(r10_66 + r8_694 u% 0xf1) << 2))) * 0xf1
                + *(r11_12 + (sx.q(arg3 u/ 0xe2e1 u% 0xf1 + r10_66) << 2))) * 0xf1
                + *(r11_12 + (sx.q(r10_66 + arg3 u/ 0xd595d1 u% 0xf1) << 2))
            zmm6.d = float.s(zx.q(r9_137))
            zmm6.d = zmm6.d f* 2.9643657e-10f
        case 0x34
            int32_t r8_706 = arg1[3].d
            int64_t rdx_617 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_617, r8_706, 0, 0)
            int32_t r8_707 = arg1[1].d
            int64_t rdx_618 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_618, r8_707, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_67 = rbx_34[0x34]
            uint32_t r8_709 = arg3 u/ 0xfb
            int32_t r9_139 = ((*(r11_12 + (sx.q(arg3 + r10_67 - r8_709 * 0xfb) << 2)) * 0xfb
                + *(r11_12 + (sx.q(r10_67 + r8_709 u% 0xfb) << 2))) * 0xfb
                + *(r11_12 + (sx.q(r10_67 + arg3 u/ 0xf619 u% 0xfb) << 2))) * 0xfb
                + *(r11_12 + (sx.q(r10_67 + arg3 u/ 0xf14a83 u% 0xfb) << 2))
            zmm6.d = float.s(zx.q(r9_139))
            zmm6.d = zmm6.d f* 2.51944604e-10f
        case 0x35
            int32_t r8_713 = arg1[3].d
            int64_t rdx_628 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_628, r8_713, 0, 0)
            int32_t r8_714 = arg1[1].d
            int64_t rdx_629 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_629, r8_714, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_68 = rbx_34[0x35]
            uint32_t r9_141 = arg3 u/ 0x101
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_68 - r9_141 * 0x101) << 2)) * 0x101
                + *(r11_12 + (sx.q(r9_141 u% 0x101 + r10_68) << 2))) * 0x101
                + *(r11_12 + (sx.q(r10_68 + arg3 u/ 0x10201 u% 0x101) << 2))))
            zmm6.d = zmm6.d f* 5.89115672e-08f
        case 0x36
            int32_t r8_720 = arg1[3].d
            int64_t rdx_636 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_636, r8_720, 0, 0)
            int32_t r8_721 = arg1[1].d
            int64_t rdx_637 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_637, r8_721, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_69 = rbx_34[0x36]
            uint32_t r9_147 = arg3 u/ 0x107
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_69 - r9_147 * 0x107) << 2)) * 0x107
                + *(r11_12 + (sx.q(r9_147 u% 0x107 + r10_69) << 2))) * 0x107
                + *(r11_12 + (sx.q(r10_69 + arg3 u/ 0x10e31 u% 0x107) << 2))))
            zmm6.d = zmm6.d f* 5.4970883e-08f
        case 0x37
            int32_t r8_727 = arg1[3].d
            int64_t rdx_644 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_644, r8_727, 0, 0)
            int32_t r8_728 = arg1[1].d
            int64_t rdx_645 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_645, r8_728, 0, 0)
            int64_t r10_70 = var_48
            rbx_34 = var_38
            int32_t r9_152 = rbx_34[0x37]
            uint32_t r8_730 = arg3 u/ 0x10d
            zmm6.d = float.s(zx.q((*(r10_70 + (sx.q(arg3 + r9_152 - r8_730 * 0x10d) << 2)) * 0x10d
                + *(r10_70 + (sx.q(r9_152 + r8_730 u% 0x10d) << 2))) * 0x10d
                + *(r10_70 + (sx.q(r9_152 + arg3 u/ 0x11aa9 u% 0x10d) << 2))))
            zmm6.d = zmm6.d f* 5.13739664e-08f
            
            if (r10_70 == 0)
                goto label_1411f17b0
            
            rcx_674 = r10_70
            goto label_1411f17ab
        case 0x38
            int32_t r8_734 = arg1[3].d
            int64_t rdx_652 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_652, r8_734, 0, 0)
            int32_t r8_735 = arg1[1].d
            int64_t rdx_653 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_653, r8_735, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_71 = rbx_34[0x38]
            uint32_t r9_154 = arg3 u/ 0x10f
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_71 - r9_154 * 0x10f) << 2)) * 0x10f
                + *(r11_12 + (sx.q(r9_154 u% 0x10f + r10_71) << 2))) * 0x10f
                + *(r11_12 + (sx.q(r10_71 + arg3 u/ 0x11ee1 u% 0x10f) << 2))))
            zmm6.d = zmm6.d f* 5.02449105e-08f
        case 0x39
            int32_t r8_741 = arg1[3].d
            int64_t rdx_660 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_660, r8_741, 0, 0)
            int32_t r8_742 = arg1[1].d
            int64_t rdx_661 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_661, r8_742, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_72 = rbx_34[0x39]
            uint32_t r9_160 = arg3 u/ 0x115
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_72 - r9_160 * 0x115) << 2)) * 0x115
                + *(r11_12 + (sx.q(r9_160 u% 0x115 + r10_72) << 2))) * 0x115
                + *(r11_12 + (sx.q(r10_72 + arg3 u/ 0x12bb9 u% 0x115) << 2))))
            zmm6.d = zmm6.d f* 4.70501114e-08f
        case 0x3a
            int32_t r8_748 = arg1[3].d
            int64_t rdx_668 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_668, r8_748, 0, 0)
            int32_t r8_749 = arg1[1].d
            int64_t rdx_669 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_669, r8_749, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_73 = rbx_34[0x3a]
            uint32_t r9_166 = arg3 u/ 0x119
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_73 - r9_166 * 0x119) << 2)) * 0x119
                + *(r11_12 + (sx.q(r9_166 u% 0x119 + r10_73) << 2))) * 0x119
                + *(r11_12 + (sx.q(r10_73 + arg3 u/ 0x13471 u% 0x119) << 2))))
            zmm6.d = zmm6.d f* 4.50693172e-08f
        case 0x3b
            int32_t r8_755 = arg1[3].d
            int64_t rdx_676 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_676, r8_755, 0, 0)
            int32_t r8_756 = arg1[1].d
            int64_t rdx_677 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_677, r8_756, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_74 = rbx_34[0x3b]
            uint32_t r9_172 = arg3 u/ 0x11b
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_74 - r9_172 * 0x11b) << 2)) * 0x11b
                + *(r11_12 + (sx.q(r9_172 u% 0x11b + r10_74) << 2))) * 0x11b
                + *(r11_12 + (sx.q(r10_74 + arg3 u/ 0x138d9 u% 0x11b) << 2))))
            zmm6.d = zmm6.d f* 4.41205223e-08f
        case 0x3c
            int32_t r8_762 = arg1[3].d
            int64_t rdx_684 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_684, r8_762, 0, 0)
            int32_t r8_763 = arg1[1].d
            int64_t rdx_685 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_685, r8_763, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_75 = rbx_34[0x3c]
            uint32_t r9_178 = arg3 u/ 0x125
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_75 - r9_178 * 0x125) << 2)) * 0x125
                + *(r11_12 + (sx.q(r9_178 u% 0x125 + r10_75) << 2))) * 0x125
                + *(r11_12 + (sx.q(r10_75 + arg3 u/ 0x14f59 u% 0x125) << 2))))
            zmm6.d = zmm6.d f* 3.97554878e-08f
        case 0x3d
            int32_t r8_769 = arg1[3].d
            int64_t rdx_692 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_692, r8_769, 0, 0)
            int32_t r8_770 = arg1[1].d
            int64_t rdx_693 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_693, r8_770, 0, 0)
            r11_12 = var_48
            rbx_34 = var_38
            int32_t r10_76 = rbx_34[0x3d]
            uint32_t r9_184 = arg3 u/ 0x133
            zmm6.d = float.s(zx.q((*(r11_12 + (sx.q(arg3 + r10_76 - r9_184 * 0x133) << 2)) * 0x133
                + *(r11_12 + (sx.q(r9_184 u% 0x133 + r10_76) << 2))) * 0x133
                + *(r11_12 + (sx.q(r10_76 + arg3 u/ 0x17029 u% 0x133) << 2))))
            zmm6.d = zmm6.d f* 3.45608839e-08f
        case 0x3e
            int32_t r8_776 = arg1[3].d
            int64_t rdx_700 = arg1[2]
            var_38 = nullptr
            sub_1411b64f0(&var_38, rdx_700, r8_776, 0, 0)
            int32_t r8_777 = arg1[1].d
            int64_t rdx_701 = *arg1
            var_48 = 0
            sub_1411b64f0(&var_48, rdx_701, r8_777, 0, 0)
            int64_t r10_77 = var_48
            rbx_34 = var_38
            int32_t r9_189 = rbx_34[0x3e]
            uint32_t r8_779 = arg3 u/ 0x137
            zmm6.d = float.s(zx.q((*(r10_77 + (sx.q(arg3 + r9_189 - r8_779 * 0x137) << 2)) * 0x137
                + *(r10_77 + (sx.q(r9_189 + r8_779 u% 0x137) << 2))) * 0x137
                + *(r10_77 + (sx.q(r9_189 + arg3 u/ 0x179d1 u% 0x137) << 2))))
            zmm6.d = zmm6.d f* 3.32444223e-08f
            
            if (r10_77 == 0)
                goto label_1411f17b0
            
            rcx_674 = r10_77
            goto label_1411f17ab

if (r11_12 == 0)
    goto label_1411f17b0

rcx_674 = r11_12
label_1411f17ab:
sub_140a74f90(rcx_674)
label_1411f17b0:
rcx_27 = rbx_34
goto label_1411f17b3
