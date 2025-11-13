// 函数: sub_14172eb30
// 地址: 0x14172eb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 8)
int64_t rdx = sx.q(*(arg1 + 0x10))
int64_t* rbx = r8
void* rax = &r8[rdx]
int32_t rbx_1

if (r8 != rax)
    while (*rbx != 0)
        rbx = &rbx[1]
        
        if (rbx == rax)
            goto label_14172eb7f
    
    rbx_1 = ((rbx - r8) s>> 3).d

if (r8 == rax || rbx_1 == 0xffffffff)
label_14172eb7f:
    rbx_1 = *(arg1 + 0x10)
    int32_t rax_1 = (rdx + 1).d
    *(arg1 + 0x10) = rax_1
    
    if (rax_1 s> *(arg1 + 0x14))
        sub_1405a4d70(arg1 + 8)
    
    *((rdx << 3) + *(arg1 + 8)) = arg2
else
    r8[sx.q(rbx_1)] = arg2

int64_t* rcx_2 = *(*(arg1 + 8) + (sx.q(rbx_1) << 3))
(**rcx_2)(rcx_2, zx.q(*(arg1 + 0x18)))
return zx.q(rbx_1)
