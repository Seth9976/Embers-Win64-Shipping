// 函数: sub_142c1ff10
// 地址: 0x142c1ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0x60)
uint64_t rbx = 0
int64_t rax = *(arg1 + 0x80)
void* rbp = *(arg1 + 0x70)
int32_t rdi = 0

if (r15 == 0)
    *(arg1 + 0x60) = 0
    return rax

int32_t* rsi = rbp + 4
void* r14 = rbp
uint64_t rax_3

do
    rax_3 = arg2(r14)
    
    if (rax_3.b == 0)
        if (rbx.d != rdi)
            uint64_t rcx_3 = rbx * 5
            *(rbp + (rcx_3 << 2)) = *(rsi - 4)
            *(rbp + (rcx_3 << 2) + 0x10) = rsi[3]
            *(rax + (rcx_3 << 2)) = *(rax - rbp - 4 + rsi)
            rax_3 = zx.q(*(rax - rbp - 4 + rsi + 0x10))
            *(rax + (rcx_3 << 2) + 0x10) = rax_3.d
        
        rbx = zx.q(rbx.d + 1)
    else
        int32_t r8_1 = rsi[1]
        rax_3 = zx.q(rdi + 1)
        
        if (rax_3.d u>= r15 || r8_1 != *(r14 + 0x1c))
            if (rbx.d != 0)
                rax_3 = zx.q((rbx - 1).d) * 5
                int32_t r9_1 = *(rbp + (rax_3 << 2) + 8)
                
                if (r8_1 u< r9_1)
                    char r10_1 = (*rsi).b
                    uint64_t rdx = zx.q(rbx.d)
                    
                    do
                        rdx = zx.q(rdx.d - 1)
                        uint64_t rcx_1 = rdx * 5
                        
                        if (*(rbp + (rcx_1 << 2) + 8) != r9_1)
                            break
                        
                        if (*(rbp + (rcx_1 << 2) + 8) != r8_1)
                            if ((r10_1 & 1) == 0)
                                *(rbp + (rcx_1 << 2) + 4) &= 0xfffffffe
                            else
                                *(rbp + (rcx_1 << 2) + 4) |= 1
                        
                        *(rbp + (rcx_1 << 2) + 8) = r8_1
                    while (rdx.d != 0)
            else if (rax_3.d u< r15)
                rax_3 = sub_142bf5140(arg1, rdi, (rax_3 + 1).d)
    
    rdi += 1
    r14 += 0x14
    rsi = &rsi[5]
while (rdi u< r15)

*(arg1 + 0x60) = rbx.d
return rax_3
