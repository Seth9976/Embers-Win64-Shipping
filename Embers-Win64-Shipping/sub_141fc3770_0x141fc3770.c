// 函数: sub_141fc3770
// 地址: 0x141fc3770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r10 = &arg1[7]
int64_t r8 = sx.q(*arg2)
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r10 = rax_1

int32_t rbx = *(r10 + ((r8 & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int32_t* rax_5 = rcx * 0x60
        
        if (*(rax_5 + rdx) == r8.d)
            break
        
        rbx = *(rax_5 + rdx + 0x58)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = rcx * 0x60
    int64_t rax_8 = sx.q(*(r8_2 + rdx + 0x5c)) & r11_1
    void* rcx_1 = r10 + (rax_8 << 2)
    
    for (int32_t i = *(r10 + (rax_8 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_2 + rdx + 0x58)
            break
        
        rcx_1 = sx.q(i) * 0x60 + 0x58 + rdx
    
    sub_140d3a280(*arg1 + r8_2)
    rsi = 1
    sub_140bb6940(arg1, rbx, 1)

return zx.q(rsi)
