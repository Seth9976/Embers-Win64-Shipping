// 函数: sub_1417cf750
// 地址: 0x1417cf750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) s<= 0)
    void** rax_2 = j_sub_140a82f30(0x90)
    void** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(rax_2, 0, 0x90)
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        rax_3[1].d = 1
        *rax_3 = &data_142fcc540
        *(rax_3 + 0xc) = 1
        rax_3[2] = rbx_1
    
    *rbx_1 = arg1
    int64_t rbx_2 = sx.q(*(arg1 + 0x98))
    int32_t rax_5 = (rbx_2 + 1).d
    *(arg1 + 0x98) = rax_5
    
    if (rax_5 s> *(arg1 + 0x9c))
        sub_1405a4f90(arg1 + 0x90)
    
    void*** rcx_6 = (rbx_2 << 4) + *(arg1 + 0x90)
    *rcx_6 = rbx_1
    rcx_6[1] = rax_3
    void*** rcx_7 = rax_3
    
    if (rcx_7 != 0)
        rcx_7[1].d += 1
        rcx_7 = rax_3
    
    *arg2 = rbx_1
    arg2[1] = rcx_7
else
    EnterCriticalSection(arg1 + 0xb0)
    int64_t rax = *(arg1 + 0xa0)
    int64_t r8_1 = sx.q(*(arg1 + 0xa8)) * 2
    void** rsi_1 = *(rax + (r8_1 << 3) - 0x10)
    int64_t rdi_1 = *(rax + (r8_1 << 3) - 8)
    *(rax + (r8_1 << 3) - 8) = 0
    *(rax + (r8_1 << 3) - 0x10) = 0
    sub_140a18a40(arg1 + 0xa0, *(arg1 + 0xa8) - 1, 1, 0)
    *rsi_1 = arg1
    *arg2 = rsi_1
    arg2[1] = rdi_1
    
    if (arg1 != -0xb0)
        LeaveCriticalSection(arg1 + 0xb0)

return arg2
