// 函数: sub_142b5ec70
// 地址: 0x142b5ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2
uint64_t result

if (*arg3 s<= 0)
    result = zx.q(*(arg1 + 0x2c4))
    
    if (result.d s>= arg2)
        result.b = 1
        return result
    
    if (arg2 s>= 0xa)
        int32_t rax = result.d * 2
        
        if (rbx s< rax)
            rbx = rax
    else
        rbx = 0xa
    
    result = sub_142a7dd30(*(arg1 + 0x2b8), sx.q(rbx) << 2)
    
    if (result != 0)
        *(arg1 + 0x2b8) = result
        *(arg1 + 0x2c4) = rbx
        result.b = 1
        return result
    
    *arg3 = 7

result.b = 0
return result
