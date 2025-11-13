// 函数: sub_1422ef4a0
// 地址: 0x1422ef4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 0xa)

if ((result.b & 1) != 0)
    result = sub_140cc45a0(sub_140d3cb50(arg1) + 0x200, arg1)

uint64_t rbx = *(arg1 + 0x30)

if (rbx != 0)
    result = zx.q(*(rbx + 8) u>> 0xa)
    
    if ((result.b & 1) != 0)
        result = sub_140cc45a0(sub_140d3cb50(rbx) + 0x200, rbx)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xa8))
        break
    
    result = *(arg1 + 0xa0)
    int64_t rcx_4 = *(result + (sx.q(i) << 3))
    
    if (rcx_4 != 0)
        result = sub_1422ef4a0(rcx_4)

return result
