// 函数: sub_142397ac0
// 地址: 0x142397ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x468)

if (arg3 u< result)
    int32_t rbx_1 = arg3
    
    if (arg3 s< result)
        do
            sub_141f6f170(sx.q(rbx_1) * 0x90 + *(arg1 + 0x460))
            result = *(arg1 + 0x468)
            rbx_1 += 1
        while (rbx_1 s< result)
    
    sub_1423957d0(arg1 + 0x460, arg3, result - arg3, 1)
    result.b = 1
else if (arg2 u<= result)
    result.b = 0
else
    if (arg2 s> *(arg1 + 0x46c))
        sub_140dbd2c0(arg1 + 0x460, arg2)
        result = *(arg1 + 0x468)
    
    if (arg2 != result)
        uint64_t i_1 = zx.q(arg2 - result)
        uint64_t i
        
        do
            int64_t rdi_2 = sx.q(*(arg1 + 0x468))
            int32_t rax_2 = (rdi_2 + 1).d
            *(arg1 + 0x468) = rax_2
            
            if (rax_2 s> *(arg1 + 0x46c))
                sub_140dbc660(arg1 + 0x460)
            
            int64_t rcx_7 = rdi_2 * 0x90
            
            if (rcx_7 != neg.q(*(arg1 + 0x460)))
                sub_141f50910(rcx_7 + *(arg1 + 0x460), arg1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result.b = 1

return result
