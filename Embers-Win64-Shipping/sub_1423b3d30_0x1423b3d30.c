// 函数: sub_1423b3d30
// 地址: 0x1423b3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r10 = rax_1

int32_t rbx = *(r10 + ((sx.q((arg2 s>> 0x20).d * 0x17 + arg2.d) & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int64_t rax_9 = rcx * 6
        
        if (*(rdx + (rax_9 << 3)) == arg2)
            break
        
        rbx = *(rdx + (rax_9 << 3) + 0x28)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = rcx * 0x30
    int64_t rax_12 = sx.q(*(r8_2 + rdx + 0x2c)) & r11_1
    void* rcx_1 = r10 + (rax_12 << 2)
    
    for (int32_t i = *(r10 + (rax_12 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_2 + rdx + 0x28)
            break
        
        rcx_1 = sx.q(i) * 0x30 + 0x28 + rdx
    
    sub_141c4fe50(*arg1 + 0x18 + r8_2)
    rsi = 1
    sub_1407c2ba0(arg1, rbx, 1)

return zx.q(rsi)
