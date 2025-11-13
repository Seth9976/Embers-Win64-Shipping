// 函数: sub_142a4cc70
// 地址: 0x142a4cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_8 = arg1
int32_t r12 = 0
char* rax = arg1

if (arg4 == 0 || *arg4 s> 0)
    return 0

if (arg1 == 0)
    rax = sub_142a46ef0()
    arg_8 = rax

sub_142a4e610(rax, nullptr, 0, &arg_8)
char* r14 = arg_8
char rax_1 = *r14
char rax_6

if (rax_1 == 0x5f || rax_1 == 0x2d)
    void* rsi_1 = &r14[1]
    void* rbp_1 = rsi_1
    int32_t rdi_1 = 0
    
    if (*rsi_1 != 0)
        void* rbx_1 = rsi_1
        
        do
            char rcx_1 = *rbx_1
            
            if (rcx_1 - 0x2d u<= 0x32 && test_bit(0x4000000080003, sx.q(rcx_1 - 0x2d)))
                break
            
            if (sub_142a86230(rcx_1) == 0)
                break
            
            rbx_1 += 1
            rdi_1 += 1
        while (*rbx_1 != 0)
        
        rsi_1 = &r14[1]
    
    if (rdi_1 == 4)
        rbp_1 = rsi_1 + 4
    
    if (rbp_1 != rsi_1)
        r14 = rbp_1
    
    rax_6 = *r14

char* rbx_3

if ((rax_1 == 0x5f || rax_1 == 0x2d) && (rax_6 == 0x5f || rax_6 == 0x2d))
    rbx_3 = arg2
    r12 = sub_142a4e420(&r14[1], rbx_3, arg3, nullptr)
else
    rbx_3 = arg2

return sub_142a8c3f0(rbx_3, arg3, r12, arg4) __tailcall
