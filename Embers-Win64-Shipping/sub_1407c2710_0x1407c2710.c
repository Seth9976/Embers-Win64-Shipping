// 函数: sub_1407c2710
// 地址: 0x1407c2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int32_t r11 = 0
void* rbx = &arg1[7]
int64_t rdi_1 = sx.q(arg1[9].d) - 1

if (rax_1 != 0)
    rbx = rax_1

int32_t rdx = *(rbx + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & rdi_1) << 2))

if (rdx != 0xffffffff)
    int64_t r9_1 = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdx)
        int64_t* rax_8 = rcx * 0xe0
        
        if (*(rax_8 + r9_1) == arg2)
            break
        
        rdx = *(rax_8 + r9_1 + 0xd0)
        
        if (rdx == 0xffffffff)
            return 0
    
    void* rsi_1 = rcx * 0xe0
    void* r10_1 = rsi_1 + r9_1
    int64_t rax_11 = sx.q(*(r10_1 + 0xd4)) & rdi_1
    void* rcx_1 = rbx + (rax_11 << 2)
    
    for (int32_t i = *(rbx + (rax_11 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdx)
            *rcx_1 = *(r10_1 + 0xd0)
            break
        
        rcx_1 = sx.q(i) * 0xe0 + 0xd0 + r9_1
    
    r11 = 1
    void* r10_2 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *(sx.q(arg1[6].d) * 0xe0 + *arg1) = rdx
    
    int32_t rax_16 = -1
    void* rcx_7 = *arg1 + rsi_1
    *rcx_7 = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_16 = arg1[6].d
    
    *(rcx_7 + 4) = rax_16
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx
    void* rax_17 = *(r10_2 + 0x10)
    
    if (rax_17 != 0)
        r10_2 = rax_17
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx)
    int64_t rcx_8 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r10_2 + (rcx_8 << 2)) &= not.d(rol.d(1, rdx.b))

return zx.q(r11)
