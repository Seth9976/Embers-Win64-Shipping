// 函数: sub_142658c20
// 地址: 0x142658c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

void* result = (*(*arg1 + 8))()
void* rax_1 = sub_140d41340()
void* rcx = *(result + 0x10)
int64_t rdx = sx.q(*(rax_1 + 0x38))

if (rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == rax_1 + 0x30)
    return result

return nullptr
