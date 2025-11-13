// 函数: sub_142bbceb0
// 地址: 0x142bbceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x38)

if (rbx == 0)
    return zx.q((rbx + 3).d)

char* r10 = **(arg1 + 0x20)
char rax_2 = *r10
int32_t rax_4

if (rax_2 == 0x1e)
    rax_4 = sub_142bc0db0(r10, *(arg1 + 0x10), 0, nullptr) s>> 0x10
else if (rax_2 != 0xff)
    rax_4 = sub_142bc0c90(r10, *(arg1 + 0x10))
else
    rax_4 = sx.d((((zx.d(r10[3]) | (zx.d(r10[1]) << 8 | zx.d(r10[2])) << 8) + 0x80) u>> 8).w)

if (rax_4 u> 0x201)
    rax_4 = 0x201

if (rax_4 u< 0x201)
    rax_4 = 0x201

*(rbx + 0xb8) = rax_4
return 0
