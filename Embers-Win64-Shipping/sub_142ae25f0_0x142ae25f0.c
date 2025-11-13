// 函数: sub_142ae25f0
// 地址: 0x142ae25f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = 0

if (arg3 != 0)
    *arg3 = 0

int32_t r10 = 0
int64_t rax = 0
int16_t rcx

while (true)
    if (*(arg2 + rax + 0x78) != 0)
        rcx = sx.w(*(sx.q(r10) + arg2 + 0x68))
        r9 = rcx
        break
    
    r10 += 1
    rax += 1
    
    if (rax s>= 0x10)
        rcx = 0
        break

int32_t rax_4

if (r9 - 0x41 u<= 0x19)
    rax_4 = zx.d(r9) - 0x41
label_142ae2657:
    
    for (void* i = *(arg1 + (sx.q(rax_4) << 3) + 8); i != 0; i = *(i + 0x98))
        void* rdx_1 = *(i + 0x48)
        
        if (arg3 == 0)
            if (*(rdx_1 + 0x68) == *(arg2 + 0x68) && *(rdx_1 + 0x70) == *(arg2 + 0x70)
                    && *(rdx_1 + 0x78) == *(arg2 + 0x78) && *(rdx_1 + 0x80) == *(arg2 + 0x80))
                return i + 0x50
        else if (*(rdx_1 + 0x48) == *(arg2 + 0x48) && *(rdx_1 + 0x50) == *(arg2 + 0x50)
                && *(rdx_1 + 0x58) == *(arg2 + 0x58) && *(rdx_1 + 0x60) == *(arg2 + 0x60))
            if (*(i + 0x90) != 0)
                *arg3 = rdx_1
            
            return i + 0x50
else if (r9 - 0x61 u<= 0x19)
    rax_4 = zx.d(rcx) - 0x47
    goto label_142ae2657
return 0
