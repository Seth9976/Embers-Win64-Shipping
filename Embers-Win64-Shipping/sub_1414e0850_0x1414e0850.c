// 函数: sub_1414e0850
// 地址: 0x1414e0850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c8830 == 0)
    void* const* result
    result.b = 0
    return result

int64_t r12
r12.b = 0
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t r15_1 = 0
    int64_t rbp
    int64_t var_10_1 = rbp
    int64_t rsi
    int64_t var_18_1 = rsi
    
    do
        int64_t* rbx_2 = *(arg1 + 0xa0) + r15_1
        
        if (rbx_2[0x2a4].d != 2 || *(rbx_2 + 0xd64) != 0)
            rbp.b = 0
        else
            rbp.b = 1
        
        char rax = sub_14135d270(rbx_2)
        char rax_1 = sub_141108ca0(arg1)
        char rax_2 = sub_141461ee0(rbx_2)
        char rax_3
        
        if (rax_2 != 0)
            rax_3 = sub_1414593e0(rbx_2)
        
        if (rax_2 == 0 || rax_3 == 0)
            rsi.b = 0
        else
            rsi.b = 1
        
        int64_t rax_4
        uint64_t rdx_1
        
        if (data_143f0f21f != 0)
            rdx_1 = zx.q(data_143f0f1a0)
            rax_4 = sx.q(rdx_1.d)
        
        bool rdi_1
        
        if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_4 * 0x14) u>> 0x13).b & 1) == 0)
            rdi_1 = false
        else
            rdi_1 = test_bit(data_143f13cd8, rdx_1)
        
        char rax_8 = sub_141461ea0(rbx_2)
        
        if (rax != 0 || rbp.b != 0 || rax_1 != rbp.b || rsi.b != 0 || rdi_1 != 0 || rax_8 != 0)
            rax_8 = 1
        
        r12.b |= rax_8
        i += 1
        r15_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

return zx.q(r12.b)
