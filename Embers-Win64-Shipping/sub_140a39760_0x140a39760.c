// 函数: sub_140a39760
// 地址: 0x140a39760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x800e8) - *(arg1 + 0x800e4)
int32_t r12 = data_14399fa50

if (arg2 s<= i)
    i = arg2

while (i s> 0)
    void* rbx_1 = *(arg1 + 0xd0)
    int64_t rdi_1 = sx.q(*(rbx_1 + 0x3c))
    int64_t r14_1 = rdi_1 * 0x28
    
    if (rdi_1.d == 1)
        break
    
    if (*(r14_1 + rbx_1 + 0x1c) + data_14399e714 u>= r12)
        break
    
    void* rdx = *(r14_1 + rbx_1 + 8)
    
    if (rdx != 0)
        int64_t rcx_2 = sx.q(*(r14_1 + rbx_1 + 0x10))
        *(*(rdx + 8) + (rcx_2 << 2)) = 0xffffffff
        int64_t rax_2 = *(rdx + 0x18)
        int64_t* rcx_3 = *(rax_2 + (rcx_2 << 3))
        
        if (rcx_3 != 0)
            *(rax_2 + (rcx_2 << 3)) = 0
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                sub_140a2f6e0(rcx_3)
        
        *(r14_1 + rbx_1 + 8) = 0
    
    sub_140a74f90(*(arg1 + (rdi_1 << 3) + 0xe0))
    *(arg1 + (rdi_1 << 3) + 0xe0) = 0
    i -= 1
    *(r14_1 + rbx_1 + 0x10) = 0xffffffff
    *(arg1 + 0x800e8) -= 1
    int64_t rdx_2 = *(arg1 + 0xd0)
    void* r8_1 = r14_1 + rdx_2
    *(rdx_2 + sx.q(*(r14_1 + rdx_2 + 0x18)) * 0x28 + 0x14) = *(r8_1 + 0x14)
    *(*(arg1 + 0xd0) + sx.q(*(r8_1 + 0x14)) * 0x28 + 0x18) = *(r8_1 + 0x18)
    *(r8_1 + 0x18) = rdi_1.d
    *(r8_1 + 0x14) = rdi_1.d
    void* rdx_4 = *(arg1 + 0xd0)
    *(r14_1 + rdx_4 + 0x14) = 0
    *(r14_1 + rdx_4 + 0x18) = *(rdx_4 + 0x18)
    *(*(arg1 + 0xd0) + sx.q(*(rdx_4 + 0x18)) * 0x28 + 0x14) = rdi_1.d
    *(rdx_4 + 0x18) = rdi_1.d
