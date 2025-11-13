// 函数: sub_141829dd0
// 地址: 0x141829dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14 = arg2
int32_t rdx = arg3 * 2
*arg1 = 0
arg1[1] = 0
int32_t i_1 = arg3

if (rdx != 0)
    sub_1405947f0(arg1, rdx)

if (i_1 != 0)
    int32_t i
    
    do
        uint8_t rsi_1 = *r14
        int16_t rdi_1 = 0x37
        uint16_t rcx = zx.w(rsi_1 u>> 4)
        
        if (rcx.b u<= 9)
            rdi_1 = 0x30
        
        if (rdi_1 != neg.w(rcx))
            int32_t rdx_1 = arg1[1].d
            int32_t rax_2
            rax_2.b = rdx_1 s<= 0
            int32_t rbp_1 = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                rbp_1 = 0
            
            int32_t rax_4 = rax_2 + 1 + rdx_1
            arg1[1].d = rax_4
            
            if (rax_4 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int64_t rcx_2 = sx.q(rbp_1)
            *(*arg1 + (rcx_2 << 1)) = rdi_1 + rcx
            *(*arg1 + (rcx_2 << 1) + 2) = 0
        
        int16_t rdi_2 = 0x37
        uint16_t rax_7 = zx.w(rsi_1) & 0xf
        
        if (rax_7.b u<= 9)
            rdi_2 = 0x30
        
        if (rdi_2 != neg.w(rax_7))
            int32_t rdx_2 = arg1[1].d
            int32_t rax_8
            rax_8.b = rdx_2 s<= 0
            int32_t rsi_2 = rdx_2 - 1
            
            if (rdx_2 s<= 0)
                rsi_2 = 0
            
            int32_t rax_10 = rax_8 + 1 + rdx_2
            arg1[1].d = rax_10
            
            if (rax_10 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int64_t rcx_4 = sx.q(rsi_2)
            *(*arg1 + (rcx_4 << 1)) = rdi_2 + rax_7
            *(*arg1 + (rcx_4 << 1) + 2) = 0
        
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
