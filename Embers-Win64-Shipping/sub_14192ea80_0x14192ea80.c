// 函数: sub_14192ea80
// 地址: 0x14192ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x18)
uint64_t rdi = zx.q(*(arg1 + 0x14))
int32_t r14 = *(arg1 + 0x10)
void* rbp = *(arg1 + 8)

if (data_143f01c92 != 0)
    sub_140a80f40()

void arg_8
memcpy(sub_141940560(rbp, rsi, r14 + ((rdi * 3).d << 1), 1, &arg_8), *(arg1 + 0x28), *(arg1 + 0x34))
sub_140a74f90(*(arg1 + 0x28))
int32_t rsi_1 = *(arg1 + 0x18)
uint64_t rdi_1 = zx.q(*(arg1 + 0x14))
int32_t r14_1 = *(arg1 + 0x10)
void* rbx_1 = *(arg1 + 8)

if (data_143f01c92 != 0)
    sub_140a80f40()

return sub_14194f480(rbx_1, rsi_1, r14_1 + ((rdi_1 * 3).d << 1)) __tailcall
