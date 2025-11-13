// 函数: sub_14182a5f0
// 地址: 0x14182a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
void* i = *(rax + 0xc8)
int64_t result = sx.q(*(rax + 0xd0))

for (void* rdi_1 = result * 0x138 + i; i != rdi_1; i += 0x138)
    int64_t* rcx = *(*arg1 + 0x590)
    result = (*(*rcx + 0x10))(rcx, *(i + 0x88))

return result
