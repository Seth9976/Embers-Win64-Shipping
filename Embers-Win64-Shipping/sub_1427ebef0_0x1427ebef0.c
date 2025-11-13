// 函数: sub_1427ebef0
// 地址: 0x1427ebef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = nullptr

if (arg3 != 0)
    if (arg3[1].w == 7)
        rax = arg3
    
    int64_t rax_1 = *arg3
    
    if (rax == 0)
        void var_b8
        int32_t* rax_2 = (*(rax_1 + 0xf0))(arg3, &var_b8)
        int64_t r8 = *arg3
        void var_9c
        int128_t* rax_3 = (*(r8 + 0xa0))(arg3, &var_9c, r8)
        int128_t zmm10 = rax_2[4]
        int128_t zmm7 = rax_2[5]
        zmm10.d = zmm10.d f+ zmm10.d
        int128_t zmm9 = rax_2[6]
        zmm7.d = zmm7.d f+ zmm7.d
        int128_t zmm4_1 = *(rax_3 + 0xc)
        zmm9.d = zmm9.d f+ zmm9.d
        int128_t zmm2 = *(rax_3 + 4)
        int128_t zmm12 = *rax_3
        int128_t zmm5_1 = *(rax_3 + 8)
        int128_t zmm8
        zmm8.d = zmm4_1.d f* zmm4_1.d
        int128_t zmm11
        zmm11.d = zmm2.d f* zmm9.d
        zmm8.d = zmm8.d f- 0.5f
        int128_t zmm6
        zmm6.d = zmm5_1.d f* zmm10.d
        zmm11.d = zmm11.d f- zmm5_1.d f* zmm7.d
        float zmm3 = zmm12.d f* zmm10.d + zmm2.d f* zmm7.d + zmm5_1.d f* zmm9.d
        zmm11.d = zmm11.d f* zmm4_1.d
        float zmm1 = zmm12.d * zmm3
        zmm11.d = zmm11.d f+ zmm8.d f* zmm10.d
        zmm5_1.d = zmm5_1.d f* zmm3
        float zmm0 = zmm12.d
        zmm12.d = zmm12.d f* zmm7.d
        zmm11.d = zmm11.d f+ zmm1
        zmm1 = zmm2.d
        zmm2.d = zmm2.d f* zmm10.d
        zmm6.d = zmm6.d f- zmm0 f* zmm9.d
        zmm12.d = zmm12.d f- zmm2.d
        zmm0 = zmm8.d
        zmm8.d = zmm8.d f* zmm9.d
        zmm11.d = zmm11.d f+ rax_3[1].d
        zmm6.d = zmm6.d f* zmm4_1.d
        zmm12.d = zmm12.d f* zmm4_1.d
        zmm12.d = zmm12.d f+ zmm8.d
        zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
        zmm12.d = zmm12.d f+ zmm5_1.d
        zmm6.d = zmm6.d f+ zmm1 * zmm3
        zmm12.d = zmm12.d f+ *(rax_3 + 0x18)
        zmm6.d = zmm6.d f+ *(rax_3 + 0x14)
        float var_c8[0x4]
        float* rax_4
        int32_t zmm6_1
        int32_t zmm11_1
        rax_4, zmm6_1, zmm11_1 = sub_1417c7990(rax_3, &var_c8, rax_2)
        *arg2 = *rax_4
        *(arg2 + 4) = rax_4[1]
        arg2[1].d = rax_4[2]
        *(arg2 + 0xc) = rax_4[3]
        arg2[2].d = zmm11_1
        *(arg2 + 0x14) = zmm6_1
        arg2[3].d = zmm12.d
    else
        (*(rax_1 + 0xa0))(arg3)
else
    *arg2 = 0
    arg2[1].d = 0
    *(arg2 + 0xc) = 0x3f800000
    *(arg2 + 0x14) = 0

return arg2
