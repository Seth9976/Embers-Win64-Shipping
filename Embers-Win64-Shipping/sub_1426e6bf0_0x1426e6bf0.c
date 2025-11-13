// 函数: sub_1426e6bf0
// 地址: 0x1426e6bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14221e000(arg1)
int64_t rax = sub_1424753d0()
int64_t r8 = *arg1
void* rax_1 = (*(r8 + 0x610))(arg1, rax, r8)

if (rax_1 != 0)
    *(rax_1 + 0x14d) ^= (not.b((*(arg1 + 0x4f4) u>> 3).b << 2) ^ *(rax_1 + 0x14d)) & 4

if (arg1[0x9a].d s> 0)
    void* i = arg1[0x99]
    
    for (void* rdx_3 = (sx.q(arg1[0x9a].d) << 4) + i; i != rdx_3; i += 0x10)
        if (*(i + 8) u>= 3)
            *(i + 8) = 0
    
    sub_1426d8250(arg1, &arg1[0x9b], &arg1[0x99])
    arg1[0x9a].d = 0
    
    if (*(arg1 + 0x4d4) != 0)
        sub_1405a5410(&arg1[0x99], 0)

void* rax_3 = (*(*arg1 + 0x150))(arg1)
char rax_4

if (rax_3 != 0)
    rax_4 = sub_14243ade0(rax_3)

char rcx_6

if (rax_3 != 0 && (rax_4 == 0 || (*(arg1 + 0x4f4) & 0x10) != 0))
    rcx_6 = 2
else
    rcx_6 = 0

uint64_t result
result.b = *(arg1 + 0x32) & 0xfd
result.b |= rcx_6
*(arg1 + 0x32) = result.b

if ((result.b & 2) == 0)
    void* rax_5 = arg1[0x51]
    
    if (rax_5 != 0)
        *(rax_5 + 0x3a) &= 0xfd
    
    result = arg1[0x50]
    
    if (result != 0)
        *(result + 0x3a) &= 0xfd

return result
