// 函数: sub_141fe98a0
// 地址: 0x141fe98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x10))
int64_t rbx = 0
int32_t r10 = 0
int32_t r9 = 0
int64_t var_48 = 0
int32_t var_3c = 0
int32_t i = 0
int32_t r15 = (&data_1439c85f4)[rax * 0xa]

if (*(arg1 + 0xd8) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rdi_1 = sx.q(r10)
        int32_t var_30_1 = 0xbf800000
        int64_t* r8_1 = *(r14_1 + *(arg1 + 0xd0))
        r10 = (rdi_1 + 1).d
        void* rdx_1 = *r8_1
        int64_t rcx_1 =
            sx.q(*(rdx_1 + 0x20) * *(rdx_1 + 0x1c) * *(rdx_1 + 0x18) * r15) + zx.q(*(rdx_1 + 0x10))
        int64_t rax_7 = r8_1[5]
        
        if (r10 s> r9)
            sub_1405a4df0(&var_48)
            r9 = var_3c
            rbx = var_48
        
        int64_t rcx_3 = rdi_1 * 3
        i += 1
        r14_1 = &r14_1[1]
        *(rbx + (rcx_3 << 3)) = rcx_1.o
        *(rbx + (rcx_3 << 3) + 0x10) = rax_7
    while (i s< *(arg1 + 0xd8))

int64_t result = sub_141fd4a10(rbx, r10, arg2)

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall
