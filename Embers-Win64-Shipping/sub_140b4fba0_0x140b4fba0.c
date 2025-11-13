// 函数: sub_140b4fba0
// 地址: 0x140b4fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa08) = 0

if (*(arg1 + 0xa0c) != arg2)
    sub_140b52c00(arg1, arg2)

*(arg1 + 0xa28) = 0xffffffff
*(arg1 + 0xa2c) = 0
int32_t rcx_1 = (arg2 + 0x1f) & 0xffffffe0
int32_t rax = *(arg1 + 0xa24)
void* rax_1

if (rcx_1 s> rax || rax s> 0x40)
    int32_t rax_3 = 0x40
    
    if (rcx_1 s>= 0x40)
        rax_3 = rcx_1
    
    *(arg1 + 0xa24) = rax_3
    rax_1 = sub_140b51c80(arg1 + 0xa10, 0)
else
    rax_1 = *(arg1 + 0xa18)
    void* rdi_1 = arg1 + 0xa10
    uint32_t rdx_2 = (*(arg1 + 0xa20) + 0x1f) u>> 5
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    if (rdx_2 u> 8)
        int64_t rax_2 = memset(rdi_1, 0, zx.q(rdx_2) << 2)
        *(arg1 + 0xa20) = 0
        return rax_2
    
    if (rdx_2 != 0)
        __builtin_memset(rdi_1, 0, zx.q(rdx_2) << 2)
        *(arg1 + 0xa20) = 0
        return 0

*(arg1 + 0xa20) = 0
return rax_1
