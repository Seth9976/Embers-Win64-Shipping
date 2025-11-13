// 函数: sub_141caa170
// 地址: 0x141caa170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t rbp = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t rdi = *(r10 + ((sx.q(rax_1 + (arg2 u>> 0x20).d) & r11_1) << 2))

if (rdi != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t rcx_2
    int64_t rdx_3
    
    while (true)
        rcx_2 = sx.q(rdi)
        rdx_3 = rcx_2 * 0x60
        
        if (*(rdx_3 + r8_1) == arg2)
            break
        
        rdi = *(rdx_3 + r8_1 + 0x58)
        
        if (rdi == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r9_2 = rcx_2 * 0x60
        int64_t rax_9 = sx.q(*(r9_2 + r8_1 + 0x5c)) & r11_1
        void* rcx_3 = r10 + (rax_9 << 2)
        
        for (int32_t i = *(r10 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_3)
            if (i == rdi)
                *rcx_3 = *(r9_2 + r8_1 + 0x58)
                break
            
            rcx_3 = sx.q(i) * 0x60 + 0x58 + r8_1
    
    sub_140d3a280(*arg1 + rdx_3)
    rbp = 1
    sub_140bb6940(arg1, rdi, 1)

return zx.q(rbp)
