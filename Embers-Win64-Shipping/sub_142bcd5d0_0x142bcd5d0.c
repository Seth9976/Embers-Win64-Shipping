// 函数: sub_142bcd5d0
// 地址: 0x142bcd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(*(arg1 + 8) + 0x3e8)
void* r9 = rdi + 0x5e0

if (*(rdi + 0x8b0) != 0)
    uint32_t rcx_1 = zx.d((*(*(rdi + 0x10e8) + 0x10))(rdi + 0x10b8, zx.q(arg3), arg3, r9))
    
    if (rcx_1 u>= *(rdi + 0x8b0))
        return 3
    
    uint64_t rdx_1 = zx.q(rcx_1.b)
    r9 = *(rdi + (rdx_1 << 3) + 0x8b8)
    
    if (*(arg1 + 0x60) != 0 && arg2 != 0)
        *(arg1 + 0x68) = *(**(arg2 + 0x38) + (rdx_1 << 3) + 8)

int32_t rcx_3 = *(r9 + 0x2a0)
*(arg1 + 0x3f8) = rcx_3
*(arg1 + 0x408) = *(r9 + 0x2c0)
int32_t rax_8

if (*(*(arg1 + 0xb0) + 0x60c) == 1)
    rax_8 = 0
else if (rcx_3 u>= 0x4d8)
    rax_8 = 0x8000
    
    if (rcx_3 u< 0x846c)
        rax_8 = 0x46b
else
    rax_8 = 0x6b

*(arg1 + 0x400) = rax_8
*(arg1 + 0x368) = *(r9 + 0x220)
*(arg1 + 0x36c) = *(r9 + 0x224)
*(arg1 + 0x430) = r9
return 0
