// 函数: sub_1407c25e0
// 地址: 0x1407c25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r10 = rax_1

int32_t rbx = *(r10 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int64_t rax_8 = rcx * 9
        
        if (*(rdx + (rax_8 << 3)) == arg2)
            break
        
        rbx = *(rdx + (rax_8 << 3) + 0x40)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r9_1 = rcx * 0x48
    int64_t rax_12 = sx.q(*(r9_1 + rdx + 0x44)) & r11_1
    void* rcx_1 = r10 + (rax_12 << 2)
    int32_t i = *(r10 + (rax_12 << 2))
    
    while (i != 0xffffffff)
        if (i == rbx)
            *rcx_1 = *(r9_1 + rdx + 0x40)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rcx_3 = i_1 + ((i_1 + 1) << 3)
        i = *(rdx + (rcx_3 << 3))
        rcx_1 = rdx + (rcx_3 << 3)
    
    void* rsi_2 = *arg1 + r9_1
    int64_t rcx_4 = *(rsi_2 + 0x28)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *(rsi_2 + 0x10)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    rsi = 1
    sub_1407c2d20(arg1, rbx, 1)

return zx.q(rsi)
