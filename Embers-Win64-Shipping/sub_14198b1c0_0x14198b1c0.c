// 函数: sub_14198b1c0
// 地址: 0x14198b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx == 0)
    return 

int64_t rax_1 = 0

if (0 == *(rcx + 8))
    *(rcx + 8) = 0
else
    rax_1 = *(rcx + 8)

if (((rax_1 u>> 0x1a).d.b & 1) != 0)
    return 

sub_1405a6220(sub_140a242a0(), arg1 + 8)
int64_t* rcx_2 = *(arg1 + 8)
*(arg1 + 8) = 0

if (rcx_2 == 0)
    return 

rcx_2[9].d -= 1

if (rcx_2[9].d == 1)
    sub_140a2f6e0(rcx_2)
