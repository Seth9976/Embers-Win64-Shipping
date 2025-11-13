// 函数: sub_142b35cc0
// 地址: 0x142b35cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)

if (rbp.d s<= 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0xc))

if (rbp.d == rax.d)
    *(arg1 + 0xc) = rax.d + 0xa
    *arg1 = sub_142a7dd30(*arg1, zx.q(rax.d + 0xa) << 3)

int64_t rcx_1 = *arg1
int64_t rbx_1 = 0

if (rcx_1 == 0)
    arg1[1] = 0
else
    *(rcx_1 + (zx.q(arg1[1].d) << 3)) = 0
    arg1[1].d += 1

int64_t rsi_1 = *arg1
*arg1 = 0
arg1[1] = 0

if (rbp s> 0)
    do
        void* rdi_1 = *(rsi_1 + (rbx_1 << 3))
        
        if (rdi_1 != 0)
            sub_142b324e0(rdi_1)
            sub_142a47920(rdi_1)
        
        rbx_1 += 1
    while (rbx_1 s< rbp)

if (rsi_1 != 0)
    sub_142a7dcd0(rsi_1)
