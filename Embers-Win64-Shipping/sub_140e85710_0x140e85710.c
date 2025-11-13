// 函数: sub_140e85710
// 地址: 0x140e85710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r9 = &arg1[7]
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
        int32_t* rax_4 = rcx * 0x58
        
        if (*(rax_4 + rdx) == r8.d)
            break
        
        rbx = *(rax_4 + rdx + 0x50)
        
        if (rbx == 0xffffffff)
            return 0
    
    void* r11_1 = rcx * 0x58
    int64_t rax_7 = sx.q(*(r11_1 + rdx + 0x54)) & r10_1
    void* rcx_1 = r9 + (rax_7 << 2)
    
    for (int32_t i = *(r9 + (rax_7 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r11_1 + rdx + 0x50)
            break
        
        rcx_1 = sx.q(i) * 0x58 + 0x50 + rdx
    
    sub_140e539c0(*arg1 + 8 + r11_1)
    rsi = 1
    sub_140869170(arg1, rbx, 1)

return zx.q(rsi)
