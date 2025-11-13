// 函数: sub_142b90530
// 地址: 0x142b90530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg2

if (*(arg1 + 0x214) + *(arg1 + 0x210) s< *(arg2 + 0x214) + *(arg2 + 0x210))
    void* rax_2
    
    do
        rax_2 = arg1
        arg1 = r10
        r10 = rax_2
    while (*(arg1 + 0x214) + *(arg1 + 0x210) s< *(rax_2 + 0x214) + *(r10 + 0x210))

int64_t rdx_2 = sx.q(*(arg1 + 0x214))
int32_t r14 = *(arg1 + 0x210)
int64_t rbx = sx.q(*(arg3 + 0x214))
int32_t r15 = *(arg3 + 0x210)
int32_t r8 = r14 + rdx_2.d
int32_t r11 = r15 + rbx.d

if (r8 + 1 s< r11)
    return 0xffffffff

if (r8 s> r11)
    return 1

int64_t rdi = sx.q(*(r10 + 0x214))
int32_t r12 = *(r10 + 0x210)

if (rdx_2.d s>= r12 + rdi.d && r8 s< r11)
    return 0xffffffff

int32_t r9_2 = 0
int32_t rax_10 = rdi.d
int32_t rsi_1 = rbx.d

if (rdx_2.d s< rdi.d)
    rax_10 = rdx_2.d

if (rax_10 s< rbx.d)
    rsi_1 = rax_10

int32_t r11_1 = r11 - 1

if (r11_1 s>= rsi_1)
    int32_t rsi_2 = r14 + rdx_2.d
    int64_t r8_1 = sx.q(r11_1)
    int64_t arg_18 = rdx_2
    int32_t arg_10 = rsi_2
    int64_t rbx_3 = (r8_1 - rdi) << 2
    int64_t rdi_1 = (rdi - rdx_2) << 2
    int64_t var_50_1 = rdi_1
    
    while (true)
        int32_t rsi_3
        
        if (r11_1 s>= rsi_2)
            rsi_3 = 0
        else if (r8_1 s>= rdx_2)
            rsi_3 = *(rdi_1 + rbx_3 + *(arg1 + 0x200))
        else
            rsi_3 = 0
        
        int32_t rdi_2
        
        if (r11_1 s>= r12 + rdi.d)
            rdi_2 = 0
        else if (r8_1 s>= rdi)
            rdi_2 = *(rbx_3 + *(r10 + 0x200))
        else
            rdi_2 = 0
        
        int32_t rdx_4
        
        if (r11_1 s>= r15 + rbx.d)
            rdx_4 = 0
        else if (r8_1 s>= rbx)
            rdx_4 = *(((rdi - rbx) << 2) + rbx_3 + *(arg3 + 0x200))
        else
            rdx_4 = 0
        
        int32_t rdi_3 = rdi_2 + rsi_3
        
        if (rdi_3 u> rdx_4 + r9_2)
            return 1
        
        int32_t r9_3 = r9_2 + rdx_4 - rdi_3
        
        if (r9_3 u<= 1)
            rdx_2 = arg_18
            r11_1 -= 1
            rsi_2 = arg_10
            r8_1 -= 1
            rdi_1 = var_50_1
            rbx_3 -= 4
            r9_2 = r9_3 << 0x1c
            
            if (r8_1 s>= sx.q(rsi_1))
                continue
            else if (r9_2 == 0)
                break
        
        return 0xffffffff

return 0
