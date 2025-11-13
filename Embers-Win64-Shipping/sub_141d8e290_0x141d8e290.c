// 函数: sub_141d8e290
// 地址: 0x141d8e290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a5130(arg1, arg2)

arg1[6].d = 0xffffffff
int32_t rax_1 = (arg2 + 0x1f) & 0xffffffe0
*(arg1 + 0x34) = 0
int32_t rdx = *(arg1 + 0x2c)
int32_t rcx = 0x80
void* rax_2

if (rax_1 s> rdx || rdx s> 0x80)
    if (rax_1 s>= 0x80)
        rcx = rax_1
    
    *(arg1 + 0x2c) = rcx
    rax_2 = sub_1405a4410(&arg1[2], 0)
else
    rax_2 = arg1[4]
    void* rdi_1 = &arg1[2]
    uint32_t rdx_3 = (arg1[5].d + 0x1f) u>> 5
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    if (rdx_3 u> 8)
        int64_t rax_3 = memset(rdi_1, 0, zx.q(rdx_3) << 2)
        arg1[5].d = 0
        return rax_3
    
    if (rdx_3 != 0)
        __builtin_memset(rdi_1, 0, zx.q(rdx_3) << 2)
        arg1[5].d = 0
        return 0

arg1[5].d = 0
return rax_2
