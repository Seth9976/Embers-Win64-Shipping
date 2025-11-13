// 函数: sub_14262df10
// 地址: 0x14262df10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool result = &__return_addr
int32_t i_1 = 0
int128_t zmm6
int128_t var_38 = zmm6
int32_t i = 0

if (*(arg1 + 0x48) s> 0)
    int32_t* rbx_1 = nullptr
    
    do
        int64_t rbp_1 = *(arg1 + 0x40)
        float zmm2 = *(rbx_1 + rbp_1) - *arg2
        *(rbx_1 + rbp_1 + 0x28) = zmm2
        float zmm0 = *(rbx_1 + rbp_1 + 4) - arg2[1]
        *(rbx_1 + rbp_1 + 0x2c) = zmm0
        int128_t zmm1
        zmm1.d = (*(rbx_1 + rbp_1 + 8)).d f- arg2[2]
        *(rbx_1 + rbp_1 + 0x30) = zmm1.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm1.d = 1f / sub_142609970(zmm0 * zmm0 + zmm2 * zmm2 f+ zmm1.d)
        int128_t zmm3 = zmm1
        zmm0 = zmm1.d
        zmm1.d = zmm1.d f* *(rbx_1 + rbp_1 + 0x30)
        zmm3.d = zmm3.d f* *(rbx_1 + rbp_1 + 0x28)
        int128_t zmm4 = zmm1
        *(rbx_1 + rbp_1 + 0x2c) = zmm0 f* *(rbx_1 + rbp_1 + 0x2c)
        *(rbx_1 + rbp_1 + 0x30) = zmm1.d
        *(rbx_1 + rbp_1 + 0x28) = zmm3.d
        zmm2 = (*(rbx_1 + rbp_1 + 0x18) - *arg3 - 0f) f* zmm1.d
        zmm1.d = (*(rbx_1 + rbp_1 + 0x20)).d f- arg3[2]
        zmm1.d = zmm1.d f* (zmm3.d - 0f)
        
        if (zmm2 f- zmm1.d >= 0.00999999978f)
            zmm3 ^= 0x80000000
        else
            zmm4 ^= 0x80000000
        
        *(rbx_1 + rbp_1 + 0x34) = zmm4.d
        i += 1
        *(rbx_1 + rbp_1 + 0x3c) = zmm3.d
        rbx_1 = &rbx_1[0x10]
    while (i s< *(arg1 + 0x48))

if (*(arg1 + 0x58) s> 0)
    int64_t r14 = 0
    
    do
        float* rbx_3 = *(arg1 + 0x50) + r14
        float arg_8
        float zmm0_1
        zmm0_1, zmm6 = sub_1426090a0(arg2, rbx_3, &rbx_3[3], &arg_8)
        rbx_3[6].b &= 0xfe
        zmm0_1 f- zmm6.d
        result = zmm0_1 f< zmm6.d
        i_1 += 1
        rbx_3[6].b |= result
        r14 += 0x1c
    while (i_1 s< *(arg1 + 0x58))

return result
