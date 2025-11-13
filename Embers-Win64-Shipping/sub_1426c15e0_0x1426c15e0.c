// 函数: sub_1426c15e0
// 地址: 0x1426c15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1426b0430(arg1, arg2)
int16_t r15 = result.w

if (result != 0xffffffff)
    int64_t var_40 = 0
    int64_t rsi_1 = 0
    int32_t var_34_1 = 0
    int64_t rbx_1 = 0
    
    if (arg3 != 0)
        if (&var_40 != arg1 + 0x148)
            rsi_1 = sx.q(*(arg1 + 0x150))
            int64_t rbx_2 = *(arg1 + 0x148)
            int32_t var_38_1 = rsi_1.d
            
            if (rsi_1.d != 0)
                sub_140808f70(&var_40, rsi_1.d, 0)
                rbx_1 = var_40
                memcpy(rbx_1, rbx_2, (rsi_1 * 0x18).d)
                rsi_1 = zx.q(var_38_1)
            else
                rbx_1 = 0
        
        int32_t rax = *(arg1 + 0x154)
        *(arg1 + 0x150) = 0
        
        if (rax s< 0 && rax != 0)
            sub_1405a5130(arg1 + 0x148, 0)
    
    int16_t var_46_1 = *(arg2 + 0x50)
    int16_t arg_22 = *(arg2 + 0x8c)
    int16_t var_48 = r15
    int16_t arg_20 = r15
    result = sub_1426c1770(arg1, &var_48, &arg_20)
    
    if (arg3 != 0)
        sub_1426a9c40(arg1, arg1 + 0x148, 0, 0, arg4)
        result = &var_40
        
        if (arg1 + 0x148 != &var_40)
            int32_t r8_3 = *(arg1 + 0x154)
            *(arg1 + 0x150) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_3 != 0)
                sub_140808f70(arg1 + 0x148, rsi_1.d, r8_3)
                result = memcpy(*(arg1 + 0x148), rbx_1, rsi_1.d * 0x18)
            else
                *(arg1 + 0x154) = 0
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)

return result
