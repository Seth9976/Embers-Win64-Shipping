// 函数: sub_1426d8070
// 地址: 0x1426d8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x20)
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1427297d0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int32_t result = *(arg1 + 0xa0)

if (test_bit(result, 8))
    *(arg1 + 0x88) = 2
    return result

int512_t entry_zmm2

if (rbx != 0 && result.b s< 0)
    return sub_1426b08c0(arg1, rbx, entry_zmm2)
return result
