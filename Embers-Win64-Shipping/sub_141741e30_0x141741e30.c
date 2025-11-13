// 函数: sub_141741e30
// 地址: 0x141741e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
int32_t rbx = 0
void* rsi = &rdi[sx.q(*(arg1 + 0x18))]

while (rdi != rsi)
    int64_t* rcx = *rdi
    int32_t rax_2 = (*(*rcx + 0x98))(rcx)
    rdi = &rdi[1]
    int32_t rbx_2 = (rbx - rax_2) ^ rax_2 u>> 0xd
    int32_t r8_3 = (0x9e3779b9 - rbx_2 - rax_2) ^ rbx_2 << 8
    int32_t rbx_6 = (rax_2 - r8_3 - rbx_2) ^ r8_3 u>> 0xd
    int32_t rdx_4 = (rbx_2 - r8_3 - rbx_6) ^ rbx_6 u>> 0xc
    int32_t r8_6 = (r8_3 - rdx_4 - rbx_6) ^ rdx_4 << 0x10
    int32_t rbx_9 = (rbx_6 - r8_6 - rdx_4) ^ r8_6 u>> 5
    int32_t rdx_7 = (rdx_4 - r8_6 - rbx_9) ^ rbx_9 u>> 3
    int32_t r8_9 = (r8_6 - rdx_7 - rbx_9) ^ rdx_7 << 0xa
    rbx = (rbx_9 - r8_9 - rdx_7) ^ r8_9 u>> 0xf

return zx.q(rbx)
