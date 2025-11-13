// 函数: sub_142b98850
// 地址: 0x142b98850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1[1]
void* r15 = nullptr
int32_t rsi = 0
int64_t r14 = *r12
void** rax = (*(r14 + 8))(r14, 0x18)

if (rax != 0)
    __builtin_memset(rax, 0, 0x18)
else
    rsi = (&rax[8]).d

if (rsi == 0)
    void* rbp_1 = *arg1
    arg1[3] = rbp_1
    arg1[4].d = *(rbp_1 + 0x38)
    
    if (*(rbp_1 + 0x38) != 0x6f75746c)
        goto label_142b988fb
    
    int64_t r8_1 = *(*(rbp_1 + 0x60) + 8)
    
    if (r8_1 == 0)
        goto label_142b988fb
    
    int32_t rax_3 = r8_1(r14, &arg1[0xc])
    rsi = rax_3
    
    if (rax_3 == 0)
        arg1[0xd] = *(*(rbp_1 + 0x60) + 0x20)
        arg1[0xe] = *(rbp_1 + 0x40)
    label_142b988fb:
        rax[2] = arg1
        
        if (r12 != -0x118)
            void* rcx_4 = r12[0x24]
            rax[1] = 0
            *rax = rcx_4
            
            if (rcx_4 == 0)
                r12[0x23] = rax
            else
                *(rcx_4 + 8) = rax
            
            r12[0x24] = rax
        
        for (void* i = r12[0x23]; i != 0; i = *(i + 8))
            void* rcx_6 = *(i + 0x10)
            
            if (*(rcx_6 + 0x20) == 0x6f75746c)
                r15 = rcx_6
                break
        
        r12[0x25] = r15
    else if (rax != 0)
        (*(r14 + 0x10))(r14, rax)

return zx.q(rsi)
