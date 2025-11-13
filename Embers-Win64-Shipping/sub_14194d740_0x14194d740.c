// 函数: sub_14194d740
// 地址: 0x14194d740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0xd0
void* r15 = rbx + 0x10
int32_t rax = 1

if ((*(arg1 + 0xe8) & 1) != 0)
    rax = 6

int32_t rax_1 = rax * *(arg1 + 0x34)
uint32_t rbp_2 = (*(rbx + 0x14) + 0x1f) u>> 5
*r15 = rax_1
uint64_t rsi_1 = zx.q((rax_1 + 0x1f) u>> 5)
uint64_t result

if (rsi_1.d u<= rbp_2)
    void* rdx_4 = *(rbx + 8)
    int32_t rcx_7 = 0
    result = zx.q(arg2)
    
    if (rsi_1.d != 0)
        rcx_7 = result.d
    
    if (rcx_7 == 0)
        if (rdx_4 != 0)
            rbx = rdx_4
        
        if (rbp_2 u> 8)
            return memset(rbx, 0, zx.q(rbp_2) << 2)
        
        if (rbp_2 != 0)
            result = 0
            __builtin_memset(rbx, 0, zx.q(rbp_2) << 2)
    else
        int32_t rax_7 = (rsi_1 - 1).d
        
        if (rdx_4 != 0)
            rbx = rdx_4
        
        if (rax_7 s> 8)
            memset(rbx, 0xff, (rsi_1 << 2) + -fffffffffffffffc)
        else if (rax_7 s> 0)
            __builtin_memset(rbx, 0xffffffff, ((rsi_1 << 2) + -fffffffffffffffc) u>> 2 << 2)
        
        result = zx.q((rsi_1 - 1).d)
        void* rdi_4 = rbx + (rsi_1 << 2)
        int32_t rdx_6 = rbp_2 - rsi_1.d
        *(rbx + (result << 2)) = 0xffffffff u>> ((neg.d(*r15)).b & 0x1f)
        
        if (rdx_6 s> 8)
            return memset(rdi_4, 0, (zx.q(rbp_2) - zx.q(rsi_1.d)) << 2)
        
        if (rdx_6 s> 0)
            result = 0
            __builtin_memset(rdi_4, 0, (zx.q(rbp_2) - zx.q(rsi_1.d)) << 2)
else
    int32_t rdx = sub_1405a4aa0(rbx, 0, rsi_1.d, 4)
    *(rbx + 0x14) = rsi_1.d << 5
    void* rax_4 = *(rbx + 8)
    
    if (rax_4 != 0)
        rbx = rax_4
    
    if (rsi_1.d u<= 8)
        int64_t rcx_3
        int64_t rdi_2
        
        if (rsi_1.d != 0)
            rdi_2, rcx_3 =
                __memfill_u32(rbx, sbb.d(rax_4.d, rax_4.d, arg2 != 0) & 0xffffffff, zx.q(rsi_1.d))
    else
        memset(rbx, zx.d((sbb.d(rdx, rdx, arg2 != 0)).b), zx.q(rsi_1.d) << 2)
    
    result = zx.q((rsi_1 - 1).d)
    void* rdx_3 = rbx + (result << 2)
    *rdx_3 &= 0xffffffff u>> ((neg.d(*r15)).b & 0x1f)

return result
