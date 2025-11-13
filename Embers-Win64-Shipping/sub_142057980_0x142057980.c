// 函数: sub_142057980
// 地址: 0x142057980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[1].d
int32_t rax_2 = ((zx.q(arg1[1].d * *(arg1 + 0xc)) << 2) + 0x80).d

if (rax_2 s> rdx)
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
else if (rax_2 s< rdx && rax_2 != rdx)
    arg2[1].d = rax_2
    sub_1405dac10(arg2)

__builtin_strncpy(*arg2, "DDS ", 4)
void* rbx = *arg2
memset(rbx + 8, 0, 0x78)
*(rbx + 4) = 0x7c
*(rbx + 8) = 0x1007
*(rbx + 0x10) = arg1[1].d
*(rbx + 0xc) = *(arg1 + 0xc)
*(rbx + 0x70) = 0
*(rbx + 0x1c) = 1
*(rbx + 0x4c) = 0x20
*(rbx + 0x50) = 0x40
*(rbx + 0x58) = 0x20
*(rbx + 0x5c) = 0xff0000
*(rbx + 0x60) = 0xff00
*(rbx + 0x64) = 0xff
return sub_142054390(arg1, *arg2 + 0x80) __tailcall
