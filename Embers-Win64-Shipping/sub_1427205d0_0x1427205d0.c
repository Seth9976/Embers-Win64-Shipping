// 函数: sub_1427205d0
// 地址: 0x1427205d0
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
        int64_t rax_4 = rcx * 5
        
        if (*(r8_1 + (rax_4 << 3)) == r10.d)
            break
        
        rdx = *(r8_1 + (rax_4 << 3) + 0x20)
        
        if (rdx == 0xffffffff)
            return 0
    
    int64_t rax_6 = rcx * 5
    int64_t rax_8 = sx.q(*(r8_1 + (rax_6 << 3) + 0x24)) & rdi_1
    void* rcx_1 = r11 + (rax_8 << 2)
    int32_t i = *(r11 + (rax_8 << 2))
    
    while (i != 0xffffffff)
        if (i == rdx)
            *rcx_1 = *(r8_1 + (rax_6 << 3) + 0x20)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rcx_3 = i_1 + ((i_1 + 1) << 2)
        i = *(r8_1 + (rcx_3 << 3))
        rcx_1 = r8_1 + (rcx_3 << 3)
    
    rbx = 1
    sub_1405c3590(arg1, rdx, 1)

return zx.q(rbx)
