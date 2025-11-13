// 函数: sub_1427ec150
// 地址: 0x1427ec150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int32_t rax_2 = (*(*arg3 + 0x28))(arg3)
    int32_t rax_4
    
    if (rax_2 != 1)
        rax_4 = (*(*arg3 + 0x28))(arg3)
    
    if (rax_2 == 1 || rax_4 == 4)
        (*(*arg3 + 0xf0))(arg3, arg2)
    else
        void var_c8
        int128_t* rax_6 = (*(*arg3 + 0xa0))(arg3, &var_c8)
        int128_t zmm13 = *rax_6
        int128_t zmm9 = *(rax_6 + 4)
        int128_t zmm10 = *(rax_6 + 8)
        int128_t zmm11 = *(rax_6 + 0xc)
        int128_t zmm7 = rax_6[1].d ^ 0x80000000
        int128_t zmm6 = *(rax_6 + 0x14) ^ 0x80000000
        int128_t zmm5_1 = *(rax_6 + 0x18) ^ 0x80000000
        int128_t zmm8
        zmm8.d = zmm11.d f* zmm11.d
        *arg2 = (zmm13 ^ 0x80000000).d
        zmm8.d = zmm8.d f- 0.5f
        *(arg2 + 4) = (zmm9 ^ 0x80000000).d
        zmm7.d = zmm7.d f* 2f
        zmm6.d = zmm6.d f* 2f
        zmm5_1.d = zmm5_1.d f* 2f
        float zmm3 = zmm8.d f* zmm7.d
        float zmm2 = zmm8.d f* zmm6.d
        zmm8.d = zmm8.d f* zmm5_1.d
        arg2[1].d = (zmm10 ^ 0x80000000).d
        float zmm4_1 = zmm9.d f* zmm6.d + zmm13.d f* zmm7.d + zmm10.d f* zmm5_1.d
        zmm3 = zmm3 - (zmm9.d f* zmm5_1.d - zmm10.d f* zmm6.d) f* zmm11.d
        float zmm1 = zmm10.d f* zmm7.d
        zmm10.d = zmm10.d f* zmm4_1
        zmm3 = zmm3 + zmm13.d * zmm4_1
        float zmm0 = zmm13.d f* zmm5_1.d
        zmm13.d = zmm13.d f* zmm6.d
        zmm1 = zmm1 - zmm0
        zmm0 = zmm9.d
        zmm9.d = zmm9.d f* zmm7.d
        zmm13.d = zmm13.d f- zmm9.d
        zmm13.d = zmm13.d f* zmm11.d
        zmm8.d = zmm8.d f- zmm13.d
        zmm8.d = zmm8.d f+ zmm10.d
        *(arg2 + 0xc) = zmm11.d
        arg2[3].d = zmm8.d
        arg2[2].d = zmm3
        *(arg2 + 0x14) = zmm2 - zmm1 f* zmm11.d + zmm0 * zmm4_1
else
    *(arg2 + 0xc) = 0x3f800000
    *arg2 = 0
    arg2[1].d = 0
    *(arg2 + 0x14) = 0

return arg2
