// 函数: sub_142a67700
// 地址: 0x142a67700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rbp_1 = arg3
int64_t r15
r15.b = 1
int64_t r12_1 = sx.q(arg2)
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(rbp_1))

if (r12_1.d u> 0x15)
    *arg4 = 1
    return 

int32_t rbx_2
int32_t rsi_3

switch (r12_1)
    case 0
        sub_142a6c030(arg1, 0, sub_142a695b0(arg1, 0, arg4) + rbp_1)
        (*(*arg1 + 0x158))(arg1, 0, arg4)
    case 1, 0x11
        if (sub_142a695b0(arg1, 0, arg4) == 0)
            char* _Str1 = (*(*arg1 + 0xb0))(arg1)
            
            if (strcmp(_Str1, "gregorian") != 0)
                int64_t j = 0
                
                for (int64_t i = 0; i != 4; )
                    char rax_6 = _Str1[i]
                    i += 1
                    
                    if (rax_6 != *(i + 0x14363f523))
                        do
                            char rax_7 = _Str1[j]
                            j += 1
                            
                            if (rax_7 != *(j + 0x14363f55f))
                                goto label_142a67805
                        while (j != 7)
                        
                        break
            
            rbp_1 = neg.d(rbp_1)
        
        goto label_142a67805
    case 2, 0x13
    label_142a67805:
        char rbx_1 = arg1[0x1d].b
        arg1[0x1d].b = 1
        sub_142a6c030(arg1, r12_1.d, sub_142a695b0(arg1, r12_1.d, arg4) + rbp_1)
        (*(*arg1 + 0x158))(arg1, 5, arg4)
        
        if (rbx_1 == 0)
            sub_142a67c60(arg1, arg4)
            arg1[0x1d].b = rbx_1
    case 3, 4, 8
        zmm6.q = zmm6.q f* 604800000.0
    label_142a678a0:
        rsi_3 = sub_142a695b0(arg1, 0x10, arg4) + sub_142a695b0(arg1, 0xf, arg4)
        rbx_2 = sub_142a695b0(arg1, 0x15, arg4)
        goto label_142a678f1
    case 5, 6, 7, 0x12, 0x14
        zmm6.q = zmm6.q f* 86400000.0
        goto label_142a678a0
    case 9
        zmm6.q = zmm6.q f* 43200000.0
        goto label_142a678a0
    case 0xa, 0xb
        zmm6.q = zmm6.q f* 3600000.0
    label_142a678d2:
        r15.b = 0
        rbx_2 = 0
        rsi_3 = 0
    label_142a678f1:
        sub_142a6c1a0(arg1, sub_142a6a540(arg1, arg4) f+ zmm6.q, arg4)
        
        if (r15.b != 0)
            int32_t rax = sub_142a695b0(arg1, 0x15, arg4)
            int32_t rbp_2 = rax
            
            if (rax != rbx_2)
                zmm6 = zx.o(arg1[0x1c])
                int32_t r15_2 = sub_142a695b0(arg1, 0x10, arg4) + sub_142a695b0(arg1, 0xf, arg4)
                
                if (r15_2 != rsi_3)
                    int32_t rsi_4 = rsi_3 - r15_2
                    int32_t rsi_5
                    
                    if (rsi_3 - r15_2 s< 0)
                        rsi_5 = neg.d(neg.d(rsi_4) s% 0x5265c00)
                    else
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = muls.dp.d(0xce4a2bc5, rsi_4)
                        int32_t rdx_5 = temp3_1 s>> 0x18
                        rsi_5 = rsi_4 + (rdx_5 + (rdx_5 u>> 0x1f)) * 0x5265c00
                    
                    if (rsi_5 != 0)
                        uint128_t zmm1_1
                        zmm1_1.q = _mm_cvtepi32_pd(zx.q(rsi_5)).q f+ zmm6.q
                        sub_142a6c1a0(arg1, zmm1_1.q, arg4)
                        rbp_2 = sub_142a695b0(arg1, 0x15, arg4)
                    
                    if (rbp_2 != rbx_2)
                        int32_t rcx_20 = *(arg1 + 0xfc)
                        
                        if (rcx_20 == 0)
                            if (rsi_5 s< 0)
                                sub_142a6c1a0(arg1, zmm6.q, arg4)
                        else if (rcx_20 == 1)
                            if (rsi_5 s> 0)
                                sub_142a6c1a0(arg1, zmm6.q, arg4)
                        else if (rcx_20 == 2)
                            if (rsi_5 s> 0)
                                zmm6 = zx.o(arg1[0x1c])
                            
                            int64_t var_38
                            rax = sub_142a6a190(arg1, zmm6, &var_38, arg4)
                            
                            if (*arg4 s<= 0 && rax.b != 0)
                                sub_142a6c1a0(arg1, var_38, arg4)
    case 0xc
        zmm6.q = zmm6.q f* 60000.0
        goto label_142a678d2
    case 0xd
        zmm6.q = zmm6.q f* 1000.0
        goto label_142a678d2
    case 0xe, 0x15
        goto label_142a678d2
    case 0xf, 0x10
        *arg4 = 1
