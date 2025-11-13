// 函数: sub_141c65eb0
// 地址: 0x141c65eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x4c)
EnterCriticalSection(rax + 0x40)
int128_t var_58 = *(rax + 0x68)
int128_t var_48 = *(rax + 0x78)
int128_t var_38 = *(rax + 0x88)
int128_t var_28 = *(rax + 0x98)
int96_t var_18 = (*(rax + 0xa8)).12

if (rax != -0x40)
    LeaveCriticalSection(rax + 0x40)

uint32_t rcx_3 = zx.d(var_58.b)
int32_t rbx_1 = 0
int32_t rdx

if (rcx_3 == 1)
    rdx = 1
else if (rcx_3 == 2)
    rdx = 2
else if (rcx_3 == 3)
    rdx = 3
else
    rdx = 0

sub_141c467c0(arg1 + 0xd0, rdx)
uint32_t rcx_7 = zx.d(var_58:1.b)

if (rcx_7 == 1)
    rbx_1 = 1
else if (rcx_7 == 2)
    rbx_1 = rcx_7

sub_141c46790(arg1 + 0xd0, rbx_1)
sub_141c463f0(arg1 + 0xd0, var_48:4.d.d)
sub_141c45e80(arg1 + 0xd0, var_48:8.d)
sub_141c467f0(arg1 + 0xd0, var_48:0xc.d)
sub_141c46b60(arg1 + 0xd0, var_58:8.d)
sub_141c467d0(arg1 + 0xd0, var_58:0xc.d)
sub_141c463d0(arg1 + 0xd0, var_48.d)
sub_141c46280(arg1 + 0xd0, var_58:4.d)
sub_141c466d0(arg1 + 0xd0, var_28.d)
uint8_t rbx_2 = var_38:8.b
sub_141c45d80(arg1 + 0xd0, rbx_2 u>> 1 & 1)
sub_141c462b0(arg1 + 0xd0, rbx_2 u>> 2 & 1)
sub_141c462c0(arg1 + 0xd0, var_38:0xc.d)
sub_141c462f0(arg1 + 0xd0, var_28:8.d)
sub_141c46330(arg1 + 0xd0, var_28:4.b & 1)
sub_141c46340(arg1 + 0xd0, var_28:0xc.d)
sub_141c46360(arg1 + 0xd0, var_18:4.d)
sub_141c463a0(arg1 + 0xd0, var_18.b & 1)
sub_141c463b0(arg1 + 0xd0, var_18:8.d)
return sub_141b332c0(arg1 + 0xd0, var_58:2.b) __tailcall
