// 函数: sub_140ca2c70
// 地址: 0x140ca2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1 + 8) + 0xd8) = *(arg1 + 0x10)
*(*(arg1 + 8) + 0xe0) = *(arg1 + 0x18)
*(*(arg1 + 8) + 0x118) = *(arg1 + 0x20)
void* rdx_3 = *(arg1 + 8)
*(rdx_3 + 0xcc) |= *(arg1 + 0x28)
void* rcx = *(arg1 + 8)
*(rcx + 0xd0) |= *(arg1 + 0x30)
*(*(arg1 + 8) + 0xb0) = *(arg1 + 0x38)
*(*(arg1 + 8) + 0xb8) = *(arg1 + 0x40)
*(*(arg1 + 8) + 0xc0) = *(arg1 + 0x48)
void* result = arg1 + 0x50
int64_t* rbx_1 = *(arg1 + 8) + 0x220

if (rbx_1 == result)
    return result

int32_t r8_1 = *(rbx_1 + 0xc)
int64_t rsi_1 = *result
int64_t rdi_1 = sx.q(*(result + 8))
rbx_1[1].d = rdi_1.d

if (rdi_1.d == 0 && r8_1 == 0)
    *(rbx_1 + 0xc) = rdi_1.d
    return result

sub_1405a4be0(rbx_1, rdi_1.d, r8_1)
return memcpy(*rbx_1, rsi_1, (rdi_1 << 4).d)
