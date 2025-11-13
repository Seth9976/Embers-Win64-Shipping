// 函数: sub_1403d7970
// 地址: 0x1403d7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t (* rax)(void* arg1, uint64_t arg2, int32_t arg3[0x8] @ zmm2, char arg4[0x20] @ zmm3, 
    int16_t arg5[0x10] @ zmm6, uint128_t arg6[0x2] @ zmm7, int32_t arg7[0x8] @ zmm8, 
    int32_t arg8[0x8] @ zmm9, int32_t arg9[0x8] @ zmm10, int32_t arg10[0x8] @ zmm11, 
    int32_t arg11[0x8] @ zmm12, int32_t arg12[0x8] @ zmm13, uint8_t arg13[0x20] @ zmm14, 
    int32_t arg14[0x8] @ zmm15) = data_144019c40

if (rax == 0)
    int32_t temp0_1
    int32_t temp1_1
    int32_t temp2_1
    int32_t temp3_1
    temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
    
    if ((temp2_1 & 0x1c401000) != 0x1c401000)
        rax = sub_1403d2660
    else
        int32_t temp0_2
        int32_t temp1_2
        int32_t temp2_2
        int32_t temp3_2
        temp0_2, temp1_2, temp2_2, temp3_2 = __cpuid(7, 0)
        
        if ((temp1_2 & 0x128) != 0x128)
            rax = sub_1403d2660
        else
            int32_t temp0_3
            int32_t temp1_3
            char temp2_3
            int32_t temp3_3
            temp0_3, temp1_3, temp2_3, temp3_3 = __cpuid(0x80000001, 0)
            
            if ((temp2_3 & 0x20) == 0)
                rax = sub_1403d2660
            else
                int32_t temp0_4
                int32_t temp1_4
                temp0_4, temp1_4 = _xgetbv(0, arg1)
                
                if ((temp1_4 & 6) != 6)
                    rax = sub_1403d2660
                else
                    rax = sub_1403d5240
    
    data_144019c40 = rax

jump(rax)
