// 函数: sub_142826a4c
// 地址: 0x142826a4c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = arg2[1] + 0x18
void* var_18 = rax_1
int64_t r9_1 = *arg2 + *(rax_1 + 0x18)
int64_t rcx_1
rcx_1.b = *(arg1 + 4)

if (*((zx.q(r9_1.d) & 0xf) + *(*(rax_1 + 8) + ((r9_1 u>> 4 & (*(rax_1 + 0x10) - 1)) << 3)))
        != rcx_1.b)
    return 0xffffffff

return 1
