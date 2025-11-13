// 函数: sub_140846b00
// 地址: 0x140846b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x140)

if (rax != 0)
    *(rax + 8) -= 1

*(arg1 + 0x140) = 0
sub_140846450(arg1 + 0x260)
*(arg1 + 0x248) = 0
int64_t rcx_1 = *(arg1 + 0x240)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x208) = 0

if (*(arg1 + 0x20c) != 0)
    sub_140638cc0(arg1 + 0x200, 0)

*(arg1 + 0x230) = 0xffffffff
*(arg1 + 0x234) = 0
sub_14059a8e0(arg1 + 0x210, 0)
int64_t rcx_4 = *(arg1 + 0x220)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x200)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x130)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x118)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_14081ccd0(arg1 + 0x58)
sub_140a1d5c0(arg1 + 0x40)
return sub_140a1d5c0(arg1 + 0x28) __tailcall
