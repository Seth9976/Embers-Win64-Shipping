// 函数: sub_142c32630
// 地址: 0x142c32630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x60)
void* r9 = *(arg1 + 0x80)

if (i_2 == 0)
    return 

void* r8_1 = *(arg1 + 0x70) - r9
int64_t* rax = r9 + 8
uint64_t i_1 = zx.q(i_2)
uint64_t i

do
    if (*(r8_1 + rax - 8) == 0xffff)
        *rax = 0
        rax[-1] = 0
    
    rax += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
