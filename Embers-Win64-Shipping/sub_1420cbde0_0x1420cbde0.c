// 函数: sub_1420cbde0
// 地址: 0x1420cbde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = sub_1408d4dd0(arg1)
uint64_t result = result_1
void* rax
int64_t rax_1
void* rdx_1

if (result_1 != 0)
    rax = sub_140d41340()
    rdx_1 = *(result + 0x10)
    rax_1 = sx.q(*(rax + 0x38))

if (result_1 == 0 || rax_1.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
    result = 0

int64_t rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
