// 函数: sub_140cf15e0
// 地址: 0x140cf15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140cf1c20(arg1[1], arg1 + 0x1c)
int64_t* r9 = *arg1
int64_t rax_1 = r9[8]
int64_t r10_1 = sx.q(arg1[4].d * rax) + *arg1[1]
uint8_t r8_1 = (rax_1 u>> 9).b & 1

if (r8_1 != 0)
    memset(r10_1, 0, sx.q(arg1[3].d))
    return zx.q(rax)

if (not(test_bit(rax_1, 9)))
    (*(*r9 + 0xf0))(r9, sx.q(*(r9 + 0x4c)) + r10_1, r8_1)
    return zx.q(rax)

memset(sx.q(*(r9 + 0x4c)) + r10_1, 0, sx.q(*(r9 + 0x3c) * r9[7].d))
return zx.q(rax)
