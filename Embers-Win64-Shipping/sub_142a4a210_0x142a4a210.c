// 函数: sub_142a4a210
// 地址: 0x142a4a210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)

if ((rax.b & 0x11) != 0)
    return 0

void* rdx = arg1 + 0xa
int16_t rcx = rax & 2

if (rcx == 0)
    rdx = *(arg1 + 0x18)

int32_t rdi_1

if (rax s< 0)
    rdi_1 = *(arg1 + 0xc)
else
    rdi_1 = sx.d(rax) s>> 5

int32_t rcx_1 = 0x1b

if (rcx == 0)
    rcx_1 = *(arg1 + 0x10)

if (rdi_1 s< rcx_1)
    if ((rax.b & 8) == 0)
        if ((rax.b & 4) == 0 || *(*(arg1 + 0x18) - 4) == 1)
            *(rdx + (sx.q(rdi_1) << 1)) = 0
            return rdx
    else if (*(rdx + (sx.q(rdi_1) << 1)) == 0)
        return rdx

if (rdi_1 s< 0x7fffffff && sub_142a487e0(arg1, rdi_1 + 1, 0xffffffff, 1, 0, 0) != 0)
    void* rax_8 = arg1 + 0xa
    
    if ((*(arg1 + 8) & 2) == 0)
        rax_8 = *(arg1 + 0x18)
    
    *(rax_8 + (sx.q(rdi_1) << 1)) = 0
    return rax_8

return 0
