// 函数: sub_141892740
// 地址: 0x141892740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r9 = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rbx = 0

if (rax_1 != 0)
    r9 = rax_1

int32_t rdi = *(r9 + ((r8 & r10_1) << 2))

if (rdi != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdi)
        int64_t rax_5 = rcx * 6
        
        if (*(rdx + (rax_5 << 3)) == r8.d)
            break
        
        rdi = *(rdx + (rax_5 << 3) + 0x28)
        
        if (rdi == 0xffffffff)
            return 0
    
    int64_t r8_2 = rcx * 0x30
    int64_t rax_8 = sx.q(*(r8_2 + rdx + 0x2c)) & r10_1
    void* rcx_1 = r9 + (rax_8 << 2)
    
    for (int32_t i = *(r9 + (rax_8 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdi)
            *rcx_1 = *(r8_2 + rdx + 0x28)
            break
        
        rcx_1 = sx.q(i) * 0x30 + 0x28 + rdx
    
    void* rbx_2 = *arg1 + r8_2
    sub_140745b20(rbx_2 + 0x18)
    sub_140745b20(rbx_2 + 8)
    rbx = 1
    sub_1407c2ba0(arg1, rdi, 1)

return zx.q(rbx)
