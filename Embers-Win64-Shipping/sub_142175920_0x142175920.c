// 函数: sub_142175920
// 地址: 0x142175920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142165e20(arg1 + 0x328, 0)
sub_141c9c3e0(arg1 + 0x378, 0)
void* rcx_2 = *(arg1 + 0x160)

if (rcx_2 != 0)
    sub_140bd8e10(rcx_2)

int64_t result = sub_142175660(*(arg1 + 0x6f0))
void* rcx_4 = *(arg1 + 0x88)

if (rcx_4 != 0)
    result = sub_142152980(rcx_4)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x98))
        break
    
    result = sub_142152980(*(*(arg1 + 0x90) + (sx.q(i) << 3)))

int64_t* rcx_7 = *(arg1 + 0x6e8)

if (rcx_7 == 0)
    return result

return (*(*rcx_7 + 0x280))(rcx_7)
