// 函数: sub_142202c90
// 地址: 0x142202c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x60) & 1) != 0)
    return 

int32_t rax_1 = *(arg2 + 0x118)
int64_t rbp_1 = *(arg2 + 0xf0)
int32_t r14_1 = *(arg2 + 0x114)
int64_t r15_1 = *(arg2 + 0xf8)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s< 0)
    return 

int64_t temp1_1

do
    void* rdx_2 = zx.q(zx.d(*(r15_1 + (rdi_1 << 1))) * r14_1) + rbp_1
    
    if ((*(rdx_2 + 0x5c) & 0x4000000) == 0)
        int32_t rax_2 = *(arg2 + 0x4c)
        int512_t zmm1
        zmm1.o = *(rdx_2 + 0xc)
        uint64_t rbx_1 = zx.q(arg3)
        
        if (rax_2 != 0)
            rbx_1 = zx.q(rax_2)
        
        void* rbx_2 = rbx_1 + rdx_2
        float zmm0_1
        zmm0_1, zmm1 = sub_141fe5610(arg1 + 0x30, zmm1, *(arg2 + 0x18), nullptr)
        uint32_t rax = zx.d(*(arg1 + 0x64))
        
        if (rax.b == 1)
            zmm0_1 = zmm0_1 f+ *(rbx_2 + 4)
        else if (rax.b == 2)
            zmm0_1 = zmm0_1 f* *(rbx_2 + 4)
        
        *(rbx_2 + 4) = zmm0_1
    
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
