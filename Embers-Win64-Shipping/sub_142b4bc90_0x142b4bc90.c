// 函数: sub_142b4bc90
// 地址: 0x142b4bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int64_t rcx = *(arg1 + 0x58)

if (rcx != 0 && rcx != arg1 + 0x60)
    sub_142a7dcd0(rcx)

void* result

if (rsi.d s<= 0x20)
    *(arg1 + 0x58) = arg1 + 0x60
label_142b4bd06:
    memcpy(*(arg1 + 0x58), arg2, (rsi << 3).d)
    int64_t rcx_4 = *(arg1 + 0x58)
    int32_t* var_18_1 = arg4
    *(arg1 + 0x54) = rsi.d
    sub_142a94ab0(rcx_4, rsi.d, 8, sub_142b4c020, 0, 1)
    
    if (*arg4 s<= 0)
        result.b = 1
    else
        int64_t rcx_5 = *(arg1 + 0x58)
        
        if (rcx_5 != 0 && rcx_5 != arg1 + 0x60)
            sub_142a7dcd0(rcx_5)
        
        *(arg1 + 0x54) = 0
        result.b = 0
else
    result = sub_142a7dd00(rsi << 3)
    *(arg1 + 0x58) = result
    
    if (result != 0)
        goto label_142b4bd06
    
    *arg4 = 7
    *(arg1 + 0x54) = 0

return result
