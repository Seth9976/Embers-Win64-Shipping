// 函数: sub_1429dd9c0
// 地址: 0x1429dd9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg3
int32_t rbp = arg2
sub_1429ddc70(arg1)
int32_t rcx_1 = rbp & 0xf

if (rcx_1 != 0)
    rbp += 0x10 - rcx_1

int32_t rcx_3 = r15 & 0xf

if (rcx_3 != 0)
    r15 += 0x10 - rcx_3

void* rsi = arg1 + 0x80c
int32_t rdi = 0
void* r14 = arg1 + 0x9c0

while (true)
    *r14 = 0
    *rsi = 0
    
    if (sub_142a1cd30(sx.q(rdi) * 0x90 + 0x780 + arg1, rbp, r15, 0x20) s< 0)
        break
    
    rdi += 1
    r14 += 4
    rsi += 0x90
    
    if (rdi s>= 4)
        *(arg1 + 0x9d0) = 0
        *(arg1 + 0x9d4) = 1
        *(arg1 + 0x9d8) = 2
        *(arg1 + 0x9dc) = 3
        *(arg1 + 0x9c0) = 0x100000001
        *(arg1 + 0x9c8) = 0x100000001
        
        if (sub_142a1cd30(arg1 + 0x9e0, rbp, 0x10, 0x20) s>= 0)
            int32_t rdx_3 = r15 s>> 4
            int32_t rcx_10 = rbp s>> 4
            *(arg1 + 0xbb8) = rcx_10
            *(arg1 + 0xbb4) = rdx_3
            *(arg1 + 0xbbc) = rcx_10 + 1
            *(arg1 + 0xbb0) = rcx_10 * rdx_3
            void* rax_10 = sub_1429dddd0(sx.q((rdx_3 + 1) * (rcx_10 + 1)), 0x4c)
            *(arg1 + 0xbe8) = rax_10
            
            if (rax_10 != 0)
                int64_t rax_11 = sx.q(*(arg1 + 0xbb8))
                *(arg1 + 0xbf0) = (sx.q(*(arg1 + 0xbbc)) + 1) * 0x4c + rax_10
                void* rax_12 = sub_1429dddd0(rax_11 * 9, 1)
                *(arg1 + 0x1958) = rax_12
                
                if (rax_12 != 0 && sub_142a1cd30(arg1 + 0xa70, rbp, r15, 0x20) s>= 0)
                    *(arg1 + 0xb90) = 0
                    __builtin_memset(arg1 + 0x2230, 0, 0x20)
                    memset(*(arg1 + 0xac8), 0x80, sx.q(*(arg1 + 0xad8)))
                    void* rax_19 = sub_1429ddec0(0x10, 
                        sx.q(((zx.q(*(arg1 + 0xbb8) + 1) & 0xfffffffe) * 3).d << 3))
                    *(arg1 + 0xb98) = rax_19
                    
                    if (rax_19 != 0)
                        return 0
        
        break

sub_1429ddc70(arg1)
return 1
