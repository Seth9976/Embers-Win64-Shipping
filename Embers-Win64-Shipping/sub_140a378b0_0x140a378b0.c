// 函数: sub_140a378b0
// 地址: 0x140a378b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0xd0)
int64_t rdi = sx.q(*(r9 + 0x3c))
int64_t r15

if (rdi.d != 1)
    r15 = rdi
    int64_t r8_1 = rdi * 0x28
    *(r9 + sx.q(*(r8_1 + r9 + 0x18)) * 0x28 + 0x14) = *(r8_1 + r9 + 0x14)
    *(*(arg1 + 0xd0) + sx.q(*(r8_1 + r9 + 0x14)) * 0x28 + 0x18) = *(r8_1 + r9 + 0x18)
    *(r8_1 + r9 + 0x18) = rdi.d
    *(r8_1 + r9 + 0x14) = rdi.d
    void* r14_2 = *(arg1 + 0xd0) + r8_1
    void* rdx_3 = *(r14_2 + 8)
    
    if (rdx_3 != 0)
        int64_t rcx_7 = sx.q(*(r14_2 + 0x10))
        *(*(rdx_3 + 8) + (rcx_7 << 2)) = 0xffffffff
        int64_t rax_15 = *(rdx_3 + 0x18)
        int64_t* rcx_8 = *(rax_15 + (rcx_7 << 3))
        
        if (rcx_8 != 0)
            *(rax_15 + (rcx_7 << 3)) = 0
            rcx_8[9].d -= 1
            
            if (rcx_8[9].d == 1)
                sub_140a2f6e0(rcx_8)
        
        *(r14_2 + 8) = 0
else
    rdi = sx.q(*(r9 + 0x14))
    
    if (rdi.d != 0)
        int64_t rcx_2 = rdi * 5
        void* r8 = r9 + (rcx_2 << 3)
        *(r9 + sx.q(*(r9 + (rcx_2 << 3) + 0x18)) * 0x28 + 0x14) = *(r8 + 0x14)
        *(*(arg1 + 0xd0) + sx.q(*(r8 + 0x14)) * 0x28 + 0x18) = *(r8 + 0x18)
        *(r8 + 0x18) = rdi.d
        *(r8 + 0x14) = rdi.d
    else
        rdi = sx.q(*(arg1 + 0xd8))
        int32_t rax = (rdi + 1).d
        *(arg1 + 0xd8) = rax
        
        if (rax s> *(arg1 + 0xdc))
            sub_1405c4ec0(arg1 + 0xd0)
        
        int64_t rax_1 = *(arg1 + 0xd0)
        int64_t rcx_1 = rdi * 5
        *(rax_1 + (rcx_1 << 3)) = 0
        *(rax_1 + (rcx_1 << 3) + 8) = 0
        *(rax_1 + (rcx_1 << 3) + 0x10) = 0xffffffff
        *(rax_1 + (rcx_1 << 3) + 0x14) = 0
        *(rax_1 + (rcx_1 << 3) + 0x1c) = 0
        *(rax_1 + (rcx_1 << 3) + 0x20) = 0
        *(*(arg1 + 0xd0) + (rcx_1 << 3) + 0x18) = rdi.d
        *(*(arg1 + 0xd0) + (rcx_1 << 3) + 0x14) = rdi.d
    
    r15 = sx.q(rdi.d)
    *(arg1 + (r15 << 3) + 0xe0) = sub_140a82f30(0x4000, 0)
    *(arg1 + 0x800e8) += 1

int64_t rax_16 = *(arg1 + 0xd0)
int64_t rcx_9 = r15 * 5
*(rax_16 + (rcx_9 << 3) + 0x10) = arg4
*(rax_16 + (rcx_9 << 3) + 0x20) = 1
*(rax_16 + (rcx_9 << 3) + 8) = arg3
*arg2 = (rdi - 2).d
return arg2
