// 函数: sub_141a61020
// 地址: 0x141a61020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r9 = &arg1[7]
int64_t r8 = sx.q(*arg2)
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r9 = rax_1

int32_t rbx = *(r9 + ((r8 & r10_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int32_t* rax_4 = rcx * 0xf8
        
        if (*(rax_4 + rdx) == r8.d)
            break
        
        rbx = *(rax_4 + rdx + 0xf0)
        
        if (rbx == 0xffffffff)
            return 0
    
    void* r11_1 = rcx * 0xf8
    void* r8_1 = r11_1 + rdx
    int64_t rax_7 = sx.q(*(r8_1 + 0xf4)) & r10_1
    void* rcx_1 = r9 + (rax_7 << 2)
    
    for (int32_t i = *(r9 + (rax_7 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_1 + 0xf0)
            break
        
        rcx_1 = sx.q(i) * 0xf8 + 0xf0 + rdx
    
    sub_141a33080(*arg1 + 8 + r11_1)
    rsi = 1
    sub_141a61cd0(arg1, rbx, 1)

return zx.q(rsi)
