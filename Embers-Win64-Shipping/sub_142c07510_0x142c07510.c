// 函数: sub_142c07510
// 地址: 0x142c07510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 2) == 0)
    return 

int32_t rax = *(arg1 + 0x18)

if ((rax.b & 4) != 0)
    return 

int32_t r8_1 = *(arg1 + 0x24)
void* rsi_1 = *(arg1 + 0x70)
uint64_t i_2 = zx.q(*(arg1 + 0x60))
int32_t arg_8 = r8_1

if ((rax.b & 8) != 0)
    sub_142c1ff10(arg1, sub_142c069c0)
    return 

if (r8_1 != 0)
    goto label_142c07588

void* r10_1 = *(arg2 + 0x40)
int64_t rdx = *(arg2 + 0x48)
arg_8 = r8_1

if ((*(r10_1 + 0x130))(arg2, rdx, 0x20, &arg_8, *(r10_1 + 0x20)) == 0)
    sub_142c1ff10(arg1, sub_142c069c0)
    return 

r8_1 = arg_8
label_142c07588:

if (i_2.d == 0)
    return 

char* rax_2 = rsi_1 + 0xc
uint64_t i_1 = i_2
uint64_t i

do
    if ((rax_2[4] & 0x20) != 0 && (*rax_2 u>> 5 & 1) == 0)
        *(rax_2 - 0xc) = r8_1
        r8_1 = arg_8
    
    rax_2 = &rax_2[0x14]
    i = i_1
    i_1 -= 1
while (i != 1)
