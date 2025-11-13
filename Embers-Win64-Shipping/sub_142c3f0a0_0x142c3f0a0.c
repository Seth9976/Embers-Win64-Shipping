// 函数: sub_142c3f0a0
// 地址: 0x142c3f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg3 + 0x60)

if (rdi == 0)
    return 

void* rdx = *(arg3 + 0x70)
int32_t r10_1 = 0
uint64_t rbx_1 = 0

do
    rbx_1 = zx.q(rbx_1.d + 1)
    
    if (rbx_1.d u>= rdi)
        break
while (*(rdx + 0xf) == *(rdx + rbx_1 * 0x14 + 0xf))

if (rdi == 0)
    return 

do
    sub_142c3f140(arg1, arg3, r10_1, rbx_1.d)
    int64_t r8_1 = *(arg3 + 0x70)
    r10_1 = rbx_1.d
    char i = *(r8_1 + rbx_1 * 0x14 + 0xf)
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= *(arg3 + 0x60))
            break
    while (i == *(r8_1 + rbx_1 * 0x14 + 0xf))
while (r10_1 u< rdi)
