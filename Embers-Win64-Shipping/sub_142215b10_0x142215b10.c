// 函数: sub_142215b10
// 地址: 0x142215b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
void* rdx
rax, rdx = sub_140cdd6a0(arg2)
void* rax_1
int64_t rax_2

if (rax s>= 0xdc && rax s< 0xff)
    rax_1 = sub_14258d940()
    rdx = *(arg2 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax s>= 0xdc && (rax s>= 0xff || rax_2.d s> *(rdx + 0x38)
        || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30))
    rdx.b = 0
else
    rdx.b = 1

sub_14221baa0(arg1, rdx.b)
int64_t result = data_143f3a508

if (*(arg1 + 0x1c) == result && rax s>= 0xff)
    return sub_142227610(arg1 + 0x28)

return result
