// 函数: sub_141d7cb30
// 地址: 0x141d7cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg4)
int64_t rbx = arg3

if (arg3 == 0)
    *(arg1 + 0x60) -= 1
    return 

int64_t rdx = sx.q(arg2) * 9
int64_t rax_1 = *(arg1 + 0x48)
int64_t* rcx = *(rax_1 + (rdx << 3))
int64_t* r13 = rax_1 + (rdx << 3)
int64_t rax_3

if (rcx != 0)
    uint32_t arg_1c = arg5
    rax_3 = (*(*rcx + 8))(rcx, rbx, r12.d.q, *(arg1 + 0x80))

if (rcx == 0 || rax_3.b != 0)
    int64_t r8_1 = *r13
    void* r13_1 = r13[1]
    int64_t var_60_1 = r8_1
    void* var_68_1 = r13_1
    
    if (r13_1 != 0)
        *(r13_1 + 8) += 1
    
    int64_t rdi_1 = *(arg1 + 0x80)
    int32_t r14_1 = 0
    uint32_t rax_5 = (rdi_1 u>> 0x20).d
    int64_t r9_1 = 0
    int64_t var_50 = 0
    int32_t r8_3 = rax_5 * rdi_1.d
    int32_t rdx_2 = rdi_1.d
    int32_t var_44_1 = 0
    int32_t arg_18 = r8_3
    
    if (r8_3 s> 0)
        sub_1406105e0(&var_50)
        rdx_2 = *(arg1 + 0x80)
        rax_5 = *(arg1 + 0x84)
        r9_1 = var_50
        var_60_1 = r8_1
        arg_18 = r8_3
        var_68_1 = r13_1
    
    int32_t rcx_4 = r12.d
    
    if (rdx_2 s<= r12.d)
        rcx_4 = rdx_2
    
    if (arg5 s<= rax_5)
        rax_5 = arg5
    
    if (rax_5 s> 0)
        int64_t rbp_1 = r9_1
        int64_t r12_2 = sx.q(rcx_4) << 2
        uint32_t rax_8
        
        do
            memcpy(rbp_1, rbx, r12_2.d)
            rax_8 = *(arg1 + 0x84)
            rbx += r12 << 2
            rbp_1 += r12_2
            r14_1 += 1
            
            if (arg5 s<= rax_8)
                rax_8 = arg5
        while (r14_1 s< rax_8)
        r13_1 = var_68_1
    
    EnterCriticalSection(arg1 + 0x20)
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_9 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rax_9
    
    if (rax_9 s> *(arg1 + 0x1c))
        sub_1405c4ec0(arg1 + 0x10)
    
    rax_3 = *(arg1 + 0x10)
    int64_t rcx_9 = rbp_2 * 5
    *(rax_3 + (rcx_9 << 3)) = var_50
    *(rax_3 + (rcx_9 << 3) + 8) = arg_18
    *(rax_3 + (rcx_9 << 3) + 0xc) = var_44_1
    *(rax_3 + (rcx_9 << 3) + 0x10) = rdi_1
    *(rax_3 + (rcx_9 << 3) + 0x18) = var_60_1
    *(rax_3 + (rcx_9 << 3) + 0x20) = r13_1
    
    if (arg1 != -0x20)
        LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0x60) -= 1
