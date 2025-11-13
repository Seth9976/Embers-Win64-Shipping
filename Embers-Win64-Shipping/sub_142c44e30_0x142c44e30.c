// 函数: sub_142c44e30
// 地址: 0x142c44e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg3 + 0x60)
int32_t i = 0
void* rbx = *(arg3 + 0x70)

if (rdi == 0)
    return 

uint64_t rax = 0

do
    rax = zx.q(rax.d + 1)
    
    if (rax.d u>= rdi)
        break
while (*(rbx + 0xf) == *(rbx + rax * 0x14 + 0xf))

if (rdi == 0)
    return 

do
    if (i u< rax.d)
        void* r8_3 = rbx + ((zx.q(i) * 5 + 3) << 2)
        
        do
            if ((*r8_3 u>> 4 & 1) != 0)
                *(rbx + zx.q(i) * 0x14 + 0x12) = 0x16
                break
            
            i += 1
            r8_3 += 0x14
        while (i u< rax.d)
    
    int64_t r10_1 = *(arg3 + 0x70)
    i = rax.d
    char i_1 = *(r10_1 + rax * 0x14 + 0xf)
    
    do
        rax = zx.q(rax.d + 1)
        
        if (rax.d u>= *(arg3 + 0x60))
            break
    while (i_1 == *(r10_1 + rax * 0x14 + 0xf))
while (i u< rdi)
