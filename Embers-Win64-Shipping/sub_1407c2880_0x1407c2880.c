// 函数: sub_1407c2880
// 地址: 0x1407c2880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r9 = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rbx = 0

if (rax_1 != 0)
    r9 = rax_1

int32_t rdi = *(r9 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & r10_1) << 2))

if (rdi != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdi)
        int64_t* rax_8 = rcx * 0x78
        
        if (*(rax_8 + rdx) == arg2)
            break
        
        rdi = *(rax_8 + rdx + 0x70)
        
        if (rdi == 0xffffffff)
            return 0
    
    void* r11_1 = rcx * 0x78
    int64_t rax_11 = sx.q(*(r11_1 + rdx + 0x74)) & r10_1
    void* rcx_1 = r9 + (rax_11 << 2)
    
    for (int32_t i = *(r9 + (rax_11 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdi)
            *rcx_1 = *(r11_1 + rdx + 0x70)
            break
        
        rcx_1 = sx.q(i) * 0x78 + 0x70 + rdx
    
    void* rbx_2 = *arg1 + r11_1
    sub_1407806d0(rbx_2 + 0x50)
    sub_1407806d0(rbx_2 + 0x30)
    rbx = 1
    sub_1407c2e90(arg1, rdi, 1)

return zx.q(rbx)
