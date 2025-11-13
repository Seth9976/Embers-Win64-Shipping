// 函数: sub_142c280d0
// 地址: 0x142c280d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 6)

if (rax == 0)
    return rax

uint32_t rax_1 = zx.d(*(arg1 + 3))
uint32_t rdi_1 = zx.d(*(arg1 + 2)) << 8
uint32_t rdi_2 = rdi_1 + rax_1

if (rdi_1 == neg.d(rax_1))
    rax_1.b = 0
    return rax_1

char rax_2 = sub_142bf7510(arg2, arg1 + 6, rdi_2 * 2)

if (rax_2 == 0)
    return rax_2

int32_t rbx = 0

if (rdi_2 != 0)
    do
        char* rcx_2 = &data_14369a5d0
        void* rdx_2 = arg1 + 6 + (zx.q(rbx) << 1)
        
        if (rdx_2 u>= arg1 + 6)
            rcx_2 = rdx_2
        
        if (sub_142c25ee0(rcx_2, arg2, arg1) == 0)
            return false
        
        rbx += 1
    while (rbx u< rdi_2)

return sub_142bf7510(arg2, zx.q(((zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))) * 2) + arg1 + 6, 
    ((zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))) << 2) != 0
