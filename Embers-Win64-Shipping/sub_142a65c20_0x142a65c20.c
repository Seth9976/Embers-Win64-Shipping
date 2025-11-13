// 函数: sub_142a65c20
// 地址: 0x142a65c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t* r15 = arg6
int128_t zmm6 = arg2

if (*r15 s<= 0)
    int32_t rax_1 = (*(*arg1 + 0x38))()
    *arg4 = rax_1
    
    if (arg3 == 0)
        zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q(rax_1))
    
    uint128_t zmm7 = 0x4194997000000000
    int32_t rbx_1 = 0
    
    while (true)
        int128_t zmm0_1 = sub_142a4b9b0(zmm6.q f/ zmm7.q)
        arg2.q = zmm6.q f- zmm0_1.q f* zmm7.q
        int32_t var_58
        char var_54
        int32_t var_50
        int32_t var_4c
        int32_t rdx_2
        rdx_2, zmm6, zmm7 = sub_142acc6b0(zmm0_1, &arg6, &var_58, &var_50, &var_54, &var_4c)
        int32_t r8_1 = arg6.d
        int32_t rdx_4
        int32_t rdx_6
        
        if ((r8_1.b & 3) == 0)
            int32_t temp0_2
            int32_t temp1_1
            temp0_2:temp1_1 = muls.dp.d(0x51eb851f, r8_1)
            rdx_4 = temp0_2 s>> 5
            
            if (r8_1 == r8_1 s/ 0x64 * 0x64)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = muls.dp.d(0x51eb851f, r8_1)
                rdx_6 = temp4_1 s>> 7
        
        int32_t rax_5
        
        if ((r8_1.b & 3) != 0 || (r8_1 == (rdx_4 + (rdx_4 u>> 0x1f)) * 0x64
                && r8_1 != (rdx_6 + (rdx_6 u>> 0x1f)) * 0x190))
            rax_5 = 0
        else
            rax_5.b = 1
        
        char temp3_1 = rax_5.b
        rax_5.b = neg.b(rax_5.b)
        rdx_2.b = 1
        int32_t* var_68_1 = r15
        int32_t var_70_1 =
            sx.d(*(sx.q((sbb.d(rax_5, rax_5, temp3_1 != 0) & 0xc) + var_58) + &data_1436565d0))
        int32_t var_78_1 = int.d(arg2.q)
        int32_t* var_80_1
        var_80_1.b = var_54
        int32_t* var_88_1
        var_88_1.d = var_50
        result = (*(*arg1 + 0x20))(arg1, rdx_2) - *arg4
        *arg5 = result
        
        if (rbx_1 != 0)
            break
        
        if (arg3 == 0)
            break
        
        if (result == 0)
            break
        
        rbx_1 = 1
        zmm6.q = zmm6.q f- _mm_cvtepi32_pd(zx.q(result))

return result
