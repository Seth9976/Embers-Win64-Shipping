// 函数: sub_142c2f4f0
// 地址: 0x142c2f4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* arg_8 = arg2 + 0x20
void* rax = *(arg2 + 0x48)
int64_t r8 = *(rax + 0x10)
*(arg2 + 0x28) = r8
int64_t rcx_1 = zx.q(*(rax + 0x18)) + r8
*(arg2 + 0x30) = rcx_1

if (arg1 != 0)
    void* rax_4
    
    if (arg1 u< r8 || rcx_1 u<= arg1)
        rax_4 = nullptr
        *(arg2 + 0x28) = 0
    else
        *(arg2 + 0x28) = arg1
        uint64_t rcx_4 = (zx.q(*arg1) << 8) + zx.q(arg1[1])
        uint64_t rax_3 = *(arg2 + 0x30) - arg1
        
        if (rax_3 u>= rcx_4)
            rax_3 = rcx_4
        
        rax_4 = &arg1[rax_3]
    
    *(arg2 + 0x30) = rax_4

uint32_t rax_5 = zx.d(arg1[3])
char* rdx

if (rax_5 == 0)
    rdx = zx.q(sub_142c2b6c0(arg2, &arg1[8]))
else if (rax_5 == 1)
    rdx = zx.q(sub_142c2f680(&arg1[8], arg2))
else if (rax_5 == 2)
    rdx = zx.q(sub_142c300c0(&arg1[8], arg2))
else if (rax_5 == 4)
    rdx = zx.q(sub_142c30190(&arg1[8], arg2))
else if (rax_5 == 5)
    rdx = zx.q(sub_142c2f790(&arg1[8], arg2))
else
    rdx.b = 0

void* rax_10 = *(arg2 + 0x48)
int64_t rcx_10 = *(rax_10 + 0x10)
*(arg2 + 0x28) = rcx_10
*(arg2 + 0x30) = zx.q(*(rax_10 + 0x18)) + rcx_10
return zx.q(rdx.b)
