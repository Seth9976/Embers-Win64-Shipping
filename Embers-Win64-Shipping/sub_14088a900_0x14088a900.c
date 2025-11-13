// 函数: sub_14088a900
// 地址: 0x14088a900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
char* r14 = arg1
arg2[1] = 0
int32_t i_1 = 0x14
sub_1405947f0(arg2, 0x28)
int32_t i

do
    uint8_t rsi_1 = *r14
    int16_t rdi_1 = 0x37
    uint16_t rcx_1 = zx.w(rsi_1 u>> 4)
    
    if (rcx_1.b u<= 9)
        rdi_1 = 0x30
    
    if (rdi_1 != neg.w(rcx_1))
        int32_t rdx = arg2[1].d
        int32_t rax_2
        rax_2.b = rdx s<= 0
        int32_t rbp_1 = rdx - 1
        
        if (rdx s<= 0)
            rbp_1 = 0
        
        int32_t rax_4 = rax_2 + 1 + rdx
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_3 = sx.q(rbp_1)
        *(*arg2 + (rcx_3 << 1)) = rdi_1 + rcx_1
        *(*arg2 + (rcx_3 << 1) + 2) = 0
    
    int16_t rdi_2 = 0x37
    uint16_t rax_7 = zx.w(rsi_1) & 0xf
    
    if (rax_7.b u<= 9)
        rdi_2 = 0x30
    
    if (rdi_2 != neg.w(rax_7))
        int32_t rdx_1 = arg2[1].d
        int32_t rax_8
        rax_8.b = rdx_1 s<= 0
        int32_t rsi_2 = rdx_1 - 1
        
        if (rdx_1 s<= 0)
            rsi_2 = 0
        
        int32_t rax_10 = rax_8 + 1 + rdx_1
        arg2[1].d = rax_10
        
        if (rax_10 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_5 = sx.q(rsi_2)
        *(*arg2 + (rcx_5 << 1)) = rdi_2 + rax_7
        *(*arg2 + (rcx_5 << 1) + 2) = 0
    
    r14 = &r14[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
