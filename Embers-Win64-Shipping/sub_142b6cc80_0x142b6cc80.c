// 函数: sub_142b6cc80
// 地址: 0x142b6cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg3)
int32_t rbx = 0
int64_t r8 = arg2

if (r13.d s<= 0)
    return 0xffff

int32_t rbp_1
int32_t r12_1

if (arg1 != 0 && *(arg1 + 8) s> 0)
    int32_t rax_2 = 0
    void* rdx_1 = sx.q(*(arg1 + 4)) + arg1
    r12_1 = 0
    rbp_1 = 0
    int32_t r14_1 = 0
    void* var_38_1 = rdx_1
    int32_t r15_1 = 0
    char* rdi_1 = nullptr
    char* rsi_1 = nullptr
    
    while (true)
        int64_t rax_3 = sx.q(rax_2)
        int32_t rax_4 = *(rdx_1 + (rax_3 << 2))
        int32_t rax_5 = rax_4 & 0xffffff
        
        if (rax_5 != 0)
            r12_1 = rax_5
            rbp_1 = r14_1 + r15_1
        
        char r8_1
        
        if (rsi_1 s>= r13)
            if (rdi_1 s>= 0)
                break
            
            r8_1 = *rdi_1
            r14_1 += 1
            rdi_1 = &rdi_1[1]
        else
            r8_1 = rsi_1[r8]
            r15_1 += 1
            rsi_1 = &rsi_1[1]
        
        rax_2 = sub_142b6b8c0(rdx_1 + (rax_3 << 2) + 4, rax_4 u>> 0x18, r8_1)
        
        if (rax_2 == 0)
            break
        
        if (rax_2 u>= 0x1f0000)
            r12_1 = rax_2
            rbp_1 = r14_1 + r15_1
            break
        
        rdx_1 = var_38_1
        r8 = arg2

if (arg1 == 0 || *(arg1 + 8) s<= 0 || rbp_1 == 0)
    rbp_1 = 0
else
    rbx = r12_1 & 0xff7fffff

if (rbp_1 == r13.d && rbx u<= 0x2fffff)
    return zx.q(rbx - 0x1f0000)

return 0xfffe
