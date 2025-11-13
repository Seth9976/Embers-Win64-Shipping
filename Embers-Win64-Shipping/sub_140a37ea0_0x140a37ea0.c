// 函数: sub_140a37ea0
// 地址: 0x140a37ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x40)

if (rcx == 0)
    return 

int64_t rax_1 = 0

if (0 == *(rcx + 8))
    *(rcx + 8) = 0
else
    rax_1 = *(rcx + 8)

if (((rax_1 u>> 0x1a).b & 1) == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

int64_t rax_5
int32_t rdx_1
rdx_1:rax_5 = sx.o(*(arg1 + 0x30) + 0x3fff)
int64_t rax_7 = (rax_5 + (zx.q(rdx_1) & 0x3fff)) s>> 0xe
*(arg1 + 0x28) = rax_7
sub_140a39ba0(arg1 + 8, rax_7.d, 0)
sub_140a39b30(arg1 + 0x18, rax_7.d, 0)
