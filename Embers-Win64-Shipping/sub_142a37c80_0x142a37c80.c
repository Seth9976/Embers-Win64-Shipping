// 函数: sub_142a37c80
// 地址: 0x142a37c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
uint64_t result = zx.q(arg1[1].d)

if (result.d s> *(arg1 + 0xc))
    result.b = 1
else
    uint32_t rbp_1 = 1
    
    if (result.d != 0)
        rbp_1 = (result * 2).d
    
    int64_t r14_1 = sx.q(rbp_1)
    int64_t rax = 0x10 * r14_1
    
    if (mulu.dp.q(0x10, r14_1) u>> 0x40 != zx.o(0))
        rax = -1
    
    int64_t rax_1 = rax + 8
    
    if (rax u>= -8)
        rax_1 = -1
    
    result = j_sub_140a82f30(rax_1)
    uint64_t result_1 = result
    int32_t i = 0
    void (* rsi_1)()
    
    if (result == 0)
        rsi_1 = nullptr
    else
        *result = r14_1
        rsi_1 = result + 8
        int64_t (* var_38_1)() = sub_140594850
        `eh vector constructor iterator'(rsi_1, 0x10, r14_1)
    
    if (rsi_1 != 0)
        if (*(arg1 + 0xc) s> 0)
            void (* r8_2)() = rsi_1
            
            do
                void* rcx_3 = neg.q(rsi_1) + r8_2 + *arg1
                *r8_2 = *rcx_3
                *(r8_2 + 8) = *(rcx_3 + 8)
                i += 1
                r8_2 += 0x10
            while (i s< *(arg1 + 0xc))
        
        void (* rcx_4)() = *arg1
        
        if (rcx_4 != 0)
            `eh vector vbase constructor iterator'(rcx_4, 0x10, *(rcx_4 - 8))
            *(rcx_4 - 8)
            j_sub_140a74f90(rcx_4 - 8)
        
        *arg1 = rsi_1
        arg1[1].d = rbp_1
        result.b = 1
    else
        result.b = 0

return result
