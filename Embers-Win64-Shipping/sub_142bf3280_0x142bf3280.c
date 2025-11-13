// 函数: sub_142bf3280
// 地址: 0x142bf3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x40)
uint64_t i_2 = zx.q(arg3)
int32_t* rsi = arg4

if (*(result + 0x150) == sub_142bf30a0)
    void* rcx_1 = *(arg1 + 0x10)
    uint64_t r14_2 = zx.q(arg8)
    int32_t* rbx_2 = arg7
    void* r10_1 = *(rcx_1 + 0x40)
    int64_t var_20_1 = *(r10_1 + 0x50)
    int32_t var_28_1 = r14_2.d
    int32_t* var_30_1 = rbx_2
    int32_t var_38_1 = arg6
    result = (*(r10_1 + 0x160))(arg5, *(rcx_1 + 0x48), zx.q(i_2.d))
    
    if (i_2.d != 0)
        uint64_t i_3 = i_2
        uint64_t i
        
        do
            void* rax_3 = *(arg1 + 0x10)
            int64_t rcx_2 = sx.q(*rbx_2)
            int64_t rax_4
            int64_t rdx_2
            
            if (rax_3 != 0)
                rdx_2 = sx.q(*(rax_3 + 0x24))
                rax_4 = sx.q(*(arg1 + 0x24))
            
            if (rax_3 == 0 || rdx_2.d == rax_4.d)
                result = zx.q(rcx_2.d)
            else
                result = divs.dp.q(sx.o(rax_4 * rcx_2), rdx_2)
            
            *rbx_2 = result.d
            rbx_2 += r14_2
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg3 != 0)
    int32_t* rbx_1 = arg7
    uint64_t i_1
    
    do
        void* rax = *(arg1 + 0x40)
        result = (*(rax + 0x150))(arg1, *(arg1 + 0x48), zx.q(*rsi), *(rax + 0x40))
        *rbx_1 = result.d
        rsi += zx.q(arg6)
        rbx_1 += zx.q(arg8)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
