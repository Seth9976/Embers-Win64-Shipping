// 函数: sub_141c532f0
// 地址: 0x141c532f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = &arg1[1]
int64_t* rbx_1 = *arg1 + 0xb8

if (rbx_1 == result)
    return result

int32_t r8_1 = *(rbx_1 + 0xc)
int64_t rsi_1 = *result
int64_t rdi_1 = sx.q(*(result + 8))
rbx_1[1].d = rdi_1.d

if (rdi_1.d == 0 && r8_1 == 0)
    *(rbx_1 + 0xc) = rdi_1.d
    return result

sub_1405a4b40(rbx_1, rdi_1.d, r8_1)
return memcpy(*rbx_1, rsi_1, (rdi_1 * 0x30).d)
