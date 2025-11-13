// 函数: sub_142bb06f0
// 地址: 0x142bb06f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> arg3)
    return 

int32_t rax = arg1[3].d
int32_t rbx_1 = arg2

if (arg4 u>= rax)
    return 

uint64_t r10_1 = zx.q(arg5)

if (r10_1.d u>= rax)
    return 

int64_t rdx = arg1[2]
int32_t r15_1 = *(rdx + (r10_1 << 3))
int32_t rbp_1 = *(rdx + (zx.q(arg4) << 3))

if (rbp_1 s> r15_1)
    int32_t rax_2 = rbp_1
    rbp_1 = r15_1
    r15_1 = rax_2
    int32_t rax_3 = arg4
    arg4 = r10_1.d
    r10_1 = zx.q(rax_3)

int64_t rcx = *arg1
uint64_t r8 = zx.q(arg4) << 3
uint64_t rdx_1 = zx.q(r10_1.d) << 3
int64_t rax_6 = arg1[1]
int32_t r11_1 = *(rcx + r8)
int32_t r10_2 = *(rcx + rdx_1)
int32_t var_44_1 = r11_1
int32_t r9 = *(rax_6 + r8)
int32_t r8_1 = *(rax_6 + rdx_1)
int32_t r12_2 = r9 - r11_1
int32_t var_40_1 = r10_2
int32_t rcx_2 = r8_1 - r10_2
int32_t var_48_1 = r9
int32_t var_3c_1 = r8_1
int32_t arg_18 = rcx_2

if (r9 == r8_1 || rbp_1 == r15_1)
    do
        uint64_t r8_2 = zx.q(rbx_1) << 3
        int32_t rax_14 = *(r8_2 + *arg1)
        
        if (rax_14 s> r11_1)
            int32_t rcx_9 = r9
            
            if (rax_14 s>= r10_2)
                rcx_9 = rcx_2 + rax_14
            
            rax = rcx_9
        else
            rax = rax_14 + r12_2
        
        rbx_1 += 1
        *(r8_2 + arg1[1]) = rax
        rcx_2 = arg_18
    while (rbx_1 u<= arg3)
else
    uint32_t rdx_2 = 0
    int64_t r13
    r13.b = 0
    uint32_t arg_10 = 0
    
    do
        uint64_t rsi_1 = zx.q(rbx_1) << 3
        int32_t rax_9 = *(rsi_1 + *arg1)
        
        if (rax_9 s<= r11_1)
            rax = rax_9 + r12_2
        else if (rax_9 s< r10_2)
            if (r13.b == 0)
                r13.b = 1
                uint32_t rax_10 = sub_142b91790(r8_1 - r9, r15_1 - rbp_1)
                rdx_2 = rax_10
                arg_10 = rax_10
            
            r9 = var_48_1
            rax = sub_142b93e80(*(rsi_1 + arg1[2]) - rbp_1, rdx_2) + r9
            r11_1 = var_44_1
            r10_2 = var_40_1
            rdx_2 = arg_10
            r8_1 = var_3c_1
        else
            rax = rax_9 + rcx_2
        
        rbx_1 += 1
        *(rsi_1 + arg1[1]) = rax
        rcx_2 = arg_18
    while (rbx_1 u<= arg3)
