// 函数: sub_142251fe0
// 地址: 0x142251fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg2
int64_t rdx = 0
void* rax_1 = &r8[arg2[1]]
uint64_t r10_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r8 u> rax_1)
    r10_1 = 0

if (r10_1 == 0)
    *(arg1 + 0x20cc) = 1
    return rax_1

int64_t* rax_3

do
    int64_t* rcx = *(*r8 + 0x10)
    rax_3 = nullptr
    
    if (*(rcx + 0xc) u>= 2)
        rax_3 = rcx
    
    if (rax_3 != 0)
        int64_t r9_1 = sx.q(rax_3[1].d)
        void* rcx_1 = *rax_3
        rax_3 = *(rcx_1 + 0x398)
        
        if (*(r9_1 + rax_3) == 4)
            rax_3 = *(rcx_1 + 0x338)
            *(rax_3 + (r9_1 << 2)) = 0xffffffff
    
    r8 = &r8[1]
    rdx += 1
while (rdx != r10_1)

*(arg1 + 0x20cc) = 1
return rax_3
