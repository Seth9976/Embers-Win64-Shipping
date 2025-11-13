// 函数: sub_142665220
// 地址: 0x142665220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* rcx = &arg1[7]
int64_t rbx_1 = sx.q(arg1[9].d) - 1
int32_t rdi = 0

if (rax_1 != 0)
    rcx = rax_1

int32_t rdx = *(rcx + ((r11 & rbx_1) << 2))

if (rdx != 0xffffffff)
    void* r10_1 = *arg1
    int64_t r9_1
    
    while (true)
        r9_1 = sx.q(rdx)
        int32_t* rax_5 = r9_1 << 5
        
        if (*(rax_5 + r10_1) == r11.d)
            break
        
        rdx = *(rax_5 + r10_1 + 0x18)
        
        if (rdx == 0xffffffff)
            return 0
    
    int64_t r9_2 = r9_1 << 5
    void* rcx_1 = rcx + ((sx.q(*(r9_2 + r10_1 + 0x1c)) & rbx_1) << 2)
    
    for (int32_t i = *rcx_1; i != 0xffffffff; i = *rcx_1)
        if (i == rdx)
            *rcx_1 = *(r9_2 + r10_1 + 0x18)
            break
        
        rcx_1 = r10_1 + 0x18 + (sx.q(i) << 5)
    
    rdi = 1
    void* r11_2 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *((sx.q(arg1[6].d) << 5) + *arg1) = rdx
    
    int32_t* rcx_6 = *arg1
    int32_t rax_13 = -1
    rcx_6[r9_1 * 8] = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_13 = arg1[6].d
    
    rcx_6[r9_1 * 8 + 1] = rax_13
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx
    void* rax_14 = *(r11_2 + 0x10)
    
    if (rax_14 != 0)
        r11_2 = rax_14
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx)
    int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r11_2 + (rcx_7 << 2)) &= not.d(rol.d(1, rdx.b))

return zx.q(rdi)
