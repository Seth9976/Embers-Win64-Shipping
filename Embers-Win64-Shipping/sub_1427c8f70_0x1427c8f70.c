// 函数: sub_1427c8f70
// 地址: 0x1427c8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int128_t zmm6
int128_t var_28 = zmm6
*(arg2 + 8) = 0
*arg2 = 1
float arg_10
float arg_18

if (arg3 u> 0x1b)
    *(arg2 + 8) = 0
    *arg2 = 1
else
    switch (arg3)
        case 0
            uint64_t rax_6 = sub_1427ca320(arg1, arg4)
            char rax_7 = sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rax_6 u>> rax_7
        case 1
            uint64_t rax_8 = sub_1427ca320(arg1, arg4)
            char rax_9 = sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rax_8 << rax_9
        case 2
            uint64_t rbx_2 = sub_1427ca320(arg1, arg4) & sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_2
        case 3
            uint64_t rbx_4 = sub_1427ca320(arg1, arg4) | sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_4
        case 4
            uint64_t rbx_10 = sub_1427ca320(arg1, arg4) ^ sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_10
        case 5
            uint64_t rbx_12 = sub_1427ca320(arg1, arg4) ^ sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = not.q(rbx_12)
        case 6
            if (sub_1427ca320(arg1, arg4) == 0)
                *arg2 = 3
                arg2[2].b = 0
            else if (sub_1427ca320(arg1, arg5) == 0)
                *arg2 = 3
                arg2[2].b = 0
            else
                *arg2 = 3
                arg2[2].b = 1
        case 7
            bool cond:0_1 = sub_1427ca320(arg1, arg4) == sub_1427ca320(arg1, arg5)
            *arg2 = 3
            uint64_t rax_16
            rax_16.b = cond:0_1
            arg2[2].b = rax_16.b
        case 8
            uint64_t rbx_16 = sub_1427ca320(arg1, arg4) + sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_16
        case 9
            uint64_t rbx_18 = sub_1427ca320(arg1, arg4) - sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_18
        case 0xa
            int64_t rbx_20 = sub_1427ca320(arg1, arg4) * sub_1427ca320(arg1, arg5)
            *arg2 = 1
            *(arg2 + 8) = rbx_20
        case 0xb
            uint64_t rax_21 = sub_1427ca320(arg1, arg5)
            
            if (rax_21 != 0)
                rbx = divu.dp.q(0:(sub_1427ca320(arg1, arg4)), rax_21)
            
            *(arg2 + 8) = rbx
            *arg2 = 1
        case 0xc
            zmm6.d = sub_1427ca2c0(arg1, arg4).d f+ sub_1427ca2c0(arg1, arg5)
            *arg2 = 2
            arg2[2] = zmm6.d
        case 0xd
            zmm6.d = sub_1427ca2c0(arg1, arg4).d f- sub_1427ca2c0(arg1, arg5)
            *arg2 = 2
            arg2[2] = zmm6.d
        case 0xe
            zmm6.d = sub_1427ca2c0(arg1, arg4).d f* sub_1427ca2c0(arg1, arg5)
            *arg2 = 2
            arg2[2] = zmm6.d
        case 0xf
            zmm6 = sub_1427ca2c0(arg1, arg5)
            int128_t zmm0_7 = zx.o(0)
            zmm6.d f- 0f
            
            if (is_unordered.d(zmm6.d, 0f) || not(zmm6.d f== 0f))
                zmm0_7.d = sub_1427ca2c0(arg1, arg4).d f/ zmm6.d
            
            arg2[2] = zmm0_7.d
            *arg2 = 2
        case 0x10
            bool cond:1_1 = sub_1427ca320(arg1, arg4) u> sub_1427ca320(arg1, arg5)
            *arg2 = 3
            uint64_t rax_27
            rax_27.b = cond:1_1
            arg2[2].b = rax_27.b
        case 0x11
            bool c_1 = sub_1427ca320(arg1, arg4) u< sub_1427ca320(arg1, arg5)
            *arg2 = 3
            uint64_t rax_29
            rax_29.b = c_1
            arg2[2].b = rax_29.b
        case 0x12
            bool cond:2_1 = sub_1427ca320(arg1, arg4) u>= sub_1427ca320(arg1, arg5)
            *arg2 = 3
            uint64_t rax_31
            rax_31.b = cond:2_1
            arg2[2].b = rax_31.b
        case 0x13
            bool cond:3_1 = sub_1427ca320(arg1, arg4) u<= sub_1427ca320(arg1, arg5)
            *arg2 = 3
            uint64_t rax_33
            rax_33.b = cond:3_1
            arg2[2].b = rax_33.b
        case 0x14
            bool cond:4_1 = sub_1427ca2c0(arg1, arg4).d f> sub_1427ca2c0(arg1, arg5)
            *arg2 = 3
            arg2[2].b = cond:4_1
        case 0x15
            int128_t zmm0_10 = sub_1427ca2c0(arg1, arg4)
            bool cond:5_1 = sub_1427ca2c0(arg1, arg5) f> zmm0_10.d
            *arg2 = 3
            arg2[2].b = cond:5_1
        case 0x16
            bool cond:6_1 = sub_1427ca2c0(arg1, arg4).d f>= sub_1427ca2c0(arg1, arg5)
            *arg2 = 3
            arg2[2].b = cond:6_1
        case 0x17
            int128_t zmm0_14 = sub_1427ca2c0(arg1, arg4)
            bool cond:7_1 = sub_1427ca2c0(arg1, arg5) f>= zmm0_14.d
            *arg2 = 3
            arg2[2].b = cond:7_1
        case 0x18
            uint64_t rax_38 = sub_1427ca320(arg1, arg5)
            uint64_t rax_39 = sub_1427ca320(arg1, arg4)
            *arg2 = 1
            
            if (rax_38 u< rax_39)
                rax_39 = rax_38
            
            *(arg2 + 8) = rax_39
        case 0x19
            uint64_t rax_40 = sub_1427ca320(arg1, arg5)
            uint64_t rax_41 = sub_1427ca320(arg1, arg4)
            *arg2 = 1
            
            if (rax_41 u< rax_40)
                rax_41 = rax_40
            
            *(arg2 + 8) = rax_41
        case 0x1a
            int128_t zmm0_16 = sub_1427ca2c0(arg1, arg5)
            arg_18 = zmm0_16.d
            float zmm0_17 = sub_1427ca2c0(arg1, arg4)
            float* rax_42 = &arg_18
            *arg2 = 2
            arg_10 = zmm0_17
            
            if (zmm0_17 f<= zmm0_16.d)
                rax_42 = &arg_10
            
            arg2[2] = *rax_42
        case 0x1b
            int128_t zmm0_18 = sub_1427ca2c0(arg1, arg5)
            arg_18 = zmm0_18.d
            float zmm0_19 = sub_1427ca2c0(arg1, arg4)
            float* rax_44 = &arg_18
            *arg2 = 2
            arg_10 = zmm0_19
            
            if (zmm0_18.d f<= zmm0_19)
                rax_44 = &arg_10
            
            arg2[2] = *rax_44
return arg2
