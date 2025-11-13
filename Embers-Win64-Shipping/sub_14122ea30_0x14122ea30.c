// 函数: sub_14122ea30
// 地址: 0x14122ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r11 = &arg1[7]
int32_t rbx = 0
int64_t rdi_1 = sx.q(arg1[9].d) - 1

if (rax_1 != 0)
    r11 = rax_1

int32_t rdx = *(r11 + ((r10 & rdi_1) << 2))

if (rdx != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rdx)
        int32_t* rax_4 = rcx * 0x290
        
        if (*(rax_4 + r8_1) == r10.d)
            break
        
        rdx = *(rax_4 + r8_1 + 0x280)
        
        if (rdx == 0xffffffff)
            return 0
    
    int64_t r10_1 = rcx * 0x290
    int64_t rax_7 = sx.q(*(r10_1 + r8_1 + 0x284)) & rdi_1
    void* rcx_1 = r11 + (rax_7 << 2)
    
    for (int32_t i = *(r11 + (rax_7 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rdx)
            *rcx_1 = *(r10_1 + r8_1 + 0x280)
            break
        
        rcx_1 = sx.q(i) * 0x290 + 0x280 + r8_1
    
    rbx = 1
    sub_14122ed70(arg1, rdx, 1)

return zx.q(rbx)
