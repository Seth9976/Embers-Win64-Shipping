// 函数: sub_1423f63c0
// 地址: 0x1423f63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14240d540(arg1, arg2)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax = (rdi_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

int64_t r8_1 = rdi_1 * 5
int64_t rdx_1 = *arg1
*(rdx_1 + (r8_1 << 3)) = *arg2
*(rdx_1 + (r8_1 << 3) + 8) = arg2[1].d
*(rdx_1 + (r8_1 << 3) + 0x10) = arg2[2]
*(rdx_1 + (r8_1 << 3) + 0x18) = arg2[3]
void* rax_4 = arg2[4]
*(rdx_1 + (r8_1 << 3) + 0x20) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return rdi_1.d
