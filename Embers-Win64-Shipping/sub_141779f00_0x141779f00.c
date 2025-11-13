// 函数: sub_141779f00
// 地址: 0x141779f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x18)
int64_t rbx = sx.q(*(arg1 + 0x30))
int32_t rdx = *(result + 0x90)

if (rdx s> rbx.d)
    *(arg1 + 0x30) = rdx
    
    if (rdx s> *(arg1 + 0x34))
        sub_1405a4f90(arg1 + 0x28)
    
    result = memset((rbx << 4) + *(arg1 + 0x28), 0, sx.q(rdx - rbx.d) << 4)
else if (rdx s< rbx.d)
    result = sub_140838580(arg1 + 0x28, rdx, rbx.d - rdx, 1)

uint64_t* i = *(arg1 + 0x28)

for (void* rdi_3 = &i[sx.q(*(arg1 + 0x30)) * 2]; i != rdi_3; i = &i[2])
    result = zx.q(*(i + 0xc))
    i[1].d = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_1405c5570(i, 0)

return result
