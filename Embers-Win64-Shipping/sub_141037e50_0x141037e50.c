// 函数: sub_141037e50
// 地址: 0x141037e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x130)
int32_t rax_1

if (rax != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax)
    rax_1 = temp0_1
else
    rax_1 = 0x20

uint64_t rdi = zx.q(rax_1)
sub_14105c1a0(*(*(arg1 + (rdi << 3) + 0x20) + 0x78), arg2 + 0x1c0)
uint64_t rdi_1 = rdi * 2
int64_t* i = *(arg1 + (rdi_1 << 3) + 0x58)
int64_t result = sx.q(*(arg1 + (rdi_1 << 3) + 0x60))

for (void* rdi_2 = &i[result]; i != rdi_2; i = &i[1])
    result = sub_14105c1a0(*(*i + 0x78), arg2 + 0x1c0)

return result
