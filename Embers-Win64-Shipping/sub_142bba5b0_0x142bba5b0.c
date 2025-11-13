// 函数: sub_142bba5b0
// 地址: 0x142bba5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(**(arg4 + 8))(arg1, 0, 0, arg3)
arg1[0x12] = arg2
arg1[0x14].d = 0
arg1[0x13] = 0
arg1[0x16].d = 0
arg1[0x15] = 0
*(arg1 + 0xb4) = 0
*(arg1 + 0xb6) = 0
int32_t result_2 = sub_142bbb130(arg2, "%!PS-AdobeFont", 0xe, arg5)
int32_t result_1 = result_2
int32_t result_8 = result_2

if (result_2 == 0)
label_142bba659:
    int32_t result_4 = sub_142b97060(arg2, 0, arg5)
    result_1 = result_4
    result_8 = result_4
    
    if (result_4 != 0)
        goto label_142bba722
    
    int16_t rbp_1 = 0
    uint32_t rsi_1 = 0
    int32_t result_9
    int16_t rax_1 = sub_142b96f00(arg2, &result_9)
    result_8 = result_9
    
    if (result_8 == 0)
        if (0x7fff + rax_1 u<= 1)
            uint32_t rax_2 = sub_142b96dd0(arg2, &result_9)
            result_8 = result_9
            
            if (result_8 == 0)
                rsi_1 = rax_2
        
        rbp_1 = rax_1
    
    result_1 = result_8
    
    if (result_8 != 0)
        goto label_142bba722
    
    if (rbp_1 != 0x8001)
        int32_t result_5 = sub_142b97060(arg2, result_8, arg5)
        result_1 = result_5
        result_8 = result_5
        
        if (result_5 != 0)
            goto label_142bba722
        
        rsi_1 = arg2[1].d
        goto label_142bba6f0
    
    *(arg1 + 0xb4) = 1
label_142bba6f0:
    
    if (arg2[4] == 0)
        arg1[0x13] = zx.q(*(arg2 + 0xc)) + *arg2
        arg1[0x14].d = rsi_1
        *(arg1 + 0xb5) = 1
        int32_t result_6 = sub_142b970b0(arg2, rsi_1)
        result_1 = result_6
        result_8 = result_6
        
        if (result_6 == 0)
            goto label_142bba794
        
        goto label_142bba722
    
    int64_t rax_5
    int512_t zmm0_1
    rax_5, zmm0_1 = sub_142b99860(arg3, rsi_1, &result_1)
    result_8 = result_1
    arg1[0x13] = rax_5
    
    if (result_8 != 0)
        goto label_142bba722
    
    int32_t result_7 = sub_142b96990(arg2, rax_5, rsi_1, zmm0_1)
    result_1 = result_7
    result_8 = result_7
    
    if (result_7 != 0)
        goto label_142bba722
    
    arg1[0x14].d = rsi_1
label_142bba794:
    int64_t rcx_11 = arg1[0x13]
    int64_t rax_7 = zx.q(arg1[0x14].d) + rcx_11
    arg1[1] = rcx_11
    arg1[2] = rax_7
    *arg1 = rcx_11
else
    if (result_2.b == 2)
        int32_t result_3 = sub_142bbb130(arg2, "%!FontType", 0xa, arg5)
        result_1 = result_3
        result_8 = result_3
        
        if (result_3 != 0)
            goto label_142bba722
        
        goto label_142bba659
    
label_142bba722:
    
    if (*(arg1 + 0xb5) == 0)
        sub_142b99980(arg3, arg1[0x13])
        uint64_t result = zx.q(result_1)
        arg1[0x13] = 0
        return result

return zx.q(result_8)
