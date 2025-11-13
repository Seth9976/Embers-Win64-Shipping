// 函数: sub_14213f930
// 地址: 0x14213f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg2 + 0x20)
int32_t arg_8
sub_140865c40(arg1 + 0x1558, &arg_8, rbx)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x1558) + rax * 0x18
    
    if (rax_2 != 0 && rax_2 != -8)
        return zx.q(*(rax_2 + 8))

void* rax_5
int64_t rax_6
void* rdx_1

if (rbx != 0)
    rax_5 = sub_142527690()
    rdx_1 = *(rbx + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (rbx == 0 || rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    rbx = nullptr

return sub_1421575d0(arg1, rbx) __tailcall
