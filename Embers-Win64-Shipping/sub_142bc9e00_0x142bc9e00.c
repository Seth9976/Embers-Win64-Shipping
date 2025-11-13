// 函数: sub_142bc9e00
// 地址: 0x142bc9e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
(**(arg4 + 8))(arg1, 0, 0, arg3)
arg1[0x12] = arg2
arg1[0x14].d = 0
arg1[0x13] = 0
*(arg1 + 0xa4) = 0
int32_t result_2 = sub_142b97060(arg2, 0, arg5)
result_1 = result_2
int32_t result_7 = result_2

if (result_2 != 0)
label_142bc9f11:
    
    if (*(arg1 + 0xa4) == 0)
        sub_142b99980(arg3, arg1[0x13])
        uint64_t result = zx.q(result_1)
        arg1[0x13] = 0
        return result
else
    int32_t result_3 = sub_142b96500(arg2, result_2 + 0x11)
    result_1 = result_3
    result_7 = result_3
    
    if (result_3 != 0)
        goto label_142bc9f11
    
    int64_t* rax_1 = arg2[7]
    int64_t rcx_2 = *rax_1
    int64_t rcx_3 = rcx_2 - 0x7572542d53502125
    
    if (rcx_2 == 0x7572542d53502125)
        int64_t rcx_4 = rax_1[1]
        rcx_3 = rcx_4 - 0x6e6f466570795465
        
        if (rcx_4 == 0x6e6f466570795465)
            rcx_3 = zx.q(rax_1[2].b) - 0x74
    
    if (rcx_3 != 0)
        result_7 = 2
    
    result_1 = result_7
    sub_142b96620(arg2)
    result_7 = result_1
    
    if (result_7 != 0)
        goto label_142bc9f11
    
    int32_t result_4 = sub_142b97060(arg2, result_7, arg5)
    result_1 = result_4
    result_7 = result_4
    
    if (result_4 != 0)
        goto label_142bc9f11
    
    uint32_t rsi_1 = arg2[1].d
    
    if (arg2[4] == 0)
        arg1[0x13] = zx.q(*(arg2 + 0xc)) + *arg2
        arg1[0x14].d = rsi_1
        *(arg1 + 0xa4) = 1
        int32_t result_5 = sub_142b970b0(arg2, rsi_1)
        result_1 = result_5
        result_7 = result_5
        
        if (result_5 == 0)
            goto label_142bc9f70
        
        goto label_142bc9f11
    
    int64_t rax_4
    int512_t zmm0_1
    rax_4, zmm0_1 = sub_142b99860(arg3, rsi_1, &result_1)
    result_7 = result_1
    arg1[0x13] = rax_4
    
    if (result_7 != 0)
        goto label_142bc9f11
    
    int32_t result_6 = sub_142b96990(arg2, rax_4, rsi_1, zmm0_1)
    result_1 = result_6
    result_7 = result_6
    
    if (result_6 != 0)
        goto label_142bc9f11
    
    arg1[0x14].d = rsi_1
label_142bc9f70:
    int64_t rcx_12 = arg1[0x13]
    int64_t rax_6 = sx.q(arg1[0x14].d) + rcx_12
    arg1[1] = rcx_12
    arg1[2] = rax_6
    *arg1 = rcx_12

return zx.q(result_7)
