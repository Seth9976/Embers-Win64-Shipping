// 函数: sub_141892860
// 地址: 0x141892860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r11 = &arg1[7]
int64_t rbx_1 = sx.q(arg1[9].d) - 1
int32_t rdi = 0

if (rax_1 != 0)
    r11 = rax_1

int32_t rdx = *(r11 + ((r10 & rbx_1) << 2))

if (rdx != 0xffffffff)
    int64_t r9_1 = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdx)
        int32_t* rax_4 = rcx * 0x1c
        
        if (*(rax_4 + r9_1) == r10.d)
            break
        
        rdx = *(rax_4 + r9_1 + 0x14)
        
        if (rdx == 0xffffffff)
            return 0
    
    void* rsi_1 = rcx * 0x1c
    int64_t rax_7 = sx.q(*(rsi_1 + r9_1 + 0x18)) & rbx_1
    void* rcx_1 = r11 + (rax_7 << 2)
    
    for (int32_t i = *(r11 + (rax_7 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdx)
            *rcx_1 = *(rsi_1 + r9_1 + 0x14)
            break
        
        rcx_1 = sx.q(i) * 0x1c + 0x14 + r9_1
    
    rdi = 1
    void* r10_2 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *(sx.q(arg1[6].d) * 0x1c + *arg1) = rdx
    
    int32_t rax_12 = -1
    int32_t* rcx_7 = *arg1 + rsi_1
    *rcx_7 = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_12 = arg1[6].d
    
    rcx_7[1] = rax_12
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx
    void* rax_13 = *(r10_2 + 0x10)
    
    if (rax_13 != 0)
        r10_2 = rax_13
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx)
    int64_t rcx_8 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r10_2 + (rcx_8 << 2)) &= not.d(rol.d(1, rdx.b))

return zx.q(rdi)
