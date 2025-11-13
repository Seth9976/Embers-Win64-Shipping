// 函数: sub_14082fce0
// 地址: 0x14082fce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x208)
int64_t r8 = sx.q(*(rax + 8))
uint32_t i_2 = zx.d(*(rax + 0x5f))
int32_t i_1 = (r8 - 1).d

if (i_2 s< i_1)
    i_1 = i_2

for (int64_t i = sx.q(i_1); i s< r8; i += 1)
    if (sub_142366560(*(**(arg1 + 0x208) + (i << 3))) != 0)
        break
    
    i_1 += 1

return zx.q(i_1)
