// 函数: sub_140a87120
// 地址: 0x140a87120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (arg1[0x602] == arg1[0x611])
    return 0

void* rax_1 = *(arg1 + 0x1a48)
void* r11 = &arg1[0x612]
int32_t rbx = 0
int64_t rdi_1 = sx.q(arg1[0x694]) - 1

if (rax_1 != 0)
    r11 = rax_1

int32_t rdx = *(r11 + ((r10 & rdi_1) << 2))

if (rdx != 0xffffffff)
    int32_t* rax_4 = *(arg1 + 0x1800)
    int32_t* r8_1 = arg1
    
    if (rax_4 != 0)
        r8_1 = rax_4
    
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdx)
        int64_t rax_5 = rcx * 3
        
        if (r8_1[rax_5 * 2] == r10.d)
            break
        
        rdx = r8_1[rax_5 * 2 + 4]
        
        if (rdx == 0xffffffff)
            return 0
    
    int64_t rax_7 = rcx * 3
    int64_t rax_9 = sx.q(r8_1[rax_7 * 2 + 5]) & rdi_1
    void* rcx_1 = r11 + (rax_9 << 2)
    int32_t i = *(r11 + (rax_9 << 2))
    
    while (i != 0xffffffff)
        if (i == rdx)
            *rcx_1 = r8_1[rax_7 * 2 + 4]
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rcx_3 = i_1 + ((i_1 + 1) << 1)
        i = r8_1[rcx_3 * 2]
        rcx_1 = &r8_1[rcx_3 * 2]
    
    rbx = 1
    sub_140a87a70(arg1, rdx, 1)

return zx.q(rbx)
