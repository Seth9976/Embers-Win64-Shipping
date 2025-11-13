// 函数: sub_141a506f0
// 地址: 0x141a506f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*arg2 = 0
arg2[1] = 0
int32_t* rdx_6

if (*(arg1 + 0xd8) == *(arg1 + 0x104))
label_141a50784:
    rdx_6 = nullptr
else
    void* r9_1 = arg1 + 0x108
    void* r8 = *(r9_1 + 8)
    int64_t rcx = sx.q(*arg3)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x118)) - 1) & rcx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141a50784_1:
        rdx_6 = nullptr
    else
        while (true)
            rdx_6 = sx.q(rax_1) * 0xc0 + *(arg1 + 0xd0)
            
            if (*rdx_6 == rcx.d)
                break
            
            rax_1 = rdx_6[0x2e]
            
            if (rax_1 == 0xffffffff)
                goto label_141a50784_2
        
        if (rax_1 == 0xffffffff)
        label_141a50784_2:
            rdx_6 = nullptr

int32_t* rcx_1 = &rdx_6[2]

if (rdx_6 == 0)
    rcx_1 = nullptr

int32_t rax_2
void* rsi

if (rcx_1 == 0)
    rsi = nullptr
    rax_2 = 0
else
    void* var_28
    sub_141a4a6a0(rcx_1, &var_28, &arg3[2], arg1 + 0x28)
    int32_t var_20
    rax_2 = var_20
    rsi = var_28

void* rcx_2 = rsi + (sx.q(rax_2) << 3)
uint64_t r15_3 = (rcx_2 - rsi + 7) u>> 3

if (rsi u> rcx_2)
    r15_3 = 0

if (r15_3 != 0)
    do
        int64_t arg_8 = *rsi
        int64_t rax_5 = sub_140d3c6e0(&arg_8)
        
        if (rax_5 != 0)
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rcx_4 = (rbp_1 + 1).d
            arg2[1].d = rcx_4
            
            if (rcx_4 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbp_1 << 3)) = rax_5
        
        rsi += 8
        rdi += 1
    while (rdi != r15_3)

return arg2
