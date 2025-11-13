// 函数: sub_142365850
// 地址: 0x142365850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0

if (arg1 == 0)
    return 0

void* rax = sub_1425a2090()
void* rdx = *(arg1 + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))

if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
    void* rax_3 = *(arg1 + 0x70)
    
    if (rax_3 != 0)
        uint32_t rax_4
        rax_4.b = *(rax_3 + 0x16d) & 0x20
        char temp0 = rax_4.b
        rax_4.b = neg.b(rax_4.b)
        return zx.q(sbb.d(rax_4, rax_4, temp0 != 0) + 2)

int32_t rsi = 0
int64_t* r14 = nullptr
int32_t i

do
    if (rsi s>= *(arg1 + 0x30))
        return i_1
    
    i = sub_142365850(*(r14 + *(arg1 + 0x28)))
    rsi += 1
    r14 = &r14[1]
    i_1 = i
while (i == 0)

return i
