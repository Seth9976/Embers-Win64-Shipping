// 函数: sub_142b62c00
// 地址: 0x142b62c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *arg4 s> 0
int64_t arg_10 = arg2

if (cond:0)
    return arg3

int16_t rdx = *(arg1 + 8)
int32_t rax_1

if (rdx s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(rdx) s>> 5

void* r14 = nullptr
int16_t r9 = rdx & 0x11
int16_t* r8

if (r9 == 0)
    r8 = arg1 + 0xa
    
    if ((rdx.b & 2) == 0)
        r8 = *(arg1 + 0x18)
else
    r8 = nullptr

if (rax_1 != 0 && *r8 u> 1)
    *arg4 = 1
    return arg3

int32_t rbp_1

if (rdx s< 0)
    rbp_1 = *(arg1 + 0xc)
else
    rbp_1 = sx.d(rdx) s>> 5

if (r9 == 0)
    r14 = arg1 + 0xa
    
    if ((rdx.b & 2) == 0)
        r14 = *(arg1 + 0x18)

int32_t rdi = 1

if (rbp_1 s<= 1)
    return arg3

do
    int64_t rax_3 = sx.q(rdi)
    rdi += 1
    uint64_t rbx_1 = zx.q(*(r14 + (rax_3 << 1)))
    
    if (rbx_1.d u>= 0x100)
        sub_142a48d70(arg3, r14 + (sx.q(rdi) << 1), 0, rbx_1.d - 0x100)
        rdi += rbx_1.d - 0x100
    else
        void* rdx_1 = (&arg_10)[rbx_1]
        
        if (rdx_1 == 0 || rdx_1 == arg3)
            *arg4 = 1
            break
        
        int16_t rax_5 = *(rdx_1 + 8)
        
        if (rax_5 s< 0)
            sub_142a48d00(arg3, rdx_1, 0, *(rdx_1 + 0xc))
        else
            sub_142a48d00(arg3, rdx_1, 0, sx.d(rax_5) s>> 5)
while (rdi s< rbp_1)

return arg3
