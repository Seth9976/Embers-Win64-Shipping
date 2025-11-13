// 函数: sub_142ac4ec0
// 地址: 0x142ac4ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t* rbp = arg7

if (*rbp s<= 0)
    uint128_t zmm8 = 0x4194997000000000
    *arg5 = (*(*arg1 + 0x38))()
    int128_t zmm0_1 = sub_142a4b9b0(arg2.q f/ zmm8.q)
    arg2.q = arg2.q f- zmm0_1.q f* zmm8.q
    int32_t var_58
    char var_54
    int32_t var_50
    int32_t var_4c
    int32_t rdx_2
    double zmm6_1
    double zmm7_1
    double zmm8_1
    rdx_2, zmm6_1, zmm7_1, zmm8_1 = sub_142acc6b0(zmm0_1, &var_58, &arg7, &var_50, &var_54, &var_4c)
    int32_t r8_1 = var_58
    int32_t rdx_4
    int32_t rdx_7
    
    if ((r8_1.b & 3) == 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x51eb851f, r8_1)
        rdx_4 = temp0_1 s>> 5
        
        if (r8_1 == r8_1 s/ 0x64 * 0x64)
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = muls.dp.d(0x51eb851f, r8_1)
            rdx_7 = temp3_1 s>> 7
    
    int32_t rax_2
    
    if ((r8_1.b & 3) != 0 || (r8_1 == (rdx_4 + (rdx_4 u>> 0x1f)) * 0x64
            && r8_1 != (rdx_7 + (rdx_7 u>> 0x1f)) * 0x190))
        rax_2 = 0
    else
        rax_2.b = 1
    
    char temp2_1 = rax_2.b
    rax_2.b = neg.b(rax_2.b)
    int32_t* var_68_1 = rbp
    rdx_2.b = 1
    int32_t var_70_1 =
        sx.d(*(sx.q((sbb.d(rax_2, rax_2, temp2_1 != 0) & 0xc) + arg7.d) + &data_1436565d0))
    int32_t var_78_1 = int.d(arg2.q)
    int32_t* var_80_1
    var_80_1.b = var_54
    int32_t* var_88_1
    var_88_1.d = var_50
    result = (*(*arg1 + 0x20))(arg1, rdx_2) - *arg5
    *arg6 = result
    
    if (*rbp s<= 0)
        if (result s<= 0)
            result = arg4 & 3
            
            if (result == 3)
            label_142ac5066:
                double var_28_1 = zmm6_1
                double zmm6_2
                double zmm7_2
                double zmm8_2
                zmm6_2, zmm7_2, zmm8_2 = sub_142acc6b0(
                    sub_142a4b9b0((zmm7_1 f- _mm_cvtepi32_pd(zx.q((*(*arg1 + 0x60))(arg1))).q)
                        f/ zmm8_1), 
                    &var_58, &arg7, &var_50, &var_54, &var_4c)
                int64_t rsi_2 = *arg1
                char rax_17
                int64_t rdx_10
                rax_17, rdx_10 = sub_142ac5cd0(var_58, arg7.d)
                rdx_10.b = 1
                int32_t* var_80_2
                var_80_2.b = var_54
                int32_t* var_88_2
                var_88_2.d = var_50
                result = (*(rsi_2 + 0x20))(arg1, rdx_10, zx.q(var_58), zx.q(arg7.d), var_88_2, 
                    var_80_2, int.d(zmm7_2 - zmm6_2 * zmm8_2), sx.d(rax_17), rbp) - *arg5
                *arg6 = result
            else if (result != 1)
                int32_t rbx
                rbx.b = arg4.b & 0xc
                
                if (rbx.b == 4)
                    goto label_142ac5066
        else
            result = arg3 & 3
            
            if (result == 1)
                goto label_142ac5066
            
            result.b = result != 3
            
            if ((result.b & (arg3.b & 0xc) != 0xc) != 0)
                goto label_142ac5066

return result
