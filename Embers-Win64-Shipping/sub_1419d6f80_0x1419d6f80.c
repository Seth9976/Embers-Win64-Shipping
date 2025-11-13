// 函数: sub_1419d6f80
// 地址: 0x1419d6f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t rax_5
int64_t rdx
rdx:rax_5 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rax * 0x18, 0))
uint32_t rdx_1 = (rdx u>> 4).d

if (rdi.d s> rdx_1)
    rdx_1 = 0x7fffffff

*(arg1 + 0xc) = rdx_1
return sub_140a30eb0(arg1, zx.q(arg2), rdx_1, 0x18, 0)
