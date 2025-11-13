// 函数: sub_142411e90
// 地址: 0x142411e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rax = sx.q(*(arg1 + 0x108))
int64_t rdi = sx.q(arg2)

if (rax.d s>= 0 && rax.d s< *(arg1 + 0xb0))
    int64_t r8_1 = rax * 3
    int64_t rax_1 = *(arg1 + 0xa8)
    
    if (*(rax_1 + (r8_1 << 3)) == rdi.d)
        return rax_1 + (r8_1 << 3)

int32_t* rdx_5

if (*(arg1 + 0xc0) == *(arg1 + 0xec))
label_142411f2d:
    rdx_5 = nullptr
else
    void* rcx = *(arg1 + 0xf8)
    void* r8_2 = arg1 + 0xf0
    
    if (rcx != 0)
        r8_2 = rcx
    
    int32_t rax_4 = *(r8_2 + (((sx.q(*(arg1 + 0x100)) - 1) & rdi) << 2))
    
    if (rax_4 == 0xffffffff)
    label_142411f2d_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 4) + *(arg1 + 0xb8)
            
            if (*rdx_5 == rdi.d)
                break
            
            rax_4 = rdx_5[2]
            
            if (rax_4 == 0xffffffff)
                goto label_142411f2d_2
        
        if (rax_4 == 0xffffffff)
        label_142411f2d_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

int32_t rcx_1

if (rax_5 == 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0xb0))
    int32_t rax_6 = (rbp_1 + 1).d
    *(arg1 + 0xb0) = rax_6
    
    if (rax_6 s> *(arg1 + 0xb4))
        sub_1405a4df0(arg1 + 0xa8)
    
    int32_t* rdx_7 = *(arg1 + 0xa8) + rbp_1 * 0x18
    
    if (rdx_7 != 0)
        *rdx_7 = rdi.d
        *(rdx_7 + 8) = 0
        *(rdx_7 + 0x10) = 0
    
    int32_t arg_8 = *(arg1 + 0xb0) - 1
    sub_140908920(arg1 + 0xb8, &arg_10, &arg_8)
    rcx_1 = arg_8
else
    rcx_1 = *rax_5

*(arg1 + 0x108) = rcx_1
return *(arg1 + 0xa8) + sx.q(rcx_1) * 0x18
