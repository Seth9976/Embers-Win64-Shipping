// 函数: sub_1407c3d10
// 地址: 0x1407c3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rcx = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rcx = rdi + 0x10 + ((rdi * 3) u>> 3)

uint32_t rax_4 = (sub_140a846a0(rcx << 3, 0) u>> 3).d

if (rdi.d s> rax_4)
    rax_4 = 0x7fffffff

*(arg1 + 0xc) = rax_4
return sub_140a30eb0(arg1, zx.q(arg2), rax_4, 8, 0)
