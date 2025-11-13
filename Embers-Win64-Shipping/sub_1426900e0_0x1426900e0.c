// 函数: sub_1426900e0
// 地址: 0x1426900e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t i = *(arg1 + 0x28)
uint128_t zmm6
uint128_t var_38 = zmm6

while (i s< *(arg1 + 0x2f8))
    int64_t* rsi_2 = sx.q(i) * 0x38 + *(arg1 + 0x2f0)
    i = rsi_2[5].d
    
    if (i s<= 0)
        i, arg4 = sub_14268fb30(arg1, arg2, rsi_2, &rsi_2[2], arg4, (rsi_2[6].d).b, arg3)
        
        if (*(*(arg1 + 0x40) + 0x10) != 0)
            if (i.b != 2)
                *(arg1 + 0x28) += 1
            
            i.b = 2
            return i
    else
        int32_t rdx = *(arg1 + 0x2c)
        
        if (rdx s< i)
            while (true)
                uint32_t rcx = zx.d(*(arg1 + 0x19))
                char rbp_1 = (rsi_2[6].d).b
                
                if (rcx == 0)
                    zmm6 = sub_14268fd10(arg1, rsi_2, sx.q(rdx) * 0x30 + rsi_2[4])
                    int64_t* rbx_1 = *(arg1 + 0x40)
                    *(arg1 + 0x19) = 1
                    int64_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    arg4 = float.d(performanceCount) f* data_143d796f8 f+ zmm6.q f- rbx_1[1]
                    i.b = arg4 f>= *rbx_1
                    rbx_1[2].b = i.b
                    
                    if (i.b == 0)
                    label_1426901ce:
                        i, arg4 =
                            sub_14268fb30(arg1, arg2, arg1 + 0x2e0, &rsi_2[2], arg4, rbp_1, arg3)
                        
                        if (i.b != 2)
                            *(arg1 + 0x19) = 0
                    else
                        i.b = 2
                else
                    if (rcx == 1)
                        goto label_1426901ce
                    
                    i.b = 0
                
                if (*(*(arg1 + 0x40) + 0x10) != 0)
                    break
                
                rdx = *(arg1 + 0x2c) + 1
                *(arg1 + 0x2c) = rdx
                
                if (rdx s>= rsi_2[5].d)
                    goto label_1426901f7
            
            if (i.b == 2)
                i.b = 2
                return i
            
            *(arg1 + 0x2c) += 1
            i.b = 2
            return i
        
    label_1426901f7:
        *(arg1 + 0x2c) = 0
    
    i = *(arg1 + 0x28) + 1
    *(arg1 + 0x28) = i

i.b = 1
return i
