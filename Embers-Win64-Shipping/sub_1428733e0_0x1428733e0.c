// 函数: sub_1428733e0
// 地址: 0x1428733e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
*(*(arg1 + 0xa8) + 0xfc) = 0
void* rdx = *(arg1 + 0xa8)
int16_t arg_8 = 0
arg_8.b = *(rdx + 0x100)
arg_8:1.b = *(rdx + 0x101)
void arg_10
int32_t rax_3 = sub_14286e270(arg1, 0x15, &arg_8, 2, 0, &arg_10)
void* rax_4 = *(arg1 + 0xa8)

if (rax_3 s<= 0)
    *(rax_4 + 0xfc) = 1
    return zx.q(rax_3)

if (*(rax_4 + 0x100) == 2)
    sub_142899cf0(*(arg1 + 0x18), 0xb, 0, 0)

int64_t r10 = *(arg1 + 0xb8)

if (r10 != 0)
    r10(1, zx.q(*arg1), 0x15, *(arg1 + 0xa8) + 0x100, 2, arg1, *(arg1 + 0xc0))

int64_t r9_3 = *(arg1 + 0x568)
void* rax_8

if (r9_3 != 0)
    rax_8 = *(arg1 + 0xa8)
    r9_3(arg1, 0x4008, zx.q(zx.d(*(rax_8 + 0x100)) << 8) | zx.q(*(rax_8 + 0x101)))
else
    r9_3 = *(*(arg1 + 0x598) + 0x108)
    
    if (r9_3 != 0)
        rax_8 = *(arg1 + 0xa8)
        r9_3(arg1, 0x4008, zx.q(zx.d(*(rax_8 + 0x100)) << 8) | zx.q(*(rax_8 + 0x101)))
return zx.q(rax_3)
