// 函数: sub_140e85e10
// 地址: 0x140e85e10
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
    void* r9_1 = *arg1
    int64_t rdx_3
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rdi)
        rdx_3 = r8_1 << 7
        
        if (*(rdx_3 + r9_1) == arg2)
            break
        
        rdi = *(rdx_3 + r9_1 + 0x78)
        
        if (rdi == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r8_2 = r8_1 << 7
        int64_t rax_9 = sx.q(*(r8_2 + r9_1 + 0x7c)) & r11_1
        void* rcx_2 = r10 + (rax_9 << 2)
        
        for (int32_t i = *(r10 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_2)
            if (i == rdi)
                *rcx_2 = *(r8_2 + r9_1 + 0x78)
                break
            
            rcx_2 = r9_1 + 0x78 + (sx.q(i) << 7)
    
    sub_140e53930(*arg1 + 8 + rdx_3)
    rbp = 1
    sub_1408887c0(arg1, rdi, 1)

return zx.q(rbp)
