// 函数: sub_141f96690
// 地址: 0x141f96690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int32_t r11 = 0
void* rbx = &arg1[7]
int64_t rcx = sx.q(*arg2)
int64_t rdi_1 = sx.q(arg1[9].d) - 1

if (rax_1 != 0)
    rbx = rax_1

int32_t rdx = *(rbx + ((rcx & rdi_1) << 2))

if (rdx != 0xffffffff)
    void* r10_1 = *arg1
    int64_t r9_1
    
    while (true)
        r9_1 = sx.q(rdx)
        int64_t rax_5 = r9_1 * 2
        
        if (*(r10_1 + (rax_5 << 3)) == rcx.d)
            break
        
        rdx = *(r10_1 + (rax_5 << 3) + 8)
        
        if (rdx == 0xffffffff)
            return 0
    
    int64_t r9_2 = r9_1 * 2
    int64_t rax_8 = sx.q(*(r10_1 + (r9_2 << 3) + 0xc)) & rdi_1
    void* rcx_1 = rbx + (rax_8 << 2)
    
    for (int32_t i = *(rbx + (rax_8 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdx)
            *rcx_1 = *(r10_1 + (r9_2 << 3) + 8)
            break
        
        rcx_1 = r10_1 + 8 + (sx.q(i) << 4)
    
    r11 = 1
    void* rbx_1 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *(*arg1 + sx.q(arg1[6].d) * 0x10) = rdx
    
    int64_t rcx_6 = *arg1
    int32_t rax_13 = -1
    *(rcx_6 + (r9_2 << 3)) = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_13 = arg1[6].d
    
    *(rcx_6 + (r9_2 << 3) + 4) = rax_13
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx
    void* rax_14 = *(rbx_1 + 0x10)
    
    if (rax_14 != 0)
        rbx_1 = rax_14
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx)
    int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rdx.b))

return zx.q(r11)
