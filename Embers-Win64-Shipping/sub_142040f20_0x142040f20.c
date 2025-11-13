// 函数: sub_142040f20
// 地址: 0x142040f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)

if (rbx != 0)
    rbx = *(rbx + 0x278)

if (rbx == 0)
    return 

void* rcx = *(rbx + 0xf0)
int64_t rdi
rdi.b = 0

if (rcx != 0)
    rdi = 0
    
    if (sub_141fba5f0(rcx) != 0)
        rdi = 1

sub_142430a60(rbx)

if (rdi.b != 0)
    sub_1423d37e0(data_143f5b298, *(arg1 + 0x30))
