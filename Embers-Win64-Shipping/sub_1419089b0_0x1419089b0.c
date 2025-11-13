// 函数: sub_1419089b0
// 地址: 0x1419089b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143eff600
int32_t rcx = *arg1

if (*(rax + 0x14e44) == rcx)
    *(rax + 0x14e44) = 0xffffffff

if (*(rax + 0x156dc) == rcx)
    *(rax + 0x156dc) = 0xffffffff

int64_t result = data_143effce8(1, arg1)
int64_t rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0 && arg1[6] != 0)
    return sub_140a74f90(rcx_1) __tailcall

return result
