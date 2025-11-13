// 函数: sub_141b2f0e0
// 地址: 0x141b2f0e0
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
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rdi)
        int64_t rax_6 = rdx_2 * 0xa
        
        if (*(r8_1 + (rax_6 << 3)) == arg2)
            break
        
        rdi = *(r8_1 + (rax_6 << 3) + 0x48)
        
        if (rdi == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r9_2 = rdx_2 * 0xa
        int64_t rax_10 = sx.q(*(r8_1 + (r9_2 << 3) + 0x4c)) & r11_1
        void* rcx_2 = r10 + (rax_10 << 2)
        
        for (int32_t i = *(r10 + (rax_10 << 2)); i != 0xffffffff; i = *rcx_2)
            if (i == rdi)
                *rcx_2 = *(r8_1 + (r9_2 << 3) + 0x48)
                break
            
            rcx_2 = sx.q(i) * 0x50 + 0x48 + r8_1
    
    void* rbx_3 = rdx_2 * 0x50 + *arg1
    int64_t rcx_6 = *(rbx_3 + 0x38)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (*(rbx_3 + 9) != 0)
        *(rbx_3 + 9) = 0
    
    rbp = 1
    sub_1407c2c60(arg1, rdi, 1)

return zx.q(rbp)
