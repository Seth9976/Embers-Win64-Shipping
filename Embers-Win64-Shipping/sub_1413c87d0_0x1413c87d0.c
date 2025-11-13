// 函数: sub_1413c87d0
// 地址: 0x1413c87d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1[1] + 0xc0) != 0)
    void* rax_1 = *arg1
    *(rax_1 + 0x61c8) += 1

*(*arg1 + 0x1030) = 1
void* rdi = *arg1
int64_t rsi = sx.q(*(rdi + 0x1040))
int32_t rax_3 = (rsi + 1).d
*(rdi + 0x1040) = rax_3

if (rax_3 s> *(rdi + 0x1044))
    sub_1405a4d70(rdi + 0x1038)

*(*(rdi + 0x1038) + (rsi << 3)) = arg1[1]
*(arg1[1] + 8) = rsi.d
void* rdi_1 = *arg1
void* rbp = arg1[1]
int64_t rsi_1 = sx.q(*(rdi_1 + 0x1050))
int32_t rax_6 = (rsi_1 + 1).d
*(rdi_1 + 0x1050) = rax_6

if (rax_6 s> *(rdi_1 + 0x1054))
    sub_140638a00(rdi_1 + 0x1048)

int64_t rax_7 = *(rdi_1 + 0x1048)
int64_t rcx_3 = rsi_1 * 3
*(rax_7 + (rcx_3 << 2)) = *(rbp + 0x28)
*(rax_7 + (rcx_3 << 2) + 8) = *(rbp + 0x30)
void* result = *arg1

if (*(result + 8) s> 1)
    return result

return sub_141f4dd60(arg1[1])
