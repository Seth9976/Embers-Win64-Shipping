// 函数: sub_142ad2810
// 地址: 0x142ad2810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2.d
int32_t rcx = arg1[0x4d].d

if (((rcx - 1) & 0xfffffffd) == 0 || (rcx == 2 && (arg2 - 0x514).d u> 0x12c))
    int32_t rdi_2
    rdi_2.b = (r14 * 0xb + 0xe) s% 0x1e s< 0xb
    return zx.q(rdi_2 + 0x162)

if (rcx == 0)
    uint32_t rbx = (arg2 * 3).d << 2
    int32_t rax_3 = sub_142ad2c60(arg1, rbx - 0xc)
    return zx.q(sub_142ad2c60(arg1, rbx) - rax_3)

int32_t rdi_1 = 0

for (int32_t i = 0; i s< 0xc; i += 1)
    int64_t r9_1 = *arg1
    rdi_1 += (*(r9_1 + 0x108))(arg1, zx.q(r14), zx.q(i), r9_1)

return zx.q(rdi_1)
