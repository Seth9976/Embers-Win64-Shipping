// 函数: sub_142bb9df0
// 地址: 0x142bb9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint32_t var_38
int32_t result = (*(arg2 + 0x68))(arg2, 6, &var_38, 3)

if (result s>= 6)
    int32_t var_2c
    int32_t rcx_1 = var_2c
    int32_t rbx_1 = rcx_1
    
    if (rcx_1 s< 0)
        rbx_1 = neg.d(rbx_1)
    
    uint32_t var_28
    uint32_t var_24
    
    if (rbx_1 != 0)
        uint32_t var_34
        uint32_t var_30
        
        if (rbx_1 != 0x10000)
            int16_t rax_2 = sub_142b91790(0x3e8, rbx_1)
            uint32_t rcx_2 = var_38
            *(arg1 + 0x68) = rax_2
            var_38 = sub_142b91790(rcx_2, rbx_1)
            var_34 = sub_142b91790(var_34, rbx_1)
            var_30 = sub_142b91790(var_30, rbx_1)
            var_28 = sub_142b91790(var_28, rbx_1)
            rcx_1 = 0x10000
            var_24 = sub_142b91790(var_24, rbx_1)
            
            if (var_2c s< 0)
                rcx_1 = -0x10000
            
            int32_t var_2c_1 = rcx_1
        
        *(arg1 + 0x264) = var_38
        *(arg1 + 0x26c) = var_34
        *(arg1 + 0x270) = rcx_1
        *(arg1 + 0x268) = var_30
        result = sub_142b935d0(arg1 + 0x264)
    
    if (rbx_1 != 0 && result.b != 0)
        *(arg1 + 0x274) = var_28 s>> 0x10
        result = var_24 s>> 0x10
        *(arg1 + 0x278) = result
    else
        *(arg2 + 0x18) = 3
else
    *(arg2 + 0x18) = 3

__security_check_cookie(rax_1 ^ &var_58)
return result
